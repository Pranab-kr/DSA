#include <iostream>
using namespace std;

class Person {
    protected:
    string name; // can't be access in main

    public:
    void intro(){
        cout<<"Hello my name is: "<<name<<endl;
    }
};

class Employee: public Person {
    protected:
        int salary; // can't be access in main

    public:
        void monthly_sal(){
            cout<<"My Monthly Salary is: "<<salary<<endl;
        }
};

class Manager: public Employee {
    public:
        string dept; // can be access in main()

        Manager(string name, int salary , string dept){
            this->name = name;
            this->salary = salary;
            this->dept = dept;
        }

        void work(){
            cout<<"I'm leading the Dept: "<<dept<<endl;
        }
};


int main(){
    Manager A1("Pranab", 200, "Finance");
   A1.work();
   A1.monthly_sal();
   A1.intro();

    return 0;
}