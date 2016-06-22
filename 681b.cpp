#include "iostream"

using namespace std;
bool divi(int n){
	int b[4] = {0, 1234567, 123456, 1234};
	for(int i = 0 ; i < 4 ;i++ ){
		for(int j = 0 ; j < 4 ;j++ ){
			for(int k = 0 ; k < 4 ;k++ ){
				if((b[i]+b[j]+b[k])%n == 0 && i != 0 && j != 0 && k !=0)
					return true;
			}
		}		
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	(divi(n)) ? cout <<"YES": cout << "NO";
	return 0;
}