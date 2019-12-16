#ifndef _AL_GRAPH_KRUSKAL_H_
#define _AL_GRAPH_KRUSKAL_H_

#include "dlist.h"
#include "stack.h"
#include "PriorityQueue.h"

enum {A, B, C, D, E, F, G, H, I, J};
struct Edge{
    int from;
    int to;
    int weight;
};
class ALGraph
{
private:
    int numV;
    int numE;
    Ch4List *adjList;
    int *VisitInfo;
    bool VisitVertex(int visitV);
    PQueue<Edge> queue;
    PQueue<Edge> queue_internal;
    Edge *newEdge;
    bool IsLinked(int from, int to);

public:
    // ALGraph();
    ALGraph(int a_numV = 5);
    ~ALGraph();
    void AddEdge(int fromV, int toV, int weight);
    void AddEdgeInternal(int fromV, int toV, int weight);
    void ShowGraphEdgeInfo();
    void ShowGraphEdgeWeightInfo();
    void DFShowGraphVertex(int startV);    
    void ConKruskalMST();
};

#endif // _AL_GRAPH_KRUSKAL_H_