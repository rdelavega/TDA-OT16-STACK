#include <stdio.h>
#include <stdlib.h>


int push (int * stack, int pos){
  int val = 0;
  printf("Que valor desea ingresar?\n$ ");
  scanf("%d",&val);
  stack[pos] = val;
  return val;
}

int pop (int * stack, int pos){
  int val = stack[pos];
  stack[pos] = -9999;
  return val;
}

int peek (int * stack, int pos){
  int val = stack[pos];
  return val;
}

void print (int * stack){
  int i;
  for(i=4; i>=0; i--){
    if(stack[i] == -9999)
      printf("\n[   ]");
    else
      printf("\n[ %d  ]",stack[i]);
  }
}
