#include <iostream>
using namespace std;

class Human
{
    private:
    int age; 
    /*this is not available outside this class
    we cannot even use this in the main function*/

    public:
    void displayAge()
    {
        cout<<age<<endl;
    }

    void setAge(int value)
    {
        age= value;
    }
    
};

int main()
{
    Human taylor;
    taylor.setAge(24);
    taylor.displayAge();

    return 0;
}

/* if we are declaring private data members, in order to access
them, we need to create public methods*/