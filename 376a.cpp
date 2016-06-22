#include "iostream"
#include "string"
using namespace std;
int main(int argc, char const *argv[])
{int Left=0,Right=0,ind;
	string s;
	for (int i = 0 ; i < s.length() ; i ++)
    {
        if( s[i] == '^'){
            ind = i;
            break;
        }
    }
    
    for (int i = 0 ; i < ind ; i ++)
    {
        if (s[i] >= '1' && s[i] <= '9'){
            Left += (ind - i)*(s[i] - '0');
        }
    }
    for (int i = ind + 1 ; i < s.length() ; i ++)
    {
        if (s[i] >= '1' && s[i] <= '9'){
            Right += (i - ind)*(s[i] - '0');
        }
    }
    if (Left == Right){
        cout << "balance";
    }
    else if (Left < Right){
        cout <<"right";
    }
    else
    {
        cout << "left";
        
    }}