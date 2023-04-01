#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
      //   ****selection control structure if,else-if,else structure ladder*****
   /* if((age<18)&&(age>0))
    {
        cout<<"You can't come to my party."<<endl;
    }
    else if(age==18)
    {
        cout<<"You are a kid,you will a kid pass to the party"<<endl;
    }
    else if(age<1)
    {
        cout<<"You are not yet born"<<endl;
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }*/

    //      ******selection control structure switch case***

   switch (age)
   {
   case 18:
    cout<<"You are 18"<<endl;
    break;
   case 24:
    cout<<"You are 24"<<endl;
    break;
   case 2:
    cout<<"You are 2"<<endl;
   break;
   
   default:
   cout<<"no special cases"<<endl;
    break;
   }
   cout<<"Done with switch case"<<endl;

    return 0;
}
