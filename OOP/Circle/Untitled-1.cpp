#include <bits/stdc++.h>

const double PI = 3.14159;
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle(double rad) : radius(rad){}
    double calArea()
    {
        return PI * pow(radius,2);
    }

    double calCircumference()
    {
        return 2*PI*radius;
    }



};

int main()
{
    double R;
    cout << "INPUT RADIUS:" ;
    cin >> R ;
    Circle ad(R); //gọi lớp , đặt tên cho phần tử thuộc lớp đô là ad và truyền tham số R cho phần tử đó

    double area = ad.calArea();
    double circumference = ad.calCircumference();
    cout << "DIEN TICH HINH TRON: " << area << endl;
    cout << "CHU VI HINH TRON: " << circumference << endl;
    return 0;
}
