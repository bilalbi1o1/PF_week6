#include<iostream>
using namespace std;
string compare(int num1,int num2, int num3);
int main()
{
    int num1;
    int num2;
    int num3;
    string result;

    cout<<"Enter First number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;
    cout<<"Enter third number :";
    cin>>num3;
    
    result = compare( num1, num2,  num3);
    cout<<result;
    
}
string compare(int num1,int num2, int num3)
{
    string result;
    if(num1==num2 && num2==num3)
        result ="Yes";
    else
        result="No";

    return result ;
}