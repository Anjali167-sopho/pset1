#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height,i,j;
    do
    {
      do
      {
        printf("height: ");
        height=GetInt();
      }
      while(false);
    }
    while(height>23);
    for(i=0;i<height;i++)
    {
        for(j=0;j<=(height);j++)
        {
            if(j<(height-i-1))
            printf(" ");
            else
            printf("#");
        }
        printf("\n");
    }
    
}