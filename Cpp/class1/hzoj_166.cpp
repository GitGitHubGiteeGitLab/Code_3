/*************************************************************************
	> File Name: hzoj_166.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Sep 2023 03:34:17 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string A, B;
    int N;
    cin >> A >> N >> B;

    if(A.length() > 100) cout << 100 << endl;
    else cout << A.length() << endl;
    
    string C = A.insert(N-1 , B);
    cout << C << endl;

    reverse(C.begin(), C.end());
    if(C.find('x') != std::string::npos){
        cout << C.find('x')+1 << endl;
    }
}
