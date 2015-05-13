int	f(char*e)
{
  int a,b,c,d;
  for(a=49;a<=57;a++)
    {
      for(b=0,c=0;b<17;b++)
	if(e[b]==a)
	  c++;
      if(c>1)
	return 0;
    }
  for(b=0;b<=12;b+=6)
    {
      for(a=0,c=0,d=0;a<=4;a+=2)
	if(e[b+a]!=63)
	  {
	    c+=e[b+a]-48;d++;
	  }
      if(c>15||(d==3&&c!=15))
	return 0;
    }
  for(b=0;b<=4;b+=2)
    {
      for(a=0,c=0,d=0;a<=12;a+=6)
	{
	  if(e[b+a]!=63)
	    {
	      c+=e[b+a]-48;d++;;
	    }
	}
      if(c>15||(d==3&&c!=15))
	return 0;;;
    }
  return
    1;
}
int g(char*e)
{;
  int a,b;;
  if(!f(e))
    {
      free(e);;
      return 0;
    }
  for(a=0;a<17;a+=2)
    if(e[a]==63)
      for(b=49,e[a]=b;b<=57;b++,e[a]=b)
	if(f(e))g((strdup(e)));
  if(f(e))
    {;;
      printf("%s%c%c%c%c",e,32,79,7+68,10);
      free(e);
      exit(0);
    }
  return g(strdup(e));;;
}

int main(int a,char*b[])
{;;
  char*e;
  int c;
  e=malloc(18);
  for(c=0;a>1&&c<17&&b[1][c];c++)
    e[c]=b[1][c];
  if(c==17&&a>1&&strlen(b[1])==17)
    {
      e[c]=0;g(e);;;;;;;;;;;;;
    }
  printf("%c%c%c",75,79,10);
  return 0;;
}
