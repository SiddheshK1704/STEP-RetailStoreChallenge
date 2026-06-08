#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;
int BMIcatandCal(double w, float h, long s){
    if(h>0){
        double bmi = w/pow(h,2);
        long cal = s*4/100;
        cout<<"Your BMI is: "<<bmi<<"\n";
        cout<<"The calories you burnt by walking "<<s<<" steps are: "<<cal<<"\n";
        if(bmi<18.5 ){
            cout<<"You are underweight. \n";
        }
        else if(bmi>18.5 && bmi<25){
            cout<<"Your weight is Normal. \n";
        }
        else if(bmi>25 && bmi<30){
            cout<<"You are overweight. \n";
        }
    }
    return 0;
}

int main()
{
    cout<<"Enter your weight (in kgs), height(in meters) and steps walked: \n";
    double weight;
    float height;
    long steps;
    cin>>weight>>height>>steps;
    
    BMIcatandCal(weight, height, steps);
    return 0;
}