#include <iostream>

using namespace std;

int main()
{


    int watermelon;
    bool flag = true;
    do
    {
        //cout << "How much does the watermelon weights" << endl;
        cin >> watermelon;
        if(watermelon >= 1 && watermelon <= 100)
            flag = false;
    }
    while(flag);

    if(watermelon <=1)
        cout << "NO" << endl;
    else if(watermelon == 2)
        cout << "NO" << endl;

    else if(watermelon%2 == 0)
        cout << "YES" << endl;
    //{

        //if((watermelon/2)%2 == 0)


        //else
            //cout << "NO" << endl;
    //}

    else
        cout << "NO" << endl;


    return 0;
}
