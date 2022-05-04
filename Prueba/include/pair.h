#ifndef PAIR_H
#define PAIR_H


// Class for a pair of values of type T:
template<class T>
class Pair
{
public:

        Pair( ); //default constructor
        void set_element(T position, T value); //setter

        //getters
        T get_element();
        T get_elements();

        void display_pairs(); //display the info stored in first and second value

        private:
        T first;//stores the value of the first pair
        T second;//stores the value of the second pair
};


#endif // PAIR_H
