/*************************************************************************
	> File Name: 234_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 05:50:14 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
// Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };

//对第一种解法的简化
int getlength(struct ListNode *head){
    int cnt = 0;
    while(head){
        cnt++;
        head = head->next;
    }
    return cnt;
}

bool isPalindrome(struct ListNode* head){
    if(!head)return head;
    int len = getlength(head), i= 0;
    int arr[100000] = {0};
    struct ListNode *p = head;
    while(p){
        arr[i++] = p->val;
        p = p->next;
    }
    i -= 1;
    p = head;
    while(p){
        if(p->val != arr[i--])return false;
        p = p->next;
    }
    return true;
}
