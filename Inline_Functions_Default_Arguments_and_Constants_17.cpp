#include <iostream>
using namespace std;

/*inline int product(int a,int b)
{
    //While there in a function the the task it performs is jsut about a little bit,consider making it an in linr funtion to save memory.
    //But shouldn't be using in a bigger function,It will cause to take over all the cache memory to perform.
    //Also it is not recomended to not to use inline function in the case of recurtion
    return a*b;
}*/
int product1(int a, int b)
{
    static int c = 0; // This initialization is executed only once
    c = c + 1;
    return a * b + c;
}
float moneyReceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

int main()
{
    /*int a,b;
    cout<<"Enter a & b :";
    cin>>a>>b;
    //cout<<"The product of a & b is :"<<product(a,b)<<endl;
    cout<<"The product of a & b is :"<<product1(a,b)<<endl;
    cout<<"The product of a & b is :"<<product1(a,b)<<endl;
    cout<<"The product of a & b is :"<<product1(a,b)<<endl;
    cout<<"The product of a & b is :"<<product1(a,b)<<endl;
    cout<<"The product of a & b is :"<<product1(a,b)<<endl;*/
    int money = 100000;
    cout << "if you have a amount " << money << " in your bank account you will recieve " << moneyReceived(money) << " after 1 year."<<endl;
    cout << "For VIP if you have a amount " << money << " in your bank account you will recieve " << moneyReceived(money,1.1) << " after 1 year.";
   
    return 0;
}
