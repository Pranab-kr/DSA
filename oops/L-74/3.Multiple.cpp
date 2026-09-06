#include <iostream>
using namespace std;

class Engineer {
    public:
    string special;

    void work(){
        cout<<"I have specializtion in "<<special<<endl;
    }
};

class youtuber {
    public:
    int subs;

    void creator(){
        cout<<"I have subs: "<<subs<<endl;
    }
};

// first parent class constructor gonna called  order wise mention,when obj is created then child class
// Multiple inheritance
class codeTeach:public Engineer , public youtuber {
    public:
    string name;

    codeTeach(string name, int subs, string special){
        this->name = name;
        this->subs = subs;
        this->special = special;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        work();
        creator();
    }
};

int main(int argc, char const *argv[])
{
    codeTeach A1("Pranab",20000, "IT" );

    A1.display();
    
    return 0;
}
