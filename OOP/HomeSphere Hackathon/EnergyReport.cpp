#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Device {
protected:
    string name;
    int watts;

public:
    Device(string n, int w) {
        name = n;
        watts = w;
    }

    virtual int monthlyUnits() = 0;
    virtual string category() = 0;

    string getName() {
        return name;
    }

    virtual ~Device() {}
};

class Light : public Device {
public:
    Light(string n, int w)
        : Device(n, w) {}

    int monthlyUnits() override {
        return watts * 150;
    }

    string category() override {
        return "Comfort";
    }
};

class Speaker : public Device {
public:
    Speaker(string n, int w)
        : Device(n, w) {}

    int monthlyUnits() override {
        return watts * 60;
    }

    string category() override {
        return "Comfort";
    }
};

class Camera : public Device {
public:
    Camera(string n, int w)
        : Device(n, w) {}

    int monthlyUnits() override {
        return watts * 720;
    }

    string category() override {
        return "Security";
    }
};

int main() {
    int n;
    cin >> n;

    vector<Device*> devices;

    while (n--) {
        string type, name;
        int watts;

        cin >> type >> name >> watts;

        if (type == "LIGHT")
            devices.push_back(new Light(name, watts));
        else if (type == "SPEAKER")
            devices.push_back(new Speaker(name, watts));
        else if (type == "CAMERA")
            devices.push_back(new Camera(name, watts));
    }

    int total = 0;
    int comfort = 0;
    int security = 0;

    Device* expensive = devices[0];
    int maxUnits = expensive->monthlyUnits();

    for (auto d : devices) {
        int units = d->monthlyUnits();

        total += units;

        if (d->category() == "Comfort")
            comfort++;
        else
            security++;

        if (units > maxUnits) {
            maxUnits = units;
            expensive = d;
        }
    }

    cout << "Total Monthly Units: "
         << total << endl;

    cout << "Most Expensive: "
         << expensive->getName()
         << " (" << maxUnits << ")" << endl;

    cout << "Comfort Devices: "
         << comfort << endl;

    cout << "Security Devices: "
         << security << endl;

    cout << fixed << setprecision(2);
    cout << "Average Units: "
         << (double)total / devices.size()
         << endl;

    for (auto d : devices)
        delete d;

    return 0;
}