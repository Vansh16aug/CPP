#include<bits/stdc++.h>
using namespace std;
class Employee{
    public:
    char name[20];
    int uid;
    int salary;
    int nextid=0;
    void getdata(){
        cout<<"Enter name of employee :";
        cin>>name;
        uid=nextid;
        cout<<"Enter salary of employee :";
        cin>>salary;
    }
    // void increment_uid(){
    //     uid = uid + 1;
    // }
    void putdata(){
        cout<<name;
        cout<<uid;
        cout<<salary;
    }
};
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee employees[n];

    for(int i = 0; i < n; i++){
        employees[i].getdata();
        // employees[i].increment_uid();
    }

    fstream file;
    file.open("data.txt",ios::in|ios::out);

    // Write data to file
    for(int i = 0; i < n; i++){
        file << employees[i].name << " "
             << employees[i].uid << " "
             << employees[i].salary << "\n";
    }

    // Read data from file
    file.seekg(0);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    return 0;
}

//write a interactive program to insert info of employee into a file continously until 0 is pressed 

//write an interactive program in which when u press 1 it inserts the data  in file ,
//if pressed 2 it reads the dta from file and prints on console ,
//if pressed 3 u can modify the data in file ,
//if pressed 4 it erases the particular data of the employee using employee id
//and if pressed 5 search the record using the uid .