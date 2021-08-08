#include<iostream>
#include<string>

using namespace std;

class student
{
private:
    /* data */
    int roll;
    int ph;
    public:
    string name;
    int Class;
    void setData( int roll, int ph);
    void getData()
    {
        cout<<"The name of the student "<<name<<endl;
        cout<<"the class of the student "<<Class<<endl;
        cout<<"The roll no of the student "<<roll<<endl;
        cout<<"The phone no of the student "<<ph<<endl;
    }
};

void student :: setData(int r, int p)
    {
    roll = r ;
    ph = p;
    }

int main ()
{
    student Nasir;
    Nasir.name = "Nasir Ali";
    Nasir.Class = 13;
    Nasir.setData(17, 76330);
    Nasir.getData();

    return 0;
}