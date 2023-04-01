#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setNumber(int r)
    {
        roll_number = r;
    }
    void printNumber(void)
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void printMarks(void)
    {
        cout << "Your marks for maths " << maths << " & physics :" << physics << endl;
    }
};
class Sport : virtual public Student
{
protected:
    float score;

public:
    void setScore(float s)
    {
        score = s;
    }
    void printScore(void)
    {
        cout << "Your score is " << score << endl;
    }
};
class Result : public Test, public Sport
{
private:
    float total;

public:
    void Display(void)
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your total score is :" << total << endl;
    }
};
int main()
{
    Result rabbi;
    rabbi.setNumber(001);
    rabbi.setMarks(77.9, 87.1);
    rabbi.setScore(99.7);
    rabbi.Display();
    return 0;
}
/*The term virtual base class defines a term such as ---->
The elements of the base class will be derived for only one time in a an inherited function.
This term is used for avoiding ambiguity between multiple/multilevel inheritance.*/