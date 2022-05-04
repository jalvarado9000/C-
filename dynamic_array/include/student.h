#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


class Student
{

        friend istream& operator >> (istream ins, Student stud);
        friend ostream& operator << (ostream out, Student stud);

    private:
        string student_name;
        string student_idnumber;
};

#endif // STUDENT_H
