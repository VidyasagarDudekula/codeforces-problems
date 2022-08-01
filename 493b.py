import sys
n=int(input())
first=[]
second=[]
sum_first=0
sum_second=0
l=0
for i in range(0,n):
	k=int(input())
	if k>0:
		first.append(k)
		sum_first+=k
	else:
		second.append(abs(k))
		sum_second+=abs(k)
	l=k

if sum_first>sum_second:
	print("first")
	sys.exit()
elif sum_first<sum_second:
	print("second")
	sys.exit()

d=0
i=0
j=0
while i<len(first) and j<len(second):
	d=first[i]-second[j]
	if d!=0:
		break
	i+=1
	j+=1

if d>0:
	print("first")
elif d<0:
	print("second")
else:
	if len(first)>len(second):
		print("first")
	elif len(first)<len(second):
		print("second")
	elif l>0:
		print("first")
	elif l<0:
		print("second")