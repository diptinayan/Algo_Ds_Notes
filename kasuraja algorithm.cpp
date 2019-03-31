#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void fillOrder(int v, bool visited[], stack<int> &Stack)
 { visited[v] = true;
  list<int>::iterator i;
   for(i = adj[v].begin(); i != adj[v].end(); ++i) 
   if(!visited[*i]) fillOrder(*i, visited, Stack); Stack.push(v); } 
   
   void printSCCs() 
   { stack<int> Stack;
    bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) visited[i] = false; // Fill vertices in stack according to their finishing times 
	for(int i = 0; i < V; i++) 
	if(visited[i] == false)
	 fillOrder(i, visited, Stack);
	  Graph gr = getTranspose();
	   for(int i = 0; i < V; i++)
	    visited[i] = false; while (Stack.empty() == false)
		 { // Pop a vertex from stack
		  int v = Stack.top();
		   Stack.pop();
		    if (visited[v] == false) 
			{ gr.DFSUtil(v, visited);
			 cout << endl;
			  }
			   }
			   } 

