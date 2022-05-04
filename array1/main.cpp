#include <iostream>

using namespace std;

int main()
{

    int number_row = 10;
    int number_column = 10;

    int employee[number_row][number_column];


    for(int x = 0; x < 2; x++){

        for(int y = 0; y < 11; y++){

        cin >> employee[x][y];
        }

    }
        for(int x = 0; x < 2; x++){

        for(int y = 0; y < 11; y++){

        if(y == 2 || y == 4 || y == 6 || y == 8 || y == 10)
        cout << endl;

        cout << employee[x][y] << " ";


        }

        cout << endl;
    }


    return 0;
}
