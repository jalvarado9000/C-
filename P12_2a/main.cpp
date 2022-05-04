#include <iostream>
using namespace std;
int main()
{
   int SIZE;
   cout<<"Enter the size of the array"<<endl;
   cin>>SIZE;
    int *numlist = new int[SIZE];
    // Read SIZE integers from the keyboard
    for (int i = 0; i<SIZE; i++ )
   {
       cout << "Enter value #" << i+1 << ": ";
       cin >> numlist[i];
    }
    // Display the numbers in a reverse order
    for (int i = SIZE; i > 0; i-- )
   {
       cout << "Value #" << i << ": ";
       cout << numlist[i-1] << endl; //Pay attention to i-1!
    }
   delete[] numlist;
   return 0;
}
