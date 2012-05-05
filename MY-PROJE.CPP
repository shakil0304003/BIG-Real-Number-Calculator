#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>
getmousepos(int *button,int *x,int *y);
restrictmouseptr(int x1,int y1,int x2, int y2);
hidemouseptr();
showmouseptr();
union REGS i,o;
class shakil
{int button,x,y,n;
 long int i,j,x1[4][5],y1[4][5],hate,past,opera,l,m,a,b,c,FIXED;
 char sa[500],sin[500],s;
 public:
 void first();
 void mixed();
 void show();
 void result();
 void sum();
 void sib();
 void multiplication();
 void divisor();
 void mod();
 void sqr();
 void factorial();
};
void shakil::first()
{ int xp,yp;
   //  strcpy(sa,".3"); n=2; // factorial();
    // strcpy(sin,".3"); past =2 ; multiplication();

  hidemouseptr();
 setcolor(RED);
 rectangle(10,10,620,450);
 rectangle(11,11,619,449);
 rectangle(20,20,610,250);
 rectangle(608,409,616,439);

 yp=50;xp=120;
 for(i=0;i<4;i++)
 for(j=0;j<5;j++)
  {x1[i][j]=25+xp*j;
   y1[i][j]=259+yp*i; }
   for(i=0;i<4;i++)
   for(j=0;j<5;j++)
   rectangle(x1[i][j],y1[i][j],x1[i][j]+100,y1[i][j]+30);
   settextstyle(1,0,3);
   outtextxy(65,260,"7");
   outtextxy(185,260,"8");
   outtextxy(305,260,"9");
   outtextxy(425,260,"X");
   outtextxy(545,259,"/");
   outtextxy(65,310,"4");
   outtextxy(185,310,"5");
   outtextxy(611,410,"!");
   outtextxy(305,310,"6");
   outtextxy(425,310,"+");
   outtextxy(545,310,"-");
   outtextxy(65,360,"1");
   outtextxy(185,360,"2");
   outtextxy(305,360,"3");
   outtextxy(425,360,"%");
   outtextxy(530,360,"1/2");
   outtextxy(65,410,"0");
   outtextxy(185,410,".");
   outtextxy(305,410,"=");
   outtextxy(415,410,"ON");
   outtextxy(535,410,"OFF");
   showmouseptr();

}
void shakil::mixed()
{  n=0;
   FIXED=0;

   opera=0;
   first();
   strcpy(sa," ");
  while(1)
  {
   getmousepos(&button,&x,&y);
   if((button & 1)==1)
   {
     if(x>=x1[3][4]&&x<=x1[3][4]+100)
     if(y>=y1[3][4]&&y<=y1[3][4]+30)
     break;
     if(x>=x1[3][3]&&x<=x1[3][3]+100)
     if(y>=y1[3][3]&&y<=y1[3][3]+30)
     {n=0;past=0;strcpy(sa," ");
	strcpy(sin," ");
     }
     if(x>=x1[0][0]&&x<=x1[0][0]+100)
     if(y>=y1[0][0]&&y<=y1[0][0]+30)
     {sa[n]='7';n++;}
     if(x>=x1[0][1]&&x<=x1[0][1]+100)
     if(y>=y1[0][1]&&y<=y1[0][1]+30)
     {sa[n]='8';n++;}
     if(x>=x1[0][2]&&x<=x1[0][2]+100)
     if(y>=y1[0][2]&&y<=y1[0][2]+30)
     {sa[n]='9';n++;}
     if(x>=x1[1][0]&&x<=x1[1][0]+100)
     if(y>=y1[1][0]&&y<=y1[1][0]+30)
     {sa[n]='4';n++;}
     if(x>=x1[1][1]&&x<=x1[1][1]+100)
     if(y>=y1[1][1]&&y<=y1[1][1]+30)
     {sa[n]='5';n++;}
     if(x>=x1[1][2]&&x<=x1[1][2]+100)
     if(y>=y1[1][2]&&y<=y1[1][2]+30)
     {sa[n]='6';n++;}

     if(x>=x1[2][0]&&x<=x1[2][0]+100)
     if(y>=y1[2][0]&&y<=y1[2][0]+30)
     {sa[n]='1';n++;}
     if(x>=x1[2][1]&&x<=x1[2][1]+100)
     if(y>=y1[2][1]&&y<=y1[2][1]+30)
     {sa[n]='2';n++;}
     if(x>=x1[2][2]&&x<=x1[2][2]+100)
     if(y>=y1[2][2]&&y<=y1[2][2]+30)
     {sa[n]='3';n++;}
     if(x>=x1[3][0]&&x<=x1[3][0]+100)
     if(y>=y1[3][0]&&y<=y1[3][0]+30)
     {sa[n]='0';n++;}
     if(x>=x1[3][1]&&x<=x1[3][1]+100)
     if(y>=y1[3][1]&&y<=y1[3][1]+30)
     {  int hp=0;
	for(i=0;i<n;i++)
	if(sa[i]=='.')
	{hp=4;break;}
	if(hp==0)
	{sa[n]='.';n++;}
	}
     if(x>=x1[3][2]&&x<=x1[3][2]+100)
     if(y>=y1[3][2]&&y<=y1[3][2]+30)
     {result();   }
     if(x>=x1[2][4]&&x<=x1[2][4]+100)
    if(y>=y1[2][4]&&y<=y1[2][4]+30)
    { sqr(); }
    if(x>=608&&x<=616)
    if(y>=409&&y<=439)
    {factorial();}
     cleardevice();
     first();
     show();
     if(x>=x1[1][3]&&x<=x1[1][3]+100)
     if(y>=y1[1][3]&&y<=y1[1][3]+30)
     {if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
       opera=1;
       strcpy(sin,sa);
      strcpy(sa," ");
      past=n;
      n=0;
     }
     if(x>=x1[1][4]&&x<=x1[1][4]+100)
     if(y>=y1[1][4]&&y<=y1[1][4]+30)
     {if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=2;
       strcpy(sin,sa);
      strcpy(sa," ");
      past=n;
      n=0;
     }
       if(x>=x1[0][3]&&x<=x1[0][3]+100)
       if(y>=y1[0][3]&&y<=y1[0][3]+30)
       {if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=3;
       strcpy(sin,sa);
       strcpy(sa," ");
       past=n;
       n=0;
     }
     if(x>=x1[0][4]&&x<=x1[0][4]+100)
       if(y>=y1[0][4]&&y<=y1[0][4]+30)
       {if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=4;
       strcpy(sin,sa);
       strcpy(sa," ");
       past=n;
       n=0;
     }
     if(x>=x1[2][3]&&x<=x1[2][3]+100)
     if(y>=y1[2][3]&&y<=y1[2][3]+30)
     {if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=5;
       strcpy(sin,sa);
       strcpy(sa," ");
       past=n;
       n=0;
     }


    }
    if(!kbhit())
    {  }
 else
 {s=getch();
  int po=0;
  switch(s)
  {case 'n': n=0;past=0;strcpy(sa," ");
	     strcpy(sin," ");
	     break;
   case 'f':po=4;
	    break;
   case '0':sa[n]='0'; n++;
	    break;
   case '1':sa[n]='1';n++;
	    break;
   case '2':sa[n]='2';n++;
	    break;
   case '3':sa[n]='3';n++;
	    break;
   case '4':sa[n]='4';n++;
	    break;
   case '5':sa[n]='5';n++;
	    break;
   case '6':sa[n]='6';n++;
	    break;
   case '7':sa[n]='7';n++;
	    break;
   case '8':sa[n]='8'; n++;
	    break;
   case '9':sa[n]='9'; n++;
	    break;
   case '.': int hp=0;
	for(i=0;i<n;i++)
	if(sa[i]=='.')
	{hp=4;break;}
	if(hp==0)
	{sa[n]='.';n++;}
	break;
  case '=':result();
	   break;
  case '^':sqr();
	    break;
  case '!':factorial();
	    break;
  }
    cleardevice();
     first();
     show();
   if(po==4)
   break;
   switch(s)
   {case '+':if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
       opera=1;
       strcpy(sin,sa);
      strcpy(sa," ");
      past=n;
      n=0;
	     break;
    case '-':if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=2;
       strcpy(sin,sa);
      strcpy(sa," ");
      past=n;
      n=0;
	     break;
    case '*':if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=3;
       strcpy(sin,sa);
       strcpy(sa," ");
       past=n;
       n=0;
	     break;
    case '/':if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=4;
       strcpy(sin,sa);
       strcpy(sa," ");
       past=n;
       n=0;
	     break;
   case '%': if(opera!=0)
       { cleardevice();
	 result();
	first();
	show();}
	opera=5;
       strcpy(sin,sa);
       strcpy(sa," ");
       past=n;
       n=0;
	     break;

   }
    }
    delay(100);
   }
}
void shakil::show()
{ setcolor(BLACK);
  rectangle(19,19,609,249);
  setfillstyle(SOLID_FILL,BLACK);
  floodfill(30,30,BLACK);
  settextstyle(5,0,1);
  if(FIXED==5)
 {if(sa[0]=='-')
  {for(i=1;i<n;i++)
  sa[i-1]=sa[i];
  n=n-1;}
  else if(sa[0]!='-')
  {for(i=n-1;i>=0;i--)
   sa[i+1]=sa[i];
   sa[0]='-';
   n++;
 }}
 FIXED=0;
 int p;
 p=strlen(sa);
 if(p>n)
 for(i=n;i<p;i++)
 sa[i]=' ';
 char temp[45];
 a=0;m=1;           setcolor(7);
 while(a<p)
 {for(i=a,j=0;i<p,j<45;i++,j++)
  {temp[j]=sa[i];
   if(i==p-1)
   break;
   if(j==44)
   break;}
  a=i+1;
  if(j<44)
  for(i=j+1;i<45;i++)
  temp[i]=' ';

 outtextxy(20,20*m,temp);
 m++; }

}
void shakil::result()
{  FIXED=0;
  if(opera==1&&sin[0]=='-')
  {FIXED=5;opera=2;
   for(i=1;i<past;i++)
   sin[i-1]=sin[i];
   past=past-1;
  }
  if(opera==2&&sin[0]=='-')
  {FIXED=5;opera=1;
   for(i=1;i<past;i++)
   sin[i-1]=sin[i];
   past=past-1;
  }
  long int hg=0;
 switch(opera)
 {case 1:sum();
	 break;
  case 2:sib();
	 break;
  case 3:multiplication();
	 break;
  case 4: for(i=0;i<n;i++)
	 if(sa[i]!='0'&&sa[i]!='.')
	 {hg=4;break;}
	 if(hg==4)
	 divisor();
	 else
	 {strcpy(sa,"IMPOSSIBLE PRESS ON");
	  n=19;
	 }
	 break;
  case 5: for(i=0;i<n;i++)
	 if(sa[i]!='0'&&sa[i]!='.')
	 {hg=4;break;}
	 if(hg==4)
	 mod();
	 else
	 {strcpy(sa,"IMPOSSIBLE PRESS ON");
	  n=19;
	 }
	 break;
 }
 opera=0;

}
void shakil::sum()
{  int vv=0,h;
   l=past;
  for(i=0;i<past;i++)
  if(sin[i]=='.')
  {l=i;break;}
  m=n;
  for(i=0;i<n;i++)
  if(sa[i]=='.')
  {m=i;break;}
   if(l<past||m<n)
   { vv=5;
    for(i=l;i<past;i++)
    sin[i]=sin[i+1];
    if(l<past)
     past=past-1;
    for(i=m;i<n;i++)
    sa[i]=sa[i+1];
    if(m<n)
    n=n-1;
    a=past-l-1;
    b=n-m-1;
    if(a>b)
    c=a;
    if(a<=b)
    c=b;



    if(c>a)
    {for(i=past;i<past+(c-a);i++)
     sin[i]='0';
     past=past+(c-a);
     }
    if(c>b)
    {for(j=n;j<n+(c-b);j++)
    sa[j]='0';
    n=n+c-b;
    }
    }
    if(past>n)
    c=past;
    if(past<=n)
    c=n;
    if(past<c)
    {for(i=past-1;i>=0;i--)
     sin[i+(c-past)]=sin[i];
     for(i=0;i<c-past;i++)
     sin[i]='0';
    }
    if(n<c)
    {for(i=n-1;i>=0;i--)
     sa[i+(c-n)]=sa[i];
     for(i=0;i<c-n;i++)
     sa[i]='0';
     }
     hate=0;
     for(i=c-1;i>=0;i--)
     {j=(sa[i]-48);
      b=(sin[i]-48);
      j=j+b+hate;
      sa[i]=j%10+48;
      hate=j/10;
     }
     if(l>m)
     b=l;
     if(l<=m)
     b=m;
     if(vv==5)
     {for(i=c-1;i>=b;i--)
     sa[i+1]=sa[i];
     sa[b]='.'; c=c+1;  }
     if(hate>0)
     {for(i=c-1;i>=0;i--)
      sa[i+1]=sa[i];
      sa[0]=hate+48;
      c++;
     }

     n=c; h=n-1;
     for(i=0;i<n-1;i++)
       if(sa[i]!='0')
       {h=i;break;}
       if(h!=0)
       {for(i=h;i<n;i++)
	sa[i-h]=sa[i];
	n=n-h;
       }


}
void shakil::sib()
{ int vv=0,h;
  l=past;
  for(i=0;i<past;i++)
  if(sin[i]=='.')
  {l=i;break;}
  m=n;
  for(i=0;i<n;i++)
  if(sa[i]=='.')
  {m=i;break;}
   if(l<past||m<n)
   { vv=5;
    for(i=l;i<past;i++)
    sin[i]=sin[i+1];
    if(l<past)
     past=past-1;
    for(i=m;i<n;i++)
    sa[i]=sa[i+1];
    if(m<n)
    n=n-1;
    a=past-l-1;
    b=n-m-1;
    if(a>b)
    c=a;
    if(a<=b)
    c=b;



    if(c>a)
    {for(i=past;i<past+(c-a);i++)
     sin[i]='0';
     past=past+(c-a);
     }
    if(c>b)
    {for(j=n;j<n+(c-b);j++)
    sa[j]='0';
    n=n+c-b;
    }
    }
    if(past>n)
    c=past;
    if(past<=n)
    c=n;
    if(past<c)
    {for(i=past-1;i>=0;i--)
     sin[i+(c-past)]=sin[i];
     for(i=0;i<c-past;i++)
     sin[i]='0';
    }
    if(n<c)
    {for(i=n-1;i>=0;i--)
     sa[i+(c-n)]=sa[i];
     for(i=0;i<c-n;i++)
     sa[i]='0';
     }
     a=0;
     for(i=0;i<c;i++)
     {if(sa[i]>sin[i])
      {a=5;break;}
      if(sa[i]<sin[i])
      {a=0;break;} }

     hate=0;
     if(a==0)
     for(i=c-1;i>=0;i--)
     {j=(sa[i]-48);
      b=(sin[i]-48);
      j=b-j-hate;
      if(j<0)
      {if(i>0)
       {j=j+10;hate=1;}
       else
       {j=-j;hate=1;}
       }
      else
      hate=0;
      sa[i]=j%10+48;

     }
     if(a==5)
     {for(i=c-1;i>=0;i--)
     {j=(sa[i]-48);
      b=(sin[i]-48);
      j=j-b-hate;
      if(j<0)
      {if(i>0)
       {j=j+10;hate=1;}
       else
       {j=-j;hate=1;}
       }
      else
      hate=0;
      sa[i]=j%10+48;

     }
     hate=1;}
     if(l>m)
     b=l;
     if(l<=m)
     b=m;
     if(vv==5)
     {for(i=c-1;i>=b;i--)
     sa[i+1]=sa[i];
     sa[b]='.'; c=c+1;  }
     if(hate>0)
     {for(i=c-1;i>=0;i--)
      sa[i+1]=sa[i];
      sa[0]='-';
      c++;
     }

     n=c;
     h=n-1;
     for(i=0;i<n-1;i++)
       if(sa[i]!='0')
       {h=i;break;}
       if(h!=0)
       {for(i=h;i<n;i++)
	sa[i-h]=sa[i];
	n=n-h;
       }



}
void shakil::multiplication()
{ int vv=0,h;
  if(sin[0]=='-')
  {vv=5;
   for(i=1;i<past;i++)
   sin[i-1]=sin[i];
   past=past-1;}
  l=past;
  for(i=0;i<past;i++)
  if(sin[i]=='.')
  {l=i;break;}
  m=n;
  for(i=0;i<n;i++)
  if(sa[i]=='.')
  {m=i;break;}
  for(i=l;i<past;i++)
  sin[i]=sin[i+1];
  if(l<past)
  past=past-1;
  for(i=m;i<n;i++)
  sa[i]=sa[i+1];
  if(m<n)
  n=n-1;
  l=past-l;
  m=n-m;
  l=l+m;
   char temp[500];
   for(i=past-1,j=0;i>=0,j<past;i--,j++)
   {temp[j]=sin[i];          }
   for(i=0;i<past+n;i++)
   sin[i]='0';
   for(i=n-1,c=0;i>=0,c<n;i--,c++)
   { hate=0;a=c;
     for(j=0;j<past;j++)
     {b=(sa[i]-48);
      m=(temp[j]-48);
      b=b*m+hate;
      b=b+(sin[a]-48);
      sin[a]=(b%10)+48;
      hate=b/10;
      a++;
    }
     if(hate>0)
     {sin[a]=hate+48;a++;}

      }
     for(i=a-1,j=0;i>=0,j<a;i--,j++)
     sa[j]=sin[i];
     if(l>0)
     {if(a>=l)
      {for(i=a-1;i>=a-l;i--)
      sa[i+1]=sa[i];
      sa[a-l]='.'; a++;  }
      else
      { for(i=a-1,j=0;i>=0,j<a;i--,j++)
	sa[l-j]=sa[i];
	for(i=l-a;i>=0;i--)
	sa[i]='0';
	sa[0]='.';
	a=l+1;
      }
      }
      if(vv==5)
      {for(i=a-1;i>=0;i--)
       sa[i+1]=sa[i];
       sa[0]='-';a++;
      }
      n=a;    h=n-1;
      for(i=0;i<n-1;i++)
       if(sa[i]!='0')
       {h=i;break;}
       if(h!=0)
       {for(i=h;i<n;i++)
	sa[i-h]=sa[i];
	n=n-h;
       }


}
void shakil::divisor()
{l=n; long int ww=0;
 for(i=0;i<n;i++)
 if(sa[i]=='.')
 {l=i;break;      }
 if(sin[0]=='-')
   {ww=4;
    for(i=0;i<past;i++)
    sin[i]=sin[i+1];
    past--;
   }
  if(l<n)
  {for(i=l;i<n;i++)
   sa[i]=sa[i+1];
   n=n-1;
   if(sin[0]=='-')
   {ww=4;
    for(i=0;i<past;i++)
    sin[i]=sin[i+1];
    past--;
   }
   m=past; l=n-l;
   for(i=0;i<past;i++)
   if(sin[i]=='.')
   {m=i;break;}
   if(m<past)
   {if(m>l)
    {for(i=m;i<m+l;i++)
     sin[i]=sin[i+1];
     sin[m+l]='.';
    }
    if(m<=l)
    {for(i=m;i<past-1;i++)
     sin[i]=sin[i+1];
     for(i=past-1;i<past+l-m-1;i++)
     sin[i]='0';
     past=past-m+l-1;
    }

    }
    else
    {for(i=past;i<past+l;i++)
     sin[i]='0';
     past=past+l;
    }
}
 char temp[200]={"0000000000000000"},temp2[200]={"0000000000000"},re[500];
 int mp=0;
 a=0;temp[0]='0';
 for(i=0;i<n;i++)
 {temp[i]='0';
 }
 int tl=1,p;
 if(sin[0]=='.')
 {tl++;temp[n]=sin[1];re[a]='.';a++;mp=1;}
 else
 temp[n]=sin[0];

 do{ m=0;
     do
     { m++; temp2[0]='0';
      hate=0; l=0;
     for(i=n-1;i>=0;i--)
     {j=(sa[i]-48)*m+hate;;
     temp2[i+1]=j%10+48;
     hate=j/10;}
     if(hate>0)
     temp2[0]=hate+48;

     for(i=0;i<=n;i++)
     {if(temp[i]<temp2[i])
      {l=2;break; }
      if(temp[i]>temp2[i])
      {l=0;break;} }

     } while(l!=2);
	l=m-1;
	do{
	   re[a]=l%10+48;
	   l=l/10;
	   a++; }while(l<0);
      m=m-1;
      temp2[0]='0';hate=0;
      for(i=n-1;i>=0;i--)
     {j=(sa[i]-48)*m+hate;;
      temp2[i+1]=j%10+48;
     hate=j/10;}
     if(hate>0)
     temp2[0]=hate+48;
       hate=0;
       for(i=n;i>=0;i--)
       {p=temp2[i]-48;
	j=(temp[i]-48)-p-hate;
	hate=0;
	if(j<0)
	{j=j+10;hate=1;      }
	temp[i]=j%10+48;
	  }
       j=0;
       for(i=0;i<=n;i++)
       if(temp[i]>='1'&&temp[i]<='9')
       {j=8;break;}
       if(j==0&&tl>=past)
       break;

       for(i=0;i<n;i++)
       temp[i]=temp[i+1];

       if(tl<past)
       {if(sin[tl]!='.')
       temp[n]=sin[tl];
       else
       {tl++;temp[n]=sin[tl];re[a]='.';a++;mp=1;}
       tl++;}
       else
       {if(mp==1)
	temp[n]='0';
	else
	{re[a]='.';a++;mp=1;temp[n]='0';}
	tl++; }
       if(a>495)
       break;


       }while(1);
      strcpy(sa,re); n=a;j=n;
       for(i=0;i<n;i++)
       if(sa[i]!='0')
       {j=i;break;}
       if(j!=0)
       {for(i=j;i<n;i++)
	sa[i-j]=sa[i];
	n=n-j;
	if(n==0)
	{sa[0]='0';n=1;}
       }
      if(ww==4)
      {for(i=n;i>=1;i--)
       sa[i]=sa[i-1];
       sa[0]='-'; n++;
      }

}
void shakil::mod()
{ long int p,t,y,tl,ma=0;
   char temp[200],temp2[200];
   if(sin[0]=='-')
   {for(i=0;i<past;i++)
    sin[i]=sin[i+1];
    past--; ma=4;
   }
   t=n;y=past;
  for(i=0;i<n;i++)
   if(sa[i]=='.')
   {t=i;break;}
  for(i=0;i<past;i++)
  if(sin[i]=='.')
  {y=i;break;}
  for(i=0;i<t;i++)
 {temp[i]='0';
 }
 temp[t]=sin[0];
  tl=1;a=0;
 do{ m=0;
     do
     { m++; temp2[0]='0';
      hate=0; l=0;
     for(i=t-1;i>=0;i--)
     {j=(sa[i]-48)*m+hate;;
     temp2[i+1]=j%10+48;
     hate=j/10;}
     if(hate>0)
     temp2[0]=hate+48;

     for(i=0;i<=t;i++)
     {if(temp[i]<temp2[i])
      {l=2;break; }
      if(temp[i]>temp2[i])
      {l=0;break;} }

     } while(l!=2);
	l=m-1;
	do{l=l/10; }while(l<0);
      a++;m=m-1;
      temp2[0]='0';hate=0;
      for(i=t-1;i>=0;i--)
      {j=(sa[i]-48)*m+hate;;
       temp2[i+1]=j%10+48;
       hate=j/10;}
     if(hate>0)
     temp2[0]=hate+48;
       hate=0;
       for(i=t;i>=0;i--)
       {p=temp2[i]-48;
	j=(temp[i]-48)-p-hate;
	hate=0;
	if(j<0)
	{j=j+10;hate=1;      }
	temp[i]=j%10+48;
	  }

       if(tl<y)
       {for(i=0;i<t;i++)
       temp[i]=temp[i+1];
       temp[t]=sin[tl];
       tl++;
       }
       else
       break;  }while(1);
       strcpy(sa,temp);n=t+1;
       for(i=0;i<=t;i++)
       if(sa[i]!='0')
       {tl=i;break;}
       if(tl!=0)
       {for(i=tl;i<=t;i++)
	sa[i-tl]=sa[i];
	n=t-tl+1;
	if(n==0)
	{sa[0]='0';n=1;}
       }
       if(n!=1||sa[0]!='0')
       if(ma==4)
       {for(i=n;i>=1;i--)
	sa[i]=sa[i-1];
	sa[0]='-';
	n++;
       }
}
void shakil::sqr()
{   char re[500],te[500],te2[500];
    long int ds,d,p,r,f,k,h,mn,daso,ma=0;
    float re1;
    ds=0;
    if(sa[0]=='-')
    {for(i=0;i<n;i++)
     sa[i]=sa[i+1];
     ma=4;n--;
    }
    for(i=0;i<n;i++)
    if(sa[i]=='.')
    {n=i;break;}
    if(n<=2)
	{ds=3;
	 }
	if(n%2!=0)
	{for(i=n;i>=0;i--)
	 sa[i+1]=sa[i];
	 sa[0]='0';
	 n++;
	}
	b=(sa[0]-48)*10+sa[1]-48;
	c=sqrt(b);
	r=1;
	if(ds==3)
	{re1=sqrt(b);
	 re1=re1-c;
	 if(re1>=.5)
	 c++;
	 if(c>9)
	 {c=c%10;re[2]=c+48;c=1;r++;}
	}

	re[1]=c+48;re[0]='0';
	d=b-(c*c);
	te[1]=d%10+48;d=d/10;
	te[0]=d+48;p=1;
	if(n>2)
	{daso=0;
	sa[n]='0';sa[n+1]='0';
	n=n+2;
	for(i=2;i<n;i=i+2)
	{te[p+1]=sa[i];
	 te[p+2]=sa[i+1];p=p+2;

	 f=r+2;

	 if(p>f)
	 for(j=0,l=p-f;j<=f,l<=p;j++,l++)
	 te[j]=te[l];
	 p=f;
	 for(j=0;j<=f;j++)
	 te2[j]='0';
	 for(k=1;k<=9;k++)
	 {re[r+1]=k+48;hate=0;
	  for(l=r+1;l>=0;l--)
	  { if(l==r+1)
	    h=(re[l]-48)*k+hate;
	    else
	    h=((re[l]-48)*2)*k+hate;
	    te2[l+1]=h%10+48;hate=h/10;}
	  if(hate>0)
	  te2[0]=hate+48;
	  mn=0;
	  for(l=0;l<=r+2;l++)
	  {if(te2[l]>te[l])
	   {mn=4;break;  }
	   if(te2[l]<te[l])
	   break;
	  }
	  if(mn==4)
	  break;
	 }
	 if(mn==4)
	 {if(i+2<n)
	  {re[r+1]=k-1+48; r++;  }
	  else
	  {if(k>=6)
	   daso=4;
	   break;}
	   k--;
	  hate=0;
	  for(l=r;l>=0;l--)
	  { if(l==r)
	h=(re[l]-48)*k+hate;
	else
	h=((re[l]-48)*2)*k+hate;
	te2[l+1]=h%10+48;hate=h/10;}
	  if(hate>0)
	  te2[0]=hate+48;
	  else
	  te2[0]='0';
	  }
	 else
	 {k--;
	  if(i+2<n)
	  {re[r+1]=k+48;r++;  }
	  else
	  {if(k>=6)
	   daso=4;
	   break;}
	   hate=0;
	  for(l=r;l>=0;l--)
	  { if(l==r)
	   h=(re[l]-48)*k+hate;
	else
	h=((re[l]-48)*2)*k+hate;
	te2[l+1]=h%10+48;hate=h/10;}
	  if(hate>0)
	  te2[0]=hate+48;
	  else
	  te2[0]='0';
	  }
	  hate=0;
	  for(l=r+1;l>=0;l--)
	  {h=(te[l]-48)-(te2[l]-48)-hate;
	   hate=0;
	   if(h<0)
	   {h=h+10;hate=1;}
	   te[l]=h+48;
	 }
 } if(daso==4)
   {hate=1;
   for(j=r;j>=1;j--)
   {h=re[j]-48+hate;
	re[j]=h%10+48;
	hate=h/10;
	if(hate==0)
	break;
   }
   if(hate!=0)
   { re[0]='1';
   }
   }
 }

strcpy(sa,re);n=r+1;
	for(i=0;i<n;i++)
       if(sa[i]!='0')
       {h=i;break;}
       if(h!=0)
       {for(i=h;i<n;i++)
	sa[i-h]=sa[i];
	n=n-h;
       }
       if(ma==4)
       {for(i=n;i>=1;i--)
       sa[i]=sa[i-1]; sa[0]='-';
       n++;
       }
}
void shakil::factorial()
{ if(sa[0]!='-')
  {long int tr=0,k;
   for(i=0;i<n;i++)
  {if(sa[i]=='.')
   break;
   tr=tr*10+(sa[i]-48);
  }
  strcpy(sa,"1");n=1;
  for(i=2;i<=tr;i++)
  {hate=0;
   for(j=0;j<n;j++)
   {k=(sa[j]-48)*i+hate;
    sa[j]=k%10+48;
    hate=k/10;
   }
   if(hate!=0)
   while(hate!=0)
   {sa[n]=hate%10+48;n++;
   hate=hate/10;
   }

  }
  for(i=0,j=n-1;i<=n/2,j>=n/2;i++,j--)
  {tr=sa[i];sa[i]=sa[j];sa[j]=tr;
  }

}  }

void main()
{ int gd=DETECT,gm;
initgraph(&gd,&gm,"e:\\tc\\bgi");
restrictmouseptr(10,10,620,450);
showmouseptr();
shakil sa;

sa.mixed();

closegraph();





}




initmouse()
{i.x.ax=0;
 int86(0x33,&i,&o);
 return(o.x.ax);
}
getmousepos(int *button,int *x,int *y)
{i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
}
showmouseptr()
{i.x.ax=1;
 int86(0x33,&i,&o);
}
restrictmouseptr(int x1,int y1,int x2, int y2)
{i.x.ax=7;
 i.x.cx=x1;
 i.x.dx=x2;
 int86(0x33,&i,&o);
 i.x.ax=8;
 i.x.cx=y1;
 i.x.dx=y2;
 int86(0x33,&i,&o);
 }

hidemouseptr()
{
	i.x.ax=2;
    int86(0x33,&i,&o);


}