#include <iostream>
#include <string>
#include "loan.h"
using namespace std;

ID::ID( )
{
   // use default values
}
//constructor with parameters
ID::ID(int l, int m, int r)
{
     left = l;
     middle = m;
     right = r;

}

//display the output
void ID::display()
{
     cout << left << "-" << middle << "-" << right << endl;
}
//constructor to get left part of ID
int ID::get_left(){

return left;

}
//constructor to get middle part of ID
int ID::get_middle(){

return middle;

}
//constructor to get right part of ID
int ID::get_right(){

return right;

}



Loan::Loan( )
{
}
//constructor with parametrs
Loan::Loan(ID I, float am, float rt, int trm)
{
   id = I;
      amount = am;
      rate = rt;
      term = trm;
}
//set the inputs
void Loan::set( )
{
   int l, m, r;
      ID temp_id;
       // Initialize the loan1 object
      cout << "Enter the left part of the loan ID \n";
      cin >> l;
      cout << "Enter the middle part of the loan ID \n";
      cin >> m;
      cout << "Enter the right part of the loan ID \n";
      cin >> r;
      id = ID(l, m, r);
      cout << "Enter the amount of this loan \n";
      cin >> amount;
      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> rate;
      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> term;
}
//displays the values given by the user
void Loan::display()
{
     id.display();
     cout << amount << endl;
     cout << rate << endl;
     cout << term << endl;
}

//compares if the members of each loans are the same
bool operator == (Loan loan1, Loan loan2)
{

if(loan1.id.get_left() == loan2.id.get_left() ||
   loan1.id.get_middle() == loan2.id.get_middle()
   || loan1.id.get_right() == loan2.id.get_right())

    {cout << "Both id are the same" << endl;}
     else
        cout << "Both id are different" << endl;


if(loan1.amount == loan2.amount){cout << "Both amount are the same" << endl;}

     else
        cout << "Both amounts are different" << endl;

if(loan1.rate == loan2.rate){cout << "Both terms are the same" << endl;}

     else
        cout << "Both rate are different" << endl;

if(loan1.term == loan2.term)
    {cout << "Both terms are the same" << endl;}

     else
        cout << "Both terms are different" << endl;



}
