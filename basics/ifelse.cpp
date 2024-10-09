#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter a age :";
    cin>>age;
    if (age>=18)
    {
        cout<<"You are adult";
    }
    else
    {
        cout<<"You are a kid";
    }

    int marks;
    cout<<"Enter a marks :";
    cin>>marks;
    if(80<=marks<=100){
        cout<<"You got A+";
    }
    else if(70<=marks<=79){
        cout<<"You got A";
    }
    else if(60<=marks<=69){
        cout<<"You got A-";
    }
    else if(50<=marks<=59){
        cout<<"You got B";
    }
    else if(40<=marks<=49){
        cout<<"You got C";
    }
    else if(33<=marks<=39){
        cout<<"You got D";
    }
    else if(0<=marks<=32){
        cout<<"You got F";
    }    
        return 0;
}