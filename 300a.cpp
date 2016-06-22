#include "iostream"
#include "vector"

using namespace std;
int main(int argc, char const *argv[])
{
	int n ;
	cin>> n;
	vector<int> negative,positive,zeros;
	for(int i = 0 ; i <n ; i++){
		int k;
		cin>>k;
		if(k<0)
			negative.push_back(k);
		else if(k > 0)
			positive.push_back(k);
		else
			zeros.push_back(k);
	}
	int sizeNegative = negative.size();
	if(sizeNegative%2 == 0){
		int k  = negative.back();
		negative.pop_back();
		zeros.push_back(k);
	}
	if(positive.empty()){
		for(int i = 0 ; i < 2 ; i++){
			int k = negative.back();
			negative.pop_back();
			positive.push_back(k);
		}
	}
	sizeNegative = negative.size();
	int sizePositive = positive.size(),
	sizeZeros = zeros.size();
	cout<<sizeNegative << " ";
	for(int i = 0 ; i < sizeNegative ; i++){
		cout<< negative[i] << " ";
	}
	cout << endl<< sizePositive  << " ";;
	for(int i = 0 ; i < sizePositive ; i++){
		cout<< positive[i] << " ";
	}
	cout << endl<< sizeZeros  << " ";;
	for(int i = 0 ; i < sizeZeros ; i++){
		cout<< zeros[i]<< " ";
	}
	return 0;
}