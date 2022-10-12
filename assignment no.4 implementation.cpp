Q1.grading students
       
       
       #include <bits/stdc++.h>
using namespace std;

void solution() {
     int n, x;
     cin>>n;
     for(int i=0; i<n; i++){
        cin>>x;
        if(x>=38 and x%5>=3){
            while(x%5!=0){
               x++;
            }
        }
        cout<<x<<endl;
     }
}

int main () {
    solution();
    return 0;
}



  Q2.breaking the records
  #include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    int a = (int)1e9;
    int b = -1000;

    int s = 0, r = 0;

    for (int i = 0; i < n; i++) {
        int x;

        scanf("%d", &x);

        if (x < a) {
            r++;
            a = x;
        }

        if (x > b) {
            s++;
            b = x;
        }
    }

    cout << s -  1<< ' ' << r - 1 << endl;

    return 0;
}




    Q3.APPLE AND ORANGE
    
    #include <bits/stdc++.h>
using namespace std;
int main() {
    int s, t, a, b, n, m, d, ans1=0, ans2=0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i=0;i<m; i++) {
        cin>>d;
        d = a+d;
        if(d>=s && d<=t)
            ans1++;
    }
    for(int i=0;i<n; i++) {
        cin>>d;
        d = b+d;
        if(d>=s && d<=t)
            ans2++;
    }
    cout << ans1 << endl;
    cout << ans2 << endl; 
    return 0;
}



Q4.kangaroo

#include <bits/stdc++.h>
using namespace std;


int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    bool flag = 0;
    for(int i=0;i<10000;i++){
        x1+=v1;//x1=x1+v1;
        x2+=v2;//x2=x2+v2;
        if(x1==x2){
            flag =1;
        }
    }
    if(flag == 1) cout<<"YES";
    else  cout<<"NO";
    return 0;
}



  Q5.Divisible Sum Pairs
  
  #include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    int count = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    for(int i =0 ; i < n -1 ; i++){
        for(int j=i+1 ; j < n ; j++){
            if( (a[i]+a[j])%k ==0){
                count++;
            }
        }
    }
    
    cout << count;
    return 0;
}



    Q6.Append and delete
      
      #include <bits/stdc++.h>

using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;
    
    int i = 0, j = 0;
      for (; i < (int)s.size() && j < (int)t.size(); ++i,++j) {
        if (s[i] != t[j])
            break;
    }
    
    int need = ((int)s.size() - i) + ((int)t.size() - j);
      if ((need <= k && (k-need) % 2 == 0) || k >= (int)s.size() + (int)      t.size()) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    
    return 0;
}



























































































































































