/*************************************************************************
	> File Name: 17.mprintf.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Jul 2023 07:14:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<inttypes.h>

int mprintf(const char* format, ...){
    va_list ap;
    int count = 0;
    va_start(ap, format);
    for(int i = 0; format[i]; i++){
        //解析参数%
        switch(format[i]){
            case '%':{
                     switch(format[++i]){
                         case '%':
                                  putchar(format[i]);
                                  count++;
                                  break;
                         case 'd':{
                                  int tmp = va_arg(ap, int);
                                  int x = 0, digit = 0;
                                  if(tmp < 0){
                                    tmp = -tmp;
                                    putchar('-'), count++;  
                                  }
                                  do{
                                    x = x * 10 + tmp % 10;//reverse tmp
                                    tmp /= 10;
                                    digit++;  
                                  }while(tmp); 
                                  while(digit--){
                                    putchar(x % 10 + '0');//加'0'才能打印
                                    count++;
                                    x /= 10;
                                  }  
                                }  break;
                         case 'c':break;
                         case 'f':break;
                         case 's': break;
                     }
            } break;
            default :
                     putchar(format[i]);
                     count++;
                     break;
        }
        
    }
    va_end(ap);
    return count ;
}

int main(){
    char ch = 'a';
    mprintf("%d\n", INT32_MAX);
    mprintf("%d\n", INT32_MIN);
    mprintf("%d\n", 1000);
    return 0;
}
