#include<stdio.h>
#include<math.h>
#include<string.h>

#define KEY "  Enter the calculator Operation you want to do"

#define MAX 1000



void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b, c;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n %d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    float a, b, d;
    printf("\nPlease enter first number  : ");
    scanf("%f", &a);
    printf("Please enter second number : ");
    scanf("%f", &b);
    d=a/b;
    printf("\n Division of entered numbers=%f \n",d);
}


void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n %lf to the power %lf = %lf \n",a,num,p);
}
int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}

void d_o()
    {
        int n;
        scanf("%d",&n);
        printf("%o",n);
    }

void d_h()
    {
        int n;
        scanf("%d",&n);
        printf("%x",n);
    }

void o_d()
    {
        int n;
        scanf("%o",&n);
        printf("%d",n);
    }
void h_d()
    {
        int n;
        scanf("%x",&n);
        printf("%d",n);
    }
void h_o()
    {
        int n;
        scanf("%x",&n);
        printf("%o",n);
    }
void d_b()
    {
        long int decimalNumber,remainder,quotient;

        int binaryNumber[100],i=1,j;


        printf("\nEnter any decimal number: ");

        scanf("%ld",&decimalNumber);


        quotient = decimalNumber;


        while(quotient!=0)
            {

            binaryNumber[i++]= quotient % 2;

            quotient = quotient / 2;

            }


        printf("\nEquivalent binary value of decimal number %d: ",decimalNumber);

        for(j = i -1 ;j> 0;j--)

        printf("\n%d",binaryNumber[j]);


        return 0;



    }
void b_d()
    {
        long int binaryNumber,decimalNumber=0,j=1,remainder;

        printf("\nEnter any number any binary number: ");
        scanf("%ld",&binaryNumber);

        while(binaryNumber!=0)
            {
                remainder=binaryNumber%10;
                decimalNumber=decimalNumber+remainder*j;
                j=j*2;
                binaryNumber=binaryNumber/10;
            }

        printf("\nEquivalent decimal value: %ld",decimalNumber);

            return 0;

    }

void b_o()
    {
        long int binaryNumber,octalNumber=0,j=1,remainder;

        printf("\n Enter any number any binary number: ");
        scanf("%ld",&binaryNumber);

        while(binaryNumber!=0)
            {
            remainder=binaryNumber%10;
            octalNumber=octalNumber+remainder*j;
            j=j*2;
            binaryNumber=binaryNumber/10;
            }

        printf("\nEquivalent octal value: %lo",octalNumber);

        return 0;
    }


void b_h()
    {
        char binaryNumber[MAX],hexaDecimal[MAX];
        int temp;
        long int i=0,j=0;
        printf("\nEnter any number any binary number: ");
        scanf("%s",binaryNumber);

        while(binaryNumber[i])
            {
                binaryNumber[i] = binaryNumber[i] -48;
                ++i;
            }

                --i;
        while(i-2>=0)
            {
                temp =  binaryNumber[i-3] *8 + binaryNumber[i-2] *4 +  binaryNumber[i-1] *2 + binaryNumber[i] ;
                if(temp > 9)
                    hexaDecimal[j++] = temp + 55;
                else
                    hexaDecimal[j++] = temp + 48;
                    i=i-4;
            }

        if(i ==1)
            hexaDecimal[j] = binaryNumber[i-1] *2 + binaryNumber[i] + 48 ;
        else if(i==0)
            hexaDecimal[j] =  binaryNumber[i] + 48 ;
        else
            --j;

        printf("\nEquivalent hexadecimal value: ");
        while(j>=0)
            {
                printf("%c",hexaDecimal[j--]);
            }

            return 0;
    }


void o_b()
    {
        char octalNumber[MAX];
        long int i=0;

        printf("\nEnter any octal number: ");
        scanf("%s",octalNumber);

        printf("\nEquivalent binary value: ");
        while(octalNumber[i])
        {
        switch(octalNumber[i])
            {
            case '0': printf("000"); break;
            case '1': printf("001"); break;
            case '2': printf("010"); break;
            case '3': printf("011"); break;
            case '4': printf("100"); break;
            case '5': printf("101"); break;
            case '6': printf("110"); break;
            case '7': printf("111"); break;
            default:  printf("\nInvalid octal digit %c ",octalNumber[i]); return 0;
            }
        i++;
        }

        return 0;
    }


void o_h()
    {
        int n;
        scanf("%o",&n);
        printf("%x",n);
    }


