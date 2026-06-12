#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual int area() = 0;
    virtual string name() = 0;

};

class Rectangle : public Shape {
    int w, h;

public:
    Rectangle(int w, int h) {
        this->w = w;
        this->h = h;
    }

    int area() override {
        return w * h;
    }

    string name() override {
        return "Rectangle";
    }
};

class Square : public Shape {
    int s;

public:
    Square(int s) {
        this->s = s;
    }

    int area() override {
        return s * s;
    }

    string name() override {
        return "Square";
    }
};

class Triangle : public Shape {
    int b, h;

public:
    Triangle(int b, int h) {
        this->b = b;
        this->h = h;
    }

    int area() override {
        return (b * h) / 2;
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
            int b, h;
            cin >> b >> h;
            shapes.push_back(new Triangle(b, h));
        }
    }

    int totalArea = 0;

    for (Shape* shape : shapes) {
        int a = shape->area();

        cout << shape->name() << " area: " << a << endl;

        totalArea += a;
    }

    cout << "Total Area: " << totalArea << endl;

    return 0;
}