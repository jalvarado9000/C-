#include <iostream>

using namespace std;

//function that gives the the division of both numbers.
int reduce (int &num, int &denom){

int least,great,common = 1;

//checks if inputs are negative, and does not accept them.
if(num <= 0 || denom <= 0)
    return 0;

//check if num is smaller than denom.
else if(num < denom){
    least = num;
    great = denom;
}

//checks if denom is larger or equal than num.
else{
    least = denom;
    great = num;

}

//loops for the least number of times to check if both have a greatest commmon divisor number (g.c.d).
for(int i = 1; i <= least; i++)
{
//checks if number i is divisible and stores the value.
if(least % i == 0 && great % i == 0)
    common = i;

    //checks if the common number was never altered from its default value 1 and concludes it doesn't  have a g.c.d.
    else if(least == i && common == 1)
        return 0;

    //does nothing.
    else{}
}

//divides both inputs by the g.c.d number found, and alters num and denom initial value.
num = num/common;
denom = denom/common;


return 1;

}

int main()
{

int m = 63, n = 210;

 //checks if m and n have a g.c.d and return 1 or 0.
 if (reduce(m, n))
 cout << m << '/' << n << endl;

//if a zero is returned the numbers does not have a g.c.d.
else
 cout << "fraction error" << endl;
}
