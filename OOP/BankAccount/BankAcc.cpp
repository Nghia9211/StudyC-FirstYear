#include <bits/stdc++.h>

using namespace std;

class BankAcc
{
private:
    int AccNumber;
    double Balance;
public:
    BankAcc(int acc, double bal): AccNumber(acc), Balance(bal){}
    void deposit(double money)
    {
        Balance += money;
        cout << "Deposit " << money <<" Successfully!" << endl;
    }
    void withdraw(double money)
    {
        if (Balance - money <= 0 || money < 0  )
        {
            cout << "Can't withdraw money";
        }
        else
        {
                Balance -= money;
                cout << "Withdraw Successfully! " << endl;
                cout << "Your Balance: " << Balance << endl;
        }

    }


};

int main()
{
    BankAcc A(123123,2000);
    A.withdraw(20);
    A.deposit(10000);
    return 0;
}
