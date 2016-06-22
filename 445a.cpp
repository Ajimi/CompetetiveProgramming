#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	for(int i = 0 ; i <n ; i++){
		for(int j = 0 ; j < m ; j++){
			char c;
			cin >> c;
			cout << ((c == '-') ? '-' : (((i+j)%2) ? 'W': 'B'));
		}
		cout << endl;
	}
	return 0;
}
