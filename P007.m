% Problem 7
%{ 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.
What is the 10 001st prime number?
%}
clc;clear;
N = 10001;
h = 2;
n = 0;
while n<N
    if isprime(h)
        n = n+1;
    end
    h = h+1;
end
fprintf('The %dth prime number is %d\n',N,h-1);
