#include <bits/stdc++.h>
#include <sstream>
#include <string>

using namespace std;


void displayText(const string &filename)
{
    ifstream infile(filename);
    string line;
      if(infile.is_open())
    {
        while(getline(infile,line))
        {
            cout << line << endl;
        }
        infile.close();
    }
    else{
        cout << "Fail to open File" ;
    }
    infile.close();
}



int main()
{
    ifstream infile("1.txt");
    ofstream outfile("new1.txt");
    string line;
    string searchWord = "This" ;
    string replaceWord = "Nghe" ;

    cout << "Before replace" << endl;
    displayText("1.txt");
    if(infile.is_open() && outfile.is_open())
    {
        while(getline(infile,line))
        {
            size_t pos = line.find(searchWord);
            while(pos != string::npos)
            {
                line.replace(pos, searchWord.length(), replaceWord);
                pos = line.find(searchWord, pos + replaceWord.length());
            }
            outfile << line << endl;

        }
            infile.close();
            outfile.close();
            cout << "After :"<< endl;
            displayText("new1.txt");
    }
    else{
        cout << "Fail to open File" ;
    }

}
