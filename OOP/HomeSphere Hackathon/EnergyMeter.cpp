#include <iostream>
#include <vector>
using namespace std;

class Device {
protected:
    string name;

public:
    Device(string n) {
        name = n;
    }

    virtual int energy(int hours) = 0;
    virtual string type() = 0;

    string getName() {
        return name;
    }

    virtual ~Device() {}
};

class Light : public Device {
    int watts;

public:
    Light(string n, int w)
        : Device(n), watts(w) {}

    int energy(int hours) override {
        return watts * hours;
    }

    string type() override {
        return "Light";
    }
};

class Camera : public Device {
    int watts;

public:
    Camera(string n, int w)
        : Device(n), watts(w) {}

    int energy(int hours) override {
        return watts * 24;
    }

    string type() override {
        return "Camera";
    }
};

class Heater : public Device {
    int watts;

public:
    Heater(string n, int w)
        : Device(n), watts(w) {}

    int energy(int hours) override {
        return watts * hours + 100;
    }

    string type() override {
        return "Heater";
    }
};

int main() {
    int hours;
    cin >> hours;

    int n;
    cin >> n;

    vector<Device*> devices;

    while (n--) {
        string type, name;
        int watts;

        cin >> type >> name >> watts;

        if (type == "LIGHT")
            devices.push_back(new Light(name, watts));
        else if (type == "CAMERA")
            devices.push_back(new Camera(name, watts));
        else if (type == "HEATER")
            devices.push_back(new Heater(name, watts));
    }

    for (auto d : devices) {
        cout << d->getName()
             << " (" << d->type()
             << ") Energy: "
             << d->energy(hours)
             << " Wh" << endl;
    }

    for (auto d : devices)
        delete d;

    return 0;
}