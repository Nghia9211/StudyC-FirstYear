#include <bits/stdc++.h>
const double PI = 3.14159;

using namespace std;

class Shape
{
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class circle: public Shape
{
private:
    double radius;
public:
    circle(double r): radius(r){}
    double calculateArea() const override
    {
        return PI*pow(radius,2);
    }
    double calculatePerimeter() const override
    {
        return 2*PI*radius;
    }

};


int main()
{
    circle cc(7);
    cout << cc.calculateArea() << endl;
    return 0;
}
