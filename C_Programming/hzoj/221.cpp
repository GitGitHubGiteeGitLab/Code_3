/*************************************************************************
	> File Name: 221.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 31 Jul 2023 08:45:02 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<algorithm>
#define N 100000
using namespace std;


struct Stu {
    int id;
    int height;
    int ballon;
} arr[N];

int cmp(struct Stu a, struct Stu b){
    return a.height < b.height;
}

int cmpID(struct Stu a, struct Stu b){
    return a.id < b.id;
}

void sovle(struct Stu *arr, int *q, int n, int m){
    int j = 0;
    for(int i = 0; i < n; i++){
        while(arr[i].height >= q[j] && j < m){
            arr[i].ballon++;
            j++;
        }
    }
    sort(arr, arr + n, cmpID);
}


int main(){
    int n, m, q[N];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i].height);
        arr[i].id = i + 1;
        arr[i].ballon = 0;
    }
    for(int i = 0; i < m; i++){
        scanf("%d", q + i);
    }
    sort(arr, arr + n, cmp);
    sort(q, q + m);//升序
    sovle(arr, q, n, m);
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i].ballon);
    }
    return 0;
}
