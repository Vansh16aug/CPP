#include<iostream>
using namespace std;
class binary{
int a,mid,n,arr[100];
public:
void array(){
    cout<<"Enter number of element you want to insert in decending order: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void search(){
    int l=n-1,U=0,v=0;
    cout<<"Enter key you want to search: ";
    cin>>a;
    while(l>=U){
        mid=(l+U)/2;
        if(a==arr[mid]){
            v=1;
            cout<<"Found";
            break;
        }
        else if(a>arr[mid]){
            l=mid-1;
        }
        else{
            U=mid+1;
        }
    }
    if(v==0){
        cout<<"Not Found";
    }
}
};
int main(){
    binary x;
    x.array();
    x.search();

    return 0;
}