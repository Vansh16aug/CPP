#include<bits/stdc++.h>
using namespace std;
union Data{
    int rollno;
    char name;
    double marks;
};
int main()
{
    const int size=5;
    Data da[size];

    da[0].rollno=43;
    da[1].name='v';
    da[2].marks=744.2;
    da[3].rollno=55;
    da[4].name='r';
    da[5].marks=214.21;

    cout<<"Array of union :"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Index"<<i<<":";

        if(i%3==0){
            cout<<"Integer Value :"<<da[i].rollno<<endl;
        }
        else if(i%3==1){
            cout<<"Character Value :"<<da[i].name<<endl;
        }
        else{
            cout<<"Double Value :"<<da[i].marks<<endl;
        }
    }
    return 0;
}