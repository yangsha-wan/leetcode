//
// Created by baidu on 15/10/2016.
//

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode *finalResult = new ListNode(0);
		ListNode *result = finalResult;
		int carry = 0;
		while(1){
			if (l1){
				carry += l1 -> val;
				l1 = l1 -> next;
			}
			if (l2){
				carry += l2 -> val;
				l2 = l2 -> next;
			}
			result -> val = carry % 10;
			carry = carry / 10;
			if (carry || l1 || l2) {
				result -> next = new ListNode(carry);
				result = result -> next;
			}
			else break;
        }
		return finalResult;
    }
};