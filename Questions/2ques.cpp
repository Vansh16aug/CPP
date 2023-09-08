// //write the code of n students and get the info of those repeatedly until someone press 0

// #include<bits/stdc++.h>
// using namespace std;

// struct student {
//     int roll;
//     char name[50];
// };

// int main() {
//     const int maxStudents = 100;
//     student students[maxStudents];

//     int i = 0;
//     while (true) {
//         cout << "Enter the roll no of student " << i + 1 << " (press 0 to exit): ";
//         cin >> students[i].roll;

//         if (students[i].roll == 0) {
//             break;
//         }

//         cout << "Enter the name of student " << i + 1 << ": ";
//         cin >> students[i].name;

//         i++;

//         if (i >= maxStudents) {
//             cout << "Maximum number of students reached.\n";
//             break;
//         }
//     }

//     cout << "\nStudent Information:\n";
//     for (int j = 0; j < i; j++) {
//         cout << "Student " << j + 1 << " - Roll No: " << students[j].roll << ", Name: " << students[j].name << endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

union student {
    int roll;
    char name[50];
};

int main() {
    const int maxStudents = 100;
    student students[maxStudents];

    int i = 0;
    while (true) {
        cout << "Enter the roll no of student " << i + 1 << " (press 0 to exit): ";
        cin >> students[i].roll;

        if (students[i].roll == 0) {
            break;
        }

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "\nStudent Information:\n";
        cout << "Student " << i + 1 << " - Roll No: " << students[i].roll << ", Name: " << students[i].name << endl;

        i++;
        if (i >= maxStudents) {
            cout << "Maximum number of students reached.\n";
            break;
        }
    }

    return 0;
}


