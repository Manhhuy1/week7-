#include <iostream>
using namespace std;
int c,d;
int count_even(int* a, int n)
{
	int t = 0;
	for (int i = c; i <= d; i++)
		if (a[i] % 2 == 0) t++;
	return t;
}
int main()
{
	int n;
	cin >> n;
	int* a = new int[n + 1];
	for (int i = 1; i <= n; i++) cin >> a[i];
	c = 1; d = 5;
	cout << "5 phan tu dau: " << count_even(a, n) << endl;
	c = n - 5 + 1; d = n;
	cout << "5 phan tu cuoi: " << count_even(a, n) << endl;
	return 0;
}