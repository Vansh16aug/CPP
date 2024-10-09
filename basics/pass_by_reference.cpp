#include<iostream>
using namespace std;
int doS(int &num){
    cout<<"---------------inside func----------------"<<endl;
    cout<<num<<endl;        //1
    num+=5;     
    cout<<num<<endl;        //6
    num+=5;
    cout<<num<<endl;        //11
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    doS(num);
    cout<<"---------------inside func----------------"<<endl;

    cout<<num<<endl;
    return 0;
}


//array always pass by reference

//actual arguement change when formal arguement changes