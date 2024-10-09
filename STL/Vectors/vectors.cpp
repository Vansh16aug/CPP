#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(1);
    cout<<v[0]<<endl;   //{1,1}


    // for pairs
    vector<pair<int,int>>v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);
    cout<<v1[0].first<<v1[0].second<<" "<<v1[1].first<<v1[1].second<<endl;


    //for many values
    vector<int>v2(5,100);
    cout<<v2[0]<<" "<<v2[1]<<" "<<v2[2]<<" "<<v2[3]<<" "<<v2[4]<<" "<<endl;

    // create empty
    vector<int>v3(5);
    cout<<v3[0]<<" "<<v3[1]<<" "<<v3[2]<<" "<<v3[3]<<" "<<v3[4]<<" "<<endl;

    //copying other vector 'v2'
    vector<int>v4(v2);
    cout<<v4[0]<<" "<<v4[1]<<" "<<v4[2]<<" "<<v4[3]<<" "<<v4[4]<<" "<<endl;
    return 0;
}