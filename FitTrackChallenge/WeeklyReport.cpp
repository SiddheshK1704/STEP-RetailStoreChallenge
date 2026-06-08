#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
long TotalSteps(vector<long> arr){
    long total = 0;
    for(int i: arr){
        total += i;
    }
    return total;
}

float AverageSteps(vector<long> arr){
    float average = TotalSteps(arr)/7;
    return average;
}

int TotalMins(vector<int> arr){
    int totalmins = 0;
    for(int i: arr){
        totalmins+=i;
    }
    return totalmins;
}

int GoalDays(vector<long> arr,int s){
    int goaldays=0;
    for(int i: arr){
        if(i>=s){
            goaldays++;
        }
    }
    return goaldays;
}
int MostActiveDay(vector<int> arr){
    int maxidx = 0;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[maxidx]){
            maxidx=i;
        }
    }
    return maxidx+1;
}

int FitnessScore(vector<long> arr1, int s, vector<int> arr2){
    int goalDays = GoalDays(arr1,s);
    int totalactivemins = TotalMins(arr2);
    int fitnesscore = (goalDays*10)+(totalactivemins/10);
    
    return fitnesscore;
}

string rating(vector<long> arr1, int s, vector<int> arr2){
    int fitscore = FitnessScore(arr1,s,arr2);
    if(fitscore>=50){
        return "Excellent";
    }
    else if(fitscore>=30){
        return "Good";
    }
    else if(fitscore>=15){
        return "Fair";
    }
    else{
        return "Need Improvement";
    }
}

int main()
{
    int stepgoal;
    cout<<"Enter your step goal: \n";
    cin>>stepgoal;
    
    vector<long> weeklysteps(7);
    cout<<"Enter your daily step count for the whole week: \n";
    for(int i=0;i<7;i++){
        cin>>weeklysteps[i];
    }
    vector<int> activeminutes(7);
    cout<<"Enter your daily active minutes for the whole week: \n";
    for(int i=0;i<7;i++){
        cin>>activeminutes[i];
    }
    
    cout<<"Total Steps: "<<TotalSteps(weeklysteps)<<"\n";
    cout<<"Average Steps: "<<fixed<<setprecision(2)<<AverageSteps(weeklysteps)<<"\n";
    cout<<"Active Minutes: "<<TotalMins(activeminutes)<<"\n";
    cout<<"Goal days: "<<GoalDays(weeklysteps,stepgoal)<<"\n";
    cout<<"Most Active Day: "<<MostActiveDay(activeminutes)<<"\n";
    cout<<"Fitness Score: "<<FitnessScore(weeklysteps, stepgoal, activeminutes)<<"\n";
    cout<<"Rating: "<<rating(weeklysteps, stepgoal, activeminutes)<<"\n";
    return 0;
}