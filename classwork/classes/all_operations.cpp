// #include<bits/stdc++.h>
// using namespace std;
// class Operations{
//     private:
//         float a;
//         float b;
//     public:
//         void get_data(){
//             cout<<"Enter the value of a and b :";
//             cin>>a>>b;
//         }
//         void add(){
//             float addi=a+b;
//             cout<<"The addition is :"<<addi<<endl;
//         }
//         void sub(){
//             float subt=a-b;
//             cout<<"The subtraction is :"<<subt<<endl;
//         }
//         void mul(){
//             float multi=a*b;
//             cout<<"The multiplication is :"<<multi<<endl;
//         }
//         void div(){
//             float divi=a/b;
//             cout<<"The division is :"<<divi<<endl;
//         }
// };
// int main()
// {
//     Operations obj;
//     obj.get_data();
//     obj.add();
//     obj.sub();
//     obj.mul();
//     obj.div();
//     return 0;
// }



// create a code which does operation on the input of user using switch case and classes

#include<bits/stdc++.h>
using namespace std;
class Operations{
    private:
        float a;
        float b;
    public:
        void get_data(int x,int y){
            a=x;
            b=y;
        }
        void add(){
            float addi=a+b;
            cout<<"The addition is :"<<addi<<endl;
        }
        void sub(){
            float subt=a-b;
            cout<<"The subtraction is :"<<subt<<endl;
        }
        void mul(){
            float multi=a*b;
            cout<<"The multiplication is :"<<multi<<endl;
        }
        void div(){
            float divi=a/b;
            cout<<"The division is :"<<divi<<endl;
        }
};
int main()
{
    float x,y;
    int choice;
    cout<<"Enter the value of a and b :";
    cin>>x>>y;
    Operations obj; 
    obj.get_data(x,y);
    cout<<"Enter the choice :"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Which operation you want :";
    cin>>choice;
    switch(choice){
        case 1:
            obj.add();
            break;
        case 2:
            obj.sub();
            break;
        case 3:
            obj.mul();
            break;
        case 4:
            obj.div();
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}