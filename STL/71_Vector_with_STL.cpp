#include <iostream>
#include <vector> //Mainly its a library,included in the sector of contaainers of C++.Such as also these are also included --><array>,<deque>,<forward_list>,<list>,<map>,<queue>,<set>,<stack>,<unordered_map>,<unordered_set>.
using namespace std;

template <class T>
void Display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++) // here v.size is also a function included in the header file in line 2.It offers the size of vector.Because always we don't know that how many elements are there.
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " "; // The function at offers the value is there at that index.And here in this function is is just printing the elements at those indexes.
    }
    cout << endl;
}

int main()
{
    // Ways to create a vector-->
    vector<int> vec1; // Zero length int vector.also empty.
    // Display(vec1);
    int size = 5, element;
    /*cout << "Enter size of your vector :" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements " << i + 1 << " :";
        cin >> element;
        vec1.push_back(element); // To add element at the end  this function is used.We are getting this function through the included header file in line 2.
    }*/
    // vec1.pop_back();//This function is used for deleting the last element of the vector.
    // Display(vec1);
    /*Syntax for creating an iterator.
    Container name --> Data type --> Scope resolution operator --> iterator -->iterator name
      vector -------> <in> -------->  :: ------------------------> iterator --> iter */
    // vector<int>::iterator iter;
    //  All the available functions for iterators are defined to point any element of the vector.
    // iter = vec1.begin(); // This function begin dereferences the iterator to point the first element of the vector.
    //  vec1.insert(iter + 1, 5, 566); // The specification of this function is to insert only an element passed through it where the pointer is pointing in the last defined position.Also the pointing position can'be updated while passing element.
    //   Also copies of that same number can'be passed consisting the same position.But to do this user need to set how many times he wants to pass that number before the value.
    // Display(vec1);
    vector<char> vec2(4); // 4-element character vector.
    vec2.push_back('R');
    Display(vec2);
    vector<char> vec3(vec2); // 4-element character vector from vec2.This works kind like inheritance. 
    Display(vec3);
    vector<int> vec4(6, 3); // Six element vector od 3s.
    Display(vec4);
    return 0;
}
/*                              ----> Characteristics of Vector <----
1.Vector manually or its default is to manage its size manually with insertion of elements into it.
2.All the function is used in this file which are not seemed declared or defined but been used are already been declared and defined in the included header file
   (#include<vector>) jsut the same as we do in the term of cin & cout by including the header (iostream).It all comes as a pakage with the header file.*/