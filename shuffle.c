#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&A[i]);
        }
        int even=0, odd=0;
        int answer;
        for (int i = 0; i < n; i++)
        {
            if (A[i]%2==0)
            {
                even += 1;
            }
            else{
                odd += 1;
            }
        }
        if (n%2==0 && even==odd)
        {
            answer = n;
        }
        
        else if (n%2==1 && even>odd)
        {
            answer = 2*odd + (n- 2*odd +1)/2;
        }
        else if (n%2==1 && odd>even)
        {
            answer = 2*even + (n- 2*even -1)/2;
        }
        else if (n%2==0 && even>odd)
        {
            answer = 2*odd + (n- 2*odd)/2;
        }
        else if (n%2==0 && odd>even)
        {
            answer = 2*even + (n- 2*even)/2;
        }
        printf("%d\n",answer);
    }
    return 0;
}