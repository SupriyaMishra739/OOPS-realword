#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno, mathsMarks, scienceMarks, engMarks;
    // default constructor

public:
    Student()
    {
        rollno = 0;
        name = "";
        mathsMarks = 0;
        scienceMarks = 0;
        engMarks = 0;
    }

    Student(int r, string n, int ma, int sc, int en)
    {
        rollno = r;
        name = n;
        mathsMarks = ma;
        scienceMarks = sc;
        engMarks = en;
    }

    // setters
    void setRollNo(int r)
    {
        rollno = r;
    }
    void setName(string n)
    {
        name = n;
    }
    void setMaths(int m)
    {
        mathsMarks = m;
    }
    void setScience(int m)
    {
        scienceMarks = m;
    }
    void setEnd(int m)
    {
        engMarks = m;
    }

    void calculateAverage()
    {
        int avg = (mathsMarks + engMarks + scienceMarks) / 3;
        cout << "the average score is:" << avg << endl;
    }
    void displayResult()
    {
        cout << "the roll no is:" << rollno << endl;
        cout << "the name is:" << name << endl;
        cout << "the maths marks is:" << rollno << endl;
        cout << "the english marks is:" << engMarks << endl;
        cout << "the ecience marks is:" << scienceMarks << endl;
    }
};

int main()
{
    Student *s1 = new Student(1, "jack", 100, 100, 98);
    s1->calculateAverage();
    s1->displayResult();

    cout << "new student" << endl;
    Student *s2 = new Student();
    s2->setRollNo(2);
    s2->setName("jissy");
    s2->setMaths(95);
    s2->calculateAverage();
    s2->displayResult();
}