#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int mathScores[n];
    for(int i=0;i<n;i++){
        cin>>mathScores[i];
    }
    
    int m;
    cin>>m;
    int scienceScores[m];
    for(int i=0;i<m;i++){
        cin>>scienceScores[i];
    }
    int size=n+m;
    int merged[size];
    //algorithm for merging
    
    for(int i=0;i<n;i++){
        merged[i]=mathScores[i];
    }
    for(int i=0;i<m;i++){
        merged[n+i]=scienceScores[i];
    }
    // int size=n+m;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(merged[i]==merged[j]){
                for(int i=j;i<size-1;i++){
                    merged[i]=merged[i+1];
                }
                size--;
                j--;
            }
        }
    }
    // int count=0;
    // for(int i=0;i<size;i++){
    //     count++;
    // }
    // cout<<size;
    
    int max=merged[0];
    for(int i=0;i<size;i++){
        if(merged[i]>max){
            max=merged[i];
        }
    }
    cout<<max;
    return 0;
}