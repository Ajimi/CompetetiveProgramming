#include "iostream"
#include "vector"
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	vector <int> v(101,0);
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int k;
		cin>>k;
		v[k] = i+1;

	}
	for(int i = 0 ; i < n ; i++){
		cout << v[i+1] <<" "; 
	}
	return 0;
}