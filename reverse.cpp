#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string a="sundaresan";
    int n = a.length();
    string b;
    for (int i = n-1; i >= 0;i--){
        b += a[i];
    }
    std::cout << b;
}
