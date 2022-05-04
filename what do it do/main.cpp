#include<iostream>
using namespace std;

class OV
{
private:
    int val;
    int val2;

public:

    OV(int v1 = 0, int v2 = 0)
    { val= v1, val2 = v2;}

    OV operator -(OV &num)
    {
    OV res;
    res.val = val + num.val;
    res.val2 = val2 + num.val2;

    return res;

    }

    OV operator + (OV & num)
    {
    cout << "Hello Cunt" << endl;
        OV res;
        res.val = val * num.val;
        res.val2 = val2 * num.val2;
    cout << "termine ok" << endl;
    return res;
    }
    print()
    {
    cout << val << endl;
    cout << val2 << endl;

    }



};

int main()
{
OV load1(7,6), load2(10,7), load3, load4;

load3 = load1 + load2;
load4 = load1 - load2;

load3.print();

load4.print();


}
