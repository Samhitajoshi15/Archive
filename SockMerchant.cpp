//See problem from the link below
//https://www.hackerrank.com/challenges/sock-merchant/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

//Solution to the HackerRank problem "Sock Merchant" by Samhita Joshi
//The following program is producing wrong outuput in one (Sample Test Case1) of the cases. Will someone please explain me what this code is trying to do?


#include<iostream>
using namespace std;

int i,val=0,j,n;
bool visited =false; 
int sockMerchant(int n, int ar[])
{
   int p[n]={0};
    int pair[n]={0};
    for(i=0;i<n;i++)
   {
     val=ar[i];

     if(visited)
        continue;
        
    else{
          
            for(j=i;j<n;j++)
            {
                if(val==ar[j])
                {
                    visited=true;
                    p[i]=p[i]+1;    
                   
                }
                else
                visited= false;
                
            }
        }
   }
  int sum=0;

   for(i=0;i<n;i++)
   {
       pair[i]=p[i]/2;
       sum+=pair[i];
   }
    return sum;
}
int main()
{
    cin>>n;
    int ar[n];

    if((n>=1)&&(n<=100))
    {
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
    }

    cout<<sockMerchant(n,ar);
    return 0;
}
