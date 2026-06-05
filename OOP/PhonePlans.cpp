#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Plan { // abstract base, encapsulated fields
    string planOwner;

protected:
    long long gb;

public:
    Plan(string o, long long g) : planOwner(o), gb(g) {}

    string owner() {
        return planOwner;
    }

    virtual long long monthlyCost() = 0;
    virtual string kind() = 0;

    virtual ~Plan() {}
};

class BasicPlan : public Plan {
public:
    BasicPlan(string o, long long g) : Plan(o, g) {}

    // Basic plan costs 100 + 10 per GB
    long long monthlyCost() override {
        return 100 + 10 * gb;
    }

    string kind() override {
        return "Basic";
    }
};

class PremiumPlan : public Plan {
public:
    PremiumPlan(string o, long long g) : Plan(o, g) {}

    // Premium plan costs 250 + 5 per GB
    long long monthlyCost() override {
        return 250 + 5 * gb;
    }

    string kind() override {
        return "Premium";
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<Plan*> plans;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        istringstream iss(line);
        string tag, owner;
        long long g;

        iss >> tag >> owner >> g;

        if (tag == "BASIC")
            plans.push_back(new BasicPlan(owner, g));
        else
            plans.push_back(new PremiumPlan(owner, g));
    }

    Plan* cheapest = nullptr;
    long long cheapestCost = 0;

    for (Plan* p : plans) {
        long long c = p->monthlyCost();

        cout << p->owner()
             << " (" << p->kind() << "): "
             << c << "\n";

        if (cheapest == nullptr || c < cheapestCost) {
            cheapestCost = c;
            cheapest = p;
        }
    }

    cout << "Cheapest: " << cheapest->owner() << "\n";

    for (Plan* p : plans)
        delete p;

    return 0;
}