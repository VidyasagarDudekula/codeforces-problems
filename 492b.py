n,l=input().split()

n=int(n)
l=int(l)
v=[float(i) for i in input().split()]

v.sort()

max_dis=max(0.0,v[0]-0.0)

for i in range(0,n-1):
	dis=(v[i+1]-v[i])/2
	max_dis=max(max_dis,dis)

max_dis=max(max_dis,l-v[n-1])

print(max_dis)