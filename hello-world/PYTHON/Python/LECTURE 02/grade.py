marks=int(input("enter your marks  ::"))
if(marks>=90):
#print("A")
    grade="A"
elif(90>marks>=80):
    #print("B")
    grade="B"
elif(80>marks>=70):
    #print("C")
    grade="C"
else:
    grade="D"
    #print("D")
    print("your grade is:", grade)