#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample_60_a.txt");
    out << "This is me";
    out << "\nThis is me also";
    out << "\nThis is also me";
    out << "\nThis is also also me";
    out.close();

    ifstream in;
    string st;
    in.open("sample_60_a.txt");
    //getline(in, st);
    //cout << st;
    while(in.eof()==0)//eof=End of file.
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}