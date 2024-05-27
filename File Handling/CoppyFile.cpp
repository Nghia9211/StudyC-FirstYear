#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream NewFile("New.txt");
    ifstream InFile("1.txt");

    if (InFile.is_open())
    {
        string line;
        while(getline(InFile, line))
        {
            NewFile << line << endl;
        }
    InFile.close();
    NewFile.close();
    }
    else
    {
        cout << "Failed to open file " ;
     }


}
