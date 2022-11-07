#include <algorithm>
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

void instruction()
{
cout << "/**********************************************************************" << endl;
cout << "This a Cartesian Product Calculator: " << endl;
cout << "that demonstrate the difference between AxB and BxA" << endl;
cout << "It will first multiply letter by number" << endl;
cout << "and then it will multiply number by letter" << endl;
cout << "You choose a set by choosing the size of set in numbers example set 4x3 is:"<< endl;
cout << "{a,b,c,d}x{1,2,3} or {1,2,3,4}x{a,b,c}" << endl;
cout << "1 = a, 2 = b, 3 = c, 4 = d, 5 = e, 6 = f, 7 = g, 8 = h, 9 = i, 10 = j " << endl;
cout << "11 = k, 12 = l, 13 = m, 14 = n, 15 = o, 16 = p, 17 = q, 18 = r, 19 = s " << endl;
cout << "20 = t, 21 = u, 22 = v, 23 = w, 24 = x, 25 = y, 26 = z"  << endl;
cout << "***********************************************************************/" << endl;
}

void combinationUtil(char arrL[], int arrN[], int letter, int numb, int letIndex,int &counter)
{
if(letter > letIndex)
    {
    for(int i = 0; i < numb; i++){
        cout << "(" << arrL[letIndex] << "," << arrN[i] << ")" << endl;
        counter++;
    }
        combinationUtil(arrL, arrN, letter, numb,(letIndex+1), counter);
    }

else
    cout << "END" << endl;
}

void combinationUtil2(int arrN[], char arrL[],  int numb, int letter, int letIndex, int &counter)
{
if(numb > letIndex)
    {
    for(int i = 0; i < letter; i++){
        cout << "(" << arrN[letIndex] << "," << arrL[i] << ")" << endl;
        counter++;
    }
        combinationUtil2(arrN, arrL, numb, letter,(letIndex+1),counter);
    }

else
    cout << "END\n" << endl;
}

int main()
{



    instruction();

   int letra_a = 26;
   //int letra_a = 14;
    int letra_b;
    bool flag = false;

     do{

    cin >> letra_b;



    if( letra_b > 1000){
        cout << "One or both numbers entered are greater than 26 the max number for this calculator" << endl;
        flag = true;
    }

    else if(letra_b == 0){
        cout << "One or both numbers are zero not accepted value in this calculator" << endl;
        flag = false;
    }

    else if(letra_b < 0){
        cout << "the number you have entered is invalid or negative" << endl;
        flag = true;
        }

    else if(letra_b >= 1 && letra_b <= 999 ){

    auto start = high_resolution_clock::now();
    int count1 = 0;
    int count2 =0;
    int arr2[letra_b-1];

    for(int i = 1; i < (letra_b+1); i++)
         arr2[i-1] = i;

       char Carr[letra_a] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o', 'p','q','r','s','t','u','v','w','x','y','z'};


        cout << endl;
        cout << "AxB" << endl;
        cout << "A = {";

       for(int i = 0; i < letra_a; i++)
        cout << "("<< Carr[i] << ")";

        cout << "}" << endl;
        cout << "B = {";

       for(int i = 0; i < letra_b; i++)
        cout << "("<< arr2[i] << ")";

        cout << "}" << endl;
        cout << endl;
      combinationUtil(Carr,arr2,letra_a,letra_b,0,count1);

       cout << endl;
       cout << "BxA"<< endl;
       cout << "B = {";

        for(int i = 0; i < letra_b; i++)
        cout << "("<< arr2[i] << ")";

        cout << "}" << endl;
        cout << "A = {";

      for(int i = 0; i < letra_b; i++)
        cout << "("<< Carr[i] << ")";

        cout << "}" << endl;
        cout << endl;
      combinationUtil2(arr2,Carr,letra_b,letra_a,0,count2);

      cout << "the first counter counted  "<< count1 << " posible combinations " << endl;
      cout << "and the second counter counted " << count2 << " posible combinations " << endl;
      cout << "the sum of both is: " << count1 + count2 <<" posible combinations " << endl;
      cout << endl;

       auto stop = high_resolution_clock::now();
 auto duration = duration_cast<microseconds>(stop - start);
 cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

    }

    else{
        cout << "Invalid statements" << endl;
        flag = true;
    }

        }while(flag);



    return 0;


}

