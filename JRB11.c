// 1. Write a function to calculate LCM of two numbers. (TSRS)
// #include<stdio.h>
// #include<conio.h>
// int CheckLCM(int , int);
// int main()
// {
//     int num1,num2;
//     printf("Enter two  number to check ");
//     scanf("%d%d", &num1, &num2);
//     printf("The LCM is %d ", CheckLCM(num1, num2));

//     return 0;
// }

// int CheckLCM(int x, int y)
// {
//     int i;
//     int till = x * y;
//     for (i = 2; i <= till;i++)
//      {
//         if(i%x==0 && i%y==0)
//          break;
//      }
//      if(i%x==0 && i%y==0)
//          return i;
// }


// 2. Write a function to calculate HCF of two numbers. (TSRS)
// #include<stdio.h>
// #include<conio.h>
// int CalculateHCF(int, int);
// int main()
// {
//     int num1, num2;

//     printf("Enter Two Number\n Enter bigger number first \n ");
//     scanf("%d \n %d", &num1, &num2);
//     printf(" HCF is %d ", CalculateHCF(num1, num2));

//     return 0;
// }

// int CalculateHCF(int x,int y)
// {
//     int r;
//     while (1)
//     {
//         r = x % y;
//         if (r==0)
//             break;
//         x = y;
//         y = r;
//     }
//     if(r==0)
//         return y ;
// }

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
// #include<stdio.h>
// #include<conio.h>
// void checkprime(int);
// int main()
// {
//     int num ;
//     printf("Enter a number ");
//     scanf("%d",&num);
//     checkprime(num);
//     return 0;
// }
// void checkprime(int num1)
// {
//     int i;
//     for (i = 2; i < num1;i++)
//     {
//         if(num1%i==0)
//         break;
//     }
//     if(num1==i)
//        printf("%d is prime",num1);
//       else
//        printf("%d is not prime",num1);
// }

// 4. Write a function to find the next prime number of a given number. (TSRS)
// #include <stdio.h>
// int NextPrime(int);
// int main()
// {
//   int num;
//   printf("Enter a number ");
//   scanf("%d", &num);
//   // int x =NextPrime(num);
//   printf("The Next Prime Number is %d ", NextPrime(num));
//   return 0;
// }
// int NextPrime( int x)
// {
//   int i;
//   while (1)
//   {
//     for (i = 2; i < x; i++)
//     {
//       if (x % i == 0)
//         break;
//     }

//     if (x == i)
//     {
//       return i;
//       break;
//     }
//     else
//       x++;
//   }
// }

// 5. Write a function to print first N prime numbers (TSRN)
// #include <stdio.h>
// #include <conio.h>
// void printPrime(int);
// int main()
// {
//   int num;
//   printf("Enter a number do you print prime ");
//   scanf("%d", &num);
//   printPrime(num);

//   return 0;
// }
// void printPrime(int num)
// {
// intj

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
// #include <stdio.h>
// #include <conio.h>
// void PrintPrimeBtNum(int, int);
// int main()
// {
//   int num1, num2;
//   printf("Enter Two Numbers");
//   scanf("%d%d", &num1, &num2);
//   PrintPrimeBtNum(num1, num2);

//   return 0;
// }
// void PrintPrimeBtNum(int num1, int num2)
// {
//   int x, i;
//   for (x = num1; x < num2; x++)
//   {
//     for (i = 2; i < x; i++)
//       if (x % i == 0)
//         break;

//     if (x == i)
//       printf("%d ", i);
//   }
// }

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
// #include<stdio.h>
// #include<conio.h>
// void NtermsOfFib(int num);
// int main()
// {
//   int num;
//   printf("Enter a number");
//   scanf("%d", &num);
//   NtermsOfFib(num);

//   return 0;
// }

// void NtermsOfFib(int num){
//   int i,a = -1, b = 1, c;
//   for (i = 0; i <num;i++)
//     {
//       c = a + b;
//       printf("%d ", c);
//       a = b;
//       b = c;
//     }
// }

// 8. Write a function to print PASCAL Triangle. (TSRN)
// #include <stdio.h>
// #include <conio.h>
// int fact(int);
// int combination(int, int);
// void pascal(int);

// int fact(int num)
// {
//   int i, factorial;
//   for (i = 1; i <= num; i++)
//   {
//     factorial = factorial * i;
//   }
//   return factorial;
// }

// int combination(int n, int r)
// {
//   int comb;
//   comb = fact(n) / fact(n) * fact(n - r);
//   return comb;
// }

// void pascal(int n)
// {
//   int i, j;
//   for (i = 1; i <= n; i++)
//     for (j = 0; j <= i; j++)
//       printf("%d ", combination(i, j));
// }

// int main()
// {
//   int n;
//   printf("Enter the value for pascal tringle");
//   scanf("%d", &n);
//   pascal(n);

//   return 0;
// }

// 9. Write a program in C to find the square of any number using the function.

// #include<stdio.h>
// #include<conio.h>
// int SquereOfNum(int);
// int main()
// {
//   int num;
//   printf("Enter a Number");
//   scanf("%d", &num);
//   printf("%d" ,SquereOfNum(num));

//   return 0;
// }
// int SquereOfNum(int num){

//   num = num * num;
//   return num;
// }

// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.
// #include <stdio.h>
// #include <conio.h>
// int sumofseries(int);
// int fact(int);

// int fact(int x)
// {
//   int a, facto=1;
//   for (a = 1; a <= x; a++)
//     facto = facto * a;
//   return facto;
// }

// int sumofseries(int num)
// {
//   int i, sos = 0;
//   for (i = 1; i <= num; i++)
//   {
//     sos = sos + (fact(i) / i);
//   }
//   return sos;
// }
// int main()
// {
//   int num;
//   printf("Enter a number");
//   scanf("%d", &num);
//   printf("%d", sumofseries(num));

//   return 0;
// }
