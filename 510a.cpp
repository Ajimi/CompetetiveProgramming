#include "iostream"

using namespace std;
int main(int argc, char const *argv[])
{
	int n ,k , m ;
	cin >> n>>m;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(i % 2 != 0)
				cout << "#";
			else{
				if(i%4 == 0 && j ==0)
					cout <<"#";
				else if(i%2 == 0 & i % 4 != 0 && j == m-1 )
					cout <<"#";
				else
					cout <<".";
			}
		}
		cout << endl;
	}
	return 0;
}