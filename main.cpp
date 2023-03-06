#include <stdio.h>

main()
{
	int mas[100][100];
	int n,m;
	printf("Vvedite kolichestvo stolbtsov\n");
	scanf("%d",&n);
	printf("Vvedite kolichestvo strok\n");
	scanf("%d",&m);
	printf("Vvedite elementy massiva:\n");
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%i",&mas[j][i]);
		}
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\n");
	
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<m;j++)
		{
			int a=mas[i][j];
			mas[i][j]=mas[j][i];
			mas[j][i]=a;
		}
	}
	
	for(int j=0;j<m;j++)
	{
		for(int i=0;i<n;i++)
		{
			printf("%3i",mas[j][i]);
		}
		printf("\n\n");
	}
	
}


