#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			int k ;
			cin >> k;
			if(k == 1){
				x = i+1;
				y = j+1;
			}
		}
	}
	cout << abs(3-x) + abs(3-y);
	return 0;
}