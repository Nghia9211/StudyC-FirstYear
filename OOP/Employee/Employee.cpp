#include <bits/stdc++.h>

using namespace std;

class employee
{
private:
    string name;
    int employee_ID;
    double salary;
public:
    employee(const string &ten, int id, double luong): name(ten), employee_ID(id), salary(luong){}
    void calculateSalary(double performanceRating)
    {
        if(performanceRating >= 0)
        {
            salary *= performanceRating;
        }
        else
        {
            cout << "Unchange";
        }
    }
    void setSalary(double luong) //Set something changed
    {
        salary = luong;
    }
    string getName()
    {
        return name;
    }
    int getID()
    {
        return employee_ID;
    }
    double getSalary()
    {
        return salary;
    }

};

int main()
{
    string s = "duong";
    employee a(s,123123,2000);
    double per ;
    cin >> per;
    a.calculateSalary(per);
    string name = a.getName();
    int id = a.getID() ;
    double sal = a.getSalary();
    cout << "Name: "<< name << endl;
    cout << "ID: " << id <<endl;
    cout << "Salary: " << sal << endl;
    return 0;
}
