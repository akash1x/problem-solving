#include<bits/stdc++.h>
using namespace std;
vector<string> splitString(string str,bool isCpp){
	vector<string> words;
	string temp="";

	if(isCpp){
	for(int i=0;i<str.size();i++){
		if(str[i]=='_'){
			words.push_back(temp);
			temp="";

		}else{
			temp+=str[i];
		}
	}
	}
	else{
		for(int i=0;i<str.size();i++){
			if(isupper(str[i])){
				words.push_back(temp);
				temp="";
				char t= tolower(str[i]);
				temp+=t;
			
			}else{
				temp+=str[i];
				}
			}
	
		}
	words.push_back(temp);
return words;
}




int main(){
	string str;
	cin>>str;
	bool isCpp=false;
	for(int i=0;i<str.size();i++){
		if(str[i]=='_') {
			isCpp=true;
			break;
	}
}
	vector<string> res;
	res =splitString(str,isCpp);
	for(auto ele:res){
		cout<<ele<<endl;
	}
	string ansStr="";
	if(isCpp){
		for(auto ele:res){
			ele[0]=toupper(ele[0]);
			ansStr+=ele;
		}

	}else{
		for(int i=0;i<res.size();i++){
			ansStr+=res[i];
			if(i==res.size()-1) continue;
			ansStr+='_';
		}
	}
	cout<<ansStr<<endl;


}