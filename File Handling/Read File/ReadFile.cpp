#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ifstream inputFile("1.txt");
    string line;
    int wordcnt = 0;
    if (inputFile.is_open())
    {
        while(getline(inputFile,line))
            {
                stringstream ss(line);
                string word;
                while(ss >> word )
                {
                    wordcnt++;
                }
            }
        inputFile.close();
        cout << wordcnt;
    }
    else{
        cout << "Failed to open the file " << endl;
    }

}
