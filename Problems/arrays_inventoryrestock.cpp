#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int total(const vector<int> arr){
    int total = 0;
    for(int i: arr){
        total+=i;
    }
    return total;
}

vector<int> LowItems(const vector<int> arr, int t){
    vector<int> lowitems;
    for(int i: arr){
        if(i<t){
            lowitems.push_back(i);
        }
    }
    return lowitems;
}

int Lowest(const vector<int> arr){
    return min_element(arr.begin(), arr.end()) - arr.begin()+1;
}

int Restock(const vector<int> arr, int t){
    int neededunits=0;
    for(int i: arr){
        if(i<t){
            neededunits+=(t-i);
        }
    }
    return neededunits;
}
int main(){
    cout<<"Enter the number of stock levels: \n";
    int n;
    cin>>n;
    cout<<"Enter the stock levels: \n";
    vector<int> stock(n);
    for(auto& i: stock){
        cin>>i;
    }
    cout<<"Enter the Treshold: \n";
    int threshold;
    cin>>threshold;
    
    cout<<"------------Details--------------\n";
    
    cout<<"Total Stock: "<<total(stock)<<"\n";
    
    vector<int> low = LowItems(stock, threshold);
    cout<<"Low Items: ";
    for(int x:low){
        cout<<x<<" ";
    }
    cout<<"\n";
    
    cout<<"Lowest Stock Item: "<<Lowest(stock)<<"\n";
    
    cout<<"Restock Unit: "<<Restock(stock,threshold)<<"\n";
    
    return 0;
}