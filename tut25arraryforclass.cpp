#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    public:
    void setiD(void)
    {
        salary = 6969;
        cout<<"Enter the value of employee id ";
        cin>>id;
    }
    void getiD(void)
    {
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main()
{
    // Employee Nasir, prince, Rahul;
    // Nasir.setiD();
    // Nasir.getiD();
    Employee xiaomi[3];
    for (int i = 0; i < 3; i++)
    {
        xiaomi[i].setiD();
        xiaomi[i].getiD();
    }
    
    return 0;
}
