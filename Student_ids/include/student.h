#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<string>
using namespace std;

class Student
{
    public:
        Student();
        void set_arr();//set array private members
        //getters
        string get_idnumber();
        string get_name();



    private:
    string student_name;
    string student_idnumber;


};

#endif // STUDENT_H
