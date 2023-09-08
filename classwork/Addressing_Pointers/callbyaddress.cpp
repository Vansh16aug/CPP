#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    cout<<"Inside func"<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<"  "<<*b;
}
int main()
{
    int x=10;
    int y=20;
    swap(&x,&y);
    return 0;
}