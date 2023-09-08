#include<bits/stdc++.h>
using namespace std;


//ERASE
int erase_vector(vector<int> v){
v.erase(v.begin()+1,v.end()-2);
cout<<"{ ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"}";

    cout<<endl;
}


//INSERT
int insert_vector(vector<int>v){
v.insert(v.begin(),30);
cout<<"{ ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"}";

    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //{10,20,30,40,50}
    cout<<"{ ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"}";

    cout<<endl;

    erase_vector(v);
    insert_vector(v);

    //size
    cout<<v.size();
    v.pop_back();
    
    return 0;
}