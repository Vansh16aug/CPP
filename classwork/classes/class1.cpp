#include<bits/stdc++.h>
using namespace std;
class item{
    int num;
    float cost;
    public:
    void getdata(int a,float b);
    void putdata(){
        cout<<"num : "<<num<<endl;
        cout<<"cost :"<<cost<<endl;
    }
};
void item::getdata(int a,float b){
    num=a;
    cost=b;
}
int main()
{
    item x;
    cout<<"\n object x"<<endl;
    x.getdata(100,299.95);
    x.putdata();
    item y;
    cout<<"\n object y"<<endl;
    y.getdata(200,175.50);
    y.putdata();
    return 0;
}