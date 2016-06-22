#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int a, b , loose = 0 , draw = 0 , win = 0;
	cin >> a >> b;
	for(int i = 1 ; i <=  6 ; i++){
		if(abs(a-i) < abs(b-i)){
			win++;
		}else if(abs(a-i)> abs(b-i)){
			loose++;
		}else
			draw++;
	}
	cout << win << " " << draw << " " << loose;
	return 0;
}