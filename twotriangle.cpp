#include <stdio.h>
#include<vector>
using namespace std;
int main()
{
	int a;
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d\n", &a);

	vector <int>arr(a);
	vector <int>arr1(a);
	for (int i = 0; i < arr.size(); i++) {
		scanf("%d%d\n", &arr[i],&arr1[i]);	
	}
	int min= arr[0] * arr1[0];
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] * arr1[i] <= min)
			min = arr[i] * arr1[i];

	}
	printf("%d", min);
}