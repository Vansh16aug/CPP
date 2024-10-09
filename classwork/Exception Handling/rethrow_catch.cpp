#include<iostream>
using namespace std;
class Check{
    int a;
public:
    Check(){
        cout<<"Enter the value :";
        cin>>a;
    }

    // void handle(){
    //     try{
    //         try{
    //             throw 20;
    //         }
    //         catch(int n){
    //             cout<<"Handles Partially "<<endl;
    //         }
    //     }
    //     catch(int n){
    //         cout<<"handles remaining"<<endl;
    //     }
        
    // }
    void handle(){
        try{
            try{
                throw 20;
            }
            catch(int n){
                if(n%2==0){
                    cout<<"This is even"<<endl;
                    throw;
                }
            }
            
        }
        catch(int n){
            if(n>10){
                cout<<"Number is greater than 10"<<endl;
            }
        }
    }
    
};
int main()
{
    Check c;
    c.handle();
    return 0;
}