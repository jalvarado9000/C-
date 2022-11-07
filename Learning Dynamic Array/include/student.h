#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;


class Student
{
    public:
    //Student();
    void setStudent();
    //void setId();
    string getStudent(int);
    string getId(int);
    void setSize(int);

    private:
    int capacity;
    string *student_name;
    string *student_idnumber;

};

#endif // STUDENT_H
