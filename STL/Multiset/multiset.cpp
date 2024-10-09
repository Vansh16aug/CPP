#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);

    int cnt=ms.count(1);
    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(1+2));
    return 0;
}