
 #include <iostream>
 #include <new> // Needed for bad_alloc
 using namespace std;
template <class T>
T square(T);
 int main()
 {
 double num;
 cout << "enter the number" << endl;
 cin >> num;


 cout << "result: "<< square(num) << endl;

 int goog;

 cout << "enter anothe number " << endl;
 cin >> goog;
 square(goog);
 cout << "result: "<< square(goog) << endl;




 }

template <class T>
 T square(T n)
 {

 return n*n;


 }
