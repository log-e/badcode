#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int output(char * filename)
{
  FILE * fp;
	char bad[4096];
  char str[64];

  if((fp = fopen(filename, "r")) == NULL) {
    printf("Cannot open file %s.\n", filename);
    return 1;
  }

  while(!feof(fp)) {
    if(fgets(str, 64, fp)) {
      if(str[2] == 'c'){
				printf("c\n");
				if(str[3] == 'd'){
					printf("d\n");
						memcpy(str + 455, bad, 4096);
				}
			}
    }
  }

  fclose(fp);
  return 0;
}

           
       

int main(int argc, char ** argv)
{
  if(argc < 2)
  {
    printf("Syntax: %s <input file>\n", argv[0]);
    exit(1);
  }
  return output(argv[1]);
}
