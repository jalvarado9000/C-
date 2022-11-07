#include <iostream>
#include <stack>

using namespace std;

void show(stack <int> num)
{
while(!num.empty())
    {
        cout << num.top() << " ";
        num.pop();
    }


}

int main()
{
    stack<int> MyStack;
    MyStack.push(3);
    MyStack.push(2);
    MyStack.push(1);
    MyStack.push(0);



    cout << "this is the size " <<  MyStack.size() << endl;
    cout << "this is the last/first item "<< MyStack.top() << endl;

   show(MyStack);
}
