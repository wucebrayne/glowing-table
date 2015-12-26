#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i, j;
    while ( scanf ("%d %d", &i, &j) != EOF)
    {
        int maxNum=0;
        printf("%d %d ", i, j);
        if(j<i) swap(i,j);
        for(int sub = i; sub<=j; sub++)
        {
            unsigned int temp =sub;
            int numCyc=1;
            while(temp!=1)
            {
                ++numCyc;
                if (temp%2==1)
                    temp=3*temp+1;
                else
                    temp/=2;
            }
            if(maxNum<numCyc)
                maxNum=numCyc;
        }
        printf("%d\n", maxNum);
    }
    return 0;
}

