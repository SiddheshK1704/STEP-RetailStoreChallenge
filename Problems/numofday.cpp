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
    if((day>=1 && day<=31)&&(month>=1&&month<=12)&&(year>=1&&year<=9999)){
        int daycount = 0;
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        if(isLeapYear(year)){
            days[1]=29;
        }
        for(int i=0;i<month-1;i++){
            daycount+=days[i];
        }
        daycount+=day;
        cout<<"Number of days: "<<daycount;
    }
    else{
        cout<<"Invalid Date. Please Enter correct date";
    }
    return 0;
}