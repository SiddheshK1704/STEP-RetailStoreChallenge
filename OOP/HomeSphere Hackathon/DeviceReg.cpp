#include <iostream>
using namespace std;

class Device {
    string id, name;
    int watts;

public:
    Device(string i, string n, int w) {
        id = i;
        name = n;
        watts = w;
    }

    string category() {
        if(watts>=100){
            return "High";
        }
        return "Standard";    }

    void display() {
        cout << "Device " << id << " (" << name << ")\n";
        cout << "Power: " << watts << " W\n";
        cout << "Category: " << category() << endl;
    }
};

int main() {
    string id, name;
    int watts;

    cin >> id >> name >> watts;

    Device d(id, name, watts);
    d.display();

    return 0;
}