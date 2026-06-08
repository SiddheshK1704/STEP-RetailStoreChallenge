#include <iostream>
using namespace std;

class Thermostat {
private:
    int temperature;
    int rejected;

    bool apply(int temp) {
        if (temp >= 16 && temp <= 30) {
            temperature = temp;
            return true;
        }
        rejected++;
        return false;
    }

public:
    Thermostat(int temp) {
        temperature = temp;
        rejected = 0;
    }

    void setTemp(int t) {
        apply(t);
    }

    void up(int d) {
        apply(temperature + d);
    }

    void down(int d) {
        apply(temperature - d);
    }

    int getTemp() {
        return temperature;
    }

    int getRejected() {
        return rejected;
    }
};

int main() {
    int startTemp, n;
    cin >> startTemp;

    Thermostat t(startTemp);

    cin >> n;

    while (n--) {
        string op;
        int val;

        cin >> op >> val;

        if (op == "SET")
            t.setTemp(val);
        else if (op == "UP")
            t.up(val);
        else if (op == "DOWN")
            t.down(val);
    }

    cout << "Final Temperature: " << t.getTemp() << endl;
    cout << "Rejected Operations: " << t.getRejected() << endl;

    return 0;
}