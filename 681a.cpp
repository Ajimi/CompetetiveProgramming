#include "iostream"

using namespace std;
int main(int argc, char const *argv[])
{
	int n , b ,a;
	string res("NO"),str;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> str >> b >> a;
		if(b>=2400 && a > b)
			res = "YES";
	}
	cout << res;
	return 0;
}