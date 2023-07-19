/*************************************************************************
	> File Name: 141.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 12:32:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
//Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
bool hasCycle(struct ListNode *head) {
    //judge the parameter
    if(!head || !head->next)return false;
    
    struct ListNode *fast = head, *slow = head;
    while(1){
        fast = fast->next;
        if(!fast)return false;
        fast = fast->next;
        slow = slow->next;
        if(!fast)return false;
        if(fast == slow)return true;
    }
}
