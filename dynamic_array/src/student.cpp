#include "student.h"

istream& operator >>(istream& ins, Student& stud){

cout << "Name ";
ins >> stud.student_name;
cout << "ID Number: ";
ins >> stud.student_idnumber;

return ins;
}

ostream& operator <<(ostream& out, Student& stud){

out << stud.student_name << ", IDNumber: " << stud.student_idnumber << endl;
return out;
}
