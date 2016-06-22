#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{

	int n ,a,b,count = 0 , s1 = 0 , s2=0;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin>>a>>b;
		if((a%2) != (b%2))
			count++;
		s1+=a;
		s2+=b;
	}
	if(s1%2 == 0 && s2%2 == 0)
		cout<<0;
	else if(count%2==0 && count> 0)
		cout<<1;
	else
		cout<<-1;

	return 0;
}