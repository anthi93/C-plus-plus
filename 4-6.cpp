 #include <stdio.h>

int main(){

		int a[10]={5, 8, 9, 4, 2, 1, 7, 5, 6, 2}, i,m=0, c=0;
		
		for(i=0;i<10;i++)
		{
			if(a[i]%2!=0) m++;
			if(a[i]>=5) c++;
		}
	printf("%d %d\n", m,c);
	
	return 0;
}

