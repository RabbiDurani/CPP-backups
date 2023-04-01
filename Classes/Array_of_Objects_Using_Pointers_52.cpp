#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float prise;

public:
    void setData(int a, float b)
    {
        id = a;
        prise = b;
    }
    void getData(void)
    {
        cout << "Code of this item is :" << id << endl;
        cout << "Prise of this item is :" << prise << endl;
    }
};
int main()
{
    int size = 3; // In the term of allocating always compiler sets its point towards the first block of array,Meaning that if we declare a variable to set how many of elements will there be created it will set its point towards the first element and then we can increment that value and access the other created objects.
                  /*1.General store item
                    2.veggie item
                    3.Hardware item.*/
    int p,i;
    float q;
    ShopItem *ptr = new ShopItem[size]; // This is a declaration of array of object using pointer.
    ShopItem *ptrTemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter id & prise of item :" << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setData(p,q);While the availability of arrow operator we can rather use that instead of this
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item number :" << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}