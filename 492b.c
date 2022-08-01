#include<stdio.h>
#include<stdlib.h>
long long int a[10000],l,n,temp_beg,temp_end;
void sort(long long int ,long long int ,long long int);
void merg(long long int beg,long long int end)
{
    long long int mid;
    mid=(end+beg)/2;
    if(beg<end)
    {
        merg(beg,mid);
        merg(mid+1,end);
        sort(beg,mid,end);
    }
}
void sort(long long int beg,long long int mid,long long int end)
{
    long long int i,j,k,c[10000];
    i=beg;
    j=mid+1;
    k=beg;
    while(i<=mid&&j<=end)
    {
        if(a[i]>a[j]) c[k++]=a[j++];
        else c[k++]=a[i++];
    }
    while(i<=mid) c[k++]=a[i++];
    while(j<=end) c[k++]=a[j++];
    for(i=beg;i<=end;i++)
    a[i]=c[i];
}
int bin(long long se,long long beg,long long end,long long int k)
{
  long long int mid;mid=(beg+end)/2;
  if(se<a[beg]||a[end]<se) {
    if(se<a[beg]) temp_end=a[beg];
    else temp_beg=a[end];
    return 0;}
  else if(se==a[mid]) return 1;
  else if(se<a[mid]){temp_beg=a[beg];temp_end=a[mid]; return(bin(se,beg,mid-1,k));}
  else if(se>a[mid]) {temp_beg=a[mid];temp_end=a[end]; return(bin(se,mid+1,end,k));}
}
int main()
{
  long long int i,j,k=-1,m,b;
  double h,g,v;
  //printf("Enter the number n,l\n");
  scanf("%I64d%I64d",&n,&l);
  for(i=0;i<n;i++) scanf("%I64d",&a[i]);
  merg(0,n-1);
  //for(i=0;i<n;i++) printf("%I64d ",a[i]);
  for(i=0;i<n-1;i++)
  {
    if(a[i+1]-a[i]>k) k=a[i+1]-a[i];
  }
  h=k/1.0;
  h=h/2.0;i=0;k=-1;g=v=0;//printf("first h:-%f\n",h);
  for(i=0;i<=l;i++)
  {printf("\ni=%I64d\n",i);
    b=bin(i,0,n-1,0);
    if(b==0)
    {//printf("%I64d\n", i);
      b=0;j=i;k=-1;
      m=temp_end;j=temp_beg;
      if(m==i||j==i) g=abs(m-j)/1.0;
      else g=abs(m-j)/2.0;
      if(g>h) h=g;
      //printf("loop_h:-%f\n",h);
    }
    i=m;
    printf("\ni=%I64d\n",i);
  }//printf("End ");
  printf("%f",h);
  return 0;
}
