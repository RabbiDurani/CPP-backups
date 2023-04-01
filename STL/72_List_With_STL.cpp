#include <iostream>
#include <list>
using namespace std;

void Display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++) // Here the functions of list (.begin & .end) are pointing towards the first & the lsat element of the list respectively.
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;    // List of Zero length.
    list<int> list2(3); // Empty list if size 7.
    // The difference between an empty list of any length and a zero length list is that an empty list allocates the memory of declared length(having elements of no value) and the zero length list doesn't allocate memory till its initialized with element.

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    Display(list1);
   // list1.pop_front();//This function deletes an item from the beginning of the list.
    //Display(list1);
    //list1.pop_back();//This function deletes an item from the end of the list.
    //list1.remove(9);//This function removes the defined valued from any where of the list.
    list1.sort();//Function to sort a list.
    Display(list1);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    list1.sort();
    list2.sort();
    list1.merge(list2);//Function to merge lists.After merging all the elements of both lists stored in the list mentioned first.
    cout<<"After merging :";
    Display(list1);
}