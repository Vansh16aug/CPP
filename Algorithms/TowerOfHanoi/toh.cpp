#include<iostream>
using namespace std;
void TowerOfHanoi(int start,int end,char source,char auxillary,char destination){   //start and end are starting and ending number of disks
    if(start>end){
        return;
    }
    TowerOfHanoi(start,end-1,source,destination,auxillary);
    cout<<"Move disk "<<end<<" from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(start,end-1,auxillary,source,destination);
}
int main()
{
    TowerOfHanoi(1,3,'A','B','C');
    return 0;
}