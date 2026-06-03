#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;
long long total(vector<long long> arr){
    long long sum = 0;
    for(int i: arr){
        sum+=i;
    }
    return sum;
}

double Average(vector<long long> arr){
    double avg = total(arr)/arr.size();
    return avg;
}

int BestDays(vector<long long> arr){
    int bestval = arr[0];
    int bestidx = 0;
    
    for(int i = 0; i<arr.size();i++){
        if(arr[i]>bestval){
            bestval = arr[i];
            bestidx = i;
        }
    }
    return bestidx + 1;
}

int goal(vector<long long> arr){
    int count = 0;
    for(int i: arr){
        if(i>=10000){
            count++;
        }
    }
    return count;
}
int main(){
    cout<<"Enter the number of days for which the Steps are to be analyzed: \n";
    int n;
    cin>>n;
    
    cout<<"Enter the number of steps on each day: \n";
    vector<long long> steparr(n);
    for(auto& i : steparr){
        cin>>i;
    }
    
    cout<<"Total steps:\n"<<total(steparr)<<"\n";
    cout<<"Average steps:\n"<<Average(steparr)<<"\n";
    cout<<"Best day:\n"<<BestDays(steparr)<<"\n";
    cout<<"Goal days:\n"<<goal(steparr)<<"\n";
    
    return 0;
}