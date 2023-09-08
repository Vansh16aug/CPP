#include<bits/stdc++.h>
using namespace std;
class P{
    public:
    void sum();
};
inline void func(int m){
    cout<<m<<endl;
    
}
inline void P::sum(){
    cout<<"x+y"<<endl;
}
int main()
{
    P p;
    func(4);
    p.sum();
    return 0;
}