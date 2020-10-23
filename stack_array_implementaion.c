#include "stack.h"
void Creat_Stack (Stack *ps)
{
 ps->top = 0 ;
}
void Push (stack_entry e , Stack *ps )
{
    ps->entry [ps->top] = e ;
    ps->top ++ ;
}
void Pop  (stack_entry *pe , Stack *ps )
{
    ps->top -- ;
    *pe = ps->entry[ps->top] ;
}
_bool Stack_Full (Stack *ps )
{
    if(ps->top == MAX_STACK)
    {
        return  1 ;
    } else
    {
        return  0 ;
    }
}
_bool Stack_Empty (Stack *ps)
{
    if(ps->top == 0 )
    {
        return  1 ;
    } else
    {
        return  0 ;
    }
}
stack_entry Stack_Top (Stack *ps)
{
    return  ps->entry[ps->top -1] ;
}
int Stack_Size (Stack *ps)
{
    return ps->top ;
}
void Clear_Stack (Stack *ps)
{
    ps->top = 0 ;
}
void Travers_Stack (Stack *ps ,funptr fun)
{
    for(int i = ps->top  ; i > 0 ; i--)
    {
        fun (ps->entry [i-1]) ;
    }
}