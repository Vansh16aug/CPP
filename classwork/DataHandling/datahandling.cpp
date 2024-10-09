#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[30];
    cout<<"Enter what u want :";
    cin>>s;
    ofstream of("result.txt");
    of<<s;
    of.close();
    cout<<"Data saved\n";
    ifstream inf("result.txt");
    inf>>s;
    cout<<s;
    inf.close();
    return 0;
}