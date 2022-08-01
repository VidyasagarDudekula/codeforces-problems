#include<stdio.h>
#include<stdlib.h>
int asc(const void* a, const void* b)
{
	if (*(long long int*)a < * (long long int*)b)return 1;
	if (*(long long int*)a > *(long long int*)b)return -1;
	return 0;
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int i;
	long long int a[300005];
	for (i = 0; i < n; i++)
		scanf("%lld", &a[i]);
	long long int b[300005];
	for (i = 0; i < n - 1; i++)
		b[i] = a[i + 1] - a[i];
	qsort(b, n - 1, sizeof(long long int), asc);
	long long int ans = a[n - 1] - a[0];
	for (i = 0; i < k - 1; i++)
		ans -= b[i];
	printf("%lld\n", ans);
	return 0;
}