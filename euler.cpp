//P6:Sum square difference

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
    int sum_sq = n*(2*n+1)*(n+1)/6;
    int sum = n*(n+1)/2;
    int dif = sum*sum-sum_sq;
    cout<<dif<<'\n';
	return 0;
}

