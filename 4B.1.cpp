#include <iostream>

using namespace std;

int Power(int base, int exponent)

{

	if (exponent == 0)
	{
		return 1;
	}

	else
	{
		return (base*Power(base, exponent - 1));
	}
    

}


int main()

{
 
   int base, exponent, result;


    

	 cin >> base;

   	cin >> exponent;


    
	result = Power(base, exponent);

    
	cout << result;


   
 return 0;

}
