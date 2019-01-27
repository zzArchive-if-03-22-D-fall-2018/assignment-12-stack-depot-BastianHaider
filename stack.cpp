#include <stdlib.h>
#include "stack.h"

struct Node
{
    struct Node* next;
    void* data;
};
struct StackImplementation
{
    struct Node* head;
    int count;
};
Stack create_stack()
{
    Stack stack = (Stack)smalloc(sizeof(StackImplementation));
    stack->count = 0;
    stack->head = 0;
    return stack;
}
void delete_stack(Stack stack)
{
    struct Node* currentNode = stack->head;
    while (currentNode != 0)
    {
        Node *tmp = currentNode;
        currentNode = currentNode->next;
        sfree(tmp);
    }
    sfree(stack);
}

void push_stack(Stack stack, void *data)
{
    Node* new_node = (Node*) smalloc(sizeof(Node));
    new_node->data = data;
    new_node->next = stack->head;
    stack->head = new_node;
    stack->count++;
}
int get_count(Stack stack)
{
    return stack->count;
}
void* pop_stack(Stack stack)
{

}
void* peek_stack(Stack stack)
{

}
