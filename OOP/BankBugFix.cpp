#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct Account { string owner; long long balance; Account(string o,long long
b):owner(o),balance(b){} virtual long long interest()=0;
// This method contains a BUG. Find it and fix it.
// The final balance is the balance PLUS the account's interest.
long long finalBalance(){ return balance + interest(); }
virtual ~Account(){} };
// TODO: Implement interest() from scratch: a savings account earns 5% of its balance.
struct Savings:Account{ Savings(string o,long long b):Account(o,b){} long long
interest()override{return balance * (5/100.0);} };
struct Current:Account{ Current(string o,long long b):Account(o,b){} long long
interest()override{return 0;} }; // no interest
Account* make(const string&t,const string&o,long long b){ if(t=="SAVINGS")return new
Savings(o,b); return new Current(o,b); }
int main(){ int n; cin>>n; cin.ignore(); long long total=0;
for(int i=0;i<n;i++){ string line; getline(cin,line); istringstream iss(line); string t,o; long long b;
iss>>t>>o>>b; Account*a=make(t,o,b); long long fb=a->finalBalance(); total+=fb; cout<<a->owner<<": "<<fb<<"\n"; delete a; }
cout<<"Total: "<<total<<"\n"; return 0; }