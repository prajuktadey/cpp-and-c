#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
                char str[20];
        public:
                void accept_string()
                {
                        cout<<"Enter String: ";
                        cin>>str;
                }
                void display_string()
                {
                        cout<<str;
                }
                String operator+(String x)  //concatenating string
                {
                        String s;
                        strcat(str, x.str);
                        strcpy(s.str,str);
                        return s;
                }
};

int main()
{
        String str1, str2, str3;

        str1.accept_string();
        str2.accept_string();

        cout<<"\nFirst string is:  ";
        str1.display_string();   //displaying first string

        cout<<"\nSecond string is: ";
        str2.display_string();  //displaying second string

        str3=str1+str2;         //string is concatenated
        cout<<"\nConcatenated string using operator overloading is: ";
        str3.display_string();

        return 0;
}