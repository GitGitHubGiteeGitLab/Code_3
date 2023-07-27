/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Thu 27 Jul 2023 09:02:07 PM CST
 ************************************************************************/

#include<stdio.h>



void f(){
    static int a = 0;
    a += 1;
    printf("a = %d\n", a);
}

int main(){
    for(int i = 0; i < 5; i++){
        f();
    }
    printf("a = %d\n", a);
    /*test.c: In function ‘main’:
    test.c:22:24: error: ‘a’ undeclared (first use in this function)
    22 |     printf("a = %d\n", a);
      |                        ^
    test.c:22:24: note: each undeclared identifier is reported only once for each function it appears in
*/
    return 0;
}

