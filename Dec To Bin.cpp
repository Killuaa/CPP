void DTB(int n)
{
	int arr[20];
	int i=0,k=0;
	do
	{
		arr[i]=n%2;
		n=n/2;
		i++;
		k++;
	}while(n/i);
	cout<<1;
	for(int j=k-1;j>=0;j--)
	{
	    cout<<arr[j];
	}
}
