/*#include <queue>
#include <iostream>
  

  
int main(int argc, char const *argv[])
{
 priority_queue<int, std::vector<int>, comparator> minHeap;
 minHeap.push(10);
 minHeap.push(5);
 minHeap.push(12);
 minHeap.push(3);
 minHeap.push(3);
 minHeap.push(4);
  
 while (!minHeap.empty()) {
 cout << minHeap.top() << " ";
 minHeap.pop();
 }
 return 0;
}*/


#include "iostream"
#include "queue"
#include "sstream"
 #include "string"
using namespace std;
  
struct comparator {
 bool operator()(int i, int j) {
 return i > j;
 }
};
priority_queue<int, std::vector<int>, comparator> minHeap;
	
void insert(string stri){
	cout << "here";
	int result;
	string str = stri.substr(7,str.length()-7); 
	stringstream(str) >> result;

	//minHeap.push(result);
	cout << "insert "<< result;
}
void removeMin(){
}

void gett(string str){

}
 int main(int argc, char const *argv[])
 {
 	int n ,k;
 	string str , ins ("insert") , rem ("remove") , get("get");
 	cin >> n;
 	for(int i = 0 ; i < n ;i++){
 		cin >> str;
		std::size_t found = str.find(ins);
		if (found!=std::string::npos){
			insert(str);
		}
		found = str.find(get);
		if (found!=std::string::npos){
			gett(str);
		}
		found = str.find(rem);
		if (found!=std::string::npos){
			removeMin();
		}


 	}
 	return 0;
 }