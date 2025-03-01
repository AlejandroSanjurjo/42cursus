#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*last_node;
	int				len;

	len = ft_len(*stack);
	if (NULL == stack || NULL == *stack || 1 == len)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}	

void	ra(t_stack **a)
{
	rotate(a);
    write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate(b);
    write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}