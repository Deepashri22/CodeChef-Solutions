#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	char a[5],b[5];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",a,b);
        for(i=0;i<5;i++)
        {
            if(a[i]==b[i])  printf("G");
            else printf("B");
        }
        printf("\n");
    }
}
