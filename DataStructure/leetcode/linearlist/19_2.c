/*************************************************************************
	> File Name: 19_2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Jul 2023 08:57:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
int getlength(struct ListNode *head){
    int cnt = 0;
    while(head){
        cnt++;
        head = head->next;
    }
    return cnt;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    //传参检查
    if(!(head))return head;

    int len = getlength(head);
    struct ListNode node;
    struct ListNode *l = &node;
    
    //长度定位
    for(int i = 0; i < len - n; i++){
        l = l->next;
    }
    struct ListNode *p = l->next;
    l->next = p->next;
    free(p);
    return node.next;
}
