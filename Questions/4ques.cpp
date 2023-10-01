//write an interactive program in which when u press 1 it inserts the data  in file ,
//if pressed 2 it reads the dta from file and prints on console ,
//if pressed 3 u can modify the data in file ,
//if pressed 4 it erases the particular data of the employee using employee id
//and if pressed 5 search the record using the uid .

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

const int maxrow=10;

string EmpName[maxrow]={};

string EmpID[maxrow]={};

void OpenFile(){
    string line;
    ifstream myfile("employee.txt");
    if(myfile.is_open()){
        int x=0;    //to track current position in arrays
        while(getline(myfile,line)){    //reading and storing data into line from myfile
            int l=line.length();    
            EmpID[x]=line.substr(0,3);  // from 0 to 3 indexes
            EmpName[x]=line.substr(4,l-4);  // from 4 to l-4 (last index)
            x++;
        }
    }
    else{
        cout<<"Enable to open file!"<<endl;
    }
}
void SaveFile(){
    ofstream myfile;
    myfile.open("employee.txt");
    for(int i=0;i<maxrow;i++){
        if(EmpID[i]=="\0"){ //no data in array then terminate
            break;
        }
        else{
            myfile<<EmpID[i]<< "," <<EmpName[i]<<endl;
        }
    }
}
void insertion(){
    char name[50];
    char uid[5];
    cin.ignore();      //coz if we take input of int before string or char the input buffer gets full and we need to free it(coz of newline character which remains in the buffer)
    cout<<"Employee ID :";
    cin>>uid;
    cout<<"Employee Name :";
    cin>>name;
    for(int x=0;x<maxrow;x++){
        if(EmpID[x]==uid){
            cout<<"This uid is already registered!\n"<<endl;
            break;
        }
    
        else if(EmpID[x]=="\0"){     //if array is empty then enter the values
            EmpID[x]=uid;
            EmpName[x]=name;
            break;
        }
    }
}
void reading(){
    cout<<"Current Records"<<endl;
    cout<<"=============================="<<endl;
    int counter=0;
    cout<<" No. |    ID    |      NAME     "<<endl<<"------------------------------\n";
    for(int x=0;x<maxrow;x++){
        if(EmpID[x]!="\0"){
            counter++;
            cout<<"  "<<counter<<"       "<<EmpID[x]<<"          "<<EmpName[x]<<endl;
        }
    }
    if(counter==0){
        cout<<"No Record Found!"<<endl;
    }
    cout<<"===================================\n"<<endl;
}
void updating(string search){
    char name[50];
    char uid[5];
    int counter=0;
    for(int x=0;x<maxrow;x++){
        if(EmpID[x]==search){
            counter++;
            cout<<"Employee Namee >>";
            cin>>name;
            //cin.getline(uid,5);

            EmpName[x]=name;
            cout<<"Update Successfull!"<<endl;
            break;
        }
    }
    if(counter==0){
        cout<<"ID does not exist!\n"<<endl;
    }
}
void erasing(string search){
    int counter=0;
    for(int i=0;i<maxrow;i++){
        if(EmpID[i]==search){
            counter++;
            EmpID[i]="";
            EmpName[i]="";

            cout<<"Successfully Deleted!\n"<<endl;
            break;
        }
    }
    if(counter==0){
        cout<<"ID Number Does not exist!\n"<<endl;
    }
}
void searching(string search){
    cout<<"Current Records"<<endl;
    cout<<"=============================="<<endl;
    int counter=0;
    for(int i=0;i<maxrow;i++){
        if(EmpID[i]==search){
            counter++;
            cout<<"  "<<counter<<"       "<<EmpID[i]<<"          "<<EmpName[i]<<endl<<endl;
            break;
        }
    }
    if(counter==0){
        cout<<"No Record Found!\n"<<endl;
    }
}
int main()
{
    string empid;
    int option;
    OpenFile();
    do{
        cout<<"------Main Menu------\n";
        cout<<"1. Insert Data\n";
        cout<<"2. Read Data\n";
        cout<<"3. Update Data\n";
        cout<<"4. Erase Data\n";
        cout<<"5. Search Data\n";
        cout<<"6. Exit and Save to TextFile\n";
        cout<<"================================"<<endl;

        cout<<"Enter your choice: ";
        cin>>option;

        switch (option)
        {
        case 1:
            insertion();
            break;
        case 2:
            reading();
            break;
        case 3:
            cin.ignore();
            cout<<"Search ID to Update >>";
            getline(cin,empid);
            updating(empid);
            break;
        case 4:
            cin.ignore();
            cout<<"Delete by ID >>";
            getline(cin,empid);
            erasing(empid);
            break;
        case 5:
        cin.ignore();
            cout<<"Search by ID >>";
            getline(cin,empid);
            searching(empid);
            break;
        case 6:
            cout<<"Thank You\n";
            break;
        default:
            cout<<"Invalid Choice\n";
            break;
        }
    }
    while(option!=6);
    SaveFile();
    cout<<"Exit.... Saving to File!"<<endl;
    return 0;
}