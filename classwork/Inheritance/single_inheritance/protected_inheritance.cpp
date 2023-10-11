//write a program foe employee management system in which there are 2 classes , 1st is management 2nd is employee . so employee inherites the property of management class in protected mode , Management has 3 diff sections : salary,employee name,company name . print salary and name of the employee using object of derived class
#include<iostream>
using namespace std;
class Management{
private:
    int salary;
protected:
    char employee_name[20];
public:
    char company_name[20];
    void get_salary(){
        cout<<"Enter the salary of the employee :";
        cin>>salary;
    }
    void show_salary(){
        cout<<"The salary of the employee is :"<<salary<<endl;
    }

};
class Employee:protected Management{
    public:     //  if we give private/protected the we cant access these data members 
    void get_data(){
        get_salary();
        cout<<"Enter the employee name :";
        cin>>employee_name;
        // cout<<endl;
        cout<<"Enter the company name :";
        cin>>company_name;
    }
    void display(){
        cout<<endl;
        cout<<"===================EMPLOYEE DATA==================="<<endl;
        show_salary();
        cout<<"The name of employee is :"<<employee_name<<endl;
        cout<<"The name of company is :"<<company_name<<endl;
    }
};
int main()
{
    Employee e;
    e.get_data();
    e.display();
    return 0;
}
