#include<stdio.h>
#include<cs50.h>
int main()
{
    int coins=0;
    float owe;
    do
    {
        do
        {
           printf("How much chage is owed?\n");
           owe=GetFloat();
        }
        while(false);
    }
    while(owe<0);
    while(owe>=0.25)
    {
        owe=owe-0.25;
        coins=coins+1;
    }
    while(owe>=0.10 && owe<0.25)
    {
        owe=owe-0.10;
        coins=coins+1;
    }
    while(owe>=0.05 && owe<0.10)
    {
        owe=owe-0.05;
        coins=coins+1;
    }
    while(owe>=0 && owe<0.05)
    {
        owe=owe-0.01;
        coins=coins+1;
    }
    printf("%d",coins);
    return 0;
}
