#include "ALGraphKruskal.h"


int comp_func(Edge t1, Edge t2){
    if(t1.weight < t2.weight)
        return 1;
    else
        return -1;
}
ALGraph::ALGraph(int a_numV) : numV(a_numV), numE(0), adjList(nullptr)
{
    adjList = new Ch4List[numV];
    VisitInfo = new int[numV]();
    queue.RegisterComp(comp_func);
    queue_internal.RegisterComp(comp_func);
}
ALGraph::~ALGraph() 
{
    delete[] adjList;
    delete[] VisitInfo;
}

void ALGraph::AddEdge(int fromv, int tov, int weight){
    Edge e = {fromv, tov, weight};
    adjList[fromv].LInsert(tov);
    adjList[tov].LInsert(fromv);
    queue.Enqueue(e);
    ++numE;
}
void ALGraph::AddEdgeInternal(int fromv, int tov, int weight){
    Edge e = {fromv, tov, weight};
    adjList[fromv].LInsert(tov);
    adjList[tov].LInsert(fromv);
    queue_internal.Enqueue(e);
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

void ALGraph::ShowGraphEdgeWeightInfo()
{
    Edge e;
    while(!queue_internal.IsEmpty()) {
        e = queue_internal.Dequeue();
        std::cout << "(" << static_cast<char>(e.from + 65) << ", "
            << static_cast<char>(e.to + 65) << ")" << " w: " <<
            e.weight << std::endl;
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

void ALGraph::ConKruskalMST()
{
    delete[] adjList;
    delete[] VisitInfo;

    adjList = new Ch4List[numV];
    VisitInfo = new int[numV]();
    Edge e;
    numE = 0;
    while(numE < numV - 1) {
        e = queue.Dequeue();
        std::cout << std::endl;
        std::cout << e.weight << " !!";
        if(!IsLinked(e.from, e.to)) {
            AddEdgeInternal(e.from, e.to, e.weight);
            std::cout << "linked x" <<std::endl;
        }
        else 
            std::cout << "linked" << std::endl;
    }
    while(!queue.IsEmpty())
        queue.Dequeue();
}

bool ALGraph::IsLinked(int from, int to)
{
    Ch6Stack stack;
    int visitV = from;
    int nextV;
    bool result = false;
    std::cout << "IsLinked (" << from << "," << to <<")";
    VisitVertex(visitV);
    stack.Push(visitV);
    while(adjList[visitV].LFirst(&nextV)) {
        if(nextV == to)
            result = true;
        bool visitFlag = false;
        if(VisitVertex(nextV)) {
            visitFlag = true;
            stack.Push(visitV);
            visitV = nextV;
        }
        else {
            while(adjList[visitV].LNext(&nextV)) {
                if(nextV == to)
                    result = true;
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
    return result;
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
