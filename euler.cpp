//P1: sum of the multiples of 3 or 5 below 1000
#include <iostream>
#include <fstream>
using namespace std;
int SumDivisibleBy(int n) {
	int target = 1000;
	int sum = 0;
	for (int i = 0; i < target; ++i)
	{
		if (i % n == 0) {
			sum += i;
		}
	}
	return sum;
}

int main() {
	int sum = 0;
	sum = SumDivisibleBy(3) + SumDivisibleBy(5) - SumDivisibleBy(15);
	cout << sum << '\n';
	return 0;
}