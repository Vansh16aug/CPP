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


    vector<int>::iterator it= v.begin();
    it++;
    cout<<*(it)<<" ";


    vector<int>::iterator it1= v.end();
    it1--;
    cout<<*(it1)<<" ";

    vector<int>::reverse_iterator it2=v.rend();
    it2--;
    cout<<*(it2)<<" ";

    vector<int>::reverse_iterator it3=v.rbegin();
    it3++;
    cout<<*(it3)<<" ";
    return 0;
}