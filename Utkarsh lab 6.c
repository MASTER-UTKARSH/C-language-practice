#include <stdio.h>

int main(){
    int a;
    char v;
    vvv: printf("Which exercise you want to see: ");
    scanf("%d",&a);

    if(a==1){


        for(int i=1;i<=7;i++)
        {
            for(int j=1;j<=7;j++)
            {
                if(i==4||j==4)
                   printf("+");

                else
                    printf("*");
            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

    if(a==2){
          for(int i=1;i<=7;i++)
        {
            for(int j=1;j<=7;j++)
            {
                if(i==4||j==4)
                   printf("+");

                else
                {
                 if(i<=3&&j<=3)printf("*");
                 if(i<=3&&j>=5)printf("1");
                 if(i>=5&&j<=3)printf("a");
                 if(i>=5&&j>=5)printf("Z");
                }

            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

if(a==3){
          for(int i=1;i<=7;i++)
        {
            for(int j=1;j<=7;j++)
            {
                if(i==4||j==4)
                   printf("+");

                else
                {
                 if(i<=3&&j<=3)printf("*");
                 if(i<=3&&j>=5)printf("%d",i);
                 if(i>=5&&j<=3)printf("%c",92+i);
                 if(i>=5&&j>=5)printf("%c",95-i);
                }

            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

if(a==4){
          for(int i=1;i<=7;i++)
        {
            for(int j=1;j<=7;j++)
            {
                if(i==4||j==4)
                   printf("+");

                else
                {
                if(i>=2&&i<=6&&j>=2&&j<=6)printf(" ");

                else printf("*");
                }

            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

if(a==5){
        int k;
          for(int i=1;i<=5;i++)
        {
            k=5-i;
            for(int j=1;j<=5;j++)
            {
                if(j<=i)
                   printf("%c",96+i);

                else
                {
                 if(j>=i)printf("%d",k--);
                }

            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

if(a==6){
        int s,k=0;
          for(int i=1;i<=7;i++)
        {
            s=i;
            (i<5)?k++:k--;
            for(int j=1;j<=7;j++)
            {
                if(j>=5-k&&j<=3+k){
                   printf("%d",s);
                   (k<5)?s++:s--;
                   }

                else
                {
                printf(" ");
                }

            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

if(a==7){
        int s,k=0;
          for(int i=1;i<=6;i++)
        {
            if(i<4)k++;
            if(i>4)k--;
            for(int j=1;j<=10;j++)
            {
                if(i<6&&i>1&&j>=8-2*k&&j<=3+2*k){
                   printf(" ");
                   }

                else
                {
                    if(i<=3)printf("*");
                    if(i>=4&&j>=1&&j<=6)printf("%d",9-i);
                    if(i>=4&&j>=7)printf("%d",i-3);
                }

            }
            printf("\n");
        }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

if(a==8){
    for(int i=1;i<=10;i++){
        for(int j=9;j>10-i;j--)
        {
         printf("%d", j);
        }
        for(int j=0;j<11-i;j++)
        {
         printf("%d", j);
        }
        printf("\n");
    }
        printf("Want's to continue[y/n]: ");
        fflush(stdin);
        scanf("%c",&v);

        if(v=='y')goto vvv;
        if(v=='n')goto end;
}

end: return 0;
}
