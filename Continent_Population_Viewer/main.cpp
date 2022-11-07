#include <iostream>
using namespace std;
# include <cstdlib>

int main()
{

    cout << "This program gives you the population of 7 countries: " << endl;
    int cont = 7;
    int row = 1, column =7;
    double population[row][column] = {1.216 ,4.463,741.4,211, 579 ,422.5,1000};


    string contries[cont] = {"Africa","Asia","Europe", "Australia", "North America","South America", "Artartica"};



    for(int i = 0; i < row; i++){

        for(int s = 0; s < column; s++ ){


            if(s < 2)
            cout << "Contry: " << contries[s] << " Population: " << population[i][s] << " Billions" <<endl;

            else if (s >= 2 && s <= 5)
            cout << "Contry: " << contries[s] << " Population: " << population[i][s] << " Millions" <<endl;

            else
            cout << "Contry: " << contries[s] << " Population: " << population[i][s] << " Thousand" <<endl;


        }
    }




    return 0;
}
