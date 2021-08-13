#include <iostream>
using namespace std;
class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 17, int c = 87)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "the value of data is " << data1 << ", "<< data2 <<" and "<<data3<< endl;
}

int main()
{
    Simple s(4, 5);
    s.printData();
    return 0;
}