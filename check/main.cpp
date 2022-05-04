#include <iostream>

using namespace std;

int main()
{
    float fn,sn;

    cout << "enter first" << endl;
    cout << "second" << endl;
    cin >> fn;

   cout << "enter second" << endl;
   cin >> sn;

   cout << "Your inputs are " << fn << " and "<<sn << endl;
   fn = sn;
   sn = fn;

   cout << "after" << fn << " and " << sn << endl;




    return 0;
}
