#include<iostream>
using namespace std;
float discount(float amount,string month,string day);
int main()
{
    float amount;
    string day,month;
    cout<<"Enter Amount:";
    cin>>amount;
    cout<<"Enter Month:";
    cin>>month;
    cout<<"Enter Day:";
    cin>>day;
    float payable=discount(amount,month,day);
    cout<<"Payable amount is :"<<payable;
}
float discount(float amount,string month,string day)
{
    float payable=amount;
    if(day=="Sunday" )
    {
        if( month=="October")
        {
            payable=amount-amount*0.1;
        }
    }
    if( month!="October")

    {
        payable=amount-amount*0.05;
    }
    return payable;
}