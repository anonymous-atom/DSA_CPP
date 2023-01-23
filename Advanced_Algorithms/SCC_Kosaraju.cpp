//
// Created by karun on 23/1/23.
//
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
private:
    void dfs(int i, vector<int> adj[], vector<int> &visited, stack<int> &st) {
        visited[i] = 1;

        for(int j: adj[i]) {
            if (!visited[j]){
                dfs(j , adj, visited, st);
            }
        }

        st.push(i);
    }

    void dfs_st3(int i, vector<int> adjT[], vector<int> &visited) {
        visited[i] = 1;
        for(int j: adjT[i]) {
            if (!visited[j]){
                dfs_st3(j , adjT, visited);
            }
        }
    }
public:
    //Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        vector<int> visited (V, 0);

        stack<int> st;

        for(int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited, st);
            }
        }

        //TRanspose

        vector<int> adjT[V];

        for(int i = 0; i < V; i++) {
            visited[i] = 0;
            for(int j: adj[i]) {

                // i --> j
                // add j --> i
                adjT[j].push_back(i);
            }
        }

        int scc = 0;
        while(!st.empty()) {
            int node = st.top();
            st.pop();

            if (!visited[node]) {
                scc++;
                dfs_st3(node, adjT, visited);
            }
        }

        return scc;


    }
};

//{ Driver Code Starts.


int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends