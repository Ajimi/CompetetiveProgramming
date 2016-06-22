#include "iostream"
#include "vector"
using namespace std;

int n,vx,vy,vz,svx=0,svy=0,svz=0;

string equalToZero(){
	return ( svx==0 && svy == 0 && svz == 0 ) ? "YES" : "NO";
}

int main(int argc, char const *argv[])
{
	
	cin >>n;
	
	for(int i= 0 ; i < n ; i++){
		cin>>vx>>vy>>vz;
		svx+=vx;
		svy+=vy;
		svz+=vz;
	}		

	cout << equalToZero();
	return 0;
}