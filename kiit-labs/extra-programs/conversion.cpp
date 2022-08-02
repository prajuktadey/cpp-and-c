/*WAP to convert given paisa into its equivalent rupee and paisa as per the following format. 
Example - 550 paisa = 5 Rupee and 50 paisa */

#include <iostream>
using namespace std;

int main()
{
    int paisa; 
    int rupee;
    int remainder; //to calculate the paisa amount 
    int paise;

    //input 
    cout<<"Enter the paisa amount: "<<endl;
    cin>>paisa;

    //calculation of rupee and paisa 
    rupee= paisa/100;
    remainder= paisa% 100;
    paise= remainder;

    //displaying the result 
    cout<<rupee<<" Rupee "<<paise<<" paisa"<<endl;

    return 0;

}