#include<iostream>
using namespace std;
struct command{
	int line;
	int row;
	char color;
	char direct;
};
void change(char**graph, command*,int m,int n);
int main(){
	
	 int m, n, k;
	 cin >> m;
	 cin >> n;
	 cin >> k;
	 command *total = new command[k];
	 for (int i = 0; i < k; ++i){
		 cin>>total[i].line;
		 cin >> total[i].row;
		 cin >> total[i].color;
		 cin >> total[i].direct;
	 }
	 
	char **graph = new char*[m];
	for (int i = 0; i < m; ++i)
	{
		graph[i] = new char[n];
		for (int j = 0; j < n; ++j){
			graph[i][j] = '.';
		}
	}
		for (int i = 0; i < k; ++i){
			change(graph, &total[i], m, n);
		}
		for (int i = 0; i < m; ++i){
			for (int j = 0; j < n; ++j)
			{
				cout << graph[i][j];
			}
			cout << endl;
		}
		for (int i = 0; i < m; ++i){
			delete[] graph[i];
		}
		delete[] graph;
		delete[] total;
		return 0;
	}
void change(char**graph,command* a ,int m,int n){
	int li, ro;
	char co, di;
	li = (*a).line;
	ro = (*a).row;
	co = (*a).color;
	di = (*a).direct;
	if (di == 'R')
	{
		for (int i = (ro - 1); i < n;++i)
		{
			graph[(li-1)][i] = co;
		}
	}
	else if (di == 'U'){
		for (int i = (li - 1); i >= 0; --i)
		{
			graph[i][(ro-1)] = co;
		}
	}
	else if (di == 'L'){
		for (int i = (ro - 1); i >= 0; --i)
		{
			graph[(li-1)][i]=co;
		}
	}
	else if (di == 'D') {
		for (int i = (li-1); i < m; ++i) {
			graph[i][(ro-1)] = co;
		}
	}
	
}
