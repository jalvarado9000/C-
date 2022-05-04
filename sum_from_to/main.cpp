#include <iostream>

using namespace std;

//function that sum numbers from first to last.
int sum_from_to(int first,int last){

    int sum = 0;

//condition that evaluates if last is larger than first.
//then sums the numbers from first to last and returns the total sum.
    if(first < last){
    for(int i = first; i <= last; i++)
    sum += i;
    return sum;
}

//condition that evaluates if first is larger than last.
//then sums the numbers from last to first returns the total sum.
    else if(last < first){
    for(int i = first; i >= last; i--)
    sum += i;
    return sum;
}

//condition that evaluates if val is equal to val2.
//then returns the number.
    else if(first == last){
    return first;
}

//condition that evaluates if the input is not a number.
    else{
       cout << "Please try again." << endl;
       return sum;
    }

}

int main()
{
    cout << "from 4 to 7: "  << sum_from_to(4,7) << endl;;
    cout << "from -3 to 1: " << sum_from_to(-3,1) << endl;
    cout << "from 7 to 4: "  << sum_from_to(7,4) << endl;
    cout << "from 9 to 9: "  << sum_from_to(9,9) << endl;

    return 0;
}
