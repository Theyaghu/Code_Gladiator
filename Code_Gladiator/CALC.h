/*----- FILE CALC.H --------------------------------------------------*/
/*                                                                    */
/* Header file for CALC.C PUSHPOP.C READTOKN.C                        */
/* a simple calculator                                                */
/*--------------------------------------------------------------------*/
typedef enum 
{
  T_INTEGER,
  T_PLUS,
  T_TIMES,
  T_MINUS,
  T_DIVIDE,
  T_EQUALS,
  T_STOP
} Token;

extern Token read_token(char buf[]);

typedef struct int_link  
{
  struct int_link *next;
  int i;
} IntLink;


typedef struct int_stack 
{
  IntLink *top;
} IntStack;


extern void  push(IntStack *stk, int num); //Function Prototype 
extern int pop(IntStack *stk); //Function Prototype