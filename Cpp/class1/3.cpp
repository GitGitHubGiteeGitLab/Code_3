/*************************************************************************
	> File Name: 3.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Sep 2023 08:45:44 PM CST
 ************************************************************************/

#include<iostream>

void timeclock(int x, int y){
    std::cout << "Time : ";
    std::cout << x << ":" << y << std::endl;
}

int main(){
    int x, y;
    std::cout << "Enter the number of hours : "; std::cin >> x;
    std::cout << "Enter the number of minutes : "; std::cin >> y;
    timeclock(x, y);
}
