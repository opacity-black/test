/*
 * 整型数组
 */

#include<iostream>
using namespace std;

int main(){
    int num[10];
    for(int i=0;i<10;i++){
        cout<<"Please input number["<<i<<"]: ";
        cin>>num[i];
    }
    int total=0;
    for(int i=0;i<10;i++){
        total+=num[i];
    }
    cout<<"total/10 = "<<total/10<<endl;
    cout<<"total/10.0 = "<<total/10.0<<endl;
    cout<<"(float)total/10 = "<<(float)total/10<<endl;
    cout<<"total = "<<total<<endl;
    cout<<"total/10 = "<<total/10<<endl;
    return 0;
}