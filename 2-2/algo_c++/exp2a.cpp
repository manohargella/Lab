#include <iostream>
#include <string>
using namespace std;

class Staff{
    protected:
        int Staffid;
        string Name;
        string Phone;
        float Salary;
    public:
        Staff(){}
        Staff(int id, string name, string phone, float salary){
            Staffid = id;
            Name = name;
            Phone = phone;
            Salary = salary;
        }
        
        void display(){
            cout << "Staff ID: " << Staffid << endl;
            cout << "Name: " << Name << endl;
            cout << "Phone: " << Phone << endl;
            cout << "Salary: " << Salary << endl;
        }
};

class Teaching : public Staff{
    private:
        string domain;
        int publications;
    public:
        Teaching(){ }

        Teaching(int id, string name, string phone, float salary, string d, int p)
            :Staff(id, name, phone, salary){
                domain = d;
                publications = p;
            }
        
        void display(){
            Staff::display();
            cout << "Domain: " << domain << endl;
            cout << "Publications: " << publications << endl; 
        }   
};

class Technical : public Staff{
    private:
        string skills;
    public:
        Technical(){}

        Technical(int id, string name, string phone, float salary, string s)
            :Staff(id, name, phone, salary){
                skills = s;
            }
        
        void display(){
            Staff::display();
            cout << "Skills: " << skills;
        }

};

class Contract : public Staff{
    private:
        int period;
    public:
        Contract(){}
        Contract(int id, string name, string phone, float salary, int p)
            :Staff(id, name, phone, salary){
                period = p;
            }
        
        void display(){
            Staff::display();
            cout << "Period: " << period << endl;
        }
};


int main(){
    Teaching t1(1, "Manohar Gella", "7981538699", 60000, "Computer Science", 20);
    t1.display();
    cout << endl;
    Contract c1(1, "Gella Manohar", "9911223344", 900000, 5);
    c1.display();
}