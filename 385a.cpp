#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
	vector <int> t(103);
	int n , c;
	cin >> n >> c;
	int ma = 0;
	for (int i = 0; i < n; i++){
		cin >> t[i];
	}
	for (int i = 0; i < n-1; i++){
		ma = max(t[i]-t[i+1]-c,ma);
	}
	cout << ma;
	return 0;
}