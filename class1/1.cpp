/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Sep 2023 08:01:52 PM CST
 ************************************************************************/

#include<iostream>

int main(){
    double x;
    std::cout << "Enter value : ";
    if(!(std::cin >> x)){
        std::cout << "Bad value!" << std::endl;
        return 0;
    }
    std::cout << "Value = " << x << std::endl; 
    return 0;
}
