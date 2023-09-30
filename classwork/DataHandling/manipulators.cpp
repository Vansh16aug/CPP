#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[30];
    ofstream fileout;
    fstream file;
    fileout.open("hello.txt",ios::out);
    fileout<<"hello world";
    fileout.close();
    file.open("hello.txt",ios::in|ios::out);
    cout<<file.tellg()<<endl;
    cout<<file.tellp()<<endl;
    file.seekp(6);
    file.seekg(6);
    cout<<file.tellg()<<endl;
    cout<<file.tellp()<<endl;
    file>>s;
    cout<<s;
    return 0;
}