package _2AddTwoNumbers;

/**
 * Created by wanyangsha on 10/11/16.
 */

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode ret = recursion(l1, l2, 0);
        if (ret != null) {
            return ret;
        } else {
            return new ListNode(0);
        }
    }

    public ListNode recursion(ListNode l1, ListNode l2, int carry) {
        if (l1 == null && l2 == null) {
            if (carry == 0) {
                return null;
            } else {
                return new ListNode(carry);
            }
        } else if (l1 == null) {
            int temp = l2.val + carry;
            ListNode listNode = new ListNode(temp % 10);
            carry = temp / 10;
            listNode.next = recursion(null, l2.next, carry);
            return listNode;
        } else if (l2 == null) {
            int temp = l1.val + carry;
            ListNode listNode = new ListNode(temp % 10);
            carry = temp / 10;
            listNode.next = recursion(l1.next, null, carry);
            return listNode;
        } else {
            int temp = l1.val + l2.val + carry;
            ListNode listNode = new ListNode(temp % 10);
            carry = temp / 10;
            listNode.next = recursion(l1.next, l2.next, carry);
            return listNode;
        }
    }

    public class ListNode {
        int val;
        ListNode next;
        ListNode(int x) { val = x; }
    }

}
