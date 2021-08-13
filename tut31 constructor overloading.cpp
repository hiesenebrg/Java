#include <iostream>
using namespace std;
class Complex
{
    int a1;
    int b2;
    int c3;


public:
    Complex(int l, int b = 65, int c = 67)
    {
        a1 = l;
        b2 = b;
        c3 = c;
    }
    void printNumber();
};
void Complex ::printNumber()
{
    cout << "the value of data a , b and c are here " << a1 << " , " << b2 <<" and "<< c3 <<endl;
}
int main()
{
    Complex k(11);
    k.printNumber();
    return 0;
}