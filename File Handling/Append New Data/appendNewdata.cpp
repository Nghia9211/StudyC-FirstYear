#include <bits/stdc++.h>

using namespace std;

void displayFileContent(const string &filename)
{
    ifstream infile(filename);
    string line;
    if(infile.is_open())
    {
        while(getline(infile, line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    else
    {
        cout << "Failed to open file "<< endl;
    }
}

int main()
{
    ofstream outfile; // Không có (1.txt) vì sai
    outfile.open("1.txt", ios::app); // mở file Dưới chế độ thêm vào (append)
    displayFileContent("1.txt");
    cout << endl;

    if(outfile.is_open())
    {
        string newData;
        cout << "Enter data: ";
        getline(cin,newData);
        outfile << newData << endl;
        outfile.close();

        cout << " Append data successfully. " << endl;
        displayFileContent("1.txt");
    }
    else
    {
        cout << " ERROR"<< endl;
    }

}
