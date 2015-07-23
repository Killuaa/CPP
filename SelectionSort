void SelectionSort(int* a,int n)
{
  int i=0,temp=0,j;
  int min;
  for(i;i<n;i++)
  {
    j=i;
    for(min=j;j<n;j++)
    {
      if(*(a+min)>*(a+j))
      min=j;
    }
    temp=*(a+min);
    *(a+min)=*(a+i);
    *(a+i)=temp;
  }
}
