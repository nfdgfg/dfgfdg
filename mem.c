#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
  unsigned i=0;
    while(1){
      if(i>=10194){
          printf("Can't allocate more memory! Current allocated: %uM\n", i);
          sleep(10);
        continue;
      }
      void *ptr = malloc(1024*1024);
      
      if(ptr) {
          memset(ptr, 0xff, 1024*1024);
          i++;
        printf("Current allocated: %uM\n", i);
      }
      else{
          printf("Can't allocate memory!\n");
          sleep(1);
      }
    }
}
