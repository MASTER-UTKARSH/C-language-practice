#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Which exercise you wants to see?\n");
    scanf("%d",&a);

    if(a==1){
        printf("Enter a number of corresponding day: ");
        scanf("%d",&a);

        switch(a){
            case 2: printf("Monday");
                    break;
            case 3: printf("Tuesday");
                    break;
            case 4: printf("Wednesday");
                    break;
            case 5: printf("Thursday");
                    break;
            case 6: printf("Friday");
                    break;
            case 7: printf("Saturday");
                    break;
            case 1: printf("Sunday");
                    break;
            default:
                    printf ("Invalid Operator Input\n");
        }
    }

    if(a==2){
        char input;
        printf("Enter an input: ");
        fflush(stdin);
        scanf("%c",&input);

        switch(input){
            case 48 ... 56:printf("The Input is a digit");
                        break;
            case 65 ... 90:printf("The Input is a Capital letter");
                        break;
            case 97 ... 122:printf("The Input is a Small letter");
                        break;
            default:
                    printf("The Input is a special character");
        }
    }

    if(a==3){
        float hight,bmi,mass,box;
        printf("Enter your height is meters: ");
        scanf("%f",&hight);
        printf("Enter your weight in kgs: ");
        scanf("%f",&mass);

        box=pow(hight,2);
        bmi=mass/box;

        int q=ceil(bmi);

        switch(q){
            case 0 ... 18:printf("You'r Underweight");
                        break;
            case 19 ... 25:printf("You'r Normal Weight");
                        break;
            case 26 ... 1000:printf("You'r Underweight");
                        break;
        }
    }

    if(a==4){
        int id,pass;
        printf("Enter Your User ID: ");
        scanf("%d",&id);
        printf("Enter your Password: ");
        scanf("%d",&pass);

        switch(id){
            case 3214: switch(pass){
                case 6580:printf("Welcome dear Dev");
                        break;
                default: printf("Please enter correct user id and password");
            }
            case 6580: break;
            default: printf("Please enter correct user id and password");
        }
    }

    if(a==5){
        int qua,totalqua,total;

        printf("Burger @ 85 type (1)\n");
        printf("Pizza @ 125 type (2)\n");
        printf("Sandwich @ 60 type (3)\n");
        printf("Lassi @ 40 type (4)\n");
        printf(" \n");
        printf("Your Order: ");
        scanf("%d",&a);
        printf("Quantity: ");
        scanf("%d",&qua);

        switch(a){
            case 1: total=85*qua;
                    printf("Your Order Burger....%d\nAmount...............85\nTotal................%d",a,total);
                    break;

            case 2: total=125*qua;
                    printf("Your Order Pizza....%d\nAmount..............85\nTotal...............%d",a,total);
                    break;

            case 3: total=60*qua;
                    printf("Your Order Sandwich....%d\nAmount.................85\nTotal..................%d",a,total);
                    break;.

            case 4: total=40*qua;
                    printf("Your Order Lassi....%d\nAmount..............85\nTotal...............%d",a,total);
                    break;
        }
    }

    if(a==6){
        int i;
        printf("School of Computer Science (1)\n");
        printf("School of Engineering(2)\n");
        printf("School of Business (3)\n");
        printf("\n");
        printf("Which School You Want: ");
        scanf("%d",&a);

        switch(a){
            case 1:printf("Department of Informatics(1)\nDepartment of Machine Learning(2)");
                   scanf("%d",&i);
                   break;
        }
    }



    return 0;
}
