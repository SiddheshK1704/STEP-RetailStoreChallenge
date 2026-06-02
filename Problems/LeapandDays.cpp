#include <iostream>
using namespace std;
int main()
{
    int year, month;
    cin>>year>>month;
    if(year>1 && year < 9099 ){
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
       if(month==1){
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
        else if(month==3){
            cout<<"Days-31";
        }
        else if(month==4){
            cout<<"Days-30";
        }
        else if(month==5){
            cout<<"Days-31";
        }
        else if(month==6){
            cout<<"Days-30";
        }
        else if(month==7){
            cout<<"Days-31";
        }
        else if(month==8){
            cout<<"Days-31";
        }
        else if(month==9){
            cout<<"Days-30";
        }
        else if(month==10){
            cout<<"Days-31";
        }
        else if(month==11){
            cout<<"Days-30";
        }
        else if(month==12){
            cout<<"Days-31";
        } 
    }
    else{
        cout<<"Invalid month";
    }
    
    return 0;
}