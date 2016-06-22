#include "iostream"
#include "string"
#include "cmath"
#include "sstream"
using namespace std;

int main(int argc, char const *argv[])
{
	int n,n2;
	string str;
	cin>>str;
	if(str[0] != '-')
		cout << str;
	else{
		string str2=str;
		if (str.size () > 0)  str.resize (str.size () - 1);
		str2[str2.length()-2] = str2[str2.length()-1];
		if (str2.size () > 0)  str2.resize (str2.size () - 1);
		stringstream(str) >> n;
		stringstream(str2) >> n2;
		cout << max(n,n2);
	}

	return 0;
}