/*************************************************************************
	> File Name: 206_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 04:51:55 PM CST
 ************************************************************************/

#include<stdio.h>
struct ListNode{
    struct ListNode *next;
    int val;
};

//递归实现
struct ListNode* reverseList(struct ListNode* head){
   if(head == NULL || head->next == NULL)return head;
    //我要记录head->next
    struct ListNode *pre = head->next;
    struct ListNode *newhead = reverseList(head->next);
    head->next = pre->next;
    pre->next = head;
    return newhead;
}
