#include "iostream"
#include "algorithm"
#include "string"
using namespace std;

/*bool lucky(int n){
	if(n<0)
		n*=-1;
	while(n){
		int rem = n%10;
		if(rem == 8) 
			return true;
		n/=10;
	}
	return false;
}
*/
bool lucky(int n){
	(n < 0) ? n*=-1: true;
	string str = to_string(n);
	return find(str.begin(), str.end(), '8') != str.end();
}

int main(int argc, char const *argv[])
{
	int k;
	cin >> k;
	int n = 17;
	for(int i = 1 ; i <n ; i++)
		if(lucky(k+i)){
			cout << i;
			return 0 ;
		}

	return 0;
}