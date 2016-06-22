#include "iostream"
#include "vector"
#include "string"
using namespace std;

string exercise(vector<int> &v){
	int max = 0;
	for(int i = 0 ; i < 3 ; i++){
		if(v[max]< v[i] )
			max = i;
	}
	return (max == 0) ? "chest" : (max==1) ? "biceps": "back" ;
}

int main(int argc, char const *argv[])
{
	int n;
	vector<int> v(3,0);
	cin >> n;	
	for(int i = 0 ; i < n ;i++){
		int k ;
		cin >> k;
		v[i%3] +=k ;
	}
	cout << exercise(v);
	return 0;
}