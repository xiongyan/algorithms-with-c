#include <stdio.h>

#define message_for(a, b) printf(#a " and " #b ": We love you!\n")
#define tokenpaster(n) printf("token" #n " = %d\n", token##n)


#if !defined (MESSAGE)
  #define MESSAGE "You wish!"
#endif

int main()
{
  message_for(Carole, Debra);
  int token34 = 40;
  tokenpaster(34);
  printf("token34 = %d\n", token34);
  printf("Here is the message: %s\n", MESSAGE);
  return 0;
}
