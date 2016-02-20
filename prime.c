# include <stdio.h>
void main(int argc, char* argv[])
{
int max = atoi(argv[1]);
int num = 0;
int c = 0;
int norem = 0;
int rem;
int count = 0;
  while ( num < max ) {
    num++;
    norem = 0;
    c = 1;
    // printf("\n\nChecking: %d - \n\nRemainders: ", num);
    while ( c < num/2 ) {
      c++;
      rem = num % c;
      // printf("%d, ", rem);
      if ( rem == 0 ) {
        norem = 1;
        c = num;
      }
    }
    if ( norem == 0 ) {
      count++;
      printf("Prime number %d found: %d\n", count,num);
    }
  }
}

