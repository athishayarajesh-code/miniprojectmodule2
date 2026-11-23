#include <iostream>
using namespace std;

class student {
private:
    int rollNo;
    string name;
    float marks;

public:
    student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    int getrollNo() {
        return rollNo;
    }

    string getname() {
        return name;
    }

    float getmarks() {
        return marks;
    }


    void setmarks(float m) {
        if (m < 0 ||  m > 100) {
            cout << "Invalid marks for " << name << ", set to 0" << endl;
            marks = 0;
        }
        else {
            marks = m;
        }
    }   
    void display() {
        cout << rollNo << " | " << name
             << " | " << marks << endl;
    }
};

void printResult(student& s) {
 cout << s.getname() << " : "
         << (s.getmarks() >= 40 ? "Pass" : "Fail") << endl;
}

int main() {
    student batch[3] = {
        student(101, "Asha", 82),
        student(102, "Rahul", 35),
        student(103, "Meera", 105),
    };

    for (int i = 0; i < 3; i++)
        batch[i].display();

    batch[1].setmarks(45);

    for (int i = 0; i < 3; i++)
        printResult(batch[i]);

    return 0;
}
