#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int zones(vector<float> arr, int a){
    float maxHR = 220 - a;
    int restcount=0;
    int fatburncount=0;
    int cardiocount=0;
    int peakcount = 0;
    for(float i: arr){
        float ratio = i/maxHR;
        if(ratio<(0.5)){
            restcount++;
        }
        else if(ratio>=(0.5) && ratio<(0.7)){
            fatburncount++;
        }
        else if(ratio>=(0.7) && ratio<(0.85)){
            cardiocount++;
        }
        else{
            peakcount++;
        }
    }
    
    string zoneNames[]={"Rest","Fat Burn","Cardio","Peak"};
    vector<int> HRzones={restcount,fatburncount,cardiocount,peakcount};
    int dominantidx = 0;
    for(int i=0;i<HRzones.size()-1;i++){
        if(dominantidx<HRzones[i]){
            dominantidx=i;
        }
    }
    
    cout<<"Rest: "<<restcount<<"\n";
    cout<<"Fat Burn: "<<fatburncount<<"\n";
    cout<<"Cardio: "<<cardiocount<<"\n";
    cout<<"Peak: "<<peakcount<<"\n";
    
    cout<<"Dominant Zone: "<<zoneNames[dominantidx]<<"\n";
    return 0;
}

int main()
{
    int age;
    cout<<"Enter your age: \n";
    cin>>age;
    
    int numofreadings;
    cout<<"Enter the number of heart rate readings: \n";
    cin>>numofreadings;
    
    vector <float> HRreadings(numofreadings);
    cout<<"Enter the Heart rate readings: \n";
    for( auto& i: HRreadings){
        cin>>i;
    }
    
    zones(HRreadings,age);

    return 0;
}