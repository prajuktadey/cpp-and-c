/*WAP to find the average mark of 5 subjects of a student. 
Assume full mark for each subject is 100*/

#include <iostream>
using namespace std;

int main()
{
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

    float average;
    int sum;

    cout<<"Enter the marks in sub-1: ";
    cin>>sub1;
    cout<<"Enter the marks in sub-2: ";
    cin>>sub2;
    cout<<"Enter the marks in sub-3: ";
    cin>>sub3;
    cout<<"Enter the marks in sub-4: ";
    cin>>sub4;
    cout<<"Enter the marks in sub-5: ";
    cin>>sub5;
    
    sum= sub1+sub2+sub3+sub4+sub5;
    average= sum/5;
    cout<<"Average of marks: "<<average<<endl;

    return 0;
}