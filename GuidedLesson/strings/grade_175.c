/*************************************************************************
	> File Name: grade_175.c
	> Author: 
	> Mail: 
	> Created Time: Sat 01 Jul 2023 09:30:52 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(){
    int N, Y_cnt, L_cnt, Z_cnt, C_cnt;
    Y_cnt = L_cnt = Z_cnt = C_cnt = 0;
    scanf("%d", &N);
    int arr[31] = {0};
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        if(arr[i] >= 90){
            Y_cnt++;
        }else if(arr[i] >= 80){
            L_cnt++;
        }else if(arr[i] >= 60){
            Z_cnt++;
        }else{
            C_cnt++;
        }
    }
    printf("You %d\nLiang %d\nZhong %d\nCha %d\n", Y_cnt, L_cnt, Z_cnt, C_cnt);
    return 0;
}
