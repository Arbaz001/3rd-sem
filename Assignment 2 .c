       HACKER RANK ASSIGNMENT 2 IN C LANGUGE.
         
         
         1. https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true
ans:
     #include <stdio.h>
    int main(){
    printf("Hello, World!\nWelcome to C programming.");
    return 0;
    }
           

         2. https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true

ans:  
      #include <stdio.h>
#include <string.h>


int main() 
{
    char ch,s[50],sen[100];
    scanf("%c\n",&ch);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
       
    return 0;
}

   3. https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

ans:

    #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
     int a,b;
     float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f",c+d,c-d);
    return 0;
}

4. https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true

ans:
      #include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d){

    if(a>b && a>c && a>d) return a;
    else if(b>c && b>d) return b;
    else if(c>d) return c;
    else return d;
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
5. https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
ans: #include <stdio.h>
int main() {
  int a, b;
    scanf("%d\n%d", &a, &b);
    
    for (int i=a; i<b+1; i++) {
    switch(i) {
    case 1: printf("one\n"); break;
    case 2: printf("two\n"); break;
    case 3: printf("three\n"); break;
    case 4: printf("four\n"); break;
    case 5: printf("five\n"); break;
    case 6: printf("six\n"); break;
    case 7: printf("seven\n"); break;
    case 8: printf("eight\n"); break;
    case 9: printf("nine\n"); break;
    default:
    if (i % 2)
    printf("odd\n");
    else
    printf("even\n");
}
}

    return 0;
}
6. https://www.hackerrank.com/challenges/conditional-statements-in-c/problem?isFullScreen=true
ans:
     #include <stdio.h>

int main()
{
    int n; 
    scanf("%d",&n);
    if (n == 1) {
        printf("one\n");
    } else if (n == 2) {
        printf("two\n");
    } else if (n == 3) {
        printf("three\n");
    } else if (n == 4) {
        printf("four\n");
    } else if (n == 5) {
        printf("five\n");
    } else if (n == 6) {
        printf("six\n");
    } else if (n == 7) {
        printf("seven\n");
    } else if (n == 8) {
        printf("eight\n");
    } else if (n == 9) {
        printf("nine\n");
    } else {
        printf("Greater than 9\n");
    }
     
    
    return 0;
}

7. https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
ans:
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,sum;
    scanf("%d", &n);
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum);
    
    return 0;
}
8. https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
ans:
     #include <stdio.h>

void update(int *a,int *b) {
    int x,y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b =abs(y);// Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

9. https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
ans:  
     #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0 ; i<n ; i++)
    {
    scanf("%d",&ar[i]);
    sum = sum+ar[i];
    }  
    printf("%d",sum);
    return 0;
}
