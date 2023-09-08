#include<bits/stdc++.h>
using namespace std;
int main()
{
    //for 2
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second;

    cout<<endl;

    //more than 2
    pair<int,pair<int,int>>s={1,{2,3}};
    cout<<s.first<<" "<<s.second.first<<" "<<s.second.second;

    cout<<endl;

    //for array
    pair<int,int>arr[]={{1,2},{3,4},{5,6},{7,8}};
    cout<<arr[0].first<<" "<<arr[0].second<<" "<<arr[1].first<<" "<<arr[1].second<<" "<<arr[2].first<<" "<<arr[2].second<<" "<<arr[3].first<<" "<<arr[3].second;

    return 0;
}