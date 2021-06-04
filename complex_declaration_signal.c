#include <stdio.h>

void (*signal(int sig, void(*func)(int)))(int)
{
  printf("\n\nINSIDE SIGNAL:\n");
  printf("func = %p\n", func);
  return func;
}

void frvi(int int_param)
{
  return;
}

int main(void) 
{
  void(*ptr_frvi)(int) = &frvi;
  void(*ptr_frvi_returned_by_signal)(int);

  int int_literal = 5;

  ptr_frvi_returned_by_signal = signal(int_literal, ptr_frvi);

  printf("\n\nINSIDE MAIN:\n");
  printf("Address of the function named: frvi = %p\n", &frvi);
  printf("\nValue of ptr_frvi = %p\n", ptr_frvi);
  printf("\nValue of ptr_frvi_returned_by_signal = %p\n", ptr_frvi_returned_by_signal);

  // Next LEVEL
  printf("\n\nINSIDE MAIN (NEXT LEVEL):\n");
  void (*(*signal_func_ptr)(int, void(*)(int)))(int) = &signal;
  printf("Value of  signal_func_ptr = %p\n", signal_func_ptr);
  printf("\nAddress of signal function = %p\n\n",&signal);

  return 0;
}
