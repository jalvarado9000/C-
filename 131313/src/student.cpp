#include "student.h"

Student::Student()
{

}


void Student::set_arr(){

//ask user for the contents to fill the array
cout << "Enter the students name" << endl;
cin >> student_name;
cout << "Enter the student id number" << endl;
cin >> student_idnumber;
}

//gets content for the array
string Student::get_idnumber(){return student_idnumber;}
string Student::get_name(){return student_name;}
