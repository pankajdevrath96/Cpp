//LIFE__MOTO
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int weekend()
{
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    if(timePtr->tm_wday==0||timePtr->tm_wday==7||timePtr->tm_wday==1)
        return 1;
    else
        return 0;
    
}
void travel()
{
    string S;
    float amount,fare,rem_amt;
    cout<<"Enter new Destination: ";
    getline(cin,S);
    cout<<"Your Destination for this weekend is: "<<S<<endl;
    cout<<"Enter the amount you have for this trip: ";
    cin>>amount;
    cout<<"Enter the fare for your whole trip: ";
    cin>>fare;
    rem_amt=amount-fare;
    if(rem_amt>0)
        {
        cout<<"Remainging amount = "<<rem_amt<<endl;
        
        
        }
    else
        {
        
         cout<<"Your budget is too low..! Please increse it and come back. Have a good day..!!!"<<endl;
        }
}
void work()
{
    cout<<"Set up your Schedule and go to work"<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;
    if(weekend())
        travel();
    else
        work();
    return 0;
}
