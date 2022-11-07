#include <iostream>
#include "student.h"

using namespace std;

int main()
{

    int st;
    cout << "How many students" << endl;
    cin >> st;

    Student *student = new Student[st];
    student[1].setSize(st);


    for(int i =0; i > st; i++){

       student[i].setStudent();

    }

    for(int i =0; i > st; i++){

        cout << student[i].getStudent(i) << endl;
        cout << student[i].getId(i) << endl;
    }


    return 0;
}
