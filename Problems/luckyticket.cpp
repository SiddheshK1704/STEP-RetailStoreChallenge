//Palindrome number
#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int original = n;
    int rev = 0;
    while(n>0){
        rev = rev*10 + (n%10);
        n/=10;
    }
    if(original==rev){
        return true;
    }
    else{
        return false;
    }
}
int DigSum(int n){
    int sum =0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    if(isPalindrome(n)&& (DigSum(n)>20)){
        cout<<"Lucky Ticket"<<endl;
    }
    else{
        cout<<"Normal Ticket"<<endl;
    }
}