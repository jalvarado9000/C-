#include <iostream>

using namespace std;

void instructions();
void rainFall_data(double[],int, string[]);
double average_rain(double[], int);
void show_values(double[],int);
void show_low(double[],int, string[]);
void show_high(double[],int, string[]);
void sort_rain(double[],int);

int main()
{
    //days of the month
    int months = 12;

    //array to store the rain fall
    double rain[months];
    string Months[months] = {"January", "February", "March", "April", "May", "June", "Julio", "August", "September", "October","November", "December" };

    //stores the total of rain fall in the year
    double average;

    //prints the instructions of the program
    instructions();

    //function that the user inputs the array data
    rainFall_data(rain,months,Months);

    //prints out the values store in the array
    show_values(rain, months);

    //returns the total of the of rain fall in the year
    average = average_rain(rain, months);






    cout << "the total rain fall is: " << average << endl;
    cout << "the average rain fall is: " << average/months << endl;

     sort_rain(rain,months);

     show_low(rain,months,Months);

     show_high(rain,months,Months);

     show_values(rain, months);

    return 0;
}


void instructions(){

    cout << "this program lets you input rain water levels for each month" << endl;
    cout << "and calculate the total rained in a year" << endl;
    cout << "the average monthly rainfall" << endl;
    cout << "and the month with highest and lowest" << endl;

}

void rainFall_data(double rain[],int months, string Months[]){


    for(int counter = 0; counter < (months); counter++){

          cout << "For the month of " << Months[counter];
          cin >> rain[counter];

        if(rain[counter] < 0){
            cout << "the value entered was negative, try again " << endl;
            //flag = true;
            --counter;
        }


    }

}


double average_rain(double rain[],int months){

int total;
for(int counter = 0; counter < (months); counter++){

    total += rain[counter];

}


return total;

}

void show_values(double rain[], int months){

for(int counter = 0; counter < (months); counter++){

    cout << rain[counter] << endl;
   // cout << "aqui es?"<< endl;
}

}


void sort_rain(double rain[],int months){

double temp;
bool swa;

do{


    swa = false;

    for(int counter = 0; counter < months; counter++){

    if(rain[months] > rain[months+1]){
        temp = rain[months];
        rain[months] = rain[months+1];
        rain[months+1] = temp;
        swa = true;
    }

    }
}while(swa);

}

void show_low(double rain[],int months, string Months){
cout << "the highest rainfall this year is: " << endl;
cout << Months[months] << endl;
cout << " "<< rain[months] << " inches " << endl;

}

void show_high(double rain[],int months, string Months){

cout << "the lowest rainfall this year is: ";
cout << Months[months] ;
cout << " "<< rain[months] << " inches " << endl;
}

