#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
private:
    double width;
    double length;

public:

    class NegativeLenght{
    private:
        double Nlenght;
    public:

        void set_Nlength(double nl)
        {
            Nlenght = nl;
        }
        double get_Nlength()
        {
        return Nlenght;
        }



        };
    class NegativeWidth{

    private:
        double Nwidth;
    public:

        void set_Nwidth(double nw)
        {
            Nwidth = nw;
        }
        double get_Nwidth()
        {
        return Nwidth;
        }

    };
    Triangle(){width = 0, length = 0;};
    void set_width(double);
    void set_length(double);
    double get_width();
    double get_length();
    double get_area();




};

#endif // TRIANGLE_H
