#include <iostream>
using namespace std;

int sum=0,r;
int reverse(int num);
{
if
(r=num%10;
sum=sum*10+r;
reverse(num/10));
{return reverse;}


else
{return sum;}

}
int main()
{
int num,rev;
cout<<"Enter a number :";
cin>>num;
rev=reverse(num);
cout<<"After reverse the no is"<<rev;
return 0;
}


