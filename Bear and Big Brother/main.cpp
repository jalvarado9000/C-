#include <iostream>

using namespace std;

int y(int trip_w, int doub_w){

int i =1;
while(i < 11){

        if(trip_w > doub_w)
            return i;



            trip_w = trip_w*3;
            doub_w = doub_w*2;
            i++;


}


}


int main()
{

     int w1,w2;
     bool flag = true;
    do{
    cin >> w1 >> w2;
    if(w1 <= w2 && w1 >= 1 && w2 <= 10)
        flag = false;

    }while(flag);

    int trip_w = w1*3,doub_w = w2*2;


    cout << y(trip_w, doub_w) << endl;



    return 0;
}
