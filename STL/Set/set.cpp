#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3); 

    auto it=st.find(3);     //returns iterator
    auto it=st.find(6);      
    st.erase(5);


    int cnt=st.count(1);
    auto it=st.find(3);
    st.erase(it);


    // auto it1=s1.find(2); 
    // auto it2=s1.find(4); 
    // s1.erase(it1,it2);
    return 0;
}