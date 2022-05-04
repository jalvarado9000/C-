#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    bool flag;
    string num;

    do
    {

        cin >> num;

        int n_len = num.length();
        char c_num;

        for(int i = 0; i < n_len; i++)
        {
            c_num = num[i];

            if(isdigit(c_num))
                flag =  false;

            else
            {
                flag = true;
                i = n_len;
            }
        }


    }
    while(flag);

    int str_n = stoi(num);

    string words;
    char f_letter;
    string* s_array = new string[str_n];

    for(int i = 0; i < str_n; i++)
    {
        do
        {
            cin >> words;
            f_letter = words[0];


            if(isalpha(f_letter))
                flag = false;
            else
                flag = true;

        }
        while(flag);



        int len = words.length()-2;


        if(words.length() > 10)
        {



            char l_letter = words[len+1];
            auto s_num = to_string(len);

            s_array[i] = f_letter + s_num + l_letter;

        }



        else
        {
            s_array[i] = words;

        }
    }

    for(int i = 0; i < str_n; i++)
        cout << s_array[i] << endl;

    return 0;
}
