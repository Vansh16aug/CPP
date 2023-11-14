// write a code for entering 3 employee data and printing them interactively using structure
#include<bits/stdc++.h>
using namespace std;
struct employee{
    int id;
    string name;
    float salary;
};

int main()
{
    int n;
    cout<<"Enter the number of employees :";
    cin>>n;
    cin.ignore();

    employee e[n];

    for(int i=0;i<=n;i++){
        cout<<"Enter the id of "<<i+1<< "Employee :"<<endl;
        cin>>e[i].id;
        cout<<"Enter the name of "<<i+1<< "Employee :"<<endl;
        cin>>e[i].name;
        cout<<"Enter the salary of "<<i+1<< "Employee :"<<endl;
        cin>>e[i].salary;
    }
    for(int i=0;i<n;i++){
        cout<<"The id of "<<i+1<<"employee is: "<<e[i].id<<endl;
        cout<<"The name of "<<i+1<<" employee is: "<<e[i].name<<endl;
        cout<<"The salary of "<<i+1<<" employee is: "<<e[i].salary<<endl;
    }

    return 0;
}
