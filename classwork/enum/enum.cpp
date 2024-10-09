//write a program in enum to display day of a week and show the value of each day\

#include<iostream>
using namespace std;
enum days{
    sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
    days day;
    for(int i=0;i<=6;i++){
        cout<<"Value of "<<i<<" :"<<i<<endl;
    }
    return 0;
}