
#include<iostream>
using namespace std;

template <class T>  // by using this now we can transfer data type as a variable and define it at the end // 
class product{
    public:
    T a;
    T b;
    
    void setdata(T x, T y){
        a = x;
        b = y;
    }
    void printproduct(){
        T c = a*b;
        cout<<"the product of the no. are: "<<c<<endl;
        
    }
    
};

int main(){
product <int> obj1;   // here the data type is defined according to our need // 
obj1.setdata(3,4);
obj1.printproduct();


product <float> obj2;  // here the data type is defined according to our need //
obj2.setdata(3.2,4.3);
obj2.printproduct();


product <double> obj3;  // here the data type is defined according to our need //
obj3.setdata(3.22,4.33);
obj3.printproduct();

   return 0;
}