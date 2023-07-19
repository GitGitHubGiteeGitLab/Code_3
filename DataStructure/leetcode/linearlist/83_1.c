/*************************************************************************
	> File Name: 83.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 01:29:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
// Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(!head)return head;
    struct ListNode *p = head, *q = p->next;
    while(q) {
        if(p->val == q->val) {
            p->next = q->next;
            free(q);
            q = p->next;
        }else {
            p = q;
            q = p->next;
        }
    }
    return head;
}
