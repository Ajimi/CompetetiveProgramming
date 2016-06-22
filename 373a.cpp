#include "iostream"
#include "string"
#include "vector"
#include "cctype"
using namespace std;
int main(int argc, char const *argv[])
{
	int k;
	vector<int> v(10,0);
	cin >> k;
	for(int i = 0 ; i < 4 ; i++){
		string str;
		cin>> str;
		for(int j = 0 ; j < str.length() ; j++){
			if(isdigit(str[j])){
				v[str[j]-'0']++;
			}
		}
	}
	int N = 10;
	for(int i = 1 ; i < N ; i++){
		if(v[i]>k*2){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}