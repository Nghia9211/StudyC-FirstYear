#include <bits/stdc++.h>

using namespace std;

class Rect
{
private:
    double length;
    double width;
public:
    Rect(double dai, double rong) : length(dai), width(rong){}
    double calArea()
    {
        return length*width;
    }
    double calCircumference()
    {
        return 2*(length+width);
    }

};

int main()
{
    double dai,rong;
    cout << "Dai`: " ;
    cin >> dai;
    cout << endl;
    cout << "Rong : ";
    cin >> rong;
    Rect w(dai,rong);
    double area = w.calArea();
    double chuvi = w.calCircumference();
    cout << "Dien tich: " << area << endl << "Chu vi: " << chuvi ;
    return 0;
}
