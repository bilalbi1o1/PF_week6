#include<iostream>
using namespace std;
float checkCost(string city,string product,int quantity);
int main()
{
   string city,product;
   int quantity;
   cout<<"Enter City:";
   cin>>city;
   cout<<"Enter Product:";
   cin>>product;
   cout<<"Enter Quantity:";
   cin>>quantity; 
   float price=checkCost(city,product,quantity);
   cout<<"Price is:"<<price;
}
float checkCost(string city,string product,int quantity)
{
    float price;
    if(city=="Sofia")
    {
        if(product=="Coffee")
        {
         price=(0.50*quantity);  
        }
        else if(product=="Water")
        {
            price=(0.80*quantity);
        }
        else if(product=="Beer")
        {
            price=(1.20*quantity);
        }
        else if(product=="Sweets")
        {
          price=(1.45*quantity);
        }
        else if(product=="Peanuts")
        {
             price=(1.60*quantity);
        }
      return price;
    }
         if(city=="Plovdiv")
    {
        if(product=="Coffee")
        {
         price=(0.40*quantity);  
        }
        else if(product=="Water")
        {
         price=(0.70*quantity);
        }
        else if(product=="Beer")
        {
           price=(1.15*quantity);
        }
        else if(product=="Sweets")
        {
            float price=(1.30*quantity);
        }
        else if(product=="Peanuts")
        {
            price=(1.50*quantity);
        }
    return price;
    } 
        if(city=="Varna")
    {
        if(product=="Coffee")
        {
          price=(0.45*quantity);  
        }
        else if(product=="Water")
        {
           price=(0.70*quantity);
        }
        else if(product=="Beer")
        {
           price=(1.10*quantity);
        }
        else if(product=="Sweets")
        {
             price=(1.35*quantity);
        }
        else if(product=="Peanuts")
        {
             price=(1.55*quantity);
        }
    return  price;
    }
    return 0;
}