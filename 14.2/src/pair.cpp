#include <iostream>
#include <cstdlib>
#include <utility>
#include <tuple>
#include "pair.h"
using namespace std;




template<class T>
void Pair<T>::set_element(T position, T value)
{

            first = position;
            second = value;

}


template<class T>
Pair<T>::Pair()
{
    // empty body
}
template<class T>
T Pair<T>::get_element(){
return first;
 }

 template<class T>
T Pair<T>::get_elements(){
return (second);
 }


 template <class T>
 void Pair<T>::display_pairs(){


 cout << first << " " << second << endl;


 }
