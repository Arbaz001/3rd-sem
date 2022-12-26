                                                          HACKER RANK Assignment no. 1
   
 Q1. https://www.hackerrank.com/challenges/cpp-hello-world/problem?isFullScreen=true.
ans-
             #include <iostream>
             using namespace std;
             int main() 
            {
              printf("Hello, World!");
              return 0;
            }

Q2. https://www.hackerrank.com/challenges/cpp-input-and-output/problem?isFullScreen=true.
 ans-
        #include <iostream>
        using namespace std;
        int main() 
      {
       int a,b,c;
       cin>>a>>b>>c;
       cout<<a+b+c;
       return 0;
      }


Q3. https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true.
ans-    
      #include <iostream>
      using namespace std;
     int main()
     {
      int a;
      long b;
      char d;
      float e;
      double f;
      scanf("%d %ld %c %f %lf", &a, &b, &d, &e, &f);
      printf("%d\n",a);
      printf("%ld\n",b);
      printf("%c\n",d);
      printf("%f\n",e);
      printf("%lf\n",f); 
      return 0;
     }

  Q4. https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true.
  
ans-
        #include <iostream>
        using namespace std;

        int main() {
        int num1,num2;
        cin >> num1 >> num2;
        string Arr1[9] = {"one","two","three","four","five","six","seven","eight","nine"};
        for(int i =num1; i <= num2;i++)
       {
       if(i <= 9)
       {
       cout << Arr1[i-1] << endl;
       }
       else
       {
       if(i%2 ==0)
       {
       cout << "even" << endl;
        }
       else
        {
        cout << "odd" << endl;
       }
       }
       }
       return 0;
       }

Q5. https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true.
ans 
   
     #include <iostream>

     using namespace std;


     int main()
   {
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
   {
        cin >> array[i];
    }

    for(int i = n - 1; i >= 0; i--)
   {
        cin >> array[i];
        cout << array[i] << " ";
    } 
    return 0;
   }


Q6. https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true.
ans 
      
 #include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int data[]={a,b,c,d};
    int max = data[0];
    for(int i=1;i<=4;i++){

        if(max<data[i])
        max=data[i];
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

Q7. https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true.
ans 
    #include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a, b;
    cin >> a >> b;
    
    cout << a.length() << ' ' << b.length() << endl;
    
    cout << a + b << endl;
    
    swap( a[0], b[0] );
    cout << a << ' ' <<  b << endl;
  
    return 0;
}
 
Q8. https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true.
 ans-
   
      #include <iostream>
using namespace std;
void update(int *a,int *b) {
        
int i,j;
i=*a+*b;
j=abs(*a-*b);
*a=i;
*b=j;
 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
