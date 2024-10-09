#include<iostream>
using namespace std;
inline int max(int x,int y){
    return (x>y)?x:y;
}
int main()
{
    cout<<"Max(20,10): "<<max(20,10)<<endl;
    cout<<"Max(0,200): "<<max(0,200)<<endl;
    cout<<"Max(100,1010): "<<max(100,1010)<<endl;
    return 0;
}