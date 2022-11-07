#include <iostream>

using namespace std;

void Message(int n){

        if(n > 0) {
		cout << "Callate la boca Gabriel" << endl;
		return Message(n-1);


			}
	}

int main()
{
		int ra = 5;
		Message(ra);

}
