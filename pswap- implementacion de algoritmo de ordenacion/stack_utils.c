#include "push_swap.h"

int stack_len(t_stack_node *stack)
{
    int len;

    if(!stack)
        return (0);
    len = 0;
    while(stack)
    {
        len++;
        stack = stack->next;
    }
    return (len);
}

t_stack_node *find_last_node(t_stack_node *stack)
{
    if(!stack)
        return (NULL);
    while(stack->next)
        stack = stack->next;
    return (stack);
}

bool stack_sorted(t_stack_node *stack)
{
    if(!stack)
        return (true);
    while(stack->next)
    {
        if(stack->data > stack->next->data)
            return (false);
        stack = stack->next;
    }
    return (true);
}

t_stack_node *find_min(t_stack_node *stack)
{
    long min;
    t_stack_node *min_node;

    if(!stack)
        return (NULL);
    min = LONG_MAX;
    while(stack)
    {
        if(stack->data < min)
        {
            min = stack->data;
            min_node = stack;
        }
        stack = stack->next; 
    }
    return (min_node);
}

t_stack_node *find_max(t_stack_node *stack)
{
    long max;
    t_stack_node *max_node;

    if(!stack)
        return (NULL);
    max = LONG_MIN;
    while(stack)
    {
        if(stack->data > max)
        {
            max = stack->data;
            max_node = stack;
        }
        stack = stack->next; 
    }
    return (max_node);
}
