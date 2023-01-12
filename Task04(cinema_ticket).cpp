#include<iostream>
using namespace std;
float totalIncome(string screen,int rows,int columns);
int main()
{
    string screen;
    int rows,columns;
    cout<<"Enter screen type:";
    cin>>screen;
    cout<<"Enter rows:";
    cin>>rows;
    cout<<"Enter columns:";
    cin>>columns;
    float result=totalIncome(screen,rows,columns);  
    cout<<"Price is:"<<result;
}
float totalIncome(string screen,int rows,int columns)
{
   double price;

   if(screen=="Premiere")
   {
    price=rows*columns*12.00;
   }
   else if(screen=="Normal")
   {
    price=rows*columns*7.50;
   }
     else
   {
    if(screen=="Discount")
    price=rows*columns*5.00;
   }
   return price;
}