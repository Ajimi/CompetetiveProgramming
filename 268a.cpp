#include "iostream"
#include "vector"
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v(31),v2(31);
	int n , count = 0;
	cin >> n;
	for(int i = 0; i < n ; i++){
		cin >> v[i] >> v2[i];
	}

	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n ; j++){
			if(v[i] == v2[j])
				count++;
		}
	}
	cout << count;
	return 0;
}