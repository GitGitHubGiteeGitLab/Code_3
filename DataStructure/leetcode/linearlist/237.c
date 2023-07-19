/*************************************************************************
	> File Name: 237.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 05:04:32 PM CST
 ************************************************************************/

#include<stdio.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
 };

void deleteNode(struct ListNode* node) {
    struct ListNode *p = node->next;
    node->val = p->val;
    node->next = p->next;
}
