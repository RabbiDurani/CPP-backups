#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main()
{
    // Map is an associative array.
    // Declaration of a map
    map<string, int> marksMap;
    marksMap["Rabbi"] = 89;
    marksMap["Riad"] = 79;
    marksMap["Shakil"] = 99;
    marksMap.insert({{"Kozume",98},{"kuroo",88}});//Method to insert elements in map.
    map<string,int>::iterator itr;
    for(itr=marksMap.begin();itr!=marksMap.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;//Here it the for loop we had pointed the pointer to thee first element of map.In the syntax of cout the (.first)function is printing out the first key or the first variable(string) & the second variable(int). 
    }
    cout<<"The size of this map is :"<<marksMap.size()<<endl;
    cout<<"The max size is :"<<marksMap.max_size()<<endl;
    cout<<"The empty return value is :"<<marksMap.empty()<<endl;
    return 0;
}