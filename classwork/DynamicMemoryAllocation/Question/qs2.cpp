#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int *rollno;
    int *marks;
    int *fileData;
    Student(){
        // create file
        ofstream fin;
        fin.open("student.txt");
        // allocate memory
        rollno = new int;
        marks = new int;
        fileData = new int;
    }
    void get_data(){
        //input from user
        cout<<"Enter rollno of student :";
        cin>>*rollno;
        cout<<"Enter marks of student :";
        cin>>*marks;
        
    }
    void write(){
        //write in file
        ofstream fout;
        fout.open("student.txt");
        fout<<*rollno<<" ";
        fout<<*marks;
        fout.close();

    }
    void search(){
        
    }
    void print_data(){
        fstream f;
        f.open("student.txt");
        
        f.seekg(0);
        string line;
        while (getline(f, line)) {
            cout << line << endl;
        }

    }

    ~Student(){
        // delete allocated memory
        delete rollno;
        delete marks;
        delete fileData;
    }
};
int main()
{
    Student* s=new Student();
    s->get_data();
    s->write();
    s->print_data();
    delete s;
    return 0;
}
