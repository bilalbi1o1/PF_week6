#include<iostream>
using namespace std;
float lowest_price(int distance,string daytime);
int main()
{
   int distance;
   string daytime;
   cout<<"Enter distance:";
   cin>>distance;
   cout<<"Enter time of day:";
   cin>>daytime;
   float fare=lowest_price(distance,daytime);
   cout<<"Cheapest travel fare is: "<<fare;
}
float lowest_price(int distance,string daytime)
{
  float fare;
  if(daytime=="day" && distance<20)
  {
    fare=0.7+0.79*distance;
  }
  else if(daytime=="night" && distance<20)
  {
    fare=0.7+0.90*distance;
  }
  else if(distance>=20  && distance<100)
  {
if(daytime=="day" || daytime=="night")
    fare=0.09*distance;
  }
  else 
  {

    fare=0.06*distance;
  }
  return fare;
}
    