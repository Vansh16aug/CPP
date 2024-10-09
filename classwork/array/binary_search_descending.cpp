#include<iostream>
using namespace std;
class binary{
    public:
int a,mid,n,arr[100];
void array(){
    cout<<"Enter number of element you want to insert in decending order: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int binary_search(){
    int a;
    cout<<"Enter element to search :";
    cin>>a;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[mid]>a){          // > for ascending and < for desceending
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
};
int main(){
    binary x;
    x.array();
    int index=x.binary_search();
    if(index!=-1){
        cout<<"Is present at index "<<index<<endl;
    }
    else{
        cout<<"Is not present at any index "<<endl;
    }
    return 0;
}