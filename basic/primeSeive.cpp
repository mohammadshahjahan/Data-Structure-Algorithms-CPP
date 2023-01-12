#include <iostream>
using namespace std;
void seiveprime(int n){
    int prime[100]= {0};
    for (int i = 2; i <=n; i++)
    {
        if (prime[i]==0)
        {
            for (int j = i*i; j <=n; j+=i)
            {
                /* code */
                prime[j]=1;
            }
            
        }
    }
    for (int i = 2; i <=n; i++)
    {
        /* code */
        if(prime[i]==0)
        cout<<i<<" ";
    }
    
}
int main(){
    int n;
    cin>>n;
    seiveprime(n);
    return 0;
}