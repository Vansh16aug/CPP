#include<bits/stdc++.h>
using namespace std;
class Year{
    public:
    enum Month{
        jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
    };
};
int main()
{
    int n;
    cin>>n;
    if(n>=Year::jan && n<=Year::dec)
    {
       switch(static_cast<Year::Month>(n)){
            case Year::jan:
            cout<<"January"<<endl;
            break;
            case Year::feb:
            cout<<"February"<<endl;
            break;
            case Year::mar:
            cout<<"March"<<endl;
            break;
            case Year::apr:
            cout<<"April"<<endl;
            break;
            case Year::may:
            cout<<"May"<<endl;
            break;
            case Year::jun:
            cout<<"June"<<endl;
            break;
            case Year::jul:
            cout<<"July"<<endl;
            break;
            case Year::aug:
            cout<<"August"<<endl;

            break;
            case Year::sep:
            cout<<"September"<<endl;
            break;
            case Year::oct:
            cout<<"October"<<endl;

            break;
            case Year::nov:
            cout<<"November"<<endl;
            break;

            case Year::dec:
            cout<<"December"<<endl;
            break;

       }
    }
    else
    {
        cout<<"Invalid month input"<<endl;
    }
    return 0;
}