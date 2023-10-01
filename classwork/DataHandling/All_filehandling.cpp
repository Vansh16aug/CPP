#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of("vansh.txt");
    of<<"hello my name is vansh kumar";
    of.close();
    string s;
    ifstream inf("vansh.txt");
    getline(inf,s);
    cout<<s;
    return 0;
}