#include <iostream>
#include <vector>
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
    cout<<"Spiral order traversal: \n";
    
    vector<int> ans;
    int top = 0;
    int bottom = matrix.size()-1;
    int left = 0;
    int right = matrix.size() -1;

    while((top<=bottom)&&(left<=right)){
        //top row
        for(int i = left;i<=right;i++){
        ans.push_back(matrix[top][i]);
        }
        top++;//go to the next one
        
        //right column
        for(int i = top; i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        //bottom row
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        //left column
        if(left<=right){
            for(int i=bottom; i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}