
#include <iostream>
using namespace std;
class solid
{
public:
    solid(int r, int h)
    {
        float pi = 3.14;
        cout << "Volume of cylinder = " << (pi * (r * r) * h) << endl;
    }
    solid(double b, double h)
    {
        float a = 0.5;
        cout << "Area of tringle =" << (a * b * h) << endl;
    }
};
int main()
{
    solid j(10, 20), f(20.2, 20.5);
}