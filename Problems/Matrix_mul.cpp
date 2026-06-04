#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

int main()
{
    int m,n,r,c;
    cout<<"Enter the size of the routes matrix: \n";
    cin>>n>>m;
    cout<<"Enter the size of the hubs matrix: \n";
    cin>>r>>c;
    
    if(m!=r){
        cout<<"Matrix Multiplication not possible \n";
    }
    else{
        vector<vector<int>> routes(n,vector<int>(c));
    cout<<"Enter the elements of the routes matrix: \n";
    for(int i = 0; i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>routes[i][j];
        }
    }
    vector<vector<int>> hubs(r,vector<int>(c));
    cout<<"Enter the elements of the hubs matrix: \n";
    for(int i = 0; i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>hubs[i][j];
        }
    }

        cout<<"Cost matrix of size "<<n<<" by "<<c<<":\n";
        vector<vector<int>> cost(n,vector<int>(c));
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<c;j++){
                for(int k = 0;k<m;k++){
                    cost[i][j]+=routes[i][k]*hubs[k][j];
                }
            }
        }
        
        for(auto row: cost){
            for(int x: row){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
    
    return 0;
}