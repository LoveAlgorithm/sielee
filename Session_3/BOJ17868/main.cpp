#include <iostream>
using namespace std;

int	binary_search(long arr[], int low, int high, int n)
{
	int mid;


	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == n)
			return (1);
		else if (arr[mid] < n)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long n[4];

	//input
	for (int i = 0; i < 4; i++)
		cin >> n[i];
	long arr[n[0] + 1];
	cin >> arr[0];
	int sum = 0;
	for (int i = 1; i < n[0] + 1; i++)
	{
		arr[i] = (n[2] * arr[i - 1] + n[3]) % n[1];
		sum += arr[i];
	}
	long res = 0;

	for (int i = 1; i < n[0] + 1; i++)
	{
		res += binary_search(arr, 1, n[0], arr[i]);
	}
	cout << res;
	
	return 0;
}