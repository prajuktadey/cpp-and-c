#include <iostream>
using namespace std;

class Student
{
    int feet = 0;
    int inches = 0;

public:
    void getHeight(int f, int i)
    {
        feet = f;
        inches = i;
    }

    bool operator>(const Student &s2)
    {
        if (feet > s2.feet)
            return true;

        else if (feet == s2.feet && inches > s2.inches)
            return true;

        return false;
    }
};

int main()
{
    Student s1, s2;

    s1.getHeight(5, 10);
    s2.getHeight(5, 10);

    if (s1 > s2)
        cout << "Student 1 is taller." << endl;
    else if (s2 > s1)
        cout << "Student 2 is taller." << endl;
    else
        cout << "Both have equal height." << endl;

    return 0;
}