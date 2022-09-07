/*Create a class which stores a sting and its length as data members. Include all the
constructors. Include a member function to join two strings and display the
concatenated string.*/

#include <iostream>
#include <string>

using namespace std;
class String
{
private:
    string str;
    int ln = str.length();

public:
    String()
    {
        cout << "Default Costructor called." << endl;
    }

    String(string s)
    {
        cout << "Parameterized Costructor called." << endl;
        str = s;
    }
    String(String &obj)
    {
        cout << "Copy Costructor called." << endl;
        str = obj.str;
    }
    
    void display()
    {
        cout << str << endl;
        cout << "Length: " << ln << endl;
    }

    friend string merge_string(String s1, String s2);
};

string merge_string(String s1, String s2)
{
    string result = s1.str + s2.str;
    return result;
}

int main()
{
    string s1, s2;
    cout << "Enter 1st String: ";
    getline(cin, s1);
    cout << "Enter 2nd String: ";
    getline(cin, s2);
    String a(s1), b(s2);
    cout << "Merged string: " << merge_string(s1, s2);
    return 0;
}