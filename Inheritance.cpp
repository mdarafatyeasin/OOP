#include <bits/stdc++.h>
using namespace std;

// class 
class Parent{
    public:
    int roll;

    void parentFun(){
        cout<<"this is parent class";
    }
};

class Child:public Parent{
    public:
    string name;

    // Constructor
    Child(string name){
        this->name = name;
        cout<<"this is child class\n";
    }
};

int main()
{
    Child obj("yeasin");

    // by this child object i'm inhabiting the parent class
    obj.parentFun();

    return 0;
}