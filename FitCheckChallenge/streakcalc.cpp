#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;
int activedays(vector<int> arr){
    int active = 0;
    for (int i : arr){
        if(i==1){
            active++;
        }
    }
    return active;
}
int longest(vector<int> arr){
    int maxstreak = 0;
    int currstreak = 0;
    for(int i:arr){
        if(i == 1){
            currstreak++;
            maxstreak = max(maxstreak, currstreak);
        }
        else{
            currstreak = 0;
        }
    }
    return maxstreak;
}
int current(vector<int> arr){
    int curr = 0;
    for(int i: arr){
        if(i==1){
            curr++;
        }
        else{
            curr = 0;
        }
    }
    return curr;
}
int main(){
    cout<<"Enter the number of days: \n";
    int n;
    cin>>n;
    
    cout<<"Enter the activeness: \n";
    vector<int> ar1(n);
    for(auto& i: ar1){
        cin>>i;
    }
    
    cout<<"------------Details-------------\n";
    cout<<"Active days: "<< activedays(ar1)<<"\n";
    cout<<"Longest Streak: "<< longest(ar1)<<"\n";
    cout<<"Current Streak: "<< current(ar1)<<"\n";
    
    return 0;
}