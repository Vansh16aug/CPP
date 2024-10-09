#include<iostream>
#include<iomanip>
using namespace std;
class Item{
    int n;
    float cost;
    int quantity;
  public:
    inline void get_item();
    inline float put_item();
};

inline void Item::get_item(){
    cin>>n;
    cin>>cost;
    cin>>quantity;
}
inline float Item::put_item(){
    float result=cost*quantity;
    cout<<fixed<<showpoint<<setprecision(2)<<"Total cost: "<<result;
}
int main(){
    Item obj;
    obj.get_item();
    obj.put_item();
    return 0;
}