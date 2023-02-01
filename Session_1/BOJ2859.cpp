
// #include <iostream>
// using namespace std;

// int calc(int a, int b)
// {
// 	int min = (a > b ? b : a);

// 	for(int i = min; i > 0; i--)
// 	{
// 		if (a % i == 0 && b % i == 0)
// 			return (i);
// 	}
// 	return (1);
// }

// int main(void)
// {
// 	int n, a, b;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a >> b;
// 		cout << a * b / calc(a, b) << "\n";
// 	}
// 	return (0);
// }