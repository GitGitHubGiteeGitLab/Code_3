/*************************************************************************
	> File Name: test_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Sep 2023 08:30:23 PM CST
 ************************************************************************/

#include<iostream>

namespace testA{
    void printf(int a, int b){
        std::cout << a + b << std::endl;
    }
}

int main(){
    testA::printf(2, 3);
}
