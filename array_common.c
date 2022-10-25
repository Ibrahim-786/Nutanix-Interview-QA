#include<stdio.h>






int main()
{

    int s1[] = {10, 20, 25, 15, 32};
    int s2[] = {2, 8, 16, 25, 30};
    int size = 5;
    

    int arr[size];
    int index =0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
        {
            if(s1[i]==s2[j])
            {
                arr[index++] = s1[i];
                
            }
        }
    }

    for(int i=0;i<size;i++)
	   printf("%d ",s1[i]);
    
    printf("\n");

    for(int i=0;i<size;i++)
	   printf("%d ",s2[i]);

printf("\n");

    printf("common element is\n");

    for(int i=0;i<size;i++)
    {
       if(arr[i] != 0)
          printf("%d ",arr[i]);
        else
            break;
    }
	

    return 0;

}
