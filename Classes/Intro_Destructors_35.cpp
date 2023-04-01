#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count<<endl;
    }
    ~num() // The sign "~" given before is declared as a destructor.as like constructor destructor consist of the same name of class.
    {
        cout << "This is the time when my destructor is called for object number " << count<<endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function " << endl;
    cout << "We are creating first object n1 " << endl;
    num n1;
    { // In main function by declaring this parenthesis is considered as a block.The scope of this block usually remains in these blocks.
    //Only while compiler remains in the scope of block only till then the objects of the block remains in execution,but the moment compiler sets out of the block its objects are also destroyed.
        cout << "Entering this block " << endl;
        cout << "Creating two more objects" << endl;
          num n2, n3;
        cout << "Exiting this block " << endl;
    }
    cout << "Back  to main " << endl;
    return 0;
}
// Characteristics of Destructors--->
// usually destructors frees up the dynamically allocated memory by destroying them.
// Destructor never takes any arguments and doesn't take any arguments.