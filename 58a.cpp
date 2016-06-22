#include "iostream"
#include "string"

using namespace std;
int main(int argc, char const *argv[])
{
	string hello("hello") , str;
	cin >> str;
	int position = 0;
	for(int i = 0 , length = str.length()  ; i < length ; i++ ){
		if(str[i]== hello[position])
			position++;
	}
	(position == 5 ) ? cout << "YES" : cout << "NO" ;
	return 0;
}