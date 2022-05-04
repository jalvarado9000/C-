//Include the header file
#include "Comp315Array.h" //Allow the use of cin and cout


	/****************
		Default Constructor
		Task: assign 0 to the array size
	*********/
	Comp315Array::Comp315Array()
	{
		arraySize = 0;
	}

	/****************
		Destructor
	*********/
	Comp315Array::~Comp315Array()
	{
		actualArray=0;
	}

	/****************
		Constructor
		Task: Define an int array of size n
	*********/
	Comp315Array::Comp315Array(int n)
	{
		actualArray= new int[n];
		arraySize = n;
	}



	/*****************
		getSize method
		Task: return the array size
	******************/
	int Comp315Array::getSize(){
		return arraySize;
	}


	/*****************
		setValue method
		Task: set array value in position p
	******************/
	void Comp315Array::setValue(int p, int actualValue){
			actualArray[p]=actualValue;
	}


	/*****
		sum method
		Task: compute the sum of the n elements in the array
		params:
		@returns
			sum of elements
	*******/
	int Comp315Array::sum(){
		int res=0;

		return res;
	}

	/*****
		sum method
		Task: compute the sum of the elements in the array from position i to position j
		@returns
			sum of elements from position i to position j
	*******/
	int Comp315Array::sum(int i, int j){
		int res=0;

		return res;
	}

	/*****
		greatest method
		Task: returns the greatest element in the array
		@returns
			value of the greatest element in the array
	*******/
	int Comp315Array::greatest(){
		int res=actualArray[0];

		return res;
	}

	/*****
		lowest method
		Task: returns the lowest element in the array
		@returns
			value of the lowest element in the array
	*******/
	int Comp315Array::lowest(){
		int res=actualArray[0];

		return res;
	}

	/*****
		average method
		Task: the average of elements in the array
		@returns
			the average of elements in the array
	*******/
	double Comp315Array::averageValue(){
		int res=0;

		return res;
	}

	/******
		occurencesCount method
		Task: count the number of occurrences in the array of a target value
		params
			 targetVal: target value
		@returns
			number of occurrences of the target value in the array
	*********/
	int Comp315Array::occurencesCount(int targetVal){
		int res=0;

		return res;
	}

	/******
		firstOccurence method
		Task: returns the position of the first occurrence of a target value
		params
			 targetVal: target value
		@returns
			position of the first occurrence of target value in the array
				if the target value is not in the array, the method must return a -1
	*********/
	int Comp315Array::firstOccurence(int targetVal){
		int res=-1;

		return res;
	}

/******
	printArray method
	Task: print elements in the array
	@returns

	*********/
	void Comp315Array::printElements(){
		for(int i=0;i<arraySize; i++){
			cout<<actualArray[i]<<endl;
		}
	}



