/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//-------odd even--------
// #include <stdio.h>

// int main()
// {
//     int num;
//   printf("ENTER THE NUM:");
//   scanf("%d",&num);
//   if(num%2==0){
//   printf("EVEN");
//   }
//   else{
//   printf("ODD");
// }
//     return 0;
// }

// -----prime number-----
// #include<stdio.h>
// int main(){
//     int n,count=0;
//     printf("ENTER THE NUM:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(n%1==0)
//             count++;
//         }
//         if(count==2)
//             printf("prime");
        
//             else
//                 printf("not prime");
//             return 0;
//         }
    
//------factorial------
// #include<stdio.h>
// int main(){
//     int n,fact=1;
//     printf("ENTER THE NUM:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
    
//     }
//     printf("factorial :%d",fact);
//     return 0;
// }

//------fibonacci------
// #include<stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     printf("ENTER THE NUM:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d",a);
//     }
//     return 0;
// }
 
//------perfect number-------
// #include <stdio.h>
// int main()
// {
//     int n, i, sum = 0;
//     printf("ENTER THE NUM: ");
//     scanf("%d", &n);
//     for(i = 1; i < n; i++)
//     {
//         if(n % i == 0)
//             sum = sum + i;
//     }
//     if(sum == n)
//         printf("Perfect");
//     else
//         printf("Not Perfect");
//     return 0;
// }
//             (FUNCTION)
// ------function program perfect number-------
// #include <stdio.h>
// int perfect(int n)
// {
//     int i, sum = 0;
//     for(i = 1; i < n; i++)
//     {
//         if(n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     if(sum == n)
//         return 1;
//     else
//         return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(perfect(n))
//         printf("Perfect Number");
//     else
//         printf("Not a Perfect Number");
//     return 0;
// }
 
//------gcd------
// #include <stdio.h>
// int gcd(int a, int b)
// {
//     if(b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }
// // int main()
// // {
// //     int a, b;
// //     printf("Enter two numbers: ");
// //     scanf("%d %d", &a, &b);
// //     printf("GCD = %d", gcd(a, b));
// //     return 0;
// // }

// // ------arthimetic operation-----
// // #include <stdio.h>
// // int add(int a,int b)
// // {
// //     return a+b;
// // }
// // int sub(int a,int b)
// // {
// //     return a-b;
// // }
// // int mul(int a,int b)
// // {
// //     return a*b;
// // }
// // int main()
// // {
// //     int a,b;
// //     char op;
// //     scanf("%d %d",&a,&b);
// //     scanf(" %c",&op);
// //     if(op=='+')
// //         printf("%d",add(a,b));
// //     else if(op=='-')
// //         printf("%d",sub(a,b));
// //     else if(op=='*')
// //         printf("%d",mul(a,b));
// //     else if(op=='/')
// //         printf("%.2f",(float)a/b);
// //     else
// //         printf("Invalid");
// //     return 0;
// // }
//        (STRING)
// //String to Integer
// // #include <stdio.h>
// // int main() {
// //     char s[20];
// //     int n = 0, i;
// //     scanf("%s", s);

// //     for(i = 0; s[i] != '\0'; i++)
// //         n = n * 10 + (s[i] - '0');

// //     printf("%d", n);
// //     return 0;
// // }

// // Integer to String
// // #include <stdio.h>
// // int main() {
// //     int n;
// //     char s[20];
// //     scanf("%d", &n);

// //     sprintf(s, "%d", n);
// //     printf("%s", s);
// //     return 0;
// // }

// // // palidrome or not
// // #include <stdio.h>
// // #include <string.h>
// // int main() {
// //     char s[100];
// //     int i, flag = 1;
// //     scanf("%s", s);

// //     for(i = 0; i < strlen(s)/2; i++) {
// //         if(s[i] != s[strlen(s)-1-i])
// //             flag = 0;
// //     }

// // //     if(flag)
// // //         printf("Palindrome");
// // //     else
// // //         printf("Not Palindrome");
// // //     return 0;
// // // }

// // // reverse string
// // #include <stdio.h>
// // #include <string.h>
// // int main() {
// //     char s[100], t;
// //     int i, n;
// //     scanf("%s", s);
// //     n = strlen(s);

// //     for(i = 0; i < n/2; i++) {
// //         t = s[i];
// //         s[i] = s[n-1-i];
// //         s[n-1-i] = t;
// //     }

// //     printf("%s", s);
// //     return 0;
// // }

// // // pangram check

// // #include <stdio.h>
// // #include <ctype.h>
// // int main() {
// //     char s[200];
// //     int a[26] = {0}, i, count = 0;
// //     fgets(s, sizeof(s), stdin);

// //     for(i = 0; s[i]; i++)
// //         if(isalpha(s[i]))
// //             a[tolower(s[i])-'a'] = 1;

// //     for(i = 0; i < 26; i++)
// //         count += a[i];

// //     if(count == 26)
// //         printf("Pangram");
// //     else
// //         printf("Not Pangram");
// //     return 0;
// // }

