#include <iostream>
using namespace std;

class Device{
        protected:
            string name;
            int watts;
            
        public:
            Device(string n, int w){
                name = n;
                watts = w;
            }
        
        virtual void Describe(){
            cout<<"Device: "<<name<<" Watts: "<<watts<<"\n";
        }
    };
    
    class Light:public Device{
        int brightness;
        public:
            Light(string n, int w, int b):Device(n, w){
                brightness = b;
            }
            
            void Describe() override{
                cout<<"Light: "<<name<<" Watts: "<<watts<<"W, "<<brightness<<" % brightness\n";
            }
    };
    
    class Camera:public Device{
        int resolution;
        
        public:
            Camera(string n, int w, int r): Device(n,w){
                resolution = r;
            }
            
            void Describe() override{
                cout<<"Camera: "<<name<<" Watts: "<<watts<<" W, Resolution: "<<resolution<<" P\n";
            }
    };
    
int main (){
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        string type, name;
        cin >> type;

        if (type == "LIGHT") {
            int watts, brightness;
            cin >> name >> watts >> brightness;

            Light l(name, watts, brightness);
            l.Describe();
        }
        else if (type == "CAMERA") {
            int watts, resolution;
            cin >> name >> watts >> resolution;

            Camera c(name, watts, resolution);
            c.Describe();
        }
    }

    return 0;
}