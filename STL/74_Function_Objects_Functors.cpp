#include <iostream>
#include <functional> //All the Function objects are included in this header file.
#include <algorithm>
using namespace std;

int main()
{
    // Function Object(also called Fucntor)---> Function wrapped in a class so that it is available as an object.
    int arr[] = {1, 73, 4, 2, 54, 77};
    sort(arr, arr + 5);//here the syntax of (arr+5) represents how many elements of that array shall'be implemented for the mentioned function.
    sort(arr, arr + 6,greater<int>());//here greater is not a function its a function object.It sorts the array in the descending order.
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     return 0;
}