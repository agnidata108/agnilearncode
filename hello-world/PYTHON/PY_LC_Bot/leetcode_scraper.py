import os
import time
import random
import pyautogui
import undetected_chromedriver as uc
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from dotenv import load_dotenv

class LeetCodeBot:
    def __init__(self):
        options = uc.ChromeOptions()
        options.add_argument("--window-size=1920,1080")
        options.add_argument("--disable-notifications")
        
        self.driver = uc.Chrome(options=options)
        self.wait = WebDriverWait(self.driver, 30)

    def _simulate_human_typing(self, element, text):
        for char in text:
            element.send_keys(char)
            time.sleep(random.uniform(0.05, 0.15))

    def _move_mouse_humanly(self):
        width, height = pyautogui.size()
        x = random.randint(200, width - 200)
        y = random.randint(200, height - 200)
        
        pyautogui.moveTo(x, y, duration=random.uniform(0.7, 1.5), tween=pyautogui.easeInOutQuad)

    def login(self, username, password):
        print("Navigating to login page...")
        self.driver.get("https://leetcode.com/accounts/login/")
        self._move_mouse_humanly()
        
        try:
            user_input = self.wait.until(EC.presence_of_element_located((By.ID, "id_login")))
            pass_input = self.driver.find_element(By.ID, "id_password")
            
            print("Typing credentials...")
            self._simulate_human_typing(user_input, username)
            self._simulate_human_typing(pass_input, password)
            
            print("Checking for Cloudflare verification...")
            try:
                cf_iframe = WebDriverWait(self.driver, 5).until(
                    EC.presence_of_element_located((By.XPATH, "//iframe[contains(@title, 'Cloudflare') or contains(@title, 'security challenge')]"))
                )
                self.driver.switch_to.frame(cf_iframe)
                
                cf_checkbox = WebDriverWait(self.driver, 5).until(
                    EC.element_to_be_clickable((By.XPATH, "//input[@type='checkbox'] | //label | //*[@id='cf-stage']"))
                )
                cf_checkbox.click()
                print("Clicked Cloudflare checkbox.")
                self.driver.switch_to.default_content()
            except Exception:
                print("No interactable Cloudflare checkbox found. Waiting for auto-resolution or manual user click...")
                self.driver.switch_to.default_content()

            print("Waiting for Sign In button to become enabled (CAPTCHA resolved)...")
            # Wait until the 'disabled' attribute is removed from the sign-in button
            self.wait.until(
                lambda d: d.find_element(By.ID, "signin_btn").get_attribute("disabled") is None
            )
            
            sign_in_btn = self.driver.find_element(By.ID, "signin_btn")
            
            print("Clicking Sign In...")
            self.driver.execute_script("arguments[0].click();", sign_in_btn)
            
            self.wait.until(EC.presence_of_element_located((By.ID, "navbar_user_avatar")))
            print("Successfully logged in!")
            
        except Exception as e:
            print(f"Login failed: {e}")
            self.driver.save_screenshot("login_error.png")

    def open_problem_1(self):
        print("Fetching the EASY Problem Set...")
        self.driver.get("https://leetcode.com/problem-list/d86pwn73/")
        self._move_mouse_humanly()
        
        try:
            problem_element = self.wait.until(
                EC.presence_of_element_located((By.XPATH, "//a[contains(@href, '/problems/two-sum')]"))
            )
            
            self.driver.execute_script("arguments[0].scrollIntoView(true);", problem_element)
            time.sleep(1)
            self.driver.execute_script("arguments[0].click();", problem_element)
            
            title_element = self.wait.until(
                EC.presence_of_element_located((By.CSS_SELECTOR, "div.text-title-large a, div.text-title-large"))
            )
            print(f"\n--- Opened Problem ---")
            print(f"Title: {title_element.text}")
            print(f"URL: {self.driver.current_url}")
            print("-------------------------\n")
            
        except Exception as e:
            print(f"Could not open problem 1: {e}")

    def close(self):
        self.driver.quit()

if __name__ == "__main__":
    from pathlib import Path
    
    env_path = Path(__file__).parent / '.env'
    load_dotenv(dotenv_path=env_path)
    
    USER = os.getenv("LEETCODE_USER")
    PASS = os.getenv("LEETCODE_PASS")
    
    if not USER or not PASS:
        print(f"Error: Could not find credentials. Please ensure {env_path} exists and contains LEETCODE_USER and LEETCODE_PASS.")
        exit(1)
        
    bot = LeetCodeBot()
    try:
        bot.login(USER, PASS)
        bot.open_problem_1()
        
        time.sleep(5)
    finally:
        bot.close()