public class Solution {
    static class ListNode {
        int val;
        ListNode next;

        ListNode(intv)
    }
    public boolean hasCycle(listNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null) {
            
            slow = slow.next;
            fast = fast.next.next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }
    public static void main(String[] args) {
        if(hasCycle)
            System.out.println("Cyclic");
    }
}