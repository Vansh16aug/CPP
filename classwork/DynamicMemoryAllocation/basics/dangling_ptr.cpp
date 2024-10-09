#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    {
        int v=23;
        ptr=&v;
        cout<<"Address inside block "<<ptr<<endl;
    }
    cout<<"Address outside block is "<<ptr<<endl;
    ptr=NULL;
    cout<<"Address outside block is "<<ptr<<endl;
    return 0;
}