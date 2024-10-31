#include <stdio.h>

int ass(int c, int M3[c]);
int dec(int a, int b);

int main()
{
    int a,x,y;
    char v;
    vvv: printf("Which exercise you want to see: ");
    scanf("%d",&a);

    if(a==1)
    {
        printf("Enter the number of elements in array: ");
        scanf("%d",&a);
        int arr[a];

        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }

        printf("Enter a number from array: ");
        scanf("%d",&x);

        printf("Original array =");
        for(int i=0;i<a;i++)
        {

           printf("%d,",arr[i]);
        }

        printf("\n");

        for(int i=0;i<a;i++)
        {
            if(arr[i]==x)
            {
                arr[i]=(arr[i-1]+arr[i+1])/2;
            }
        }

        printf("Rivised array =");
        for(int i=0;i<a;i++)
        {

           printf("%d,",arr[i]);
        }
         printf("\n");


        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
    }

    if(a==2)
    {
        printf("Enter the number of elements in array: ");
        scanf("%d",&a);
        int arr[a];

        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }

        int odd[a],even[a],x=0,y=0;

        for(int i=0;i<a;i++)
        {
           if(arr[i]%2==0) even[y++]=arr[i];
           else odd[x++]=arr[i];
        }

         printf("Odd terms are: ");
         for(int i=0;i<x;i++)
        {
        printf("%d,",odd[i]);
        }

        printf("\n");
        printf("even terms are: ");

        for(int i=0;i<y;i++)
        {
        printf("%d,",even[i]);
        }

        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
    }

     if(a==3)
    {
        printf("Enter the order of squre matrix n x n: ");
        scanf("%d",&a);
        int M1[a][a],M2[a][a];

        printf("Eneter the Elements of Matrix M1: ");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
            scanf("%d",&M1[i][j]);
            }
        }

        for(int i=0;i<a;i++)
        {
            int sum1=0,sum2=0;
            for(int j=0;j<a;j++)
            {
                if(i==j){for(int k=0;k<a;k++)
                sum1+=M1[i][k];
                M2[i][j]=sum1;}

                if(j==(a-1)-i){for(int k=0;k<a;k++)
                sum2+=M1[k][j];
                M2[i][j]=sum2;}
            }
        }

         for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
            printf("%d ",M1[i][j]);
            }
            printf("\n");


        }

         for(int i=0;i<a;i++)
        {
            for(int j=0;j<a;j++)
            {
            printf("%d ",M2[i][j]);
            }
            printf("\n");


        }

        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
    }

    if(a==4)
    {
        printf("Enter the number of elements in array: ");
        scanf("%d",&a);
        char arr[a];

        for(int i=0;i<a;i++)
        {
            fflush(stdin);
            scanf("%c",&arr[i]);
        }

        char con[a],vov[a],x=0,y=0;

        for(int i=0;i<a;i++)
        {
           if(arr[i]=='a'||'e'||'i'||'o'||'u') vov[y++]=arr[i];
           else con[x++]=arr[i];
        }

         printf("consonent are: ");
         for(int i=0;i<x;i++)
        {
        printf("%c,",con[i]);
        }

        printf("\n");
        printf("vovels are: ");

        for(int i=0;i<y;i++)
        {
        printf("%c,",vov[i]);
        }

        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
    }

    if(a==5)
    {
        int b,n=0;
        printf("Enter the size of Array 1: ");
        scanf("%d",&a);
        int M1[a];

        printf("Enter the size of Array 2: ");
        scanf("%d",&b);
        int M2[b];

        printf("Eneter the Elements of Array 1: ");
        for(int i=0;i<a;i++)
        {
        scanf("%d",&M1[i]);
        }

        printf("Eneter the Elements of Array 2: ");
        for(int i=0;i<b;i++)
        {
        scanf("%d",&M2[i]);
        }

        int M3[a+b];

        for(int i=0;i<a;i++)
        {
           M3[i]=M1[i];
           if(i==a-1){
           for(int i=a;i<a+b;i++){
           M3[i]=M2[n++];}
           }
        }

        ass(a+b,M3);

        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
    }

end: return 0;
}


int ass(int c, int M3[])
{
        int x,y=0,min=0;
        M3[c];
        printf("How do you want to sort Array?\n1) ascending 2) descending\n/--> ");
        scanf("%d",&x);
        if(x==1)
        {
            for(int j=0;j<c;j++)
            for(int i=0;i<c-1;i++)
            {
                if(M3[i]>M3[i+1])
                {
                    min=M3[i];
                    M3[i]=M3[i+1];
                    M3[i+1]=min;
                }
            }

        }

        if(x==2)
        {
            for(int j=0;j<c;j++)
            for(int i=0;i<c-1;i++)
            {
                if(M3[i]<M3[i+1])
                {
                    min=M3[i];
                    M3[i]=M3[i+1];
                    M3[i+1]=min;
                }
            }
        }
         for(int i=0;i<c;i++)printf("%d",M3[i]);

}
