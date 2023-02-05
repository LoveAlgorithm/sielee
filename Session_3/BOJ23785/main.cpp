#include <iostream>
#include <cmath>
using namespace std;

long factorial(long n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
long f(long x)
{
	if (x < 10)
		return factorial(x);
	else
		return (factorial(x % 10) + f(floor(x / 10)));
}

void res(long y, long start, long end)
{
	cout << "start: " << start << " end: " << end << endl;

	for (long i = start; i <= end; i+=10)
	{
		if (f(i) == y)
		{
			cout << i;
			return ;
		}
		else if (f(i) < y)
			res(y, i + 1e1, i + 10 * i);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long y;
	cin >> y;

	for (long x = 1; x < 130; x+=10)
	{
		cout << "x: " << x << " f(x): " << f(x) << endl;
		// if (f(x) == y)
		// {
		// 	cout << x;
		// 	return 0;
		// }
		// else if (f(x) > y)
		// {
		// 	res(y, (x - 1) + 1e1, (x - 1) + 1e2);
		// 	return 0;
		// }
	}
	return 0;
}