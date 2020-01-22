//P4: Largest palindrome product

#include <iostream>
#include <fstream>
#include <stdlib.h> //atoi
#include <stdio.h>
#include <cstdint>
using namespace std;
int reverse(int n)
{
	int reversed = 0;
	while (n > 0) {
		reversed = 10 * reversed + n % 10;
		n /= 10;
	}
	return reversed;
}
bool isPalindrome(int n) {
	if (n == reverse(n)) {
		return 1;
	}
	else
	{
		return 0;
	}
}

int main() {
	int largestPalindrome = 0;
	int a = 999;
	while (a >= 100) {
		int b = 999;
		while (b >=a) {
			if (a*b<=largestPalindrome) {
				break;
			}
			if (isPalindrome(a * b)) {
				largestPalindrome = a * b;
			}
			b--;
		}
		a--;
	}
	cout << largestPalindrome << '\n';
	return 0;
}

