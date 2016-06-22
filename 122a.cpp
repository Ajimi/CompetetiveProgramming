#include "iostream"

using namespace std;

bool lucky(int n){
	return n % 4 == 0|| n %7  == 0|| n % 47 == 0|| n % 74  == 0|| n % 474 == 0|| n % 477 == 0|| n % 744 == 0|| n % 747  == 0||n % 774  == 0|| n % 777 == 0 ;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	lucky(n) ? cout << "YES" : cout << "NO";
	return 0;
}