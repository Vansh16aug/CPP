
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
