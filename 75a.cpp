#include "iostream"
using namespace std;

int removeZero(int n){
	int d = 1, rem , k = 0;
		while(n){
			rem= n%10;
			if(rem != 0){
				k  += rem * d;
				d*=10;
			}
				n/=10;
		}
		return k;
}

int main(int argc, char const *argv[])
{	int a , b ,c;
	cin >> a>>b;
	c = a+b;

	a = removeZero(a);
	b = removeZero(b);
	c = removeZero(c);
	(a+b==c) ? cout << "YES" : cout <<"NO";
	return 0;
}