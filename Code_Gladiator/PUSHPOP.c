/*----- FILE PUSHPOP.C -----------------------------------------------*/
/*                                                                    */
/* A push and pop function for a stack of integers                    */
/*--------------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include "CALC.h"
/*--------------------------------------------------------------------*/
/* input:  stk - stack of integers                                    */
/*         num - value to push on the stack                           */
/* action: get a link to hold the pushed value, push link on stack    */
extern void push(IntStack *stk, int num)
{
  IntLink *ptr;
  ptr = (struct int_link *)malloc(sizeof(IntLink)); /*  PUSHPOP1   */ // Allocating Memory
  ptr->i = num;      //Storing the number in structure member                                /*  PUSHPOP2  statement */
  ptr->next = stk->top; //storing the Arrdess in next "member"
  stk->top = ptr;
}
/*--------------------------------------------------------------------*/
/* return: int value popped from stack                                */
/* action: pops top element from stack and gets return value from it  */
/*--------------------------------------------------------------------*/
extern int pop(IntStack *stk)
{
  IntLink * ptr;
  int num; 
  ptr = stk->top;
  num = ptr->i; //Retrieving the number from the Linked list
  stk->top = ptr->next; //Removing the address
  free(ptr); //Clearing the Allocated memory
  return num;
}