// OOPs -- Classes and objects

// Classes --> initially called --> C with classes by stoustroup
// class --> ectension of structure (in C)'
// Structures had limitations
//      - members are public
//      - no methods
// classes --> structure + more
// classes --> can have methods and properties
// classes --> can make few members as private and few as public
// structures in C++ are typedefed
// you can declare objects along with class declaration like this
/* class Employee {
            class definiition 
        } nsair, rohan, harry */
// harry.salary = make no sence if salary is pricate

// Nesting of members function

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void once_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number here :- " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number " << endl;
            exit(0);
        }
    }
}

void binary ::once_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
        s.at(i) = '1';
        }
        else
        {
        s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying youd binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.once_complement();
    b.display();

    return 0;
}