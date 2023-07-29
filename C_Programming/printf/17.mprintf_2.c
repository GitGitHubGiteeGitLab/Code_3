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
                                  int tmp = va_arg(ap, int), k = 0;
                                  unsigned x = 0;
                                  char str[15] = {0};
                                  if(tmp < 0){
                                    putchar('-'), count++;
                                    x = -tmp;
                                  }else{
                                    x = tmp;  
                                  }
                                  do{
                                    str[k++] = x % 10 + '0';
                                    x /= 10;
                                  }while(x);
                                  for(int i = k - 1; ~i; i--){
                                     putchar(str[i]), ++count;
                                  }
                                }  break;
                         case 'c':{
                             char ch = va_arg(ap, int);
                             putchar(ch), count++;
                         }break;
                         case 's':{
                             char *str = va_arg(ap, char*);
                             while(*str){
                                 putchar(*str), count++;
                                 str++;
                             }
                         }break;
                         case 'f': break;
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
    mprintf("%c\n", ch);
    mprintf("%d\n", INT32_MIN);
    mprintf("%s\n", "heellojsdifjsojfjsdofj");
    return 0;
}
