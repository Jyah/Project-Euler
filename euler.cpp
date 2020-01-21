//P3: Largest prime factor

#include <iostream>
#include <fstream>
#include <stdlib.h> //atoi
#include <stdio.h>
#include <cstdint>
using namespace std;

int main(int argc, char * argv[]) {
	unsigned long long int n = atoll(argv[1]);
	int factor = 2;
	int lastFactor = 1;
	while (n > 1) {
		if (n % factor == 0) {
			lastFactor = factor;
			n /= factor;
			while (n % factor == 0) {
				n /= factor;
			}
		}
		factor++;
	}
	cout << lastFactor << '\n';
	return 0;
}

//int main() {
//	unsigned long long int n = 600851475143;
//	int lastFactor = 0;
//	if (n % 2 == 0) {
//		n /= 2;
//		 lastFactor = 2;
//		while (n%2==0) {
//			n /= 2;
//		}
//	}
//	else{lastFactor = 1;}
//	int factor = 3;
//	while (n > 1) {
//		if (n % factor == 0) {
//			n /= factor;
//			 lastFactor = factor;
//			while (n%factor==0)
//			{
//				n /= factor;
//			}
//		}
//		factor = factor + 2;
//	}
//	cout << lastFactor << '\n';
//}