#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int m;
    cin >> m;
    int brr[m];
    for(int i = 0; i<m; i++)
    {
        cin >> brr[i];
    }
    
    if(n>m)
    {
        for(int i = 0; i<n; i++)
        {
            if(i<m)
            {
                cout << arr[i] + brr[i] << " ";
            }
            
            else
            {
                cout << arr[i] << " ";
            }
        }
    }
    
    else
    {
        for(int i = 0; i<m; i++)
        {
            if(i<n)
            {
                cout << arr[i] + brr[i] << " ";
            }
            
            else
            {
                cout <<  brr[i] << " ";
            }
        }
    }
    return 0;
}