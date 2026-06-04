#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the size of the 3D matrix: \n";
    int depth, rows, columns;
    cin>>depth>>rows>>columns;
    cout<<"Enter the elements of the 3D matrix: \n";
    vector<vector<vector<int>>> matrix(depth, vector<vector<int>> (rows, vector<int> (columns)));
    for(int i = 0;i<depth;i++){
        for(int j = 0;j<rows;j++){
            for(int k = 0; k<columns;k++){
                cin>>matrix[i][j][k];
            }
        }
    }

    cout<<"Sum of the voxel elements in the 3D matrix: \n";
    int sum = 0;
    for(int i = 0;i<depth;i++){
        for(int j = 0;j<rows;j++){
            for(int k = 0; k<columns;k++){
                sum += matrix[i][j][k];
            }
        }
    }
    cout<<sum<<"\n";
}