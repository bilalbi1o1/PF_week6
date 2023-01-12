#include<iostream>
#include<cmath>
using namespace std;
int playtimes(string year,float holidays,float homeWeekends);
int main()
{
  
    string year;
    int holidays;
    int homeWeekends;
    int result;
    
    cout<<"Enter year(Leap/Normal) :" ;
    cin>>year;      
    cout<<"Enter number of holidays except (Saturday/Sunday) :" ;
    cin>>holidays;
    cout<<"Enter number of weekends in which he travels to his hometown :" ;
    cin>>homeWeekends;
    
    result=playtimes(year,holidays,homeWeekends);
    cout<<"Vladimir played vollyball ";
    cout<<result<<" times";
}
int playtimes(string year,float holidays,float homeWeekends)
{
    float weekends;
    float result;
    holidays=holidays*2/3;
    weekends=(48-homeWeekends)*3/4; 
    result=holidays+weekends+homeWeekends;
    if(year=="Normal")
    {
    result=result;
    }
    if(year=="Leap")
    {
    result=result+result*0.15;
    }

    return result;
 }   
