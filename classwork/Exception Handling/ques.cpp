//wap in which the user wnters an even number an exception is thrown
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter an input :";
    cin>>a;
    try{
        if(a%2==0){
            throw a;
        }
    }
    catch(int a){
        cout<<"Exception is thrown"<<endl;
    }
    return 0;
}