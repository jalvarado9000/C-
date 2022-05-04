#include "pair.h"
#include <iostream>

using namespace std;


template<class T>
 void Pair<T>::set_element(T position, T value)
 {
 if (position == 1)
 first = value;
 else if (position == 2)
 second = value;
 else
 {
 cout << "Error: Illegal pair position. \n";
 exit(1);
 }
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
