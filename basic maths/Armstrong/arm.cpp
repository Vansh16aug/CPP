// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     int count = 0;
//     int sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     int dup = n;  // Make a copy of the original number

//     // Count the number of digits
//     while (n > 0) {
//         count++;
//         n = n / 10;
//     }

//     // Calculate the sum of digits raised to the power of count
//     n = dup;  // Restore the original value of n
//     while (n > 0) {
//         int lastdigit = n % 10;
//         n = n / 10;
//         sum = sum + pow(lastdigit, count);
//     }

//     cout << sum << endl;

//     if (sum == dup)
//         cout << "It's an Armstrong number";
//     else
//         cout << "Not an Armstrong number";

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    int sum=0;
    cout<<"Enter a number :";
    cin>>n;
    int dup=n;
    while(n>0){
        count++;
        n=n/10;
    }
    int lastdigit;
    n=dup;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        sum=sum+pow(lastdigit,count);
    }
    cout<<sum;
    cout<<endl;
    if(sum==dup) cout<<"Its an Armstrong";
    else cout<<"Not an Armstrong";
    return 0;
}
