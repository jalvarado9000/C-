#include "student.h"
#include <iostream>

using namespace std;

void Student :: setSize(int size)
	{

		student_name = new string[size];
		student_idnumber = new string[size];

	}






/*void Student::setCapacity(int c){
capacity = c;
}
*/

void Student::setStudent(){

cout << "hey";

 for(int i = 0; i > capacity; i++){
 cout << "enter student " << i + 1 << "name"  << endl;
 cin >> student_name[i];
 cout << "enter student " << i + 1 << "id"  << endl;
 cin >> student_idnumber[i];
 }

}


/*void Student::setId(){
string i;
cout << "enter2" << endl;
cin >> i;
student_idnumber = i;
}
*/

string Student::getStudent(int x){return student_name[x];}
string Student::getId(int x){return student_idnumber[x];}

