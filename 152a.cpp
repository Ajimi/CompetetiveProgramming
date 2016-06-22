#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{
	int n , m , count = 0 ;
	cin >> n >> m;
	
	vector< vector<int> > v(101, vector<int>(101)); 
	for(int i = 0 ; i < n ;i++){
		for(int j = 0 ; j < m ; j++){
			cin>> v[j][i];
		}
	}
	/*for(int i = 0 ; i < m ;i++){
		for(int j = 0 ; j < n ; j++){
			
			cout<<v[i][j];
		}
		cout << endl;
	}*/
	for(int i = 0 ; i < m;i++){
		int max = 0;
		for(int j = 0; j < n ; j++){
			if(v[i][j] > max )
				max = v[i][j];
		}
		cout << max;
		for(int j =  0 ; j < n ; j++){
			if(v[i][j] == max)
				count++;
		}
		
	}
	cout << count;
	return 0;
}
