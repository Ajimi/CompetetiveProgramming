#include "iostream"
#include "vector"
#include "cmath"
using namespace std;
	
int main(int argc, char const *argv[])
{
	int n, k,
		pmax , pmin,
		max = -1,
		min = 101; 
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> k;
		if(k>max){
			max= k; pmax = i;
		}
		if(k <= min){
			min = k; pmin = i;
		}
	}
	
if (pmin < pmax)
	{
		cout << pmax + n - pmin - 2;
	}
	else
	{
		cout << pmax + n - pmin - 1;
	}
	return 0;
}