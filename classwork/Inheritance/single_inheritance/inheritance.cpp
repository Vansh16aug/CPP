#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int roll_no;
    protected:
    char section[10];
    public:
    void get_roll_no(){
        cout<<"Enter roll no: ";
        cin>>roll_no;
    }
    void show_roll_no(){
        cout<<"Roll no: "<<roll_no<<endl;
    }
};
class Result:public Student{
    private:
    float fees;
    public:
    void get_data(){
        get_roll_no();
        cout<<"Enter section: ";
        cin>>section;
        cout<<"Enter fees: ";
        cin>>fees;
    }
    void display(){
        show_roll_no();
        cout<<"Section: "<<section<<endl;
        cout<<"Fees: "<<fees<<endl;
    }
};
int main()
{
    Result obj;
    obj.get_data();
    obj.display();
    
    return 0;
}