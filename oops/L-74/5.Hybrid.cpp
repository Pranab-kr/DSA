#include <iostream>
using namespace std;

// MUltiple + hierachical

class Student {
    public:
    void print(){
        cout<<"I am student"<<endl;
    }
};

class Male {
    public:
    void MalePrint(){
        cout<<"I'm Male"<<endl;
    }
};

class Female {
    public:
    void FemalePrint(){
        cout<<"I'm Female"<<endl;
    }
};

class Boy: public Student , public Male{
    public:
    void BoyPrint(){
        cout<<"I'm Boy"<<endl;
    }
};

class Girl: public Student, public Female{
    public:
    void GirlPrint(){
        cout<<"I'm Girl"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Girl G1;
    G1.GirlPrint();
    Boy B1;
    B1.MalePrint();

    return 0;
}
