/* wap using DMA only in that program 
by pressing 1, create new student
by pressing 2, delete student 
by pressing 3, enter info of student
by pressing 4, display info of student
by pressing 5, exit program */

#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    char name[50];
    int age;
};

int main() {
    int choice;
    Student* students = nullptr; // Use nullptr instead of NULL
    int numStudents = 0;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Create new student\n";
        cout << "2. Delete student\n";
        cout << "3. Enter info of student\n";
        cout << "4. Display info of student\n";
        cout << "5. Exit program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Create new student
                {
                    numStudents++;
                    Student* newStudents = new Student[numStudents];
                    if (students) {
                        for (int i = 0; i < numStudents - 1; i++) {
                            newStudents[i] = students[i];
                        }
                        delete[] students;
                    }
                    students = newStudents;

                    Student& newStudent = students[numStudents - 1];
                    cout << "Enter name: ";
                    cin >> newStudent.name;
                    cout << "Enter age: ";
                    cin >> newStudent.age;
                }
                break;

            case 2: // Delete student
                {
                    if (numStudents > 0) {
                        numStudents--;
                        Student* newStudents = new Student[numStudents];
                        for (int i = 0; i < numStudents; i++) {
                            newStudents[i] = students[i];
                        }
                        delete[] students;
                        students = newStudents;
                    }
                }
                break;

            case 3: // Enter info of student
                {
                    int studentIndex;
                    cout << "Enter the index of the student to update: ";
                    cin >> studentIndex;

                    if (studentIndex >= 0 && studentIndex < numStudents) {
                        Student& student = students[studentIndex];
                        cout << "Enter new name: ";
                        cin >> student.name;
                        cout << "Enter new age: ";
                        cin >> student.age;
                    }
                    else {
                        cout << "Invalid student index." << endl;
                    }
                }
                break;

            case 4: // Display info of student
                for (int i = 0; i < numStudents; i++) {
                    cout << "Student " << i + 1 << ":\n";
                    cout << "Name: " << students[i].name << endl;
                    cout << "Age: " << students[i].age << endl;
                }
                break;

            case 5: // Exit program
                delete[] students;
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
