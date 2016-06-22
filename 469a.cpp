#include "iostream"
#include "vector"
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v(101,0);
	int n , p , q;
	cin >> n>> p;
	for(int i =0 ; i < p ; i++){
		int k ;
		cin >> k;
		v[k]=1;
	}
	cin >> q;
	for(int i = 0 ; i < q ; i++){
		int k;
		cin >> k;
		v[k] = 1;
	}
	for(int i = 1 ; i <= n ; i++){
		if(v[i] == 0){
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout <<  "I become the guy.";
	return 0;
}