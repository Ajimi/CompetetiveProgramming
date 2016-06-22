#include "iostream"

using namespace std;
int main(int argc, char const *argv[])
{
	int r1 , r2 , c1 , c2 , d1 , d2;
	cin >> r1>> r2>> c1>> c2>> d1>> d2;
	for(int i = 1 ; i  < 10 ; i++){
		for(int j = 1 ; j < 10 ; j++){
			for(int k = 1 ; k < 10 ; k++){
				for(int f = 1 ; f < 10 ; f++){
					if (i != j && i != k && i != f && j != k && j != f && k != f)
					if(i+j == r1 && r2 == k+f && d1 == i + f && c1 == i+k && c2 == f + j && d2 == j + k){
						cout << i << " " << j <<endl << k  << " " << f ;
						return 0;
					}
				}
			}
		}
	}
	cout << -1;
	return 0;
}