// #include<bits/stdc++.h>
// using namespace std;
// struct car{
//     int model;
//     char name[50];
//     float price;
// };
// int main()
// {
//     car c;
//     cout<<"Enter model: ";
//     cin>>c.model;
//     cout<<"Enter name: ";
//     cin>>c.name;
//     cout<<"Enter price: ";
//     cin>>c.price;
//     cout<<"Model: "<<c.model<<endl;
//     cout<<"Name: "<<c.name<<endl;
//     cout<<"Price: "<<c.price<<endl;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
union abuse{
    int num;
    char name[50];
    char intensity[50];
};
int main()
{
    abuse a;
    cout<<"Enter number of GALLA :";
    cin>>a.num;
    cout<<"Number of GALLA are :"<<a.num<<endl;

    cout<<"Enter words of GALLA :";
    //using getline
    cin>>a.name;
    cout<<"Words of GALLA are :"<<a.name<<endl;

    cout<<"Enter intensity of GALLA :";
    cin>>a.intensity;
    cout<<"Intensity of GALLA is :"<<a.intensity<<endl;
    return 0;
}