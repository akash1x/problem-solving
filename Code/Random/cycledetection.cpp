//O(V+E)

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> graph[N];
bool vis[N];

bool dfs(int vertex,int parent){
	bool isLoopExits=false;
	vis[vertex]=true;
	for(int child:graph[vertex]){
		if(vis[child] && child==parent) continue;
		if(vis[child]) return true;
		isLoopExits|= dfs(child,vertex);
	}
	return isLoopExits;
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
	bool isLoopExits=false;
	for(int i=1;i<=v;i++){
		if(vis[i]) continue;
		if(dfs(i,0)){
			isLoopExits=true;
			break;
		}
	}
	cout<<"cycle exits ? "<< isLoopExits;
}