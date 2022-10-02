#include <iostream>
#include <cctype>
#include <vector>
using namespace std;

void PrintVector(vector<string> v){
	for(string i : v[i]) 
  	cout << i << endl;
}
int main (){
    vector<string> v;
    string s = "hello how are you";
    string temp = "";
	for(int i=0;i<s.length();++i){
		
		if(s[i]==' '){
			v.push_back(temp);
			temp = "";
		}
		else{
			temp.push_back(s[i]);
		}
		
	}
	v.push_back(temp);
    PrintVector(v);
    return 0;
}