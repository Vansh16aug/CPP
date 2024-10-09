#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    ls.push_back(50);
    ls.push_front(0);
    ls.emplace_front(2); 

    for(auto it:ls){
        cout<<it<<" ";
    }
    return 0;
}