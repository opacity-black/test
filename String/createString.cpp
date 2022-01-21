/*
 * 字符串对象的创建
 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="s1";
	string s2(s1);//创建s1的副本s2
	string s3("value");//创建s3="value"
	string s4(3,'c');//s4="ccc"
	cout<<"s1 = \""<<s1<<"\"\n"
		<<"s2 = \""<<s2<<"\"\n"
		<<"s3 = \""<<s3<<"\"\n"
		<<"s4 = \""<<s4<<"\"\n"
		<<endl;
    return 0;
}
