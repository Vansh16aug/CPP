#include<iostream>
using namespace std;
class Student{
    static int count; 
    int marks[5];
    public:
        static int getCount(){
            return count;
        }
        void setMarks(){
            for(int i=0;i<5;i++){
                cin>>marks[i];
            }
            count++;
        }
        void getMarks(int m){    
                cout<<"Marks of student "<<m <<": ";
             for(int i=0;i<5;i++){
                 cout<<marks[i]<<" ";
             }
             cout<<endl;
        }
};

int Student::count=0;

int main(){
    int n;
    cin>>n;
    Student st[n];
    for(int i=0;i<n;i++){
        st[i].setMarks();
    }
    cout<<"Total number of students: "<<n<<endl; 
    for(int i=0;i<n;i++){
        st[i].getMarks(i+1);
    }
    return 0;
}