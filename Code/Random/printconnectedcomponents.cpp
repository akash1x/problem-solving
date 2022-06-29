//O(V+E)

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> graph[N];
vector<vector<int>> cc;
vector<int> c_cc;


bool vis[N];

void dfs(int vertex){
	
	vis[vertex]=true;
	c_cc.push_back(vertex);
	for(int child:graph[vertex]){
		if(vis[child]) continue;
		dfs(child);
	}
}



int main(){

	int v,e;
	cin>>v>>e;
	for(int i=0;i<e;i++){
		int v1,v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	int count =0;
	for(int i=1;i<=v;i++){
		if(vis[i]) continue;
		c_cc.clear();
		dfs(i);
		cc.push_back(c_cc);
		count++;
	}

	cout<<"Size of connected components: "<<cc.size()<<endl;

	for(auto x:cc){
		for(auto i:x){
			cout<<i<<" ";
		}
		cout<<endl;
	}


}