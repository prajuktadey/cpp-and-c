//wap to compare the two strings without using library functions
#include<iostream>
using namespace std;
int main()
{
    char str1[50], str2[50];
    int i=0, cmp=0;

    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;

    while(str1[i]!='\0' || str2[i]!='\0') //checking for the last character 
    {
        if(str1[i]!=str2[i])
        {
            cmp = 1;
            break;
        }
        i++;
    }
    if(cmp==0)
        cout<<"\nStrings are equal.";
    else
        cout<<"\nStrings are not equal.";
    cout<<endl;
    return 0;
}