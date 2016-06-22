#include "iostream"
#include "vector"
#include "cmath"

using namespace std;

int main(int argc, char const *argv[])
{
	vector <int> v(101);
	int n ;
	cin >> n;
	for(int i = 0 ; i <n ; i++){
		cin>> v[i];
	}
	int m = 10000000;
	for(int i = 0 ; i < n ;i++){
		int sum = 0;
		for(int j = 0 ; j < v[i] ;j++){
			int k;
			cin >> k;
			sum += k*5;

		}
		sum += 15*v[i];
		m = min(sum,m);
	}
	cout << m;
	return 0;
}