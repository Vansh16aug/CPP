// add all the values of array sing pointers inside a class but fix yours values donot use new keyword, and get the first location in arr
#include<bits/stdc++.h>
using namespace std;
class P{
    int * arr;
    int size;
    int arr1[5]={1,2,3,4,5};
    public:
    
        void add(){
            arr=&(arr1[0]);
            int sum=0;
            for(int i=0;i<5;i++){
                sum=sum+arr1[i];
            }
            cout<<"Sum of array elements is :"<<sum<<endl;
            cout<<arr<<" "<<&arr1[0];
        }
};
int main()
{
    P a;
    a.add();
    return 0;
}