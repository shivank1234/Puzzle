#include<stdio.h>
void main()
{
    int q=1,z=0;
      for(;q!=0;z++)
      {
       static int a[4][4]={1,4,15,7,8,10,2,11,14,3,6,13,12,9,5};
      char c;
      if(z==0)
     d(a);
     printf("enter the choice");
     scanf("%c",&c);
    switch(c)
    {
     case 115:
       {
        int r,h;
        int f,g;
        for(f=0;f<4;f++)
        {
            for(g=0;g<4;g++)
            {
                if(a[f][g]==0)
                {
                    r=f;
                    h=g;
                }
              }
          }
          if(r>0)
          {
          int t=a[r][h];
          a[r][h]=a[r-1][h];
          a[r-1][h]=t;
          }
          d(a);
          break;
        }
    case 119:
        {int r,h;
        int f,g;
        for(f=0;f<4;f++)
        {
            for(g=0;g<4;g++)
            {
                if(a[f][g]==0)
                {
                    r=f;
                    h=g;
                }
              }
          }

          if(r<3)
          {
              int t=a[r][h];
              a[r][h]=a[r+1][h];
              a[r+1][h]=t;
          }
          d(a);
          break;
         }
    case 97:
        {
            int r,h;
        int f,g;
        for(f=0;f<4;f++)
        {
            for(g=0;g<4;g++)
            {
                if(a[f][g]==0)
                {
                    r=f;
                    h=g;
                }
              }
          }
          if(h<3)
          {
              int t=a[r][h];
              a[r][h]=a[r][h+1];
              a[r][h+1]=t;
          }
          d(a);
          break;
          }
          case 100:
       {

         int r,h;
        int f,g;
        for(f=0;f<4;f++)
        {
            for(g=0;g<4;g++)
            {
                if(a[f][g]==0)
                {
                    r=f;
                    h=g;
                }
              }
          }
          if(h>0)
          {
              printf("hi\n");
              int t=a[r][h];
              a[r][h]=a[r][h-1];
              a[r][h-1]=t;
              int i,j;
              for(i=0;i<4;i++)
              {
                  for(j=0;j<4;j++)
                  {
                      if(a[i][j]!=0)
                        printf(" %d",a[i][j]);
                        else
                            printf("  ");
                  }
                  printf("\n");
              }
          }
       }
        }
        int i,j,k=a[3][2],y=0;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(k<a[i][j])
                y++;
            }
        }
        q=y;
}
printf("you completed puzzle in %d moves\n",z);
}
d(int e[][4])
{
    int i,j;
    for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           if(e[i][j]!=0)
           printf("%d ",e[i][j]);
           else
            printf("  ");
       }
       printf("\n");
   }
}
