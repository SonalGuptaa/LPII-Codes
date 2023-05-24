#include <bits/stdc++.h>
using namespace std;
#define V 6

int graph[V][V] = {
   {0, 1, 1, 1, 0, 0},
   {1, 0, 0, 1, 1, 0},
   {1, 0, 0, 1, 0, 1},
   {1, 1, 1, 0, 1, 1},
   {0, 1, 0, 1, 0, 1},
   {0, 0, 1, 1, 1, 0}
};

void graphColoring()
{
    vector<int> color(V, -1);
    color[0] = 0;
    vector<bool> colorUsed(V, false);

    for (int u = 1; u < V; u++)
    {
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && color[v] != -1)
                colorUsed[color[v]] = true;
        }

        int col;
        for (col = 0; col < V; col++)
        {
            if (!colorUsed[col])
                break;
        }

        color[u] = col;

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && color[v] != -1)
                colorUsed[color[v]] = false;
        }
    }

    for (int u = 0; u < V; u++)
    {
        cout << "Vertex: " << u << ", Color: " << color[u] << endl;
    }
}

int main()
{
    graphColoring();
    return 0;
}
