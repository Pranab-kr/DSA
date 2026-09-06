#include <iostream>
using namespace std;

class Human {
    protected:
    string name;
    int age;

    public:
    Human() {
        
    }

    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    void work(){
        cout<<"I am working \n";
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

class Student: public Human {
    int roll_no, fees;

    public:
        // super/parent called
        Student(string name,int age,int roll_no , int fees): Human(name,age) {
            this->roll_no = roll_no;
            this->fees = fees;
        }

        void display(){
            cout<<this->name<<" "<<"Age: "<< this->age<<" roll_no: "
            <<this->roll_no<<" fees: "<<this->fees<<endl;
        }
};

class Teacher: public Human{
    int salary;

    public:
    Teacher(string name,int age,int salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void display(){
            cout<<this->name<<" "<<"Age: "<< this->age<<"salary: "
            <<this->salary<<endl;
        }
};

int main(int argc, char const *argv[])
{
    Student s1("Pranab",21,122,50000);

    s1.work();
    s1.display();

    Teacher A1("Ram",26, 500);
    A1.display();

    return 0;
}
