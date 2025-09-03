#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string usn;
        string name;
        string programme;
        string ph;
};

int main(){
    int n;
    cout << "Enter no of students: ";
    cin >> n;
    Student *s = new Student[n];

    for(int i = 0; i < n; i++){
        cout << "Enter username, name, programme, phoneno of student " << (i+1) << " : ";
        cin >> s[i].usn >> s[i].name >> s[i].programme >> s[i].ph;
    }

    cout << "Details of students\n";
    cout << "Username\t\tName\t\tPrgramme\t\tPhoneno\n";
    
    for(int i = 0; i<n; i++){
        cout << s[i].usn << "\t\t" << s[i].name << "\t\t" << s[i].programme << "\t\t" << s[i].ph << endl;
    }

    return 0;
}