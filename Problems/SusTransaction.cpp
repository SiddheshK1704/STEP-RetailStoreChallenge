/*Transaction is suspicious if:
it contains three or more occorunces of the same digit
we have to print suspicious or safe */
#include<iostream>
using namespace std;

int susOccurences(int n){
    int count[10]={0};
    while(n>0){
        int digit = n%10;
        count[digit]++; //to get the count of each digit we get by extraction
        n/=10;
    }
    for(int i=0;i<10;i++){//if occurences of a digit are more than or equal to 3, we return 1, which means it is suspicious
        if(count[i]>=3){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(susOccurences(n)){
        cout<<"Suspicious"<<endl;
    }
    else{
        cout<<"Safe"<<endl;
    }
}