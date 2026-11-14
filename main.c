/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

************************************************************************/
1. Reverse a Number
#include <stdio.h>
int main()
{
 int n, rev = 0, rem;
 scanf("%d", &n);
 while(n > 0)
 {
 rem = n % 10;
 rev = rev * 10 + rem;
 n = n / 10;
 }
 printf("%d", rev);
 return 0;
}
2. Palindrome Number
#include <stdio.h>
int main()
{
 int n, temp, rev = 0, rem;
 scanf("%d", &n);
 temp = n;
 while(n > 0)
 {
 rem = n % 10;
 rev = rev * 10 + rem;
 n = n / 10;
 }
 if(temp == rev)
 printf("Palindrome");
 else
 printf("Not Palindrome");
 return 0;
}
3. Prime Number
#include <stdio.h>
int main()
{
 int n, i, count = 0;
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
 {
 if(n % i == 0)
 count++;
 }
 if(n > 1 && count == 2)
 printf("Prime");
 else
 printf("Not Prime");
 return 0;
}
4. Fibonacci Series
#include <stdio.h>
int main()
{
 int n, a = 0, b = 1, c, i;
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
 {
 printf("%d ", a);
 c = a + b;
 a = b;
 b = c;
 }
 return 0;
} 
5. Factorial
#include <stdio.h>
int main() {
 int n, i, fact = 1;
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
 fact = fact * i;
 printf("%d", fact);
 return 0; }
6. Largest Element in an Array
#include <stdio.h>
int main() {
 int a[100], n, i, max;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 max = a[0];
 for(i = 1; i < n; i++)
 {
 if(a[i] > max)
 max = a[i];
 }
 printf("%d", max);
 return 0; }
7. Second Largest Element in an Array
#include <stdio.h>
int main() {
 int a[100], n, i, j, temp;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for(i = 0; i < n; i++)
 {
 for(j = i + 1; j < n; j++)
 {
 if(a[i] < a[j])
 {
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 }
 }
 }
 if(n < 2)
 printf("Not possible");
 else
 {
 i = 1;
 while(i < n && a[i] == a[0])
 i++;
 if(i == n)
 printf("No second largest");
 else
 printf("%d", a[i]);
 }
 return 0; } 
8. Reverse an Array
#include <stdio.h>
int main() {
 int a[100], n, i;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for(i = n - 1; i >= 0; i--)
 printf("%d ", a[i]);
 return 0; }
9. Sort an Array (Ascending)
#include <stdio.h>
int main() {
 int a[100], n, i, j, temp;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for(i = 0; i < n; i++)
 {
 for(j = i + 1; j < n; j++)
 {
 if(a[i] > a[j])
 {
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 }
 }
 }
 for(i = 0; i < n; i++)
 printf("%d ", a[i]);
 return 0; }
10. Remove Duplicate Elements from an Array
#include <stdio.h>
int main() {
 int a[100], n, i, j, k;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for(i = 0; i < n; i++)
 {
 for(j = i + 1; j < n; j++)
 {
 if(a[i] == a[j])
 {
 for(k = j; k < n - 1; k++)
 a[k] = a[k + 1];
 n--;
 j--;
 }
 }
 }
 for(i = 0; i < n; i++)
 printf("%d ", a[i]);
 return 0; } 
11. Find the Missing Number
/* Assumption: array contains numbers from 1 to n+1
 with exactly one number missing. */
#include <stdio.h>
int main() {
 int a[100], n, i, sum = 0;
 int total, missing;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 sum = sum + a[i];
 }
 total = (n + 1) * (n + 2) / 2;
 missing = total - sum;
 printf("%d", missing);
 return 0; }
12. Find Duplicate Elements in an Array
#include <stdio.h>
int main() {
 int a[100], n, i, j;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for(i = 0; i < n; i++)
 {
 for(j = i + 1; j < n; j++)
 {
 if(a[i] == a[j])
 {
 printf("%d ", a[i]);
 break;
 }
 }
 }
 return 0; }
13. Frequency of Each Array Element
#include <stdio.h>
int main() {
 int a[100], visited[100] = {0};
 int n, i, j, count;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);
 for(i = 0; i < n; i++)
 {
 if(visited[i] == 1)
 continue;
 count = 1;
 for(j = i + 1; j < n; j++)
 {
 if(a[i] == a[j])
 {
 count++;
 visited[j] = 1;
 }
 }
 printf("%d = %d\\n", a[i], count);
 }
 return 0; } 
14. Reverse a String Without strrev()
#include <stdio.h>
int main() {
 char str[100], temp;
 int i, len = 0;
 scanf("%99s", str);
 while(str[len] != '\\0')
 len++;
 for(i = 0; i < len / 2; i++)
 {
 temp = str[i];
 str[i] = str[len - i - 1];
 str[len - i - 1] = temp;
 }
 printf("%s", str);
 return 0; }
