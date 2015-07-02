#include <stdio.h>

//inline
unsigned long long scan()
{
    unsigned long long z=0;
    char c;
    do{
    	c=getchar_unlocked();
    } while(c<'0');

    for(;c>='0';c=getchar_unlocked())
    	z = (z<<3) + (z<<1) + (c&15);

    return z;
}

//inline 
void put_uint(unsigned long long n)
{
	unsigned short stack[32];
	int top = 0;
	do{
	    stack[top++] = n % 10 + '0';
	    n /= 10;
	} while(n != 0);

  	while(top > 0)
		putchar_unlocked(stack[--top]);

  	putchar_unlocked('\n');

}

//inline 
int dgdum(unsigned long long n)
{
	int sum = 0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main() {

	int tc;
	unsigned long long n;
	scanf("%d",&tc);

	while(tc--)
	{   
		int ok = 0;
		n=scan();
		//int dg = dgdum(n);
		put_uint(n);
	}

	return 0;
}
