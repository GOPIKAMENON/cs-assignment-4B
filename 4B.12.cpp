#include <iostream>

using namespace std;


int main()
{

    int n1, n2, max;


    cout << "Enter two numbers: ";

    cin >> n1 >> n2;


    max = (n1 > n2) 


    
    {

        if (max % n1 == 0 && max % n2 == 0)

        {

            cout << "LCM = " << max;

            

        }

        else

            ++max;

    } while (true);

    
    return 0;

}
