#include "iostream"
#include "string"
using namespace std;
int main(int argc, char const *argv[])
{
	int n , k , c = 0;
	cin >> n >> k;
	string str;
	for(int i = 0 ; i < n ; i++){
		cin>> str;
		int count = 0;
		for(int i = 0 , length = str.length() ; i < length ; i++){
			if(str[i] == '4' || str[i] == '7')
				count++;
		}
		if(count > k )
			c++;
	}
	cout << n - c;
	return 0;
}