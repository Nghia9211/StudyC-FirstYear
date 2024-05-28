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
    vector<string> inputFiles = { "1.txt", "2.txt" }; // Push File in to Vector to store
    string outFile = "Merged_File.txt";
    ofstream MergeFile(outFile);

    if(MergeFile.is_open())
    {
        for(const auto &inputFile:inputFiles) // Iterate through Vector InputFiles
        {
            ifstream inFile(inputFile);
            string line;
            while(getline(inFile,line ))
            {
                MergeFile << line << endl;
            }
            inFile.close();
        }
        MergeFile.close();
        displayFileContent(outFile);

    }
    else{
        cout << "Failed to open Files" << endl;
    }
}

