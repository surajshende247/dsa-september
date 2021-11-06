#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v1, int v2){
    graph[v1].push_back(v2);
    graph[v2].push_back(v1);
}

void BFS(vector<int> graph[], int s, bool visited[]){
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while(q.empty()==false)
    {
        int element = q.front(); 
        q.pop();
        cout<<element<<" ";


        for(int num: graph[element])
        {             
            if(visited[num]==false)
            {
                visited[num] = true;
                q.push(num);
            }
        }
    }

}


int main()
{
    vector<int> graph[6];

    bool visited[6]={false, false, false, false, false, false};

   
    addEdge(graph, 0, 5);
    addEdge(graph, 5, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 0, 1);
    addEdge(graph, 3, 2);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);

    for(int i=0; i<6; i++)
    {
        if(visited[i]==false)
            BFS(graph, i, visited);
    }


    return 0;
}