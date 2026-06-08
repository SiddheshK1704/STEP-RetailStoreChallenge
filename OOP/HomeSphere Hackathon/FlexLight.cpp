#include <iostream>
#include <vector>
using namespace std;

class Light {
public:
    string name;
    int brightness;
    static int defaultCount;

    Light(string n, int b) {
        name = n;
        brightness = b;
    }

    Light(string n) : Light(n, 70) {
        defaultCount++;
    }
};

int Light::defaultCount = 0;

int main() {
    int n;
    cin >> n;

    vector<Light> lights;

    while (n--) {
        string type, name;
        cin >> type >> name;

        if (type == "FULL") {
            int b;
            cin >> b;
            lights.push_back(Light(name, b));
        }
        else {
            lights.push_back(Light(name));
        }
    }

    for (auto &l : lights) {
        cout << l.name << ": " << l.brightness << endl;
    }

    cout << "Default Constructors Used: "
         << Light::defaultCount << endl;

    return 0;
}