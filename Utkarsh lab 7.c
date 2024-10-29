#include <stdio.h>
#include <math.h>

int swap(int a,int b);
int power(int a,int b);
int tyler(int a,int b);
int fact(int a);
int deci_to_any(int a, int b);
int any_to_deci(int a, int b);

int main(){
    int a,x,y;
    char v;
    vvv: printf("Which exercise you want to see: ");
    scanf("%d",&a);

    if(a==1){
        printf("Enter the two digits that you want to swap");
        scanf("%d%d",&x,&y);
        printf("The swap of digits %d and %d are ",x,y);
        swap(x,y);

    printf("Want's to continue[y/n]: ");
    fflush(stdin);
    scanf("%c",&v);

    if(v=='y')goto vvv;
    if(v=='n')goto end;
    }

    if(a==2){
        printf("Enter the two digits: ");
        scanf("%d%d",&x,&y);
        printf("The Value is %d\n",power(x,y));

    printf("Want's to continue[y/n]: ");
    fflush(stdin);
    scanf("%c",&v);

    if(v=='y')goto vvv;
    if(v=='n')goto end;
    }

    if(a==3){
        printf("Enter the value of X: ");
        scanf("%d",&x);
        printf("Enter the value upto you wants to follow: ");
        scanf("%d",&y);
        printf("the value of sin is %f\n",tyler(x,y));

    printf("Want's to continue[y/n]: ");
    fflush(stdin);
    scanf("%c",&v);

    if(v=='y')goto vvv;
    if(v=='n')goto end;
    }

    if(a==4){
        printf("Which operation you would like to perform?\n1)Deci to any base\t2)Any base to deci\n ");
        scanf("%d",&a);
        switch(a){
                    case 1:printf("Enter the first number: ");
                           scanf("%d",&x);
                           printf("Enter the base you want to transform: ");
                           scanf("%d",&y);
                           deci_to_any(x,y);
                           printf("\n");
                           break;

                    case 2:printf("Enter the number: ");
                           scanf("%d",&x);
                           printf("Enter its base ");
                           scanf("%d",&y);
                           printf("%d\n",any_to_deci(x,y));
                           break;
                           }

    printf("Want's to continue[y/n]: ");
    fflush(stdin);
    scanf("%c",&v);

    if(v=='y')goto vvv;
    if(v=='n')goto end;
    }
end: return 0;
}

int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d and %d\n",a,b);
}

int power(int a,int b){
    int sum=1;
    if(b==0)return sum;
    else{
    a=a*power(a,--b);
    }
}

int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++)
        fact=fact*i;
        return fact;
}

int tyler(int a,int b){
    float sin;
    for(int i=1;i<=b;i++){
    sin=sin+(power(-1,i-1)*power(a,2*i-1))/fact(2*i-1);
    }
    return sin;
}

int deci_to_any(int a, int b){
    int i=0,store;
    store=a;
    while(store!=0){
    store=store/b;
    i++;
    }
    int arr[i];
    for(int j=0;j<i;j++){
    arr[j]=a%b;
    a=a/b;
    }
    for(int j=i;j>0;j--){
    printf("%d",arr[j]);}

}

int any_to_deci(int a,int b){
    int store,rem=0,i=0,kalu;
    store=a;
    while(store!=0){
        kalu=store%10;
        rem=rem+kalu*power(b,i);
        i++;
        store=store/10;
    }
    return rem;
}

