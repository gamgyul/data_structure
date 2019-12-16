#include "ALGraphBFS.h"

int main()
{
    ALGraph graph(6);
    graph.AddEdge(A,B);
    graph.AddEdge(A,C);
    graph.AddEdge(A,D);
    graph.AddEdge(C,E);
    graph.ShowGraphEdgeInfo();
    graph.BFShowGraphVertex(A); printf("\n");
    graph.BFShowGraphVertex(B); printf("\n");
    graph.BFShowGraphVertex(C); printf("\n");

    return 0;

}