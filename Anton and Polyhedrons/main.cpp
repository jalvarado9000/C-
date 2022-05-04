#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Cube(char *arr, int n){

    int check = 0;

    for(int i = 0; i < n; i++){

    if(n > 4){
        check = 0;
        return check;
    }

    else if(i == 0){

    if(arr[i] == 'C' || arr[i] == 'c'){}

    else
        {
        check = 0;
        return check;}

    }

    else if(i == 1){

    if(arr[i] == 'U' || arr[i] == 'u'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 2){
    if(arr[i] == 'B' || arr[i] == 'b'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 3){
    if(arr[i] == 'E' || arr[i] == 'e'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else
        {
        check = 0;
        return check;
    }

    }

    check = 2;
    return check;



}

int Tetrahedron(char *arr, int n){



    int check = 0;

    for(int i = 0; i < n; i++){

    if(n > 11){
        check = 0;
        return check;
    }

    else if(i == 0 || i == 2){

    if(arr[i] == 'T' || arr[i] == 't'){}

    else
        {
        check = 0;
        return check;}

    }

    else if(i == 1 || i == 6){

    if(arr[i] == 'E' || arr[i] == 'e'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 3 || i == 8){
    if(arr[i] == 'R' || arr[i] == 'r'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 4){
    if(arr[i] == 'A' || arr[i] == 'a'){}

     else
        {
        check = 0;
        return check;
    }
    }


    else if(i == 5){
    if(arr[i] == 'H' || arr[i] == 'h'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 7){
    if(arr[i] == 'D' || arr[i] == 'd'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 9){
    if(arr[i] == 'O' || arr[i] == 'o'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 10){
    if(arr[i] == 'N' || arr[i] == 'n'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else
        {
        check = 0;
        return check;
    }

    }

    check = 1;
    return check;
}

int Octahedron(char *arr, int n){



    int check = 0;

    for(int i = 0; i < n; i++){

    if(n > 10){
        check = 0;
        return check;
    }

    else if(i == 0 || i == 8){

    if(arr[i] == 'O' || arr[i] == 'o'){}

    else
        {
        check = 0;
        return check;}

    }

    else if(i == 1){

    if(arr[i] == 'C' || arr[i] == 'c'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 2){
    if(arr[i] == 'T' || arr[i] == 't'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 3){
    if(arr[i] == 'A' || arr[i] == 'a'){}

     else
        {
        check = 0;
        return check;
    }
    }


    else if(i == 4){
    if(arr[i] == 'H' || arr[i] == 'h'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 5){
    if(arr[i] == 'E' || arr[i] == 'e'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 6){
    if(arr[i] == 'D' || arr[i] == 'd'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 7){
    if(arr[i] == 'R' || arr[i] == 'r'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 9){
    if(arr[i] == 'N' || arr[i] == 'n'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else
        {
        check = 0;
        return check;
    }

    }

    check = 3;
    return check;
}

int Dodecahedron(char *arr, int n){

    int check = 0;

    for(int i = 0; i < n; i++){

    if(n > 12){
        check = 0;
        return check;
    }

    else if(i == 0 || i == 2 || i == 8){

    if(arr[i] == 'D' || arr[i] == 'd'){}

    else
        {
        check = 0;
        return check;}

    }

    else if(i == 1 || i == 10){

    if(arr[i] == 'O' || arr[i] == 'o'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 3 || i == 7){
    if(arr[i] == 'E' || arr[i] == 'e'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 4){
    if(arr[i] == 'C' || arr[i] == 'c'){}

     else
        {
        check = 0;
        return check;
    }
    }


    else if(i == 5){
    if(arr[i] == 'A' || arr[i] == 'a'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 6){
    if(arr[i] == 'H' || arr[i] == 'h'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 9){
    if(arr[i] == 'R' || arr[i] == 'r'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 11){
    if(arr[i] == 'N' || arr[i] == 'n'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else
        {
        check = 0;
        return check;
    }

    }

    check = 4;
    return check;
}

int Icosahedron(char *arr, int n){

    int check = 0;

    for(int i = 0; i < n; i++){

    if(n > 11){
        check = 0;
        return check;
    }

    else if(i == 0){

    if(arr[i] == 'I' || arr[i] == 'i'){}

    else
        {
        check = 0;
        return check;}

    }

    else if(i == 1){

    if(arr[i] == 'C' || arr[i] == 'c'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 2 || i == 9){
    if(arr[i] == 'O' || arr[i] == 'o'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 3){
    if(arr[i] == 'S' || arr[i] == 's'){}

     else
        {
        check = 0;
        return check;
    }
    }


    else if(i == 4){
    if(arr[i] == 'A' || arr[i] == 'a'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 5){
    if(arr[i] == 'H' || arr[i] == 'h'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 6){
    if(arr[i] == 'E' || arr[i] == 'e'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 7){
    if(arr[i] == 'D' || arr[i] == 'd'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 8){
    if(arr[i] == 'R' || arr[i] == 'r'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else if(i == 10){
    if(arr[i] == 'N' || arr[i] == 'n'){}

     else
        {
        check = 0;
        return check;
    }
    }

    else
        {
        check = 0;
        return check;
    }

    }

    check = 5;
    return check;
}



int main()
{
    int inum;
    bool flag;
    do{
    flag = true;
    cin >> inum;

    if(inum >= 1 && inum <= 200000)
    flag = false;

    }while(flag);


    string str1;
    int total_sides =0;
     int side=0;

    for(int i =0, op; i < inum; i++){

        cin >> str1;
        int n = str1.length();
        char *arr = new char[n];
        strcpy(arr, str1.c_str());


        if(arr[0] == 'T' || arr[0] == 't')
            op = Tetrahedron(arr,n);

        else if(arr[0] == 'C' || arr[0] == 'c')
            op = Cube(arr,n);

        else if(arr[0] == 'O' || arr[0] == 'o')
            op = Octahedron(arr,n);

        else if(arr[0] == 'D' || arr[0] == 'd')
            op = Dodecahedron(arr,n);

        else if(arr[0] == 'I' || arr[0] == 'i')
            op = Icosahedron(arr,n);

        else{
            --i;
        }

        switch(op){

    case 1:
        side = 4;
        break;
    case 2:
        side = 6;
        break;
    case 3:
        side = 8;
        break;
    case 4:
        side = 12;
        break;
    case 5:
        side = 20;
        break;

    case 0:
        --i;
        break;

        }

        total_sides += side;

        }

        cout << total_sides << endl;
        return 0;

    }
