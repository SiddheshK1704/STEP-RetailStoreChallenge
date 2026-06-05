#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Account {
    long long balance; // private
    int rejected = 0;

public:
    Account(long long b) : balance(b) {}

    // Accept only positive amounts
    void deposit(long long amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            rejected++;
        }
    }

    // Withdraw only when 0 < amount <= balance
    void withdraw(long long amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            rejected++;
        }
    }

    long long getBalance() {
        return balance;
    }

    int getRejected() {
        return rejected;
    }
};

int main() {
    long long start;
    int n;
    cin >> start >> n;
    cin.ignore();

    Account acc(start);

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        istringstream iss(line);
        string op;
        long long v;

        iss >> op >> v;

        if (op == "DEPOSIT")
            acc.deposit(v);
        else if (op == "WITHDRAW")
            acc.withdraw(v);
    }

    cout << "Balance: " << acc.getBalance() << "\n";
    cout << "Rejected: " << acc.getRejected() << "\n";

    return 0;
}