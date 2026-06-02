#include<iostream>
using namespace std;

bool isLeapYear(int year){
    if((year%4==0 && year%100!=0)||(year%400==0)){
        return true;
    }
    return false;
}
int main(){
    int day, month, year;
    cout<<"Enter day, month and year: ";
    cin>>day>>month>>year;

    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isLeapYear(year)){
        days[1]=29;
    }
    day++;
    if(day>days[month-1]){
        day=1;
        month++;
        if(month>12){
            month=1;
            year++;
        }
    }
    cout<<"Next date"<<day<<"/"<<month<<"/"<<year;
    return 0;
    
}