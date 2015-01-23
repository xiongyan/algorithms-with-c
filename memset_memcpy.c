#include <stdio.h>
#include <string.h>

int main()
{
  char buffer[20];
  memset(buffer, 0, sizeof(char)*20);
  memcpy(buffer, "123", 3);
  char src[]
	 = "******************************";
  char dest[]
	 = "abcdefghijlkmnopqrstuvwxyz0123as6";

  memcpy(dest, src, strlen(src));
  printf("%s\n", dest);
  printf("%s\n", buffer);
}
