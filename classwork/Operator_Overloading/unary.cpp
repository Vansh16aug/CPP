#include<bits/stdc++.h>
using namespace std;
class score{
    private:
    int val;
    public:
    score(){
        val=0;
    }
    void operator++(){
        val=val+1;
    }
    int show(){
        return val;
    }
};
int main()
{
    score s1,s2;
    cout<<"\nInitial value of s1 object = "<<s1.show();
    cout<<"\nInitial value of s2 object = "<<s2.show();
    ++s1;
    ++s1;// same as s1.operator++()
    ++s2;
    cout<<"\nFinal value of s1 object = "<<s1.show();
    cout<<"\nFinal value of s2 object = "<<s2.show();
    return 0;
}