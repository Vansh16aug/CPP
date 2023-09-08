#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<"{ ";
    for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"}";

    cout<<endl;

    cout<<"{ ";
    for(auto it=v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<"}";

    cout<<endl;

    cout<<"{ ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"}";
    return 0;
}