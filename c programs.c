Q1)
#include <stdio.h>
int main() {
    printf("Hello world");
    return 0;
}

Q2)
#include <stdio.h>
int main() {
    int n;
    printf("Enter any integer number\n");
    scanf("%d",&n);
    if(n>=0)
    {
        printf(" The number is postive %d",n);
    }
    else
    {
        printf(" The number is negative %d",n);
    }
    return 0;
}
Q3)
#include <stdio.h>
int main()
{
  int n1,n2,mul;
  scanf("%d",&n1);
  scanf("%d",&n2);
  mul = n1 * n2;
  printf("multiply is %d",mul);
  return 0;
}

Q4)
#include <stdio.h>
int main() {
    int n;
     printf(" enter number of terms \n");
    scanf("%d",&n);
    int t1 =0,t2=1;
    int nexterm= t1+t2;
    printf("fibonacci series : %d %d",t1,t2);
    for(int i=3;i<=n;i++)
    {
        printf(" %d ",nexterm);
     t1=t2;
     t2=nexterm;
     nexterm = t1 + t2;
    }
    
    return 0;
}
Q5)
#include <stdio.h>
int main() {
    int n,fact = 1;
    printf(" enter number for factorial \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     fact = fact *i;   
    }
    printf("factorial of number %d = %d ",n,fact);
    return 0;
}


Q6)
#include <stdio.h>
int main() {
    int n,i,s[n],sum =0;
    printf("Enter number of n natural terms u want\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter  natural number\n");
        scanf("%d",&s[i]);
        sum = sum +s[i];
    }
    printf(" sum is %d",sum);
    return 0;
}

Q7)
#include <stdio.h>
int main() {
    int n,i,f = 0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2; i<n;i++)
    {
     if(n%i==0)
     {
         printf(" it is not a prime number %d",n);
         f =1
         break;
     }
    }
    if(f==0)
    {
       printf(" it is a prime number %d",n);   
       
     }   
    return 0;
}
Q8)
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
   return 0;
}


Q9)
#include <stdio.h>
int main()
{
  int n1,n2,sum;
  scanf("%d",&n1);
  scanf("%d",&n2);
  sum = n1 + n2;
  printf("sum is %d",sum);
  return 0;
}

Q10)
#include <stdio.h>
    void main()
    {
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
         }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
    }

Q11)
#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %.2lf", arr[0]);
  return 0;
}

Q12)
#include <stdio.h>
int main() {
   int a,b,temp;
   printf(" enter two numbers\n");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("a =%d b= %d \n",a,b);
   temp = a;
   a=b;
   b= temp;
   printf("After swapping \n a =%d b= %d",a,b);
    return 0;
}

Q13)
#include <stdio.h>
int main()
{
   float radius,pi = 3.14;
   printf(" enter radius\n");
   scanf("%f",& radius);
   float area = pi*radius*radius;
   printf(" area of circle %f\n",area);
   float circum = 2*pi*radius;
   printf(" circumference of circle %f",circum);
   return 0;
}

Q14)
#include <stdio.h>
int main()
{
  int n,remainder,reverse=0;
  printf(" enter a number\n");
  scanf("%d",& n);
   while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number = %d", reverse);
  
}

Q15)
#include <stdio.h>
int main()
{
  int n1,n2,i,gcd;
  printf(" enter a numbers\n");
  scanf("%d",& n1);
  scanf("%d",& n2);
  for (i=1;i<= n1&& i<=n2;i++)
  {
      if(n1%i==0&& n2% i==0)
      {
          gcd =i;
      }
  }
   printf("G.C.D of %d and %d is %d", n1, n2, gcd);
  return 0;
}

Q16)
#include <stdio.h>
int main() 
{
float p,t,r,si;
printf("Enter the principle amount  : \n");
scanf("%f",&p);
printf("Enter the time(in months) : \n");
scanf("%f",&t);
printf("Enter the rate of interest : \n");
scanf("%f",&r);
si=(p*t*r)/100;
printf(" The simple interest is %f",si);
    return 0;
}

Q17)
#include <stdio.h>
int main() 
{
int n;
printf("enter a positive number \n");
scanf(" %d",&n);
if(n%2==0)
{
    printf(" Even number ");
}
else
{
   printf(" Odd number "); 
}
return 0;
}

Q18)
##include <stdio.h>
int main()                                                                                                                
{
  int n1,n2,i=1,gcd;
  printf(" enter a numbers\n");
  scanf("%d",& n1);
  scanf("%d",& n2);
  while(i<= n1&& i<=n2)
  {
      if(n1%i==0&& n2% i==0)
      {
          gcd =i;
      }
      i++;
  }
  int lcm=(n1*n2)/gcd;
   printf("L.C.M of %d and %d is %d", n1, n2, lcm);
  return 0;
}

Q19)
#include <stdio.h>
int main()
{
  int n1,n2,i,gcd;
  printf(" enter a numbers\n");
  scanf("%d",& n1);
  scanf("%d",& n2);
  for (i=1;i<= n1&& i<=n2;i++)
  {
      if(n1%i==0&& n2% i==0)
      {
          gcd =i;
      }
  }
   printf("G.C.D of %d and %d is %d", n1, n2, gcd);
  return 0;
}

10/2/23


5 programs


1)#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}                                                                                                                                                                                                                


2) #include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}
