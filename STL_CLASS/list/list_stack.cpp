#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    int a;
    cin>>a;
    int num;
    for(auto i=0;i<a;i++){      //1 2 3 4 5
        cin>>num;
        l.push_front(num);
    }
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.pop_front();
    l.pop_front();
    
    cout<<"After Popping :"<<endl;
    for(auto i:l){
        cout<<i<<" ";
    }
    return 0;
}