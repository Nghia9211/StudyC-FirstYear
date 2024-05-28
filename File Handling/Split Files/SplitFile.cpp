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

int FileLength(const string &filename)
{
    ifstream inFile(filename);
    string line;
    int cnt = 0;
    if(inFile.is_open())
    {
        while(getline(inFile,line))
        {
            cnt++;
        }
        inFile.close();
    }
    else
    {
        cout << "Failed to open File" << endl;
    }
    return cnt;
}

void SplitFile(const string & inputFile, const string &outputPrefix, int chunkSize )
{
    ifstream input(inputFile,ios::binary);//open input File in binary mode

    if(input.is_open())
    {
        //Get File Size
        input.seekg(0,ios::end); // Move pointer to the end of file
        streampos fileSize = input.tellg();// get the current position of the file pointer, indicating the file size
        input.seekg(0,ios::beg);// Move pointer back to the beginning of the file

        //Calculate the number of chunks
        int numChunks = (fileSize + chunkSize - 1) /chunkSize;

        //Read and write each chunk
        for (int i = 0; i < numChunks ; i++)
        {
            //Create or overwrite the output file with incremental suffix
            ofstream output(outputPrefix + to_string(i+1) + ".txt", ios::binary);
            if(output.is_open())
            {
                vector<char> buffer(chunkSize); //Create buffer to hold chunk data Buffer: Đệm
                input.read(buffer.data(), chunkSize);

                output.write(buffer.data(), input.gcount());

                output.close();
            }
            else{
                cout << " Failed to open output file" << endl;
            }
        }
        input.close();
        cout << "File split successfully" << endl;

    }else{
        cout << "Failed to open input File" << endl;
    }
}



int main()
{
    string inputFile = "MergedFile.txt";
    string outputFile = "SplitedFile";
    int chunkSize = 100;
    SplitFile(inputFile,outputFile,chunkSize);
    return 0;
}
