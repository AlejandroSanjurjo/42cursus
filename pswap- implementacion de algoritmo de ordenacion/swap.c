#include "push_swap.h"

static void swap(t_stack_node **stack)
{
    if(!*stack || !(*stack)->next)
        return ;
    *stack = (*stack)->next;
    (*stack)->prev->prev = *stack;
    (*stack)->prev->next = (*stack)->next;
    if(*stack->next)
        (*stack)->next->prev = (*stack)->prev;
    (*stack)->next = (*stack)->prev;
    (*stack)->prev = NULL;
}

void sa(t_stack_node **a, bool print)
{
    swap(a);
    if(!print)
        write(1, "sa\n", 3);
}

void sb(t_stack_node **b, bool print)
{
    swap(b);
    if(!print)
        write(1, "sb\n", 3);
}

void ss(t_stack_node **a, t_stack_node **b, bool print)
{
    swap(a);
    swap(b);
    if(!print)
        write(1, "ss\n", 3);
}