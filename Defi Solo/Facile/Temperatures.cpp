// Read inputs from stdin. Write outputs to stdout.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if(n == 0)
	{
	    cout << 0 << endl;
	}
	else
	{
	    int tempPosit = 6000;
	    int tempMinus = -6000;
	    int tempMin;

	    for (int i = 0; i < n; i++)
    	{
		    int temp;

	        cin >> temp;

	        if (temp <0)
	        {
	            if (temp > tempMinus)
	                tempMinus = temp;
	        }
	        else
	        {
	            if (temp < tempPosit)
	                tempPosit = temp;
	        }
    	}

    	if (tempPosit <= abs(tempMinus))
    	    tempMin = tempPosit;
    	else
    	    tempMin = tempMinus;

    	cout << tempMin << endl;
	}
}
