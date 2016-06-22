#include "iostream"
#include "vector"

using namespace std;

int main(int argc, char const *argv[]){
	
	vector<int> vect;
	int n , v , c = 0;
	cin>> n >> v;
	for(int i = 0 ; i < n ; i++){
		int k , q ;
		bool flag = false;
		cin >>k ;
		for(int j = 0 ; j < k ; j++){
			cin >> q;
			if(!flag && q< v){
				c++;
				vect.push_back(i);
				flag = true;
			}
		}
	}
	cout << c << endl;
	for(int i = 0 , size = vect.size(); i < size ; i++){
		cout << vect[i]+1 << " ";
	}	
	return 0;
}