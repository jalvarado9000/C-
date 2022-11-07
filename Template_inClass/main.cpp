// This program demonstrates a destructor.
 #include <iostream>
 using namespace std;

 template<class T>
 class Demo
 {
 public:
 Demo(T); // Constructor
 ~Demo(); // Destructor
 };

 template<class T>
 Demo<T>::Demo(T num)
 {
 cout << "Welcome to the constructor!\n";
 cout << num*5 << endl;
 }

 template<class T>
 Demo<T>::~Demo()
 {
 cout << "The destructor is now running.\n";
}


 int main()
 {
 Demo<char> demoObject('l'); // Define a demo object;

 cout << "This program demonstrates an object\n";
 cout << "with a constructor and destructor.\n";
 return 0;
 }
