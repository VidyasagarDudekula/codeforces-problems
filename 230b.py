from math import sqrt
 
def isPrime(n):
 
    # Corner case
    if (n <= 1):
        return False
 
    # Check from 2 to sqrt(n)
    for i in range(2, int(sqrt(n))+1):
        if (n % i == 0):
            return False
 
    return True
n=int(input())
l=[int(i) for i in input().split()]
d={}
for i in l:
	d[i]=False
for i in l:
	k=int(i**(0.5))
	if (k*k==i and isPrime(k) and i!=1) or d[i]:
		d[i]=True
		print("YES")
	else:
		print("NO")