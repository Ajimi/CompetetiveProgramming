#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin >> k >> n;
	pair<int,int> temp;
	vector<pair<int,int> > v;
	for(int i= 0 ; i< n ; i++){
		cin >> temp.first >> temp.second;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(int i = 0 ; i < n ; i++){
		if(v[i].first >= k){
			cout << "NO";
			return 0;
		}
		k+=v[i].second;
	}
	cout << "YES";
	return 0;
}

