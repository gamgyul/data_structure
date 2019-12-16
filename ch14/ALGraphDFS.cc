#include "ALGraphDFS.h"

ALGraph::ALGraph(int a_numV) : numV(a_numV), numE(0), adjList(nullptr)
{
    adjList = new Ch4List[numV];
    VisitInfo = new int[numV]();
}
ALGraph::~ALGraph() 
{
    delete[] adjList;
    delete[] VisitInfo;
}

void ALGraph::AddEdge(int fromv, int tov){
    adjList[fromv].LInsert(tov);
    adjList[tov].LInsert(fromv);
    ++numE;
    
}
void ALGraph::ShowGraphEdgeInfo()
{
    int i;
    int data;
    for(i = 0; i < numV; ++i) {
        printf("%c: 와 연결된 점 : ", i + 65);
        if(adjList[i].LFirst(&data)) {
            printf("%c ",data + 65);
            while(adjList[i].LNext(&data))
                printf("%c ",data + 65);            
        }
        printf("\n");
    }
}

void ALGraph::DFShowGraphVertex(int startV){
    Ch6Stack stack;
    int visitV = startV;
    int nextV;
    VisitVertex(visitV);
    stack.Push(visitV);

    while(adjList[visitV].LFirst(&nextV)) {
        bool visitFlag = false;
        if(VisitVertex(nextV)) {
            visitFlag = true;
            stack.Push(visitV);
            visitV = nextV;
        }
        else {
            while(adjList[visitV].LNext(&nextV)) {
                if(VisitVertex(nextV)) {
                    visitFlag = true;
                    stack.Push(visitV);
                    visitV = nextV;
                    break;
                }

            }
        }
        if(visitFlag == false) {
            if(stack.IsEmpty())
                break;
            else
                visitV = stack.Pop();
        }
    }
    // /VisitInfo = {0, };
    memset(VisitInfo, 0 , sizeof(int)*numV);
}

bool ALGraph::VisitVertex(int visitV) 
{
    if(VisitInfo[visitV] == 0)
    {
        VisitInfo[visitV] = 1;
        printf("%c ", visitV + 65);
        return true;
    }
    return false;
}
