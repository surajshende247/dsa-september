#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v1, int v2){
    graph[v1].push_back(v2);
    graph[v2].push_back(v1);
}

void DFS(vector<int> graph[], int s, bool visited[]){
    stack<int> st;
    visited[s] = true;
    st.push(s);

    while(!st.empty()){
         int topElement = st.top();
         st.pop();
         cout << topElement << " ";

         for(int u: graph[topElement]){
             if(visited[u]==false){
                    visited[u] = true;
                    st.push(u);
             }
         }
    }

}


int main()
{
    vector<int> graph[6];

    bool visited[6]={false, false, false, false, false, false};

   
   
    addEdge(graph, 2, 3);
    addEdge(graph, 0, 3);
    addEdge(graph, 0, 5);
    addEdge(graph, 0, 1);
    addEdge(graph, 2, 5);    
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);

    for(int i=0; i<6; i++)
    {
        if(visited[i]==false)
            DFS(graph, i, visited);
    }


    return 0;
}