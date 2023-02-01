#include <iostream>
using namespace std;

typedef struct s_time
{
	int h;
	int m;
}	t_time;

typedef struct s_star
{
	t_time tm_twinkle;
	t_time tm_interval;
}	t_star;

int main(void)
{
	t_star star[2];

	for (int i = 0; i < 2; i++)
	{
		cin >> star[i].tm_twinkle.h;
		cin.ignore(5,':');
		cin >> star[i].tm_twinkle.m;
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> star[i].tm_interval.h;
		cin.ignore(5,':');
		cin >> star[i].tm_interval.m;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << star[i].tm_twinkle.h << ":" << star[i].tm_twinkle.m << endl;
		cout << star[i].tm_interval.h << ":" << star[i].tm_interval.m << endl;
	}

}