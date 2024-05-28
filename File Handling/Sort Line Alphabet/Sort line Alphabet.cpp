#include <bits/stdc++.h>
#include <string.h>
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
    ifstream infile("1.txt");
    ofstream outfile("Sorted_1.txt");


    displayFileContent("1.txt");

    cout << endl;



    if(infile.is_open())
    {
        string line;
        vector<string> lines;
        while(getline(infile , line))
        {

            lines.push_back(line);
        }
        sort(lines.begin(),lines.end());
        copy(lines.begin(), lines.end(), ostream_iterator<string>(outfile, "\n"));
        infile.close();
        outfile.close();
        cout << endl;
        displayFileContent("Sorted_1.txt");
    }
    else{
        cout << "ERROR" << endl;
    }
}
