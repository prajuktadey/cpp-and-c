/*WAP to convert given second into its equivalent hour, minute and second as per the following format. 
Example. 7560 second = 2 Hour, 27 Minute and 40 Second */

#include <iostream>
using namespace std;

int main()
{
    int seconds;
    int hours;
    int minutes;
    int new_seconds;
    
    cout<<"Enter seconds: "<<endl;
    cin>>seconds;

    hours = (seconds/3600); 
	
	minutes = (seconds -(3600*hours))/60;
	
	new_seconds = (seconds -(3600*hours)-(minutes*60));

    cout<<hours<<" Hour "<<minutes<<" Minute "<< new_seconds<<" Second"<<endl;

    return 0;
}