#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin >> n >> k;
	if(k==0 && n > 1 )
		cout << "No solution";
	else if(k==0)
		cout << 0;
		else{
			cout << k;
			for(int i = 1 ; i < n ; i++){
				cout << 0;
			}
	}
	return 0;
}