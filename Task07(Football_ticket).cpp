#include<iostream>
#include<cmath>
using namespace std;
void sufficient(float budget,string category,int people);
int main()
{
    float budget;
    string category;
    int people;

    cout<<"Enter Budget :" ;
    cin>>budget;
    cout<<"Enter Category(VIP/Normal) :" ;
    cin>>category;
    cout<<"Enter number of people in group :" ;
    cin>>people;

    sufficient(budget,category,people);
}
void sufficient(float budget,string category,int people)
{
    float price;

    if(category=="VIP")
    {
        price=people*499.99;
    }
    if(category=="Normal")
    {
        price=people*249.99;
    }

    if(people>=1 && people<=4)
    {
        budget=budget-budget*0.75;
    }
    else if(people>=5 && people<=9)
    {
        budget=budget-budget*0.60;
    }
    else if(people>=10 && people<=24)
    {
        budget=budget-budget*0.50;
    }
    else if(people>=25 && people<=49)
    {
        budget=budget-budget*0.40;
    }
    else
    {
        budget=budget-budget*0.25;
    }

    if(price<=budget)
      cout<<"Yes!you have "<<(budget-price)<<" QR left";
    else
      cout<<"Not enough money!you need  "<<price-budget<<" QR";  
 }   
