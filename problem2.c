int fun(char *str)
{
  char ch,ch1,sstr[100];
  int cur=0,count,i;
  ch=str[0];
  for(i=0;ch!='\0';i++)
  {
    ch=str[i];
    if(ch==')')
    {
      ch1=sstr[cur];
      sstr[cur]='\0';
      cur--;
      count=0;
      while(ch1!='(')
      {
        count++;
        ch1=sstr[cur];
        sstr[cur]='\0';
        cur--;
      }
      if(count<=1)
      {
        return 1;
      }
    }
    else
    {
      sstr[cur]=ch;
      cur++;
    }
  }
  return 0;
}
