#include<bits/stdc++.h>
using namespace std;


//EUCLID OPTIMIZED 
int gcd(int a,int b)
{
    if (b ==0)
        return a;
    else
       b = gcd(b,a%b);
    
    
}
int main()
{
    int x = 100 ,y =200;
    gcd(x,y);
    cout<<gcd(x,y);
    return 0; 
}
//EUCLID METHOD
// int gcd(int a, int b)
// {
//     while (a!=b)    
//     {
//         if (a>b)
//         {
//             a = a - b;

//         }
//         else
//         {
//             b = b-a;
//         }
        
        
//     }
//     return a;
// }

// int main()

// {
//     int x = 22,y = 11;
//     gcd(x,y);
//     cout<<gcd(x,y);
//     return 0;
// }


//GCD NAIVE METHOD WITH COMPLEXITY O(MIN(X,Y))
// int gcd(int x,int y)
// {
//     int res = min(x,y);
//     while (res > 0)
//     {
//         if(x % res == 0 && y % res == 0)
//         {
//             break;
//         }
//         res--;
//     }
//     return res;
    
// }
// int main()
// {
//     int a =10,b=15;
//     gcd(a,b);
//     cout<<gcd(a,b);
//     return 0;

// }


//GCD NAIVE METHOD
//     int n1,n2,i,gcd;
//     cout<<"Enter two integers :"<<endl;
//     cin>>n1>>n2;
//     for(i=1;i<=n1&& i<=n2;i++)
//     {
//         if(n1%i==0 && n2%i==0)
//         {
//             gcd=i;
//         }
//     }
//     cout<<"GCD of "<<n1<<" and "<<n2<<" is "<< gcd;
// }