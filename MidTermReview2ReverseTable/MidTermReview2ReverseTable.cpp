#include <iostream>
using namespace std;

int main()
{
    int r = 12;
	cout << "Reverse Multiplication Table" << endl;
	cout << "===============================\n" << endl;
	while (r >= 1)
	{
		int c = 12;
		cout << "Table of # " << r << endl;
		cout << "===============" << endl;

		while (c >= 1)
		{
	
			cout << r << " by " << c << " ==> " << r * c << endl;
			c--;
		}
		cout << endl;
		c = 12;
		r--;
	}
}
