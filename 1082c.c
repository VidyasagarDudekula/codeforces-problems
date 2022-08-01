#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int k,n;
struct node{
	long long int total_students,skills[100000],skills_original[100001];
}*subjects[100001];
int main()
{
	long long int i,j=0,l,m,h,g,c=0,past=0,present=0;
	long long int sub_str[n],n_sub=0;//sub_str=it stores the subects that are taken by the students. 
	//printf("Enter the number of students and number of subjects\n");
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++) sub_str[i]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&k);
	    scanf("%lld",&l);
		if(subjects[k]==NULL)
		{//printf("yes\n");
			subjects[k]=(struct node *)malloc(sizeof(struct node));
			subjects[k]->total_students=-1;
			present=0;
		}
		for(g=0;g<=subjects[k]->total_students;g++)
		{present=subjects[k]->skills[g];
			if(l>subjects[k]->skills_original[g])
			{
				if(g>0) past=subjects[k]->skills[g-1];
				else past=0;
				present=subjects[k]->skills[g];
				subjects[k]->skills[g]=past+l;
				h=subjects[k]->skills_original[g];
				sub_str[g]-=present;
				sub_str[g]+=subjects[k]->skills[g];
				if(c<sub_str[g]) c=sub_str[g];
				subjects[k]->skills_original[g]=l;
				l=h;
			}
		}
		subjects[k]->skills[g]=present+l;
		subjects[k]->skills_original[g]=l;
		subjects[k]->total_students=g;
		sub_str[g]+=present+l;
		if(c<sub_str[g]) c=sub_str[g];
	}
	printf("%lld\n",c);
	for(i=0;i<3;i++) printf("%lld ",sub_str[i]);
	return 0;
}