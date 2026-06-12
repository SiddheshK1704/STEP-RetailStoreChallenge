#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Payable {
public:
    virtual long long pay() = 0;
    virtual string getName() = 0;
};

class HourlyWorker : public Payable {
    string name;
    long long rate;
    long long hours;

public:
    HourlyWorker(string n, long long r, long long h)
        : name(n), rate(r), hours(h) {}

    long long pay() override {
        return rate * hours;
    }

    string getName() override {
        return name;
    }
};

class SalariedWorker : public Payable {
    string name;
    long long annual;

public:
    SalariedWorker(string n, long long a)
        : name(n), annual(a) {}

    long long pay() override {
        return annual / 12;
    }

    string getName() override {
        return name;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Payable*> workers;

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type == "HOURLY") {
            string name;
            long long rate, hours;

            cin >> name >> rate >> hours;

            workers.push_back(
                new HourlyWorker(name, rate, hours)
            );
        }
        else if (type == "SALARIED") {
            string name;
            long long annual;

            cin >> name >> annual;

            workers.push_back(
                new SalariedWorker(name, annual)
            );
        }
    }

    long long totalPayroll = 0;

    for (Payable* worker : workers) {
        long long salary = worker->pay();

        cout << worker->getName()
             << ": "
             << salary
             << "\n";

        totalPayroll += salary;
    }

    cout << "Total Payroll: "
         << totalPayroll
         << "\n";

    return 0;
}