15. String Length Without strlen()
#include <stdio.h>
int main() {
 char str[100];
 int i = 0;
 scanf("%99s", str);
 while(str[i] != '\\0')
 i++;
 printf("%d", i);
 return 0; }
16. Copy a String Without strcpy()
#include <stdio.h>
int main() {
 char str1[100], str2[100];
 int i = 0;
 scanf("%99s", str1);
 while(str1[i] != '\\0')
 {
 str2[i] = str1[i];
 i++;
 }
 str2[i] = '\\0';
 printf("%s", str2);
 return 0; }
17. Compare Two Strings Without strcmp()
#include <stdio.h>
int main() {
 char a[100], b[100];
 int i = 0;
 scanf("%99s", a);
 scanf("%99s", b);
 while(a[i] == b[i] && a[i] != '\\0')
 i++;
 if(a[i] == b[i])
 printf("Equal");
 else
 printf("Not Equal");
 return 0; } 
18. Concatenate Two Strings Without strcat()
#include <stdio.h>
int main() {
 char a[200], b[100];
 int i = 0, j = 0;
 scanf("%199s", a);
 scanf("%99s", b);
 while(a[i] != '\\0')
 i++;
 while(b[j] != '\\0')
 {
 a[i] = b[j];
 i++;
 j++;
 }
 a[i] = '\\0';
 printf("%s", a);
 return 0; }
19. String Palindrome
#include <stdio.h>
int main() {
 char str[100];
 int i, len = 0, flag = 1;
 scanf("%99s", str);
 while(str[len] != '\\0')
 len++;
 for(i = 0; i < len / 2; i++)
 {
 if(str[i] != str[len - i - 1])
 {
 flag = 0;
 break;
 }
 }
 if(flag == 1)
 printf("Palindrome");
 else
 printf("Not Palindrome");
 return 0; }
20. Count Vowels and Consonants
#include <stdio.h>
int main() {
 char str[100];
 int i, v = 0, c = 0;
 scanf("%99s", str);
 for(i = 0; str[i] != '\\0'; i++)
 {
 if(str[i] >= 'A' && str[i] <= 'Z')
 str[i] = str[i] + 32;
 if(str[i] >= 'a' && str[i] <= 'z')
 {
 if(str[i] == 'a' || str[i] == 'e' ||
 str[i] == 'i' || str[i] == 'o' ||
 str[i] == 'u')
 v++;
 else
 c++;
 }
 }
 printf("Vowels = %d\\n", v);
 printf("Consonants = %d", c);
 return 0; } 
21. Count Set Bits in an Integer
#include <stdio.h>
int main()
{
 unsigned int n;
 int count = 0;
 scanf("%u", &n);
 while(n > 0)
 {
 if(n % 2 == 1)
 count++;
 n = n / 2;
 }
 printf("%d", count);
 return 0;
}
22. Set, Clear, Toggle and Check a Bit
#include <stdio.h>
int main()
{
 unsigned int n, result;
 int bit;
 scanf("%u %d", &n, &bit);
 printf("Set = %u\\n", n | (1U << bit));
 printf("Clear = %u\\n", n & ~(1U << bit));
 printf("Toggle = %u\\n", n ^ (1U << bit));
 result = (n >> bit) & 1U;
 printf("Bit = %u", result);
 return 0;
}
23. Swap Two Numbers Using Pointers
#include <stdio.h>
void swap(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
int main()
{
 int a, b;
 scanf("%d %d", &a, &b);
 swap(&a, &b);
 printf("%d %d", a, b);
 return 0;
}
24. Reverse a Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
};
int main()
{
 struct Node *head = NULL, *newNode, *temp;
 struct Node *prev = NULL, *current, *nextNode;
 int n, i, value;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
 scanf("%d", &value);
 newNode = (struct Node *)malloc(sizeof(struct Node));
 newNode->data = value;
 newNode->next = NULL;
 if(head == NULL)
 head = newNode;
 else
 {
 temp = head;
 while(temp->next != NULL)
 temp = temp->next;
 temp->next = newNode;
 }
 }
 current = head;
 while(current != NULL)
 {
 nextNode = current->next;
 current->next = prev;
 prev = current;
 current = nextNode;
 }
 head = prev;
 temp = head;
 while(temp != NULL)
 {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 return 0;
} 
25. Find Middle Element of a Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
};
int main()
{
 struct Node *head = NULL, *newNode, *temp;
 struct Node *slow, *fast;
 int n, i, value;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
 scanf("%d", &value);
 newNode = (struct Node *)malloc(sizeof(struct Node));
 newNode->data = value;
 newNode->next = NULL;
 if(head == NULL)
 head = newNode;
 else
 {
 temp = head;
 while(temp->next != NULL)
 temp = temp->next;
 temp->next = newNode;
 }
 }
 slow = head;
 fast = head;
 while(fast != NULL && fast->next != NULL)
 {
 slow = slow->next;
 fast = fast->next->next;
 }
 if(slow != NULL)
 printf("%d", slow->data);
 return 0;
} 
26. Detect a Loop in a Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
};
int main()
{
 struct Node *head = NULL, *newNode, *temp;
 struct Node *slow, *fast;
 int n, i, value;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
 scanf("%d", &value);
 newNode = (struct Node *)malloc(sizeof(struct Node));
 newNode->data = value;
 newNode->next = NULL;
 if(head == NULL)
 head = newNode;
 else
 {
 temp = head;
 while(temp->next != NULL)
 temp = temp->next;
 temp->next = newNode;
 }
 }
 slow = head;
 fast = head;
 while(fast != NULL && fast->next != NULL)
 {
 slow = slow->next;
 fast = fast->next->next;
 if(slow == fast)
 {
 printf("Loop detected");
 return 0;
 }
 }
 printf("No loop");
 return 0;
} 
27. Stack Using an Array
#include <stdio.h>
#define MAX 100
int main() {
 int stack[MAX], top = -1;
 int choice, value;
 while(1)
 {
 scanf("%d", &choice);
 if(choice == 1)
 {
 scanf("%d", &value);
 if(top == MAX - 1)
 printf("Stack Full\\n");
 else
 stack[++top] = value;
 }
 else if(choice == 2)
 {
 if(top == -1)
 printf("Stack Empty\\n");
 else
 printf("%d\\n", stack[top--]);
 }
 else if(choice == 3)
 {
 int i;
 for(i = top; i >= 0; i--)
 printf("%d ", stack[i]);
 printf("\\n");
 }
 else if(choice == 4)
 break;
 }
 return 0; }
