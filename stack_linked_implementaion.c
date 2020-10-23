#include "stack.h"
#include <stdlib.h>
void Creat_Stack (Stack *ps)
{
ps->top = NULL ;
ps->size = 0 ;
}
void Push (stack_entry e , Stack *ps )
{
    stack_node *pn = (stack_node *) malloc(sizeof(stack_node));
    pn->element = e ;
    pn->next = ps->top ;
    ps->top = pn ;
    ps->size ++ ;
}
void Pop  (stack_entry *pe , Stack *ps )
{
    *pe = (ps->top)->element ;
    stack_node *pn = ps->top ;
    ps->top = pn->next ;
    free((stack_node *)pn) ;
    ps->size -- ;
}
_bool Stack_Full (Stack *ps )
{
    return  0 ;
 }
_bool Stack_Empty (Stack *ps)
{
    if(ps->top == NULL)
    {
        return  1 ;
    }else
    {
        return 0 ;
    }
}
stack_entry Stack_Top (Stack *ps)
{
    return  ps->top->element ;
}
int Stack_Size (Stack *ps)
{
    return  ps->size ;
}
void Clear_Stack (Stack *ps)
{
    stack_node *coor = ps->top ;
while (ps->top != NULL)
{
    ps->top = coor->next ;
    free(coor) ;
    coor->next = ps->top ;
}
}
void Travers_Stack (Stack *ps ,funptr function)
{
    stack_node  *coor =ps->top ;
    while (coor != NULL)
    {
        function (coor->element) ;
        coor=coor->next ;
    }

}
