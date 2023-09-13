#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="ABCD";
    string s2="XYZ";
    int x=s1.compare(s2);

    if(x==0){
        cout<<s1<<"="<<s2<<endl;
    }
    else if(x>0){
        cout<<s1<<"<"<<s2<<endl;
    }
    else{
        cout<<s1<<">"<<s2<<endl;
    }
    return 0;
}