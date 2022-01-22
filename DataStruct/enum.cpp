/*
 * 枚举类型
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
    enum who {me, you, them, he, she};//里面实际存放的值是0,1,2,3...
    who I;
    I = me;
    cout<< me;
}