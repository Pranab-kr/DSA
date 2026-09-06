#include <iostream>
using namespace std;

class Human{
    public:
    string name;

    void display(){
        cout<<"Name: "<<name<<endl;
    }

};

class Engineer: public virtual Human {
    public:
    string special;

};

class youtuber: public virtual Human {
    public:
    int subs;

};

class codeTeach:public Engineer , public youtuber {
    public:
    int salary;

    codeTeach(string name, int subs, string special, int salary){
        this->name = name;
        this->subs = subs;
        this->special = special;
        this->salary = salary;
    }

};

int main(int argc, char const *argv[])
{
    codeTeach A1("Pranab",20000, "IT" , 99);

    A1.display();
    
    return 0;
}
