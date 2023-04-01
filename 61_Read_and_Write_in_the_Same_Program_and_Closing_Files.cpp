#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    /*// Connect out file through rout stream.
    ofstream rout("sample_60_a.txt");
    // creating a name string variable and filling it with string entered by the user
    cout << "Enter Your name :";
    string name;
    getline(cin, name);
    // writing a string to the file
    rout << "My name is " + name; // here by declaring some data to display and assigning the variable will'be entered next to it will write the data in form written in the program.
   rout.close();//here declaring the file opened above is declared as closed.That means that no ther commands shall not pass to that file.
*/
    ifstream rin("sample_60_a.txt");
    string content;
    getline(rin, content); // This declares to extract the available data in the existing file to the declared variable.
    cout << "Content of this file is : " << content;
    rin.close();
    return 0;
}