#include<iostream>
using namespace std;
class Demo{
    int x,y;
    static int z;
    public:
        void get_data(int a,int b){
            x=a;
            y=b;
            z=z+1;
        }
        void put_data(){
            cout<<"x :"<<x<<endl<<"y :"<<y<<endl<<"z :"<<z<<endl;
        }
};
int Demo::z;
int main()
{
    Demo aa,bb,cc;
    aa.get_data(10,20);
    bb.get_data(5,30);
    aa.put_data();
    bb.put_data();
    return 0;
}