#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(4);
    dq.emplace_front(0); //{0,4,1,2}
    dq.pop_back();  //{0,4,1}
    dq.pop_front(); //{4,1}
    cout<<dq.back();cout<<endl; //back element
    cout<<dq.front();cout<<endl;    //front element
    for(auto it:dq){
        cout<<it<<" ";
    }
    return 0;
}