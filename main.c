/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n,temp;
    printf("Enter the even number of elements into array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements into the array\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
    	    
	        if(a[j]>a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	       // printf("%d ",a[j]);

        }
	}
            for(i=0;i<n/2;i++)
            printf("%d ",a[i]);
            for(i=n/2;i<n;i++)
            {
               // for(j=n/2;j<n-i-1;j++)
               //{
	                 if(a[j+1]<a[j])
	                 {
	                    temp=a[j+1];
	                     a[j+1]=a[j];
	                    a[j]=temp;
	                    }
               // }
	     

            }
            for(j=n-1;j>=n/2;j--)
             printf("%d ",a[j]);
        return 0;
				
}

