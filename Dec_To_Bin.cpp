void DTB(int n)
{
  int temp=0;
  for(int i=0;i<8;i++)
  {
    temp=n;
    temp=temp&(0x80>>i);
    if(temp!=0)
      temp=1;
    cout<<temp;

  }
}