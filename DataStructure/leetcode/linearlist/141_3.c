/*************************************************************************
	> File Name: 141_3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 01:17:52 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>
//Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head, *slow =head;
    //传参判断蕴含在这里
    if(!fast)return false;
    
    //do-while循环应用
    do{
      if (fast && fast->next) {
          fast = fast->next->next;
          slow = slow->next;
      }else {
          return false;
      } 
    }while(fast != slow);
    return true;
}
