#include<iostream>
using namespace std;
class Demo{
    static int x;
    static int y;
    public:
        static void get(int n,int m){
            x=n;
            y=m;
        }
        static void fun(){
            cout<<"Value of X: "<<x<<endl;
            cout<<"Value of Y: "<<y<<endl;
        }
        static int getX(){
            return x;
        }

        static int getY(){
            return y;
        }
};
int Demo::x=10;
int Demo::y=20;

int main(){
    Demo obj;
    cout<<"Value of X: "<<Demo::getX()<<endl;
    cout<<"Value of Y: "<<Demo::getY()<<endl;
    int a,b;
    cin>>a>>b;
    Demo::get(a,b);
    Demo::fun();    
    return 0;
}