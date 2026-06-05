#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int score1, score2, score3;

public:
    Student(string n, int s1, int s2, int s3) {
        name = n;
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }

    int total() {
        return score1 + score2 + score3;
    }

    char grade() {
        int t = total();

        if (t >= 240)
            return 'A';
        else if (t >= 180)
            return 'B';
        else
            return 'C';
    }

    string getName() {
        return name;
    }
};

int main() {
    string name;
    int s1, s2, s3;
    
    cout<<"Enter the name of the Student with their 3 scores:\n";
    cin >> name >> s1 >> s2 >> s3;

    if((s1>100 || s1<0) || (s2>100 || s2<0) || (s3>100 || s3<0)){
        cout<<"Invalid score entered. Scores must be between 0 and 100."<<endl;
    }

    Student stu(name, s1, s2, s3);

    cout << "Student: " << stu.getName() << endl;
    cout << "Total: " << stu.total() << endl;
    cout << "Grade: " << stu.grade() << endl;

    return 0;
}