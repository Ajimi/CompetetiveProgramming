#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
	int sum = 0 ,  sum2 = 0 ,  nb = 0 , n;
	vector<int> v(101);
	cin>> n;
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
		sum+=v[i];
	}
	sort(v.begin(),v.end(), std::greater<int>());
	for(int i = 0 ; i < n ; i++){
		sum2+=v[i];
		nb++;
		if(sum2 > sum/2){
			cout<< nb;
			return 0;
		}
	}
	return 0;
}