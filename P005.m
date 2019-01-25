% Smallest multiple
%{
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
%}
clc;clear;
tstart = tic;
lb = 1;
ub = 30;
num = ones(1,ub-lb+1);
v = lb:ub;
N = ub;
% r = a - b.*fix(a./b)
r = 1;
while r~=0
  r = sum(N*num - v.*fix(N*num./v));
  N = N+1;
end
N = N - 1;
toc(tstart);

