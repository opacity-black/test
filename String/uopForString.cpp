/*
 * 字符串对象的常用操作
 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1="aaaaa";
	string str2(5,'b');
    //判空
    cout<<str1.empty()<<endl;
    //返回长度
    cout<<str1.size()<<endl;
    //返回第n个位置的值
    cout<<str1[0]<<endl;
    //拼接
    cout<<str1+str2<<endl;
    //比较【包括==,>=,!=等】
    cout<<((str1==str2)?"True":"Flase")<<endl;
    return 0;
}
