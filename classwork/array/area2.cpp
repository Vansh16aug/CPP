#include<bits/stdc++.h>
using namespace std;
class area_circle{
    public:
    float r;
    void circle(){
        cout<<"Area of circle is :"<<3.14*r*r<<endl;
    }
};
int main()
{
    area_circle obj;
    cout<<"Enter radius :";
    cin>>obj.r;
    cout<<"Area is :"<<3.14*obj.r*obj.r;
    return 0;
}