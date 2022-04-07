#include "../utils.h"
// TODO: need to complete
void find_path(int fr, vector<bool> visited, vector<int> graph){
     	visited[fr] = true;
     	for(auto i:graph[fr]){
            if(visited[i] == false){
                find_path(i, visited, graph);
            }
     	}

     }
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
     vector<bool> visited(n, false);
     vector<int> graph[n];
     for(auto i:edges){
     	graph[i[0]].push_back(i[1]);
     	graph[i[1]].push_back(i[0]);
     }
     
     find_path(source, visited, graph);
     
     return false;
    }

int main(int argc, char** argv)
{   
	vector<vector<int>> graph[3];

	int n = 3;
	vector<vector<int>> edges = {{0,1},{1,2},{2,0}};
	int source = 0;
	int destination = 2;

    cout << validPath(n, edges, source, destination) << endl;
        
    return 0;
}

