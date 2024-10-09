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
            throw a;
        }
        catch(char *a){
            cout<<"Caught hehehehehehehe lol 😂"<<endl;
        }
        catch(...){
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