/*************************************************************************
	> File Name: 203.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 10:02:40 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode node, * p, * q;
    node.next = head;
    p = &node, q = p->next;

    while (q) {
        if (q->val == val) {
            p->next = q->next;
            free(q);
            
            //防止漏掉p->next == data这种情况
            while (p->next && p->next->val == val) {
                q = p->next;
                p->next = q->next;
                free(q);
               
            }
        }
        //末尾这种极端情况
        if (!(p->next))break;

        p = p->next;
        q = p->next;
    }
    return node.next;
}
