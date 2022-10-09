#include <iostream>
#include <string>

using namespace std;

class A
{
    private:
    int weight;
    public:
    A(int x=0)
    {
        weight=x;
    }

    void PrintValue()
    {
        cout<<weight;
    }

    A operator + (A ob)
    {
        A temp;        
        temp.weight= weight+ ob.weight;

        return temp;
    }
};

int main()
{
    int a=34, b=45, c=0;
    c = a+b;
    cout<<"Total:"<<c<<endl;

    //operator overloading
    A person1(89);
    A person2(90);
    A total;

    total= person1+ person2;
    total.PrintValue();
    
    return 0;

}