#include<stdio.h>

void main()
{
	int in,out,bsize, n,bucket=0;
	printf("Enter bucket size: \n");
	scanf("%d",&bsize);
	printf("Enter number of inputs: \n");
	scanf("%d",&n);
	printf("Enter packet outgoing rate: \n");
	scanf("%d",&out);
	while(n!=0)
	{
		printf("\nEnter incoming packet size: \n");
		scanf("%d",&in);
		if(in <=(bsize-bucket))
		{
			bucket+=in;
			printf("\nBucket status:%d out of %d",bucket, bsize);
		}
		else
		{
			printf("\nDropped packets :%d\n",in-(bsize-bucket));
			bucket=bsize;
			printf("\nBucket status:%d  out of %d",bucket,bsize);
		}
		bucket=bucket-out;
		printf("\n After outgoing, bucket status : %d out of %d",bucket,bsize);
		n--;
	}
}

