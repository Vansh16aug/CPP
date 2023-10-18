//multiple inheritance
#include<bits/stdc++.h>
using namespace std;
class M{
protected:
    int m;
    public:
    M(int x){
        m=x;
        cout<<"In M"<<endl;
    }
};
class N{
protected:
    int n;
    public:
    N(int y){
        n=y;
        cout<<"In N"<<endl;
    }
};
class P:public M,public N{
    int i;
    public:
    P(int p,int q,int r):M(r),N(q){     // initializer list
       i=p;
       cout<<"In P"<<endl; 
    }
    void display(){
        cout<<"m= "<<m<<" "<<"n= "<<n<<" "<<"i= "<<i<<endl;
    }
};
int main()
{
    P obj(3,2,1);
    obj.display();
    return 0;
}