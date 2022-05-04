#include <iostream>

using namespace std;

class Learn

{

private:
    int extra,yellow;

public:

    Learn(int x, int y)
    {
    extra = x;
    yellow =y;

    }

    Learn(Learn &lesson2)
    {
    extra = lesson2.extra;
    yellow = lesson2.yellow;

    }

    int get_yellow(){return yellow;}
    int get_extra(){return extra;}


};



int main()
{
    int num, val;

    //cout << "enter a number" << endl;
    //cin >> num >> val;


   Learn lesson(96,69);

    Learn lesson2 = lesson;

    cout << lesson.get_extra() << endl;
    cout << lesson2.get_extra();
    cout << lesson.get_yellow() << endl;
    cout << lesson.get_yellow();



    return 0;
}
