#include "iostream"
#include "string"
#include "vector"
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v(4,0);
	string str;
	int cc  = 0, pos;
	for(int i = 0 ; i < 4 ; i++){
		cin >> str;
		v[i]= str.length() - 2;
		
	}
	
	for(int i = 0 ; i < 4 ;i++){
		int counts=0,count=0;
		for(int j = 0 ; j < 4 ;j++){
			if(i!=j){
				if(v[i]*2 <= v[j])
					counts++;
				if(v[i] >= v[j]*2)
					count++;
			}
		}
		if(counts >= 3 || count >= 3){
			cc++;
			pos = i;
		}
	}
	if(cc == 1){
		char c = 'A' + pos;
			cout << c;
	}else
	cout << "C";
	
	return 0;
}