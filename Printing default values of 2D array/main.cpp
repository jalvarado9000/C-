#include <iostream>
#include <iomanip>

using namespace std;

const int number_rows = 4;
const int number_column = 10;

void print(const int blaps[number_rows][number_column], int number_rows, int number_column){


   //int blaps[x][y];
    for(int u = 0; u < (number_rows); u++){

    for(int i = 0; i < (number_column); i++ ){

        cout << blaps[u][i] << " " ;
   }

cout << endl;
   }

}


//void print(int[number_rows][number_column],int,int);

//void showArray(const int [][COLS], int);

int main()
{

   int grade[number_rows][number_column] =
   {{99,88,77,55,22,44,33,88,99,77},
   {99,88,77,55,22,44,33,88,99,77},
   {99,88,77,55,22,44,33,88,99,77},
   {99,88,77,55,22,44,33,88,99,77}};

   print(grade,number_rows,number_column);


    return 0;
}

