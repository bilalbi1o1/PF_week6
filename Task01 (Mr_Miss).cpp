#include<iostream>
using namespace std;
string checktitle(float age,char gender);
int main()
{
    float age;
    char gender;
    string result;
    cout<<"Enter Age :";
    cin>>age;
    cout<<"Enter Gender :";
    cin>>gender;
    result=checktitle(age,gender);
    cout<<result;
}
string checktitle(float age,char gender)
{
    string result;
    if(age<=16 && gender=='M')
    {
        result="Mr.";
    }
    if(age>16 && gender=='M')
    {
        result="Master.";
    }
    if(age<=16 && gender=='F')
    {
        result="Ms.";
    }
    if(age>16 && gender=='F')
    {
        result="Miss.";
    }
    return result;

}