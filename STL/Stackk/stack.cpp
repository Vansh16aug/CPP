#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5); //{5,4,3,2,1}
    cout<<st.top();cout<<endl;
    cout<<st.size();cout<<endl;
    st.pop();


    stack<int>st1,st2;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);

    st2.push(100);
    st2.push(200);
    st2.push(300);
    st2.push(400);
    st1.swap(st2);

    while (!st1.empty()) {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    return 0;
}