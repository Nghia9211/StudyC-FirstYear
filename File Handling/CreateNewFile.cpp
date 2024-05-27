#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream Myfile("1.txt");

    Myfile << "This is my first File " << endl;

    Myfile.close();

    return 0;
}
