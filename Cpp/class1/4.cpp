/*************************************************************************
	> File Name: 4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Sep 2023 08:59:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    double x = 1.45e2;
    double y = 1.45e-4;
    double z = 1.45e6;

    cout << "x : " << x << endl;
    cout << "y : " << y / 10 << endl;
    cout << "z : " << z << endl;
   
    cout << hex << 255 << endl;
    cout << oct << 255 << endl;
    cout << dec << 255 << endl;
    
    int w = cout.width(10);
    cout << w << endl;

    return 0;
}

