#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int arr[size] = {1,2,1,3,1,5,1,6,1,7};
  int c_arr[size] = {1,2,1,4,1,5,1,6,1,9};

   //int c_arr[size] = {9,8,7,6,5,4,3,2,1};
    int sum_arr[size*2];

    for(int i = 0, u = 0; i < size; i+=2, u +=2){


    if(i == 0 && arr[i+1] == c_arr[i+1]){

        cout << "primero" << endl;
        sum_arr[u] = arr[i] + c_arr[i];
        sum_arr[u+1] = arr[i+1] + c_arr[i+1];
        ++u;
        ++i;

    }

    else if(arr[i] == c_arr[i]){

        cout << "estoy en el  segundo else if la " << i << " vez" << endl;
        sum_arr[u-1] = arr[i-1] + c_arr[i-1];

        sum_arr[u] = arr[i] + c_arr[i];


    }

    else if(arr[i] != c_arr[i]){

        cout << "estoy en el tercero else la " << i << " vez" << endl;
        sum_arr[u-1] = arr[i-1];

        sum_arr[u] = arr[i];

        sum_arr[u+1] = c_arr[i-1];

        sum_arr[u+2] = c_arr[i];

        u+=2;




    }



    else if (i == -1 + size){

        cout << "estoy en el cuarto else la " << i << " vez" << endl;
        sum_arr[u-1] = arr[i-1] + c_arr[i-1];

        sum_arr[u] = arr[i] + c_arr[i];

        sum_arr[u+1] = arr[i+1] + c_arr[i+1];

        sum_arr[u+2] = arr[i+2] + c_arr[i+2];

        u+=2;



    }

    else
        cout << "lol" << endl;


    }

    for(int i = 0, u = 1; i < size*2; i+=2, u+=2)
        cout << "value of the sums" << sum_arr[i] << "x^" <<sum_arr[u] << endl;

}

