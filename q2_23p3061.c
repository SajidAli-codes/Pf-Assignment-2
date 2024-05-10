#include<stdio.h>
int collatzsequence(int i)
{
    int length=1;
    while (i!=1) 
    {
        if (i%2==0)
        {
            i=i/2;
        }
        else
        {
            i=3*i+1;
        }
        length++;
    }
   
    return length;
}
int longestcollatzsequence(int n)
{
    int i=1,length,maximum=0,longestnumbersequence=0;
    
    while (i<n)
    {   
        
        length=collatzsequence(i);

    
        if (length>maximum)         
        {
            maximum=length;
            longestnumbersequence=i;
        }
        i++;
    }
  
    printf("Longest sequence is produced by the starting number %d",longestnumbersequence);
    return maximum;
}

int main()
{
    int n=0,number;
    
    printf("Enter the upper limit\n");
    scanf("%d", &n);

   
    number=longestcollatzsequence(n);

   
    printf(", with a length of %d", number);
    return 0;
}