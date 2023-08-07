/*************************************************************************
	> File Name: EP05.c
	> Author: 
	> Mail: 
	> Created Time: Mon 07 Aug 2023 08:09:10 PM CST
 ************************************************************************/

#include<stdio.h>
/**
*	思路：把求1~20的最小公倍数问题变成求两个数之间的最小公倍数
*/
int lcm(int a, int b) {
	int i = 1;
	while (a * i % b != 0) {
		i++;
	}
	return a * i;
}

int rangelcm(int n) {
	int result = 1;
	for (int i = n; i > 1; i--) {
		if (result % i == 0)continue;
		result = lcm(result, i);
	}
	return result;
}

int main() {
	long long a = rangelcm(20);
	printf("%lld\n", a);
	return 0;
}

