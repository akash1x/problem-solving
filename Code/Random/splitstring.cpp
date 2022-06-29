#include<bits/stdc++.h>
using namespace std;

vector<string> splitString(string str){
	vector<string> words;
	string temp="";
	for(int i=0;i<str.size();i++){
		if(str[i]=='_'){
			words.push_back(temp);
			temp="";

		}else{
			temp+=str[i];
		}
	}
	words.push_back(temp);

return words;
}

int main(){
	string str;
	getline(cin,str);
	vector<string> words;
	words = splitString(str);
	for(auto ele: words){
		cout<<ele<<endl;
	} 

	return 0;
}