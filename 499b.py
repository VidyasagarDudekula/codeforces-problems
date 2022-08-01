n,m=input().split()
n=int(n)
m=int(m)
d={}
for i in range(m):
	k,v=input().split()
	d[k]=v

s=input().split()
for i in s:
	if len(i)<=len(d[i]):
		print(i,end=' ')
	else:
		print(d[i],end=' ')