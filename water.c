#include<cs50.h>
#include<stdio.h>

int main()
{
    int min,bottles;
    do
    {
      printf("minutes:");
      min=GetInt();
      printf("\n");
    }
    while (false);
    bottles=192*min/16;
    printf("bottles: %d\n",bottles);
}