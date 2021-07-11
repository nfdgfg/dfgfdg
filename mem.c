#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
  uint32_t i=0;
    while(1){
      void *ptr = malloc(1024*1024);
      if(ptr) {
          memset(ptr, 0xff, 1024*1024);
          i++;
      }
      else{
          printf("Can't allocate memory! Current allocated: %uM\n", i);
          sleep(1);
      }
    }
}
