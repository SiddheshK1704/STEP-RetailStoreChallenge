#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Emailable {
    virtual ~Emailable() {}
};

struct Textable {
    virtual ~Textable() {}
};

struct User {
    string name;

    User(string n) : name(n) {}

    virtual ~User() {}
};

struct EmailUser : User, Emailable {
    EmailUser(string n) : User(n) {}
};

struct PhoneUser : User, Textable {
    PhoneUser(string n) : User(n) {}
};

struct SmartUser : User, Emailable, Textable {
    SmartUser(string n) : User(n) {}
};

User* make(const string& t, const string& n) {
    if (t == "EMAIL")
        return new EmailUser(n);

    if (t == "PHONE")
        return new PhoneUser(n);

    return new SmartUser(n);
}

string channels(User* u) {
    string result = "";

    if (dynamic_cast<Emailable*>(u))
        result += "Email";

    if (dynamic_cast<Textable*>(u)) {
        if (!result.empty())
            result += " ";

        result += "Text";
    }

    if (result.empty())
        return "-";

    return result;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    int reach = 0;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        istringstream iss(line);

        string t, nm;
        iss >> t >> nm;

        User* u = make(t, nm);

        string caps = channels(u);

        if (caps != "-")
            reach++;

        cout << u->name << ": " << caps << "\n";

        delete u;
    }

    cout << "Reachable: " << reach << "\n";

    return 0;
}