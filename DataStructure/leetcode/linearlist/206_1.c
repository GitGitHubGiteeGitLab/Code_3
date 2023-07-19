/*************************************************************************
	> File Name: 206_1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 04:50:57 PM CST
 ************************************************************************/

#include<stdio.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 

//head insert method
struct ListNode* reverseList(struct ListNode* head){
    if(!head || !head->next)return head;
    struct ListNode *cur = head, *pre = NULL, *next = NULL;
    while(cur){
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    return pre;
}
