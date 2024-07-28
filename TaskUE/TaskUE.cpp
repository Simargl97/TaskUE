#include <iostream>
#include <cmath>

class Vector
{
public:
    Vector() : x(3), y(3), z(3)
    {}
    Vector(double x, double y, double z) : x(x), y(y), z(z)
    {}

    double Length() 
    {
        return std::sqrt(x*x + y*y + z*z);
    }
    void Show()
    {
        std::cout << '\n' << x << ' ' << y << ' ' << z;
    }
    
private:
    double x;
    double y;
    double z;
};

int main()
{
    Vector v;
    v.Show();
    std::cout << '\n' << v.Length();
    
}