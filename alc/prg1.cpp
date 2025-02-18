#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Student {
private:
    int register_number;
    string student_name;
    string programme_name;
    string phone_number;

public:
    Student(int regNo, string name, string programme, string phone) {
        register_number = regNo;
        student_name = name;
        programme_name = programme;
        phone_number = phone;
    }

    void display() const {
        cout << "-----------------------------------" << endl;
        cout << "Register Number: " << register_number << endl;
        cout << "Student Name: " << student_name << endl;
        cout << "Programme Name: " << programme_name << endl;
        cout << "Phone Number: " << phone_number << endl;
    }
};

int main() {
    int n;
    
    while (true) {
        cout << "Enter the number of students: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Invalid input! Please enter a positive integer.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    vector<Student> students;
    
    for (int i = 0; i < n; i++) {
        int regNo;
        string name, programme, phone;

        cout << "Enter details for student " << i + 1 << ":" << endl;
        
        cout << "Register Number: ";
        while (!(cin >> regNo)) {
            cout << "Invalid input! Please enter a numeric Register Number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();

        cout << "Student Name: ";
        getline(cin, name);
        cout << "Programme Name: ";
        getline(cin, programme);
        cout << "Phone Number: ";
        getline(cin, phone);

        students.push_back(Student(regNo, name, programme, phone));
    }

    cout << "\nStudent Details:\n";
    for (vector<Student>::const_iterator it = students.begin(); it != students.end(); ++it) {
        it->display();
    }

    return 0;
}