#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_Number;

public:
    void set_Roll_Number(int);
    void get_Roll_Number(void);
};
void Student ::set_Roll_Number(int r)
{
    roll_Number = r;
}
void Student ::get_Roll_Number(void)
{
    cout << "The roll number is :" << roll_Number << endl;
}
class Exam : public Student
{
protected:
    float maths_Marks, Physics_Marks;

public:
    void set_Marks(float, float);
    void get_marks(void);
};
void Exam ::set_Marks(float m, float p)
{
    maths_Marks = m;
    Physics_Marks = p;
}
void Exam ::get_marks(void)
{
    cout << "The marks obtained in maths are :" << maths_Marks << endl;
    cout << "The marks obtained in physics are :" << Physics_Marks << endl;
}
class Result : public Exam
{
    float Percentage;

public:
    void Display_Result()
    {
        get_Roll_Number();
        get_marks();
        cout << "Your Percentage is :" << (maths_Marks + Physics_Marks) / 2 << "%" << endl;
    }
};
int main()
{
    Result rabbi;
    rabbi.set_Roll_Number(420);
    rabbi.set_Marks(93, 99);
    rabbi.Display_Result();
    return 0;
}
/*
     NOTES
     If we're inheriting B (Exam) from A (Student) and C (Result) from B (Exam) :[A---->B---->C]
     1.A is the base class for B and B is the base class for C.
     2.A-->B-->c is called Inheritance path.
*/