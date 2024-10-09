#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int l;
    int b;
    public:
        rectangle (int x,int y):l(x),b(y){}
        int area(){
            cout<<"Area is :";
            return l*b;
        }
};
int main()
{
    rectangle r(3,4);
    int a=r.area();
    cout<<a;
    return 0;
}