/**
 * Pointers to Pointers as Parameters test.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * [string_edit description]
 * @param  str [description]
 * @return     [description]
 */
int string_edit(char **str)
{
  /**
   * Malloc storage for the string.
   */
  if ((*str = (char *)malloc(sizeof(char))) == NULL)
  {
	return -1;
  }
  strcpy(*str, "pointer ot pointer");
  return 0;
}

int main()
{
  char *str = (char *)malloc(sizeof(char));
  strcpy(str, "test");
  string_edit(&str);
  printf("%s\n", str);
  free(str);
  str = NULL;
  return 0;
}
