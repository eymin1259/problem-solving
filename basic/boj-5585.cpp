#include<iostream>
using namespace std;

int main() {
	int monney;
	cin >> monney;
	monney = 1000 - monney;
	int res = 0;

	// 500
	int p = monney / 500;
	res += p;
	monney -= (500 * p);

	// 100
	p = monney / 100;
	res += p;
	monney -= (100 * p);

	// 50
	p = monney / 50;
	res += p;
	monney -= (50 * p);

	// 10
	p = monney / 10;
	res += p;
	monney -= (10 * p);

	// 5
	p = monney / 5;
	res += p;
	monney -= (5 * p);

	// 1
	p = monney / 1;
	res += p;
	monney -= (1 * p);

	cout << res << endl;
	return 0;
}
