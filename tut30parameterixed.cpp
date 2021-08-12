#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    Complex(int, int); // constructor declaration
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y)   //----> This is a parameterized constructor as it takes 2 parameter
{
    a = x;
    b = y;
    // cout<<"My name is Nasir Ali "<<endl;
}

int main()
{
    // implicit call
    Complex a(4, 6);
    // Explicit call
    Complex b = Complex(5, 6);
    a.printNumber();
    b.printNumber();
    
    return 0;
}