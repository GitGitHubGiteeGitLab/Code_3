/*************************************************************************
	> File Name: 141_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 01:16:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
//Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow = head;

    //检查当前和下一个唯空否，fast就可以一次走两步
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)return true;
    }
    return false;
}
