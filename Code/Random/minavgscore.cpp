#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>> marks {{36,75,78,40},
						  {36,64,78,40},
						  {36,34,78,49}};

	int sum=0;
	int avgsum=0;
	pair<int,int> min {INT_MAX,0};

	
	for(int i=0;i<marks[0].size();i++){
		for(int j=0;j<marks.size();j++){
			sum+=marks[j][i];
		}
		avgsum=sum/marks.size();
		if(avgsum<min.first) min={avgsum,i};
		sum=0;
		avgsum=0;
	}
	vector<int> res;
	int studentsum=0;				  
	for(int j=0;j<marks.size();j++){
		for(int i=0;i<marks[0].size();i++){
			if(min.second==i) continue;
			studentsum+=marks[j][i];
		}
		res.push_back(studentsum);
		studentsum=0;

	}

	for(auto ele:res){
		cout<<ele<<" "<<endl;
	}
	return 0;
}