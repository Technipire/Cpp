#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  FILE *input = fopen("floating.txt", "r");
  char * line = NULL;
  size_t len = 0;
  ssize_t read = 0;
  if (input == NULL)
  {
    printf("File not found!");
    exit(1);
  }
  while (read = getline(&line, &len, input) != -1)
  {
    float f = atof(line);
    print_hex(f);
  }
  if (line)
    free(line);
  exit(0);
  
}

union float_bits 
{
  float f;
  unsigned int bits;
};

void print_hex( float f)
{
  union float_bits t;
  t.f = f;
  printf("The float looks like 0x%x in hex.\n", t.bits);
}