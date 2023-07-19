/*************************************************************************
	> File Name: 19.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Jul 2023 08:38:59 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    //传参判断
    if(!(head))return head;
    //等距双指针
    struct ListNode node; node.next = head;
    struct ListNode *l = &node, *p = l, *q = l;
    
    for(int i = 0; i < n; i++){
        p = p->next;
    }
    while(p->next){
        p = p->next;
        q = q->next;
    }

    p = q->next;
    q->next = p->next;
    free(p);
    return node.next;

}
