#include <iostream>

using namespace std;
int sum (int num)
{

    if (num != 0)

        return (num % 10 + sum (num / 10));

    else

        return 0;

}

int main()
{

    int num, result;

    cout<<"Enter the number: ";

    cin>>num;

    result = sum(num);

    cout<<"Sum of digits in "<<num<<" is "<<result<<endl;

    return 0;

}

int sum (int num)
{

    if (num != 0)

        return (num % 10 + sum (num / 10));

    else

        return 0;

}
