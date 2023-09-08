#include<bits/stdc++.h>
using namespace std;
struct emp{
    int id;
    int age;
};
int main()
{
    emp e[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the id of "<<i+1<<" employee :";
        cin>>e[i].id;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter the age of "<<i+1<<" employee :";
        cin>>e[i].age;
    }
    return 0;
}