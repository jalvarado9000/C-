#include <iostream>

using namespace std;

void sort_array(int[],int);
void show_array(const int[],int);
void input_array(int[],int);


int main()
{
    int number = 5;
    //int store[number] = {69,77,44,55,11};

    int store[number];
    cout << "enter any number and we will order it to biggest to smallest" << endl;
    input_array(store,5);
    cout << "the unsorted array" << endl;
    show_array(store,5);

    sort_array(store,5);
    cout << "the sorted array" << endl;
    show_array(store,5);



    return 0;
}

void sort_array(int arr[],int siz){

bool swa;
int temp;
do{
    swa = false;

   for(int i = 0; i < (siz-1); i++){

    if(arr[i] > arr[i+1]){

        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1]= temp;
        swa = true;
    }

   }
}while(swa);
}

void show_array(const int arr[], int siz){

for(int i = 0; i < (siz-1); i++){

    cout << arr[i] << endl;
}

}
void input_array(int arr[], int siz){

for(int i = 0; i < (siz-1); i++){

    cin >> arr[i];
}

}
