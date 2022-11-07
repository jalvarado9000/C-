#include <iostream>
#include <cstdlib>
#include "student.h"

using namespace std;

int main()
{

int Size;
    cout << "enter the number of student in the data base" << endl;

    cout << "Enter the number of student in the database: " << endl;
    cin >> Size;

    Student* studentlist = new Student[Size];

    for (int i = 0; i < Size; i++){
        cout << "\nEnter sudent # " << i + 1 << "name and id number.\n";
        cin >> studentlist[i];

    }

    cout << "Student list: " << endl;

    for(int i = 0; i < Size; i++){

        cout << "Student #" << i +1 << ":";
        cout << studentlist[i];
    }

    delete[] studentlist;



    return 0;
}
