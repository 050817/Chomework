#include<iostream>
#include<cmath>
using namespace std;
int change(int m, int n);
int main(){
	int a, b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	for (int i = 2; i <= 16; ++i)
	{
		int a1 = change(a, i);
		int b1 = change(b, i);
		int c1 = change(c, i);
		if (a1*b1 == c1)
		{
			cout << i;
			break;
		}
		else if (i == 16)
			cout << 0;
	}
	return 0;
}
int change(int m, int n) {
	long int num[6];
	for (int j = 5; j >= 0; --j) {
		int k = pow(10, j);
			num[j] = m /k ;
			if (num[j] != 0)
				m = m % (num[j] * k);
	}
	int x = 0;
	for (int d = 5; d >= 0; --d) {
		int p = pow(n, d);
		x += num[d] * pow(n, d);
	}
	return x;
}