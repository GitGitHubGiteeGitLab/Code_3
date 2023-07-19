/*************************************************************************
	> File Name: 234_3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 19 Jul 2023 06:01:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdbool.h>
 // Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

 
 //一个数组直接完事
// 利用数组（顺序表）随机访问的特性，左右指针从两端向中间边走边比较
bool isPalindrome(struct ListNode* head){
    int arr[100000] , cnt = 0;
    while(head != NULL){
        arr[cnt++] = head->val;
        head = head->next;
    }
    for(int i = 0, j = cnt - 1;i < j; ++i, --j){//i == j就不用比了
        if(arr[i] != arr[j])return false;
    }
    return true;
}

