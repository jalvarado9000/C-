#ifndef MULTI_H
#define MULTI_H


class Multi
{
    public:
        void set_num(int c);
        int get_num();

        friend Multi& operator *(int b, Multi& test);

    private:
        int num;










};

#endif // MULTI_H
