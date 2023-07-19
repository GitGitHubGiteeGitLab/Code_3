/*************************************************************************
	> File Name: 24.c
	> Author: 
	> Mail: 
	> Created Time: Tue 18 Jul 2023 09:54:51 PM CST
 ************************************************************************/

#include<stdio.h>

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode node, *p, *q;
    node.next = head, p = &node, q = p->next;

    //每三个为一组，前两结点有指针，后两个结点是待翻转结点
    while(q && q->next){
        p->next = q->next;
        q->next = p->next->next;
        p->next->next = q;//翻转完成，前变后， 后变前

        //更新p, q
        p = q;
        q = p->next;
    }
    return node.next;
}
