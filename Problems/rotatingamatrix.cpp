#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout<<"Enter n(rows) and m(columns): \n";
    int n, m;
    cin>>n>>m;
    
    cout<<"Enter the elements in your matrix: \n";
    vector<vector<int>> matrix(n, vector<int>(m));
    for(auto& row: matrix){
        for(auto& element: row){
            cin>>element;
        }
    }
    
    cout<<"Rotated matrix of the given matrix: \n";
    vector<vector<int>> result(m, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            result[j][i] = matrix[i][j];
        }
    }
    // for(int i = 0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<result[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // vector<vector<int>> reverse(m, vector<int>(n));
    for(int i = 0; i<n; i++){
        int left =0, right = n-1;
        while(left<right){
            int temp = result[i][left];
            result[i][left]=result[i][right];
            result[i][right] = temp;
            left++;
            right--;
        }
    }
    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}