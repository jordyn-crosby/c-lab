# include <stdio.h>

/* count digits, white space, others */

int main()
{
/* if there's only one conditional statement
   in the program, you should use curly 
   brackets but if there are multiple, you
   technically don't have to use curly 
   brackets BUT make it a habit */ 

  int c, i, nwhite, nother;
  int ndigit[10]; 

  nwhite = nother = 0;
  
  for(i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while((c=getchar()) != EOF)
    if(c >= '0' && c <= '9')
      ++ndigit[c-'0']; 
    else if(c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;

/* Enter 'EOF' to get to the code below */
  printf("digits ="); 
  for(i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(",white space = %d, other == %d\n", nwhite, nother); 
}
