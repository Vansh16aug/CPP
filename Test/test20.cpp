#include<iostream>
using namespace std;
int main(){    
    int n;    
    cin >> n;      
    string a[n];   
    for(int i = 0; i<n; i++){  
        cin >> a[i];   
        }     
        cout << "Initial order: "; 
        for(int i = 0; i<n; i++){   
            cout << a[i] << " ";   
            }    cout << endl;     
            for(int i = 0; i<n-1; i++){  
                int mini = i;      
                for(int j = i + 1; j<n; j++){  
                    if(a[j] < a[mini]){      
                        mini = j;           
                        }   
                        }        
                        string temp = a[mini];  
                        a[mini] = a[i];        
                        a[i] = temp;            
                        cout << "After Iteration " << i+1 << ": ";      
                        for(int l = 0; l<n; l++){        
                            cout << a[l] << " ";     
                            }        cout << endl;  
                            }       
                            cout << "Sorted order: "; 
                            for(int i = 0; i<n; i++){  
                                cout << a[i] << " ";   
                                }   
                                cout << endl; 
                                return 0;
    
}