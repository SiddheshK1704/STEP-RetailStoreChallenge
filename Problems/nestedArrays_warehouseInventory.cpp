#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"Enter n and m: \n";
    int n, m;
    cin>>n>>m;
    
    vector<vector<int>> warehouseA(n,vector<int>(m));
    vector<vector<int>> warehouseB(n,vector<int>(m));
    
    cout<<"Enter the inventory elements of warehouse A: \n";
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>warehouseA[i][j];
        }
    }
    
    cout<<"Enter the inventory elements of warehouse B: \n";
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>warehouseB[i][j];
        }
    }
    
    //combined
    vector<vector<int>> combined(n,vector<int>(m));
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            combined[i][j]=warehouseA[i][j]+warehouseB[i][j];
        }
    }
    
    cout<<"The combined inventory elements are: \n";
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<combined[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}