#include <iostream>
#include <string.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
   virtual void Display(void)
    {
        cout<<"Bogus code"<<endl;
    }
};
class CWHvideo : public CWH
{
    float videoLength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void Display(void)
    {
        cout << "This is an amazing video with title :" << title << endl;
        cout << "Rating " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void Display(void)
    {
        cout << "This is an amazing text tutorial video with title :" << title << endl;
        cout << "Rating of this Text tutorial is " << rating << "out of 5 stars" << endl;
        cout << "Number of words in this video is" << words << " words" << endl;
    }
};
int main()
{
    string title = new char[30];
    float rating, vlen;
    int words;
    // For Code With Harry Video
    title = "Django Tutorial";
    vlen = 7.54;
    rating = 4.98;
    CWHvideo video(title, vlen, rating);
    // video.Display();
    //  For Code With Harry Text
    title = "Django Tutorial Textual";
    words = 754;
    rating = 4.19;
    CWHText Text(title, rating, words);
    // Text.Display();
    CWH *tuts[2];       // Here we had created pointer of the base class(CWH).
    tuts[0] = &video;   // Now setting those pointers to existing derived functions of the base class.
    tuts[1] = &Text;    // Same above is done here.
    tuts[0]->Display(); // Because of the display function of the base class is declared virtual,Now it offers to override the default method to access the same named functions of the derived class.
    tuts[1]->Display();

    return 0;
}