void h_b()
    {
        char binaryNumber[MAX],hexaDecimal[MAX];
        long int i=0;

        printf("\n Enter any hexadecimal number: ");
        scanf("%s",hexaDecimal);

        printf("\nEquivalent binary value: ");
        while(hexaDecimal[i]){
        switch(hexaDecimal[i]){
        case '0': printf("0000"); break;
        case '1': printf("0001"); break;
        case '2': printf("0010"); break;
        case '3': printf("0011"); break;
        case '4': printf("0100"); break;
        case '5': printf("0101"); break;
        case '6': printf("0110"); break;
        case '7': printf("0111"); break;
        case '8': printf("1000"); break;
        case '9': printf("1001"); break;
        case 'A': printf("1010"); break;
        case 'B': printf("1011"); break;
        case 'C': printf("1100"); break;
        case 'D': printf("1101"); break;
        case 'E': printf("1110"); break;
        case 'F': printf("1111"); break;
        case 'a': printf("1010"); break;
        case 'b': printf("1011"); break;
        case 'c': printf("1100"); break;
        case 'd': printf("1101"); break;
        case 'e': printf("1110"); break;
        case 'f': printf("1111"); break;
        default:  printf("\nInvalid hexadecimal digit %c ",hexaDecimal[i]); return 0;
        }
        i++;
        }

        return 0;
    }

void b_a()
    {
    long int binary1,binary2;
    int i=0,remainder = 0,sum[20];

    printf("\nEnter any first binary number: ");
    scanf("%ld",&binary1);
    printf("\nEnter any second binary number: ");
    scanf("%ld",&binary2);

    while(binary1!=0||binary2!=0){
         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;
         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;
         binary1 = binary1/10;
         binary2 = binary2/10;
    }

    if(remainder!=0)
         sum[i++] = remainder;

    --i;
    printf("\nSum of two binary numbers: ");
    while(i>=0)
         printf("%d",sum[i--]);

   return 0;
    }




void b_s()
    {
        long int binary1,binary2;
    int i=0,remainder = 0,sub[20];

    printf("\nEnter any first binary number: ");
    scanf("%ld",&binary1);
    printf("\nEnter any second binary number: ");
    scanf("%ld",&binary2);

    while(binary1!=0||binary2!=0){
         sub[i++] =  (binary1 %10 - binary2 %10 - remainder ) % 2;
         remainder = (binary1 %10 - binary2 %10 - remainder ) / 2;
         binary1 = binary1/10;
         binary2 = binary2/10;
    }

    if(remainder!=0)
         sub[i++] = remainder;

    --i;
    printf("\nSub of two binary numbers: ");
    while(i>=0)
         printf("\n%d",sub[i--]);

   return 0;
    }


void h_a()
    {
        int i,a[20];
        long int h=0,m=1,j=0,k=0;
         char s[20],q[20];

         printf("\nEnter 1st Hexadecimal number");
         scanf("%s",s);
        printf("\nEnter 2nd Hexadecimal number");
        scanf("%s",q);
         printf("\nAddition is = ");

         for(i=0;s[i]!=NULL;i++)
         {

          switch(s[i])
           {
            case '0':
             a[i]=0;
             break;
            case '1':
             a[i]=1;
             break;
            case '2':
             a[i]=2;
             break;
            case '3':
             a[i]=3;
             break;
            case '4':
             a[i]=4;
             break;
            case '5':
             a[i]=5;
             break;
            case '6':
             a[i]=6;
             break;
            case '7':
             a[i]=7;
             break;
            case '8':
             a[i]=8;
             break;
            case '9':
             a[i]=9;
             break;
            case 'a':
            case 'A':
             a[i]=10;
             break;
            case 'b':
            case 'B':
             a[i]=11;
             break;
            case 'c':
            case 'C':
             a[i]=12;
             break;
            case 'd':
            case 'D':
             a[i]=13;
             break;
            case 'e':
            case 'E':
             a[i]=14;
             break;
            case 'f':
            case 'F':
             a[i]=15;
             break;
            default:
             printf("\nEntered number is not Hexadecimal.Printed value is notcorrect.");
             break;

           }
         }
         i--;
         for(;i>=0;i--)
         {
          h=h+a[i]*m;
          m=m*16;
          j=j+a[i]*m;
          k=(h+j)/8.5;
         }

          printf("\n %ld ",k );

    }



