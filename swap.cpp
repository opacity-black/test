/*
 * 异或来交换
 */

#include<iostream>
#include<string>
using namespace std;

void swap(int &x, int &y){
    x ^= y;
    y ^= x;
    x ^= y;
    //还可以这样
    /*
    x = x+y;
    y = x-y;
    x = x-y;
    */
}

int main()
{
    int x;
    int y;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    cout<<"swap x and y"<<endl;
    swap(x,y);
    cout<<"x = "<<x<<'\n'
        <<"y = "<<y<<'\n'
        <<endl;
}