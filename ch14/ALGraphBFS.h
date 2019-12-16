#ifndef _AL_GRAPH_DFS_H_
#define _AL_GRAPH_DFS_H_

#include "dlist.h"
#include "circular_queue.h"
enum {A, B, C, D, E, F, G, H, I, J};

class ALGraph
{
private:
    int numV;
    int numE;
    Ch4List *adjList;
    int *VisitInfo;
    bool VisitVertex(int visitV);

public:
    // ALGraph();
    ALGraph(int a_numV = 5);
    ~ALGraph();
    void AddEdge(int fromV, int toV);
    void ShowGraphEdgeInfo();
    void BFShowGraphVertex(int startV);
};

#endif // _AL_GRAPH_DFS_H_