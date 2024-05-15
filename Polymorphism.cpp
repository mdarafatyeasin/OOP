#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    void Status(){
        cout<<"Hello student!";
    }
};

class Yeasin:public Student{
    public:
    int roll;
    Yeasin(int roll){
        this->roll = roll;
    }

    void Status(){
        if(roll <= 5)
        {
            cout<<"He is a good boy";
        }else{
            cout<<"Need to improve";
        }
    }
};

int main()
{
    Yeasin obj(13);
    obj.Status();
    return 0;
}