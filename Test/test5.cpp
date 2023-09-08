#include<iostream>
#include<iomanip>
using namespace std;
class TemperatureConverter{
    double tempC;
    double tempF;
    double tempK;
    public:
        void getCelsius();
        void getFahrenheit();
        void getKelvin();
};
void TemperatureConverter::getCelsius(){
    cin>>tempC;
}
void TemperatureConverter::getFahrenheit(){
    tempF = (tempC * 9/5) + 32;
    cout<<"Temperature in Fahrenheit: "<<fixed<<showpoint<<setprecision(2)<<tempF<<endl;
}
void TemperatureConverter::getKelvin(){
    tempK = tempC + 273.15;
    cout<<"Temperature in Kelvin: "<<fixed<<showpoint<<setprecision(2)<<tempK<<endl;
}
int main(){
    TemperatureConverter obj;
    obj.getCelsius();
    obj.getFahrenheit();
    obj.getKelvin();
    return 0;
}