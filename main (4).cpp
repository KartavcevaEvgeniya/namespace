#include <iostream>
using namespace std;

namespace MyNamespace
{
    class Fraction
    {
        int a;
        int b;
    public:
        Fraction(int x, int y)
        {
            a = x;
            b = y;
        }
        void Print()
        {
            cout << a << "/" << b << endl;
        }
    };
}

namespace A
{
    class Point2D
    {
        int x;
        int y;
    public:
        Point2D(int a, int b)
        {
            x = a;
            y = b;
        }
        void Print()
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }
    };

    class Point3D
    {
        int x;
        int y;
        int z;
    public:
        Point3D(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void Print()
        {
            cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
    };
}

using namespace MyNamespace;
int main()
{
    Fraction f(3, 4);
    f.Print();

    A::Point2D p1(2, 5);
    p1.Print();

    A::Point3D p2(1, 2, 3);
    p2.Print();

    return 0;
}
