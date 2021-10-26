#include<stdio.h>

int main(){

    int function = 0;
    int a=0,b=0,c=0;
    int mresult =0;
    char op1, op2;

    printf("Enter the calculator mode (1:Normal, 2:Extended): ");
    scanf("%d", &function);

    if(function == 1)
    {
        printf("Put two integers: ");
        scanf("%d,%d", &a,&b);
        getchar();
        printf("Put the operator: ");
        scanf("%c", &op1);
        printf("The result is ");
        switch(op1)
        {
            case('+'):
                printf("%d", a+b);
                break;
            case('-'):
                printf("%d", a-b);
                break;
            case('*'):
                printf("%d", a*b);
                break;
            case('/'):
                if(b == 0)
                    printf(" Error");
                else
                    printf("%d", a/b);
                break;
            case('%'):
                if(b == 0)
                    printf(" Error");
                else
                    printf("%d", a%b);
                break;
        }
    }
    else if(function == 2)
    {
        printf("Put three integers: ");
        scanf("%d,%d,%d", &a, &b, &c);
        getchar();
        printf("Put two operators: ");
        scanf("%c,%c", &op1, &op2);
        printf("The result is ");
        
        if(op1 == '*' || op1 == '/' || op1 == '%')
        {
            switch(op1)
            {
                case('*'):
                    mresult = a*b;
                    break;
                case('/'):
                    if(b == 0)
                        printf(" Error");
                    else
                        mresult = a/b;
                        break;
 
                case('%'):
                    if(b == 0)
                        printf(" Error");
                    else
                        mresult = a%b;
                    break;
            }
            switch(op2)
            {
                case('+'):
                    printf("%d", mresult+c);
                    break;
                case('-'):
                    printf("%d", mresult-c);
                    break;
                case('*'):
                    printf("%d", mresult*c);
                    break;
                case('/'):
                    if(c == 0)
                        printf(" Error");
                    else
                        printf("%d", mresult/c);
                    break;
                case('%'):
                    if(c == 0)
                        printf(" Error");
                    else
                        printf("%d", mresult%c);
                    break;
            }

        }
        else
        {
            switch(op2)
            {
                case('*'):
                    mresult = b*c;
                    break;
                case('/'):
                    if(c == 0)
                        printf(" Error");
                    else
                        mresult = b/c;
                    break;
                case('%'):

                    if(c == 0)
                        printf(" Error");
                    else
                        mresult = b%c;
                    break;
//수정한 부분                    
                case('+'):
                    mresult = b+c;
                    break;
                case('-'):
                    mresult = b-c;
                    break;
//수정한 부분
            }
            switch(op1)
            {
                case('+'):
                    printf("%d", a+mresult);
                    break;
                case('-'):
                    printf("%d", a-mresult);
                    break;
                case('*'):
                    printf("%d", a*mresult);
                    break;
                case('/'):
                    if(mresult == 0)
                    printf(" Error");
                    else
                        printf("%d", a/mresult);
                    break;
                case('%'):
                    if(mresult == 0)
                        printf(" Error");
                    else
                        printf("%d", a%mresult);
                    break;
            }
        }
    }
    return 0;
}
