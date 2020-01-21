//P2: Find the sum of all the even-valued terms in the Fibonacci sequence which do not exceed four million.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int limit = 4e6;
	int sum = 0;
	int a0 = 1, a1 = 1,a2=a0+a1;
	while (a2 < limit) 
	{
		sum += a2;
		a0 = a1 + a2;
		a1 = a2 + a0;
		a2 = a0 + a1;
	}
	cout << sum << '\n';
}