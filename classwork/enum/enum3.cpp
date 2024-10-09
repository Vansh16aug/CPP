#include<iostream>
using namespace std;
class Year{
    public:
        enum Month{
            JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
        };
};
void setMonth(Month month){
    currentMonth=month;
}
Month getMonth(){
    return currentMonth;
}
string getMonthString(Month month){
    switch(month){
        case JANUARY:return "JANUARY";
        case FEBRUARY:return "FEBRUARY";
        case MARCH:return "MARCH";
        case APRIL:return "APRIL";
        case MAY:return "MAY";
        case JUNE:return "JUNE";
        case JULY:return "JULY";
        case AUGUST:return "AUGUST";
        case SEPTEMBER:return "SEPTEMBER";
        case OCTOBER:return "OCTOBER";
        case NOVEMBER:return "NOVEMBER";
        case DECEMBER:return "DECEMBER";
    }
}
int main()
{
    return 0;
}