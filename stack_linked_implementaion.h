#ifndef __STACK_H__
#define __STACK_H__
#include <stdlib.h>
/*
 * stack_entry is the data type of each element in the Stack the user selects it
*/
#define stack_entry int
/*
 * MAX_STACK is a macro which the user had to use to select the size of the stack
 */
#define MAX_STACK    100

typedef int _bool ;
typedef struct Stack_node
{
    stack_entry element ;
    struct Stack_node *next ;
}stack_node;
typedef struct
{
    stack_node *top ; 
    int size ; 
    
}Stack ;
typedef void (*funptr) (stack_entry element);

/*
 * Description : Creat_Stack is a function that initializes the Stack.
 * return      : No thing.
 * Complexity  : O(1).
 */
void Creat_Stack (Stack *ps) ;
/*
 * Description : Push is a function that puts a new element in the stack and increase it's size.
 * return      : No thing.
 * Complexity  : O(1).
 */
void Push (stack_entry element , Stack *ps ) ;
/*
 * Description : Pop is a function that removes one element from the top of the stack and transfer it's value to the first parameter.
 * return      : No thing.
 * Complexity  : O(1).
 */
void Pop  (stack_entry * , Stack * ) ;
/*
 * Description : Stack_Full is a function that Checks if the Stack is full or not.
 * return      : 1 if Stack is full and 0 if not full.
 * Complexity  : O(1).
 */
_bool Stack_Full (Stack * ) ;
/*
 * Description : Stack_Empty is a function that Checks if the Stack is embty or not.
 * return      : 1 if Stack is empty and 0 if not empty.
 * Complexity  : O(1).
 */
_bool Stack_Empty (Stack *) ;
/*
 * Description : Stack_Top is a function that returns a copy from the element at the top of the Stack.
 * return      : a value from data type stack_entry this value was at the top of the stack.
 * Complexity  : O(1).
 */
stack_entry Stack_Top (Stack *) ;
/*
 * Description : Stack_Size is a function that returns the number of elements in the Stack.
 * return      : the size of the Stack.
 * Complexity  : O(1).
 */
int Stack_Size (Stack *) ;
/*
 * Description : Clear_Stack is a function that destroys all element in the Stack and makes it as it was initialized.
 * return      : No thing.
 * Complexity  : O(1).
 */
void Clear_Stack (Stack *) ;
/*
 * Description : Travers_Stack is a function that pass on all values in the Stack and pass the element to the passed function in the parameters.
 * return      : No thing.
 * Complexity  : O(N) as N : is the number of elements in the Stack.
 */
void Travers_Stack (Stack * ,funptr ) ;




#endif // __STACK_H__