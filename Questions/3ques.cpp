
//write a interactive program to insert info of employee into a file continously until 0 is pressed 
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter your input" << endl;
        cin >> n;

        if (n == 0) {
            cout << "Thank you" << endl;
            break; 
        } else if (n == 1) {
            ofstream fout;
            fout.open("employee.txt", ios::app);
            int id;
            string name;
            cout << "Enter the id and name of employee" << endl;
            cin >> id >> name;
            fout << id << " " << name << endl;
            fout.close();
        } else {
            cout << "Invalid input" << endl;
        }
    } while (true);

    return 0;
}
