#include <iostream>
#include "simp.h"

using namespace std;

int main()
{

    int n;
    simp *s;
    cout << "numbers " << endl;
    cin >> n;

    s = new simp[n];

    for(int i = 0; i > n; i++)
       s[i].getsimp();



    return 0;
}
