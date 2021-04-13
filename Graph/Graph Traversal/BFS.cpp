#include <bits/stdc++.h>
   
#define mp              make_pair
#define st              first
#define nd              second
#define ll              long long
#define str             string
#define in              insert
#define pub             push_back
#define For(i,n)        for(int i=0;i<n;i++)
#define dFor(i,j,n,m)   for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define allFor(i,n,a,b) for(int i=a;i<n;i+=b)
#define rFor(i,n)       for(int i=n-1;i>=0;i--)
#define inFor(x,a)      for(auto& x:a)
#define vi              vector<int>
#define vl              vector<long long>
#define vll             vector<pair<long long,long long>>
#define vii             vector<pair<int,int>>
#define ii              pair<int,int>
#define pll             pair<long long,long long>
#define uns             unsigned
#define pob             pop_back
#define ok              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define input           freopen("input.txt","r",stdin)
#define output          freopen("output.txt","w",stdout)
#define Max(a,b,c)      max(max(a,b),c)
#define Min(a,b,c)      min(min(a,b),c)
#define lp(n)           while(n--)  
#define Sort(v)         sort(v.begin(),v.end())
#define rSort(v)        sort(v.rbegin(),v.rend())
#define PI              3.141592
#define puf             push_front
#define pof             pop_front
#define kucha           priority_queue<int>
 
using namespace std;
 
const long double eps=1e-7;
const int inf=1e9+7;
const uns ll mod=1e9+7;

//Ways to keep Graphs
vector< vector <int> (5000, 0) > AdjacencyMatrix (5000);
vector< set <int> > AdjacencyList (5000);
vector< pair <int, int> > EdgeList (20000);

//BFS
void bfs_AL(int start_vertex){// O(V+E)
	vector< int > distance(5000, inf); d[start_vertex] = 0;
	queue< int > VertexQueue; VertexQueue.push(start_vertex);
	while(!( VertexQueue.empty() )){
		int current = q.front(); q.pop();
		for (auto i : AdjacencyList[current]){
			if(distance[i] == inf){
				distance[i] = distance[current] + 1;
				q.push(i);
			}
		}
	}
}

int main(){
	//code
}