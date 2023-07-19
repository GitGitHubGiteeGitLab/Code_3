/*************************************************************************
	> File Name: 203_2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 10:12:26 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h> 
//Definition for singly-linked list.
 struct ListNode {
      int val;
      struct ListNode *next;
  };
 

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode node, *p, *q;
    node.next = head, p = &node;
    
    //只用一个指针遍历，p永远指向待检查结点的前驱结点
    while(p->next){
        if(p->next->val == val){
            q = p->next;
            p->next = q->next;
            free(q);
        }else{//必须这么写，防删除尾结点和相同元素两种情况
            p = p->next;   
        }
    }
    return node.next;
}
