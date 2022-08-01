n=int(input())
l=[int(i) for i in input().split()]
count=0
key=0
neg=l[:]
l.sort()
start=-1
end=-1
for i in range(0,n):
	if l[i]!=neg[i]:
		start=i
		break
for i in range(n-1,-1,-1):
	if l[i]!=neg[i]:
		end=i
		break;
if start==-1:
	count=0
else:
	k=neg[start:end+1]
	result=neg[:start]+k[::-1]+neg[end+1:]
	c=0
	for i in range(0,n):
		if result[i]!=l[i]:
			count=2
			break
	if count==0:
		count=1


if count==0:
	print("yes")
	print(1,1)
elif count==1:
	print("yes")
	print(start+1,end+1)
elif count>1:
	print("no")