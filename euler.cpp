//P5: Smallest Multiples

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool isPrime(int n)
{
	bool check = true;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			check = false;
			break;
		}
	}
	return check;
}

vector<int> primes(int n) {
	vector<int> prime_v;
	int i = 0,j=2;
	while (i < n) {
		if (isPrime(j)) {
			prime_v.push_back(j);
			i++;
		}
		j++;
	}
	return prime_v;
}

int main(int argc, char *argv[]) {
	int k = atoi(argv[1]);
	unsigned long int  N = 1, i = 0;
	vector<int> p = primes(100);
	bool check = true;
	int limit = sqrt(k);
	vector<int> a;

	while (p[i] <= k) {
		a.push_back(1);
		if (check) {
			if (p[i] <= limit) {
				a.back() = floor(log(k) / log(p[i]));
			}
			else {check = false;}
		}
		N = N * pow(p[i],a.back());// not ^, ^ is XOR in c++
		i++;
	}
	cout << N << '\n';
	return 0;
}

