#include<bits/stdc++.h>
using namespace std;
int main()
{
    int*p =NULL;
    p=new int;
    if(p==NULL){
        cout<<"Memory allocation "<<endl;
        exit(0);
    }
    else{
        cout<<"Memory allocated"<<endl;
        *p=12;
        cout<<"Integer stored is :"<<*p<<endl;
        cout<<"Address of p value is :"<<p<<endl;
        delete p;
        cout<<"Memory deallocated";
    }
    return 0;
}