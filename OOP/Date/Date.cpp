#include <bits/stdc++.h>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int d, int m, int y): day(d), month(m), year(y) {}
        bool checkifvalidate() const {
      // Check if the month is valid
      if (month < 1 || month > 12)
        return false;

      // Check if the day is valid
      if (day < 1 || day > 31)
        return false;

      // Check for specific month-day combinations that are invalid
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

      if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          if (day > 29)
            return false;
        } else {
          if (day > 28)
            return false;
        }
      }

      // Date is valid
      return true;
    }
};
    void setDate(int d, int m , int y)
    {
        day = d;
        month = m;
        year = y;
    }
    int getD()
    {
        return day;
    }
    int getM()
    {
        return month;
    }
    int getY()
    {
        return year;
    }
};

int main()
{
    Date today(23,13,2024);
    if(today.checkifvalidate())
    {
    int d = today.getD();
    int m = today.getM();
    int y = today.getY();
    cout << d << ":" << m << ":" << y << endl;
    }
    return 0;
}
