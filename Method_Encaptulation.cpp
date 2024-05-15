#include <bits/stdc++.h>
using namespace std;

// class 
class Student{
    public:
    string name;
    int roll;


    // contractor
    Student(string name,int roll)
    {
        this->name = name;
        this->roll= roll;
    }

    // method
    void appreciate(){
        if(roll<5){
            cout<<" is a good student ";
        }
        else{
            cout<<" need to improve ";
        }
    };
};

int main()
{
    Student yeasin("yeasin", 3);
    cout<<yeasin.name;
    yeasin.appreciate();
    return 0;
}