#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the temperature matrix size: \n";
    int year, month, latitude, longitude;
    cin>>year>>month>>latitude>>longitude;

    cout<<"Enter the elements of the 4D matrix: \n";
    vector<vector<vector<vector<int>>>> temperature(year, vector<vector<vector<int>>>(month, vector<vector<int>>(latitude, vector<int>(longitude))));
    for(int i = 0; i<year;i++){
        for(int j = 0; j<month;j++){
            for(int k = 0; k < latitude; k++){
                for(int l = 0 ; l<longitude;l++){
                    cin>>temperature[i][j][k][l];
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i<year;i++){
        for(int j = 0; j<month;j++){
            for(int k = 0; k < latitude; k++){
                for(int l = 0 ; l<longitude;l++){
                    sum +=temperature[i][j][k][l];
                }
            }
        }
    }

    double avg = (double)sum/(year*month*latitude*longitude);
    cout<<"The Average temperature is: "<<avg<<"\n";
}