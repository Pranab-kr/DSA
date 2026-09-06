#include<iostream>
using namespace std;

class Human{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun(){
        a = 10;
        b = 20;
        c = 30;
    }
};

int main(int argc, char const *argv[])
{
    Human h1;

    h1.c = 100;
    h1.fun();

    return 0;
}
