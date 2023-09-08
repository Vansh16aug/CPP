#include<iostream>
using namespace std;
class Rectangle{
    static int count;
    int length;
    int breadth;
    public:
    static int getCount(){
        return count;
    }
    void setDimensions(int l,int b){
        length=l;
        breadth=b;
        count++;
    }
    int getArea(){
        return length*breadth;
    }
};
int Rectangle::count=0;
int main(){
    int n;
    cin>>n;
    Rectangle r[n];
    
  
        int x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            r[i].setDimensions(x,y);
        }
        cout<<"Total number of rectangles: "<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<"Area of rectangle "<<i+1<<": "<<r[i].getArea()<<endl;
        }

    
    return 0;
}
