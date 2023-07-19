/*************************************************************************
	> File Name: 160_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 04:29:16 PM CST
 ************************************************************************/

#include<stdio.h>
struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    if(!p || !q)return NULL;
    
    //p和q均走一遍a,b相遇就是交点或是NULL
    //交点之后的是一样的，之前的路因为均走过，只是先走的顺序不同而已，故p, q第二次到交点时，走过的路是一样的
    while(p != q){
        p = (p == NULL) ? (p = headB) : (p = p->next);
        q = (q == NULL) ? (q = headA) : (q = q->next);
    }
    return p;
}
