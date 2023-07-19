/*************************************************************************
	> File Name: 83_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 01:38:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head){
    struct ListNode *cur = head;
    //One pointer is OK
    while(cur && cur->next) {
        if(cur->val == cur->next->val) {
            struct ListNode *next = cur->next;
            cur->next = next->next;
            free(next);
        }else {
            cur = cur->next;
        }
    }

    return head;
}

