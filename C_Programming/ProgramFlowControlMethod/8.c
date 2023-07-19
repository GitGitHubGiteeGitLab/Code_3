/*************************************************************************
	> File Name: 8.c
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Jun 2023 04:32:58 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  //  printf("%ld\n", time(NULL));
   // return 0;

    srand(time(NULL));
    int n , cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n ; i++){
        //取模运算符的妙用，对100取模得到的结果在0~99
        int val = rand() % 100;
        i && printf(" ");
        printf("%d", val);
        //if(val % 2) cnt++;
        //if(val & 1)cnt++;
        cnt += (val & 1);
    }
    printf("\n");
    printf("cnt: %d\n", cnt);
    return 0;
}

//int main(){
   // int a = 0 ,b = 0;
   //逻辑短路
   // if((a++) && (b++)){
   //     printf("true\n");
   // } else{
   //     printf("false\n");
   // }
  // // if((++a) || (++b)){
  //  //    printf("true\n");
  // // }else{
  // //     printf("false\n");
  // // }
  // // printf("a = %d , b = %d\n" , a , b);
  // for(int i = 0; i < 5 ; i++){
       // if(i)printf(" ");
       //更妙的写法
   //  //   i && printf(" ");
       // printf("%d", i + 1);
   // }
   // printf("\n");
   // return 0;
//}
