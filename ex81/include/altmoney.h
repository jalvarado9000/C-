#ifndef ALTMONEY_H
#define ALTMONEY_H


class AltMoney
{
    public:
        AltMoney();//default constructor
        AltMoney(int d, int c);//constructor with arguments
        friend AltMoney add(AltMoney m1, AltMoney m2, AltMoney &sum);//sums both moneys
        friend AltMoney substract(AltMoney m1, AltMoney m2, AltMoney &sum);//substracts both moneys
        void display_money( );//outputs the correct dollar and cents entered by the user
        void read_money();//input the user money and cents
    private:
        int dollars;
        int cents;
};

#endif // ALTMONEY_H
