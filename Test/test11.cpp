#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i = 0; i<m; i++){
        cin >> b[i];
    }
    int s3 = n + m;
    int c[s3];
    int x = 0, y = 0, z = 0;
    
    while(x<n && y<m){
        if(a[x] < b[y]){
            c[z++] = a[x++];
        }
        else if(a[x] > b[y]){
            c[z++] = b[y++];
        }
        else{
            c[z++] = a[x++];
            y++;
        }
    }
    while(x<n){
        c[z++] = a[x++];
    }
    while(y<m){
        c[z++] = b[y++];
    }
    
    for(int i = 0; i<z; i++){
        cout << c[i] << " ";
    }
    return 0;
}