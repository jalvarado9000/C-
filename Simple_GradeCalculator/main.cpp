#include <iostream>

using namespace std;

class Grade
{
private:
    double score;

public:
    Grade(){score = 0;}
    Grade(double s){score = s;}

    void set_score(double);
    double get_score();
    char get_Letter();


};

void Grade::set_score(double s)
{
score = s;
}

double Grade::get_score()
{
return score;
}

char Grade::get_Letter()
{
    char letter_grade;

if(score >= 90)
{
    letter_grade = 'A';
}
else if(score >= 80)
{
    letter_grade = 'B';
}
else if(score >=70)
    {
     letter_grade = 'C';
    }
else if(score >= 60)
    {
    letter_grade = 'D';

    }
else
{
    letter_grade = 'F';
}
    return letter_grade;
}


int main()
{
    double num;
    Grade obj1;
    cout << "what is your test score?" << endl;
    cin >> num;
    obj1.set_score(num);

    cout << "Your grade is:" << endl;
   cout << obj1.get_Letter() << endl;











    return 0;
}
