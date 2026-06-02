#include <iostream>
using namespace std;
int main()
{
    int year, month;
    cin>>year>>month;
    if(year>1 && year < 9999 ){
        if((year%4==0 && year%100!=0)||(year%400==0)){
            cout<<"Year type = Leap";
        }
        else{
            cout<<"Year type = Non-leap";
        }  
    }
    else{
        cout<<"Invalid year";
    }
    cout<<"\n";
    if(month>=1 && month<=12){
       if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        cout<<"Days-31";
        }
        else if(month==2){
            if((year%4==0 && year%100!=0)||(year%400==0)){
                cout<<"Days-29";
            }
            else{
                cout<<"Days-28";
            }
        }
        else if((month==4)||(month==6)||(month==9)||(month==11)){
            cout<<"Days-30";
        }
    }
    else{
        cout<<"Invalid month";
    }
    
    return 0;
}