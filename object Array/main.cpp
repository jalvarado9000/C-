#include <iostream>
//Include the header file
#include "Comp315Array.h" //Allow the use of cin and cout


int menu()
{
	int op;

	op=0;
	while (op==0 || op>10)
	{
		cout<<"***********************************"<<endl;
		cout<<"Select one of the following options"<<endl;
		cout<<"***********************************"<<endl;
		cout<<"   1. Introduce array elements"<<endl;
		cout<<"   2. Compute elements sum"<<endl;
		cout<<"   3. Compute elements sum in a selected range"<<endl;
		cout<<"   4. Compute elements average value"<<endl;
		cout<<"   5. Find the greatest element"<<endl;
		cout<<"   6. Find the lowest element"<<endl;
		cout<<"   7. Count occurrences of an element"<<endl;
		cout<<"   8. Find the first occurrence of an element"<<endl;
		cout<<"   9. Print elements"<<endl;
		cout<<"   10. Exit"<<endl;
		cout<<"***********************************"<<endl;
		cin>>op;
	}
	cout<<"Selected option"<<op<<endl<<endl;
	return op;
}


int main(){

	int size, op, val;
	Comp315Array cArray;

	cout<<"Array size? ";
	cin>>size;

	cArray = Comp315Array(size);


	do{
		op=menu();

		switch (op) {
			case 1: for (int i=0; i<size; i++)
				{
					cout<<"Element "<<i<<": ";
					cin>>val;
					cArray.setValue(i,val);
				}
				break;

			case 2: cout<<"The total sum is "<< cArray.sum()<<endl;
				break;
			case 3:
				int initVal, endVal;
				cout<<"Initial position: ";
				cin>>initVal;
				cout<<"Final position: ";
				cin>>endVal;
				cout<<"The total sum is "<< cArray.sum(initVal, endVal)<<endl;
				break;

			case 4: cout<<"The aveage value is "<< cArray.averageValue()<<endl;
				break;
			case 5: cout<<"The greatest value is "<< cArray.greatest()<<endl;
				break;
			case 6: cout<<"The lowest value is "<<cArray.lowest()<<endl;
				break;
			case 7: cout<<"Target value: ";
				cin>>val;
				cout<<"Number of occurrences: " << cArray.occurencesCount(val) <<endl;
				break;
			case 8: cout<<"Target value: ";
				cin>>val;
				cout<<"The first occurrence is in position " << cArray.firstOccurence(val) <<endl;
				break;
			case 9: cArray.printElements();
				break;

		}


	}while(op!=10);

	cout<<"Goodbye!"<<endl;

	return 0;
}