28. Queue Using an Array
#include <stdio.h>
#define MAX 100
int main() {
 int queue[MAX], front = 0, rear = -1;
 int choice, value, i;
 while(1)
 {
 scanf("%d", &choice);
 if(choice == 1)
 {
 scanf("%d", &value);
 if(rear == MAX - 1)
 printf("Queue Full\\n");
 else
 queue[++rear] = value;
 }
 else if(choice == 2)
 {
 if(front > rear)
 printf("Queue Empty\\n");
 else
 printf("%d\\n", queue[front++]);
 }
 else if(choice == 3)
 {
 for(i = front; i <= rear; i++)
 printf("%d ", queue[i]);
 printf("\\n");
 }
 else if(choice == 4)
 break;
 }
 return 0; } 
29. Implement String Length Using Pointers
#include <stdio.h>
int main() {
 char str[100];
 char *ptr;
 int len = 0;
 scanf("%99s", str);
 ptr = str;
 while(*ptr != '\\0')
 {
 len++;
 ptr++;
 }
 printf("%d", len);
 return 0; }
30. Implement memcpy() Manually
#include <stdio.h>
int main() {
 char source[100], destination[100];
 int i = 0;
 scanf("%99s", source);
 while(source[i] != '\\0')
 {
 destination[i] = source[i];
 i++;
 }
 destination[i] = '\\0';
 printf("%s", destination);
 return 0; }
31. Check Little-Endian or Big-Endian
#include <stdio.h>
int main() {
 unsigned int num = 1;
 char *ptr = (char *)&num;
 if(*ptr == 1)
 printf("Little Endian");
 else
 printf("Big Endian");
 return 0; }
32. Print Binary Representation of an Integer
#include <stdio.h>
int main() {
 unsigned int n, bits[32];
 int i = 0, j;
 scanf("%u", &n);
 if(n == 0)
 printf("0");
 else
 {
 while(n > 0)
 {
 bits[i] = n % 2;
 n = n / 2;
 i++;
 }
 for(j = i - 1; j >= 0; j--)
 printf("%u", bits[j]);
 }
 return 0; } 
33. Swap Two Variables Using XOR
#include <stdio.h>
int main() {
 int a, b;
 scanf("%d %d", &a, &b);
 a = a ^ b;
 b = a ^ b;
 a = a ^ b;
 printf("%d %d", a, b);
 return 0; }
34. Greatest Common Divisor (GCD)
#include <stdio.h>
int main() {
 int a, b, temp;
 scanf("%d %d", &a, &b);
 while(b != 0)
 {
 temp = b;
 b = a % b;
 a = temp;
 }
 printf("%d", a);
 return 0; }
35. Least Common Multiple (LCM)
#include <stdio.h>
int main() {
 int a, b, x, y, temp, gcd, lcm;
 scanf("%d %d", &a, &b);
 x = a;
 y = b;
 while(y != 0)
 {
 temp = y;
 y = x % y;
 x = temp;
 }
 gcd = x;
 if(a == 0 || b == 0)
 lcm = 0;
 else
 lcm = (a / gcd) * b;
 if(lcm < 0)
 lcm = -lcm;
 printf("%d", lcm);
 return 0; }