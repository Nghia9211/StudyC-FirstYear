#include <bits/stdc++.h>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;
public:
    // Khi dùng getter và setter thì không cần hàm constructor ở ban đầu
    // Person(char ten, int tuoi, char qgia) : name(ten), age(tuoi), country(qgia) {}
    void setName(const string &n)
    {
       name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setCountry(const string &c)
    {
        country = c;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }

};


int main()
{
    Person a;
    a.setName("Ching chong");
    a.setAge(13);
    a.setCountry("TQ");
     // Get and display the person's details using getter functions
    cout << "Name: " << a.getName() << endl; // Output the person's name
    cout << "Age: " << a.getAge() << endl; // Output the person's age
    cout << "Country: " << a.getCountry() << endl; // Output the person's country
}
