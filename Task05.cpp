#include<iostream>
using namespace std;
float discount(float amount,string month,string day);
int main()
{
    float amount;
    string day,month;
    cout<<"Enter amount:";
    cin>>amount;
    cout<<"Enter month:";
    cin>>month;
    cout<<"Enter day:";
    cin>>day;
    float payable=discount(amount,month,day);
    cout<<"Payable amount is :"<<payable;
}
float discount(float amount,string month,string day)
{
    float payable=amount;
    if(day=="Sunday" )
    {
        if( month=="March"|| month=="October" || month=="August")
          {
            payable=amount-amount*0.1;
          }
    } 
    if(day=="Monday" )
    {
        if( month=="November"|| month=="December")
          {
            payable=amount-amount*0.05;
          }
    } 
    return payable;
}