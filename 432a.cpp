#include "iostream"
using namespace std;	
int main(int argc, char const *argv[])
{
	int n , k , c = 0;
	cin >> n >> k;
	for(int i = 0 ; i < n ;i++ ){
		int v;
		cin >> v;
		if(5-v >= k){
			c++;
		}
	}
	cout << c/3;
	return 0;
}