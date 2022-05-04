#include <iostream>

using namespace std;

void value1(double data1[],string desc[],char let1[],int item){



    int i = 0;

    for(; i < item-1; i++)
         cout << desc[i] << " " << data1[i] << endl;

          i = 0;

    for(; i < (item-3); i++)
         cout << let1[i] << endl;

}

void value2(double data2[],string desc[],char let2[],int item){


   int i = 0;

    for(; i < item-1; i++)
         cout << desc[i] << " " << data2[i] << endl;

         i = 0;

    for(; i < (item-3); i++)
         cout <<  let2[i] << endl;


}





int main()
{
   int ID;
   int item = 5;
   double data1[item] = {444444444,8288888888,11211985,3.45};
   char let1[item-3] = {'T','R'};
   double data2[item] = {555555555,8287777777,921965,3.05};
   char let2[item-3] = {'G','S'};
   string desc[item] = {"ID", "Phone Number", "Birthday", "GPA"};
   cout << "write a name and the program will check if its one of our register system user." << endl;
   cout << "enter a name" << endl;

   cin >> ID;



   switch(ID){

   case 444:

       value1(data1,desc,let1,item);
       break;

      case 555:
       value2(data2,desc,let2,item);
       break;

      default:
        cout << "user is not found" << endl;




   }





    return 0;
}
