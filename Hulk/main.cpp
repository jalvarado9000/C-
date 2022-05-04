#include <iostream>

using namespace std;

int main()
{


    int n;
    string str1 = "I hate";
    string end = " it";
    string str2 = "I love";
    string middle = " that ";
    bool flag;
    do{
    flag = false;
    cin >> n;

    if(n > 100 || n < 1)
    flag = true;



    }while(flag);


    string *emotion = new string[n*2];
    int one = 1;

    for(int i = 0, counter = 1,u; i < n*2; i++,counter++){

        if(counter == 1)
            u = 1;

        else if(counter == n*2)
            u = 2;

        else if(counter >= 1 && counter % 2 == 0)
            u = 4;


        else if(counter >= 1 && counter % 2 == 1){
                if(one == 1){
                    u = 3;
                    one = 3;
                }

                else if(one == 3){
                    u = 1;
                    one = 1;
                }

                else{}

        }


        switch(u){

    case 1:
        emotion[i] = str1;
        break;

    case 2:
        emotion[i] = end;
        break;

    case 3:
        emotion[i] = str2;
        break;

    case 4:
        emotion[i] = middle;
        break;

        }

    }

    for(int i = 0; i < n*2 ; i++)
        cout << emotion[i];




return 0;


    }







