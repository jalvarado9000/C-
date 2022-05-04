#ifndef COMP315ARRAY_H
#define COMP315ARRAY_H


//Include the libraries
#include <iostream> //Allow the use of cin and cout
//Declare namespace std for using cin and cout
using namespace std;

//Class declaration
class Comp315Array{

	//Public members
	public:
		/****************
		Default Constructor
		Task: assign 0 to the array size
		*********/
		Comp315Array();

		/****************
			Constructor
			Task: Define an int array of size n
		*********/
		Comp315Array(int n);

		/*****************
			getSize method
			Task: return the array size
		******************/
		int getSize();

		/*****************
			setValue method
			Task: set array value in position p
		******************/
		void setValue(int p, int val);

		/*****
			sum method
			Task: compute the sum of the n elements in the array
			params:
			@returns
				sum of elements
		*******/
		int sum();

		/*****
			sum method
			Task: compute the sum of the elements in the array from position i to position j
			@returns
				sum of elements from position i to position j
		*******/
		int sum(int i, int j);

		/*****
			greatest method
			Task: returns the greatest element in the array
			@returns
				value of the greatest element in the array
		*******/
		int greatest();

		/*****
			lowest method
			Task: returns the lowest element in the array
			@returns
				value of the lowest element in the array
		*******/
		int lowest();

		/*****
			average method
			Task: the average of elements in the array
			@returns
				the average of elements in the array
		*******/
		double averageValue();

		/******
			occurencesCount method
			Task: count the number of occurrences in the array of a target value
			params
				 targetVal: target value
			@returns
				number of occurrences of the target value in the array
		*********/
		int occurencesCount(int targetVal);

		/******
			firstOccurence method
			Task: returns the position of the first occurrence of a target value
			params
				 targetVal: target value
			@returns
				position of the first occurrence of target value in the array
					if the target value is not in the array, the method must return a -1
		*********/
		int firstOccurence(int targetVal);


		/******
			printArray method
			Task: print elements in the array
			@returns

		*********/
		void printElements();

		/**************

			Destructor
		******/
		~Comp315Array();





	//Private members
	private:
		//array size
		int arraySize;

		//actual array
		int *actualArray;

};

#endif // COMP315ARRAY_H
