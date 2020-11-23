#include <stdio.h>
#include<vector>
using namespace std;
int main()
{
	int a, min, max;
	min = 0;
	max = 0;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d\n", &a);

	vector <int>arr(a, 0);
	for (int i = 0; i < arr.size(); i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < arr.size(); i++) {

		if (arr[i] < min) min = arr[i];
	}
	for (int i = 0; i < arr.size(); i++) {

		if (arr[i] > max) max = arr[i];
	}
	printf("%d %d", min, max);
}