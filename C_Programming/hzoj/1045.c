/*************************************************************************
	> File Name: 1045.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 08:44:27 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    int flag = 0;
    for(int i = 2, I = sqrt(n) + 1; i < I; i++){
        if(n % i)continue;
        flag = 1;
        break;
    }
    if(!flag)printf("YES\n");
    else printf("NO\n");
}
