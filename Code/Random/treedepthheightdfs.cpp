//O(V+E)

#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int> graph[N];
int depth[N];
int height[N];

void dfs(int vertex,int par){
	
	for(int child:graph[vertex]){
		if(child==par) continue;
		
		depth[child]=depth[par]+1;
		
		dfs(child,vertex);

		height[vertex]=max(height[vertex],height[child]+1);
	}
}



int main(){

	int v;
	cin>>v;
	for(int i=0;i<v-1;i++){
		int v1,v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
		
		dfs(1,0);

		for(int i=1;i<=v;i++){
			cout<<"Depth:"<<depth[i]<<"---> Height:"<<height[i]<<endl;
		}
}