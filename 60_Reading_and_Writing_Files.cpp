#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*The useful classes to working with files in c++ are---->[This class fstream and its derived classes(ifstream & ofstream] are doesn't need to be defined.
Because they are already defined within the header file named [#include <fstream>] & by including it it offers to use any class of it weather the base or the derived class.)
1.fstreambase(This is a base class)
2.ifstream(Derived class from fstreambase for input)
3.ofstream(Derived class from fstreambase for output)
*/
/*In order to work with files first need to open it.Primarily: Theres two ways to open a file.
1.Using the constructor, & 2.Using the member function of the (open) of the class.*/
int main()
{
    string st = "Rakibul islam Rabbi";
    string st2;
    //Here the elements of ofstream & ifstream --> out & in are their objects respectively.they named like this for to be understandable & meaningful.But the can'be named with any name.
    // Opening file using constructor writing it.
    ofstream out("sample_60_a.txt"); // This is the process of opening a file mentioning its name using constructor.Write operation.
    out << st;                       // This acts just like cout.The call here is to write the info passed by the variables in the file mentioned above.

    // Opening file using constructor reading from it.
    ifstream in("sample_60_b.txt");
    // in>>st2;//This acts just like cin.The call here is to read the info passed by the variable.
    getline(in, st2);//Here the call is to get the available data in that txt file into the variable of the function.
    cout << st2;
    return 0;
}