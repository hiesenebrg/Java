#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << id;
        cout << "The id of this emplyee " << id << " and this is employee nomber " << count << endl;
    }

    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

// Count is the static data member of class employee
int Employee::count; //default value is 0

int main()
{
    Employee Nasir, Arjun, Ayush;

    // cannot do this
    // Nasir.id = 1
    // Nasir.count = 17;

    Nasir.setData();
    Nasir.getData();
    Employee::getcount();
    Arjun.setData();
    Arjun.getData();
    Employee::getcount();
    Ayush.setData();
    Ayush.getData();
    Employee::getcount();
    return 0;
}