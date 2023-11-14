#include<bits/stdc++.h>
using namespace std;
int func(int &a){
    cout<<a+5<<endl;
}
int main()
{
    int a=4;
    cout<<a<<endl;  //4
    func(a);
    cout<<a<<endl;  //9
    return 0;
}