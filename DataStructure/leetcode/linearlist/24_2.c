/*************************************************************************
	> File Name: 24_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 09:50:02 AM CST
 ************************************************************************/

#include<stdio.h>

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 



struct ListNode* swapPairs(struct ListNode* head){
    if(!head || !head->next)return head;

    //思路：类比交换头两个,用递归
    //newhead = head->next;
    //head =newhead->next;
    //newhead->next =head;
    struct ListNode *newhead = head->next;
    head->next = swapPairs(newhead->next);
    newhead->next = head;
    return newhead;
}
