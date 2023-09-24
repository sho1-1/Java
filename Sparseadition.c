//Sparse additio
#include <stdio.h>
void main ()
{
    int a[50][50],b[50][50],c[50][50],r1,r2,c1,c2,i,j,k=0,l=0,nz1=0,nz2=0,a1[50][50],b1[50][50];
    printf("enter the number of rows and coloum of matrix 1 \n");
    scanf("%d%d",&r1,&c1);
     printf("enter the number of rows and coloum of matrix 2 \n");
    scanf("%d%d",&r2,&c2);


    if(r1==r2 && c2==c1)
    {
        printf("enter the elements of the first matrix \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d", &a[i][j]);
                if(a[i][j]!=0)
                {
                    nz1++;
                }
            }
        }

        printf("enter the elements of the 2nd matrix \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d", &b[i][j]);
                if(b[i][j]!=0)
                {
                    nz2++;
                }
            }
        }
            a1[0][0]=r1;
            a1[0][1]=c1;
            a1[0][2]=nz1;  
            b1[0][0]=r2;
            b1[0][1]=c2;
            b1[0][2]=nz2;
 
            for(i=1;i<nz1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    if(a[i][j]!=0)
                    {
                        k++;
                        a1[k][0]=i;
                        a1[k][1]=j;
                        a1[k][2]=a[i][j];
                    }
                }
            }
        
            for(i=1;i<nz2;i++)
            {
                for(j=0;j<c1;j++)
                {
                    if(a[i][j]!=0)
                    {
                        l++;
                        b1[l][0]=i;
                        b1[l][1]=j;
                        b1[l][2]=b[i][j];
                    }
                }
            }

            for (i=0;i<nz1;i++) 
            {
                for (j =0;j<3;j++) 
                {
                    printf("%d\t",a1[i][j]);
                }
                printf("\n");
            }

            printf("\n + \n");
            
            for (i=0;i<nz2;i++) 
            {
                for (j =0;j<3;j++) 
                {
                    printf("%d\t",b1[i][j]);
                }
                printf("\n");
            }


    
    }
    else
    {
        printf("addition not possible \n");
    }



}
