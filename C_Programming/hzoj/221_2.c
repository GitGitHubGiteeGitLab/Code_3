/*************************************************************************
	> File Name: 221_2.c
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 01:31:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 100000

struct Stu{
    int id;
    int height;
    int ballon;
}arr[N];

int cmp1(const void* p1, const void *p2){
    struct Stu *a = (struct Stu*)p1, *b = (struct Stu*)p2;
    if(a->height < b->height){
        return -1;
    }else if(a->height > b->height){
        return 1;
    }else {
        return 0;
    }
}

int cmp2(const void* p1, const void *p2){
    int *a = (int* )p1, *b = (int* )p2;
    if(*a < *b){
        return -1;
    }else if(*a > *b){
        return 1;
    }else {
        return 0;
    }
}

int cmp3(const void* p1, const void *p2){
    struct Stu *a = (struct Stu*)p1, *b = (struct Stu*)p2;
    if(a->id < b->id){
        return -1;
    }else if(a->id > b->id){
        return 1;
    }else {
        return 0;
    }
}

void solve(struct Stu *arr, int *q, int m, int n){
    int j = 0;
    for(int i = 0; i < m; i++){
        for(;arr[i].height >= q[j] && j < n; j++){
            arr[i].ballon++;
        }
    }
    qsort(arr, m, sizeof(arr[0]), cmp3);
}

int main(){
    int m, n, q[N] = {0};
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++){
        scanf("%d", &arr[i].height);
        arr[i].id = i + 1;
        arr[i].ballon = 0;
    }
    for(int j = 0; j < n; j++){
        scanf("%d", q + j);
    }
    qsort(arr, m, sizeof(arr[0]), cmp1);
    qsort(q, n, sizeof(q[0]), cmp2);
    solve(arr, q, m, n);
    for(int i = 0; i < m; i++){
        printf("%d\n", arr[i].ballon);
    }
    return 0;
}
