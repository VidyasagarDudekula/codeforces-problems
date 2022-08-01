t=int(input())
while t!=0:
	t-=1
	l=input()
	n=[]
	for i in l:
		n.append(i)
	count=0
	for i in range(len(n)-1,0,-1):
		if len(str(int(n[i])+int(n[i-1])))>1:
			k=str(int(n[i])+int(n[i-1]))
			n[i-1]=str(k[0])
			n[i]=str(k[1])
			count=1
			break
	if count==0:
		k=int(n[0])+int(n[1])
		n=n[1:]
		n[0]=str(k)
	for i in n:
		print(i,end='')
	print()