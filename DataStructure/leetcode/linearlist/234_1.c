/*************************************************************************
	> File Name: 234_1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 05:38:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
 

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

/*
借助翻转函数和数组来进行正向比较
*/

bool isPalindrome(struct ListNode* head){
    if(!head)return head;
    struct ListNode *p = head;
    //数组大小要把握好
    int arr[100000] ={0};
    int i = 0;
    while(p){
        arr[i++] = p->val;
        p = p->next;
    } 
    struct ListNode *q = reverseList(head);
    i = 0;
    while(q){
        if(q->val != arr[i++])return false;
        q = q->next;
    }
    return true;
}
