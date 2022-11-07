#include <iostream>

using namespace std;

int main()
{
    int row = 5, column = 1;

    string Flavor[row][column]=
    {{"Mild"},
    {"Medium"},
    {"sweet"},
    {"hot"} ,
    {"zesty"}};

    int sales[row][column];
    double prices[row] = {1.75,2.20,2.50,3.00,3.10};

    for(int x = 0; x < column; x++){

    for(int i = 0; i < row; i++){
        cout << "sales for " << Flavor[i][x] << " sauce jar: ";
        cin >> sales[i][x];

        if(sales[i][x] < 0){
         cout << "The value entered was negative" << endl;
            --x;
        }

    }
}

   double total[row][column];

   for(int x = 0; x < column; x++){

    for(int i = 0; i < row; i++){

        total[i][x] = sales[i][x]*prices[i];
    }

   }


   cout << "The sales for the salsa where " << endl;


    for(int x = 0; x < column; x++){

    for(int i = 0; i < row; i++){

        cout << Flavor[i][x] << " " << total[i][x] << endl;

    }

   }


   bool flag = true;
   double temp =0;


   do{
        flag = false;

    for(int x = 0; x < column; x++){

   for(int i = 0; i < row; i++){

    if(total[i][x] > total[i+1][x]){

        temp = total[i][x];
        total[i][x] = total[i+1][x];
        total[i+1][x] = temp;
        flag = true;


    }

   }

    }


   }while(flag);

   cout << "the lowest sale was: " << total[1][0] << endl;
   cout << "the highest sale was: " << total[5][0] << endl;








    return 0;
}
