#include<stdio.h>

struct S 
{
  int i;
  char c;
} s;

int main() 
{
  return sizeof(*(&s));
}