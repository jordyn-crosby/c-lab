#include <stdio.h>

main()
{
  int fahr, celsius;
  int lower, upper, step;

  /* setting the upper and lower limits of the table and the step size of farenheit */
  lower = 0; 
  upper = 300;
  step = 20; 

  fahr = lower /* starts fahr at 0 */
  while (fahr <= upper) 
  {
    celsius = 5 * (fahr-32) / 9; /* formula used to calculate celsius from farenheit */
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
