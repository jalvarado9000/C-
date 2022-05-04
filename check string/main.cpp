#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


using namespace std;

int main()
{
/*
    string words;
    cout << "enter something" << endl;
    getline(cin,words);

    string check = words.substr(0, 3);


    cout << check.at(2) << endl;

    const char wo = check.at(2);
    int stringNum = atoi(wo);

    if(stringNum == 3)
        {
        cout << "number is 3" << endl;
    return;
        }
*/
string line;
cout << "enter a number " << endl;
cin >> line;



    int num = atoi(line[0]);
    cout << num << endl;

    if(num < 30)
        {
        cout << num << " is lower than 30" << endl;
        }

    return 0;
}