// // upper to lower case

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char s[50];
//     int i;
//     scanf("%s", s);
//     for(i = 0; s[i] != '\0'; i++)
//     {
//         s[i] = tolower(s[i]);
//     }
//     printf("%s", s);
//     return 0;
// }
//       (BIT MANIPULATION)
// toggle n bit

// #include <stdio.h>
// int main()
// {
//     int a, p, n, i;
//     scanf("%d%d%d", &a, &p, &n);

//     for(i = p; i < p+n; i++)
//         a = a ^ (1 << i);

//     printf("%d", a);
//     return 0;
// }

// extract n bits
// #include <stdio.h>
// int main()
// {
//     int a, p, n, i, b = 0;
//     scanf("%d%d%d", &a, &p, &n);

//     for(i = 0; i < n; i++)
//     {
//         if(a & (1 << (p+i)))
//             b = b | (1 << i);
//     }

//     printf("%d", b);
//     return 0;
// }

// replace n bits
// #include <stdio.h>
// int main()
// {
//     int a, b, p, n, i;
//     scanf("%d%d%d%d", &a, &b, &p, &n);

//     for(i = 0; i < n; i++)
//     {
//         a = a & ~(1 << (p+i));

//         if(b & (1 << i))
//             a = a | (1 << (p+i));
//     }

//     printf("%d", a);
//     return 0;
// }

// swap n bits

// #include <stdio.h>
// int main()
// {
//     int a, b, p, n, i, x, y;
//     scanf("%d%d%d%d", &a, &b, &p, &n);

//     for(i = 0; i < n; i++)
//     {
//         x = (a >> (p+i)) & 1;
//         y = (b >> (p+i)) & 1;

//         if(x != y)
//         {
// //             a = a ^ (1 << (p+i));
// //             b = b ^ (1 << (p+i));
// //         }
// //     }

// //     printf("%d %d", a, b);
// //     return 0;
// // }
//       (ARRAY)
// // remove duplicates

// #include <stdio.h>
// int main()
// {
//     int a[100], n, i, j, k;
//     scanf("%d", &n);

//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     for(i = 0; i < n; i++)
//     {
//         for(j = i+1; j < n; j++)
//         {
//             if(a[i] == a[j])
//             {
//                 for(k = j; k < n-1; k++)
//                     a[k] = a[k+1];
//                 n--;
//                 j--;
//             }
//         }
//     }

//     for(i = 0; i < n; i++)
//         printf("%d ", a[i]);

//     return 0;
// }

// 2nd large n 2nd small

// #include <stdio.h>
// int main()
// {
//     int a[100], n, i, j, t;
//     scanf("%d", &n);

//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     for(i = 0; i < n; i++)
//     {
//         for(j = i+1; j < n; j++)
//         {
//             if(a[i] > a[j])
//             {
//                 t = a[i];
//                 a[i] = a[j];
//                 a[j] = t;
//             }
//         }
//     }
//     i = 0;
//     while(i < n && a[i] == a[0])
//         i++;
//     if(i == n)
//         printf("Second elements not found");
//     else
//     {
//         printf("Second smallest = %d\n", a[i]);
//         i = n-1;
//         while(i >= 0 && a[i] == a[n-1])
//             i--;
//         if(i >= 0)
//             printf("Second largest = %d", a[i]);
//         else
//             printf("Second largest not found");
//     }
//     return 0;
// }

// find pairs with given sum

// #include <stdio.h>
// int main()
// {
//     int a[100], n, sum, i, j, found = 0;
//     scanf("%d", &n);
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i])
//     scanf("%d", &sum);
//     for(i = 0; i < n; i++)
//     {
//         for(j = i+1; j < n; j++)
//         {
//             if(a[i] + a[j] == sum)
//             {
//                 printf("%d %d\n", a[i], a[j]);
//                 found = 1;
//             }
//         }
//     }
//     if(found == 0)
//         printf("No pairs found");
//     return 0;
// }

// negative num 1st,postive num 2nd

// #include <stdio.h>
// int main()
// {
//     int a[100], b[100], n, i, j = 0;
//     scanf("%d", &n);
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     for(i = 0; i < n; i++)
//     {
//         if(a[i] < 0)
//             b[j++] = a[i];
//     }
//     for(i = 0; i < n; i++)
//     {
//         if(a[i] >= 0)
//             b[j++] = a[i];
//     }
//     for(i = 0; i < n; i++)
//         printf("%d ", b[i]);
//     return 0;
// }
//       (STRUCTURE)
// add two complex numbers

// #include <stdio.h>
// struct Complex
// {
//     int real, img;
// };
// int main()
// {
//     struct Complex a, b, c;
//     scanf("%d%d", &a.real, &a.img);
//     scanf("%d%d", &b.real, &b.img);
//     c.real = a.real + b.real;
//     c.img = a.img + b.img;
//     printf("%d + %di", c.real, c.img);
//     return 0;
// }
