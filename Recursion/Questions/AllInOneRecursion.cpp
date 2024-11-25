// #include <bits/stdc++.h>
// using namespace std;
// void reachHome(int src, int dest)
// {
//     // Base case
//     if (src == dest)
//     {
//         cout << "Reached Home" << endl;
//         return;
//     }
//     cout << "Source " << src << " Destination " << dest << endl;
//     reachHome(src + 1, dest);
// }
// int main()
// {
//     int src = 1;
//     int dest = 10;
//     reachHome(src, dest);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fiboNa(int n)
// {
//     // if (n <= 1)
//     //     return n;
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fiboNa(n - 1) + fiboNa(n - 2);
// }
// int main()
// {
//     int n = 8;
//     cout << fiboNa(n);
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << fiboNa(i) << " ";
//     // }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int CountWays(int n)
// {
//     if (n < 0)
//         return 0;
//     if (n == 0)
//         return 1;
//     return CountWays(n - 1) + CountWays(n - 2);
// }
// int main()
// {
//     int n = 3; // number of stairs
//     cout << CountWays(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void SayDigits(int n, string numberToWord[])
// {
//     if (n == 0)
//         return;
//     int digit = n % 10;
//     n = n / 10;
//     SayDigits(n, numberToWord);
//     cout << numberToWord[digit] << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string numberToWord[10];
//     numberToWord[0] = "zero";
//     numberToWord[1] = "one";
//     numberToWord[2] = "two";
//     numberToWord[3] = "three";
//     numberToWord[4] = "four";
//     numberToWord[5] = "five";
//     numberToWord[6] = "six";
//     numberToWord[7] = "seven";
//     numberToWord[8] = "eight";
//     numberToWord[9] = "nine";
//     SayDigits(n, numberToWord);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool isSorted(int *arr, int size)
// {
//     if (size == 0 || size == 1)
//         return true;
//     if (arr[0] > arr[1])
//         return false;
//     else return isSorted(arr + 1, size - 1);
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     cout << isSorted(arr, 6);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int Sum(int *arr, int sum, int size)
// {
//     if (size == 0)
//         return 0;
//     sum += arr[0];
//     return Sum(arr + 1, sum, size - 1);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << Sum(arr, 0, 5);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool Search(int arr[], int size, int key)
// {
//     if (size == 0)
//     {
//         return false;
//     }
//     if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         return Search(arr + 1, size - 1, key);
//     }
//     return false;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     bool ans = Search(arr, 5, 3);
//     if(ans) cout<<"Present"<<endl;
//     else cout<<"Not Present"<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool binarySearch(int arr[], int start, int end, int key)
// {
//     if (start > end)
//         return false;
//     int mid = start + (end - start) / 2;
//     if (arr[mid] == key)
//         return true;
//     else if (arr[mid] < key)
//         binarySearch(arr, mid + 1, end, key);
//     else
//         binarySearch(arr, start, mid - 1, key);
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;
//     bool ans = binarySearch(arr, 0, 5, 4);
//     if (ans)
//         cout << "Present" << endl;
//     else
//         cout << "Not Present" << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void Reverse(string &s, int i, int j)
// {
//     if (i >= j)
//         return;
//     swap(s[i], s[j]);
//     Reverse(s, i + 1, j - 1);
// }
// int main()
// {
//     // reverse string using recursion
//     string s = "vansh";
//     Reverse(s, 0, s.length() - 1);
//     cout << s;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// bool palindrome(string s, int i, int n)
// {
//     if (i > n - i - 1)
//         return true;
//     if (s[i] == s[n - i - 1])
//     {
//         palindrome(s, i + 1, n - i - 1);
//     }
//     else
//         return false;
// }
// int main()
// {
//     string str = "caaca";
//     bool isPal = palindrome(str, 0, str.length());
//     if (isPal)
//         cout << "Is Palindrome" << endl;
//     else
//         cout << "Not Palindrome" << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int power(int a, int b)
// {
//     // base case
//     if (b == 0)
//         return 1;
//     if (b == 1)
//         return a;
//     int ans = power(a, b / 2);
//     // b is even -> a^b/2 x a^b/2
//     if (b % 2 == 0)
//     {
//         return (ans * ans);
//     }
//     // b is odd -> a x a^b/2 x a^b/2
//     else{
//         return (a * (ans * ans));
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int ans = power(a, b);
//     cout << ans << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void insertAtBottom(stack<int> &st, int ele)
// {
//     if (st.empty())
//     {
//         st.push(ele);
//         return;
//     }
//     int top = st.top();
//     st.pop();
//     insertAtBottom(st, ele);
//     st.push(top);
// }
// void reverse(stack<int> &st)
// {
//     if (st.empty())
//     {
//         return;
//     }
//     int top = st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(st, top);
// }
// int main()
// {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     reverse(st);
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void merge(vector<int>&arr,int left, int mid, int right){
//     vector<int>temp;
//     int low = left;
//     int high = mid+1;
//     while(low <= mid && high <= right){
//         if(arr[low] <= arr[high]){
//             temp.push_back(arr[low]);
//             low++;
//         }
//         else{
//             temp.push_back(arr[high]);
//             high++;
//         }
//     }
//     //low side ele remain
//     while(low <= mid){
//         temp.push_back(arr[low]);
//         low++;
//     }
//     //high side ele remain
//     while(high <= right){
//         temp.push_back(arr[high]);
//         high++;
//     }
//     for(int i = left;i<=right;i++){
//         arr[i] = temp[i-left];
//     }
// }
// void mergeSort(vector<int>&arr,int left, int right){
//     if(left>=right) return;
//     int mid = (left+right)/2;
//     mergeSort(arr,left,mid);    //till half
//     mergeSort(arr,mid+1,right); //after half
//     merge(arr,left,mid,right);
// }
// int main() {
//     vector<int>arr ={10,200,56,34,12};
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     mergeSort(arr, 0, arr.size() - 1);
//     cout<<endl<<"After Merging"<<endl;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void subsequesnces(int index, vector<int> &arr, vector<int> &ans)
{
    // base case
    if (index == arr.size()){
        for (auto it : ans){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // null
    if(index == 0){
        cout<<"{}"<< endl;
    }
    // select
    ans.push_back(arr[index]);
    subsequesnces(index + 1, arr, ans);
    // reject
    ans.pop_back();
    subsequesnces(index + 1, arr, ans);
}
int main()
{
    vector<int> arr = {3, 1, 2};
    vector<int> ans;
    subsequesnces(0, arr, ans);
    return 0;
}