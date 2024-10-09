#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<<pq.top();
cout<<endl;
    priority_queue<int, vector<int>,greater<int>>pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);
    cout<<pq1.top();
    return 0;
}