void h_s()
    {
        int i,a[20];
        long int h=0,m=1,j=0,k=0;
        char s[20],q[20];

         printf("\nEnter 1st Hexadecimal number: \n");
         scanf("%s",s);
         printf("\nEnter 2nd Hexadecimal number: \n");
         scanf("%s",q);
         printf("\nsubtraction is = ");

         for(i=0;s[i]!=NULL;i++)
         {

          switch(s[i])
           {
            case '0':
             a[i]=0;
             break;
            case '1':
             a[i]=1;
             break;
            case '2':
             a[i]=2;
             break;
            case '3':
             a[i]=3;
             break;
            case '4':
             a[i]=4;
             break;
            case '5':
             a[i]=5;
             break;
            case '6':
             a[i]=6;
             break;
            case '7':
             a[i]=7;
             break;
            case '8':
             a[i]=8;
             break;
            case '9':
             a[i]=9;
             break;
            case 'a':
            case 'A':
             a[i]=10;
             break;
            case 'b':
            case 'B':
             a[i]=11;
             break;
            case 'c':
            case 'C':
             a[i]=12;
             break;
            case 'd':
            case 'D':
             a[i]=13;
             break;
            case 'e':
            case 'E':
             a[i]=14;
             break;
            case 'f':
            case 'F':
             a[i]=15;
             break;
            default:
             printf("\nEntered number is not Hexadecimal.Printed value is notcorrect\n");
             break;

           }
         }
         i--;
         for(;i>=0;i--)
         {
          h=h-a[i]*m;
          m=m*16;
          j=j-a[i]*m;
          k=(h-j)/8.5;
         }

          printf("%\n ld ",k);

    }










int main()
{
    long X;
    int n,s;


    char Calc_oprn;


    calculator_operations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '^': power();
                      break;

            case '!': factorial();
                      break;

            case 'a': d_b();
                      break;
            case 'b': d_o();
                      break;
            case 'c': d_h();
                      break;
            case 'd': b_d();
                      break;
            case 'e': b_o();
                      break;
            case 'f': b_h();
                      break;
            case 'g': o_d();
                      break;
            case 'h': o_b();
                      break;
            case 'i': o_h();
                      break;
            case 'j': h_d();
                      break;
            case 'k': h_b();
                      break;
            case 'l': h_o();
                      break;
            case 'm': b_a();
                      break;
            case 'n': b_s();
                      break;
            case 'o': h_a();
                      break;




            case 'X':
            case 'x': calculator_operations();
                      break;


            case 'Y':
            case 'y': exit(0);
                      break;
            case 'Z':
            case 'z': system("cls");
                      calculator_operations();
                      break;


            default : system("cls");



    printf("\n  *You have entered unavailable option");
    printf("\n");
    printf("\n  Please Enter any one of below available ");
    printf("\n");
                      calculator_operations();
        }
    }
}


void calculator_operations()
{

    printf("\n             ************************************************************");
    printf("\n             *              Welcome to C calculator                     *");
    printf("\n             ************************************************************");


    printf("\n\n  display available option \n\n");
    printf("  Chose The function of Calculator:\n\n");
    printf("  Enter + symbol for Addition \n");
    printf("  Enter - symbol for Subtraction \n");
    printf("  Enter * symbol for Multiplication \n");
    printf("  Enter / symbol for Division \n");
    printf("  Enter ^ symbol for Power \n");
    printf("  Enter ! symbol for Factorial \n\n");
    printf("  a.decimal_to_binary      | b.decimal_to_octal        | c.decimal_to_hexadecimal  |\n");

    printf("  d.binary_to_decimal      | e.binary_to_octal         | f.binary_to_hexadecimal   |\n");

    printf("  g.octal_to_decimal       | h.octal_to_binary         | i.octal_to_hexadecimal    |\n");

    printf("  j.hexadecimal_to_decimal | k.hexadecimal_to_binary   | l.hexadecimal_to_octal    |\n");

    printf("  m.binary_addition        | n.binary_subtraction      |                           |\n");

    printf("  o.hexa_addition          | p.hexa_subtraction        |                           |\n");

    printf(" ------------------------------------------------------------------------------------\n");

    printf("  Press 'Y' or 'y' to quit the program \n");
    printf("  Press 'X' or 'x' to display below options \n");
    printf("  Enter 'Z' or 'z' to clear the screen \n\n");
    printf(" ------------------------------------------------------------------------------------\n");

}

