#!/bin/python

for i in range(int(raw_input())):
    n = int(raw_input())
    sum1, sum2 = 0, 0
    sum1 =(n*(n+1)*(2*n+1))/6
    sum2 = (n*(n+1))/2
    sum2 = sum2**2
    print str(sum2 - sum1)
