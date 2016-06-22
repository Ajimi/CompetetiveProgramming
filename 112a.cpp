#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
int main(int argc, char const *argv[])
{

	string str1,str2;
	cin>>str1>>str2;
	transform(str1.begin(),str1.end(),str1.begin(), ::toupper);
	transform(str2.begin(),str2.end(),str2.begin(), ::toupper);
	int k  = str1.compare(str2);
	k==0 ? cout << 0 :
       k>0 ? cout << 1 :
                          cout << -1;
	return 0;
}