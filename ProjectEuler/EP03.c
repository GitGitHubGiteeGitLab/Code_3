/*************************************************************************
	> File Name: EP03.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Aug 2023 11:24:50 AM CST
 ************************************************************************/

#include<stdio.h>
#include <unistd.h>
/**
*思路：
	n可由若干个factor相乘表示，其中一种表示为max_prime_factor * factor1 * factor2...
	让factor从3开始递增，只要n % factor == 0,就将factor赋值给lastfactor,只要n % factor == 0, 就给n除以factor 
	n == 1,说明找到了 max_prime_factor
*/
int main() {
	long long n = 600851475143L;
	long long factor = 2;
	long long lastfactor = 1;
	while (factor += 1, n > 1) {
		if (n % factor) continue;
		lastfactor = factor;
		while (n % factor == 0 && n != 1) {
			n /= factor;
		}
	}
	printf("%lld", lastfactor);
	return 0;
}
