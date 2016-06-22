#include "iostream"
#include "string"
#include "cctype"
#include "algorithm"
using namespace std;

bool vowel (char c){
	c = toupper(c);
	return c == 'A' || c== 'E' || c == 'Y' || c== 'E'|| c == 'U' || c == 'I' || c == 'O';
}

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int length = str.length();
	    transform(str.begin(), str.end(), str.begin(), ::tolower);
	for (int i = 0; i < length; i++){
		if(!vowel(str[i]))
			cout << "." << str[i];
	}
	return 0;
}