#include <bits/stdc++.h>
using namespace std;

class Parent{
    public:
    string name;

    Parent(string name){
        this->name = name;
    }

    void Relation(string name){
        cout<<name;
    }
};

class Yeasin:public Parent{
    public:
    Yeasin(string name) : Parent(name) {}
    void Relation(){
        cout<<"Yeasin's parent is " << name << endl;
    }
};

int main()
{
    Yeasin yeasin("jalal");
    yeasin.Relation();
    return 0;
}