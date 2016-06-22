#include "iostream"
#include "string"

using namespace std;
int main(int argc, char const *argv[])
{	
	int t;
	string str;
	cin >> t;
	while(t--){
		cin >> str;
		int k = str.length();
		if( > 10 )
			cout << str[0] << k-2 << str[k-1] ;
		else
			cout << str;
		cout <<endl;
	}
	return 0;
}