#include<iostream>
using namespace std;
class Ishan;
class Vansh{
    int money=100;
    friend void garv(Vansh ,Ishan );
};
class Ishan{
    int money=200;
    friend void garv(Vansh ,Ishan );
};

void garv(Vansh v,Ishan i){
    cout<<v.money+i.money;
}
int main()
{
    Vansh v;
    Ishan i;
    garv(v,i);
    return 0;
}


// to access student regg no of a student class using a friend function

// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     int reggno=12200660;
//     friend void display(Student);
// };
// void display(Student s){
//     cout<<s.reggno;
// }
// int main()
// {
//     Student s;
//     display(s);
//     return 0;
// }


//to create two class one is student and other is teacher then create a common friend func which access reggno of student class and also access the uid of teacher class and in main display the student regg and uid and relationship btw teacher and student wrt subject

// uid,teach ,to student reggid 

// #include<iostream>
// using namespace std;
// class Teacher;
// class Student{
//     int reggno=12200660;
//     char name[50]="Vansh Kumar";
//     friend void display(Student,Teacher);
    
// };
// class Teacher{
//     int uid=2186;
//     char ccode[50]="CSE211";
//     char name[50]="Robin Kumar";
//     friend void display(Student,Teacher);
// };
// void display(Student s,Teacher t){
//     cout<<"The Teacher, "<<t.name<<" of uid "<<t.uid<<" is teaching "<<t.ccode<<" to a student "<<s.name<<" of Regg number "<<s.reggno<<".";
// }
// int main()
// {
//     Student s;
//     Teacher t;
//     display(s,t);
//     return 0;
// }