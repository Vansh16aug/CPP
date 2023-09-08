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
    int end=n-1,start=0,flag=0;
    cout<<"Enter key you want to search: ";
    cin>>a;
    while(end>=start){
        mid=(end+start)/2;
        if(a==arr[mid]){
            flag=1;
            cout<<"Found";
            break;
        }
        else if(a>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if(flag==0){
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