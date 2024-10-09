#include<bits/stdc++.h>
using namespace std;
class Name{
    char* myname;
    char* fname;
    public:
    Name(char* n1,char* n2){
        int length1=strlen(n1);
        int length2=strlen(n2);
        myname=new char[length1+1];
        fname=new char[length2+1];
        strcpy(myname,n1);
        strcpy(fname,n2);
    }

    void display(){
        cout<<"My name is :"<<myname<<endl;
        cout<<"My father's name is :"<<fname;
    }

    ~Name(){
        delete[] myname;
        delete[] fname;
    }
};
int main()
{
    Name name("Vansh","Bhupinder jit kumar");
    name.display();
    return 0;
}