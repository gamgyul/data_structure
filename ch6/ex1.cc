#include "stack.h"

int main(){
    Ch6Stack stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);

    while(!stack.IsEmpty())
        std::cout << stack.Pop() << std::endl;

    return 0;
}