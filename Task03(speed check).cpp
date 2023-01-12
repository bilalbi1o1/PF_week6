#include<iostream>
using namespace std;
string checkSpeed(float speed);
int main()
{
    float speed;
    string result;
    cout<<"Enter Speed:";
    cin>>speed;
    result = checkSpeed(speed); 
    cout<<result;
}
string checkSpeed(float speed)
{
   string result;
   if(speed<=10)
   {
    result="Slow";
   }
   else if(speed>10 && speed<=50)
   {
    result="Average";
   }
   else if(speed>50 && speed<=150)
   {
    result="Fast";
   }
   else if(speed>150 && speed<=1000)
   {
    result="Ultra fast";
   }
   else
   {
     result="Extremely fast";
   }
   return result;
}