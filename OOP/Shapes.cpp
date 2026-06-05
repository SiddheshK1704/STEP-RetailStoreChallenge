#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Shape {
public:
    virtual int perimeter() = 0;
    virtual string name() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    int w, h;

public:
    Rectangle(int width, int height) {
        w = width;
        h = height;
    }

    int perimeter() override {
        return 2 * (w + h);
    }

    string name() override {
        return "Rectangle";
    }
};

class Square : public Shape {
    int s;

public:
    Square(int side) {
        s = side;
    }

    int perimeter() override {
        return 4 * s;
    }

    string name() override {
        return "Square";
    }
};

class Triangle : public Shape {
    int a, b, c;

public:
    Triangle(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    int perimeter() override {
        return a + b + c;
    }

    string name() override {
        return "Triangle";
    }
};

int main() {
    int n;
    cin >> n;

    vector<Shape*> shapes;

    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;

        if (type == "RECT") {
            int w, h;
            cin >> w >> h;
            shapes.push_back(new Rectangle(w, h));
        }
        else if (type == "SQUARE") {
            int s;
            cin >> s;
            shapes.push_back(new Square(s));
        }
        else if (type == "TRIANGLE") {
            int a, b, c;
            cin >> a >> b >> c;
            shapes.push_back(new Triangle(a, b, c));
        }
    }

    int total = 0;

    for (Shape* shape : shapes) {
        int p = shape->perimeter();   // polymorphic call
        cout << shape->name() << " Perimeter: " << p << endl;
        total += p;
    }

    cout << "Total: " << total << endl;

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}