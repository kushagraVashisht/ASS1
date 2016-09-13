 #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>

  int findSize();

  char grid[50][50];
  int row = 0, col = 0, size;
  int x, y;
  char c;

  int main()
  {
      size = 10;
      for(x = 0; x < size; x++)
      {
          while ((c = getchar()) != EOF)
              {
                  grid[row][col++] = c;
              }
      }
          row++;
      x = 0;
      while(x <= size)
      {
          printf("%s\n", grid[x]);
          
      }
      
 printf("%s\n", grid[3]);
  } 
 
 /* int findSize()
  {
      int counter = 0;
      while ((c = getchar()) != '\n')
      
          {
              grid[row][col++] = c;
              counter++;
          }
      
      return counter;
  }
  */