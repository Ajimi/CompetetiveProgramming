#include "iostream"
#include "vector"
#include "cmath"

using namespace std;
int main(int argc, char const *argv[])
{	
	int n,un=0,de=0,tr=0;
	vector<int> v1(5000),v2(5000),v3(5000);
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		int k;
		cin>>k;
		if(k == 1)
			v1[un++] = i ;
		else if(k == 2)
			v2[de++] = i;
		else
			v3[tr++] = i;
	}
	int minn = min(un,min(de,tr));
	cout << minn <<endl;
	for(int i = 0 ;i < minn ; i++){
		cout << v1[i]+1 << " " << v2[i]+1 <<  " " << v3[i]+1 << endl;
	}
	return 0;
}