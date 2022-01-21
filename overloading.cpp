/*
 * 函数重载
 */

#include<iostream>
using namespace std;

void fun(double a){
    cout<<a/2<<endl;
}
void fun(int a){
    cout<<a/2<<endl;
}
int main(){
    fun(3);
    fun(3.0);
    return 0;
}