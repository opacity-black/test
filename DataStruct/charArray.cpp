/*
 * 字符串数组
 */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"What do you want to say?";
    getline(cin,str);//获取一行
    cout<<"You:"<<str;

    return 0;
}