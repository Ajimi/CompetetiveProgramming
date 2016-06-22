#include "iostream"

using namespace std;
	int n;
	char c[400][400];

bool flag(){
	if(c[0][0] == c[0][1])return false;
	for(int i = 0 ; i <n ;i++)
	for(int j = 0 ; j <n ;j++) {
		if(i==j || i==n-j-1){
			if(c[i][j]!=c[0][0])return false;
		}
		else{
			if(c[i][j]!=c[0][1])return false;
		}
	}
}
int main(int argc, char const *argv[])
{
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> c[i];
	}

	(flag()) ? cout << "YES" : cout << "NO";
	return 0;
}