#include<bits/stdc++.h>
using namespace std;
class area_of_circle{
    private:
        float pi=3.14;
        float r;
    public:
        void getdata(float a){
            r=a;
        }
        void display_data(){
            cout<<"Area of circle is :"<<pi*r*r<<endl;
        }
};
int main()
{
    float a;
    cout<<"Enter the radius of circle : ";
    cin>>a;
    area_of_circle obj;
    obj.getdata(a);
    obj.display_data();
    return 0;
}