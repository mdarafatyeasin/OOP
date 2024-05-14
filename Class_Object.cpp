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
};

int main()
{
    Student yeasin("yeasin", 10);
    cout<<yeasin.name;
    return 0;
}