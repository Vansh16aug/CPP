#include<iostream>
using namespace std;
class Check{
    int a;
    public:
    Check(){
        cout<<"Enter the value :";
        cin>>a;
    }

    void handle(){
        try{
            if(a%2==0){
                throw a;
            }
        }
        catch(int a){
            cout<<"Exception is thrown"<<endl;
        }
    }
    
};
int main()
{
    Check c;
    c.handle();
    return 0;
}