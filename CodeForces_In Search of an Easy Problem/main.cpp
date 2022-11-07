#include <iostream>

using namespace std;

string difficulty(string *s_arr,int inum){


string result;

    for(int i = 0; i < inum; i++){

            if(s_arr[i] == "EASY")
                result = "EASY";

                else {
                result = "HARD";
                    return result;
                }

    }

    return result;

}

int main()
{

    int inum;
    bool flag = false;
    do{
   //cout << "How many people will be judging?" << endl;
   cin >> inum;

   if(inum <= 0){
    flag = true;
    //cout << "number entered is zero or negative please try again" << endl;
   }
   else flag = false;

    }while(flag);

   int *i_arr = new int[inum];
   string *s_arr = new string[inum];

   //cout << "enter the contestants answer" << endl;
   int num;

   for(int i = 0; i < inum; i++){

    cin >> num;

    if(num == 0){

        i_arr[i] = num;
        s_arr[i] = "EASY";
    }
    else if(num == 1){

        i_arr[i] = num;
        s_arr[i] = "HARD";

    }
    else{
        //cout << "wrong input try again" << endl;
        --i;

    }

   }


    cout << endl;


    cout << difficulty(s_arr,inum);








    return 0;
}
