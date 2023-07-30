/*************************************************************************
	> File Name: 1048.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Jul 2023 09:33:30 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 2; i--){
        int flag = 0;
        for(int j = 2, I = sqrt(n) + 1; j < I; j++){
            if(i % j)continue;
            flag = 1;
            break;
        }
        if(!flag){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
