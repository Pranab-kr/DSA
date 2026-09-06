#include<iostream>
using namespace std;

class Human{
    string religion;

    public:
    string name;
    int age,weight;
};

// first parent class constructor gonna called when obj is created then child class
class Student: private Human {
    int roll_no, fees;

    public:
        Student(string name,int age, int wieght, int roll_no, int fees){
            this->name = name;
            this->age = age;
            this->weight = weight;
            this->roll_no = roll_no;
            this->fees = fees;
        }

        void display(){
            cout<<this->name<<" "<<"Age: "<< this->age<<" weight: "<<this->weight<<" roll_no: "
            <<this->roll_no<<" fees: "<<this->fees<<endl;
        }
};

class Teacher: public Human {
    int salary, id;
};

int main(int argc, char const *argv[])
{

    Student s1("Pranab",21,65,122,50000);
    s1.display();

    Teacher t1;
    t1.name = "Monoj";

    return 0;
}
