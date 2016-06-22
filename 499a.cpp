#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int n ,x , r , l , start = 1 , count = 0;
	cin >> n>>x;
	for(int i = 0 ; i < n ;i++){
		cin >> l >> r;
		count += r - l +1;
		while(start+x <= l){
			start += x;
		}
		count += l - start;
		start = r +1;
	}
	cout << count;
	return 0;
}