#include<stdio.h>
#include<conio.h>
int main()
{
     char ch,readn[70],writen[70];
     int count=0;
     FILE *fptr,*fp;
     printf("enter your read file name");
     scanf("%s",&readn);
     fptr=fopen(readn,"r");
     printf("enter your write file name");
     scanf("%s",&writen);
       fp=fopen(writen,"w");
     if(fp==NULL)
     {

         printf("file dost not created");
     }
     else
     {
         printf("file has been created");
     }

             fputs("<pre>",fp);




     while((ch=fgetc(fptr))!=EOF)
     {



         if(ch=='<')
           {


                 fputs("<em style='color:red';>",fp);
                    fputs("&lt",fp);

               while((ch=fgetc(fptr))!='>')
              {

                 putc(ch,fp);
              }

               fputs("&gt",fp);
           }

        else
         {

               fputs("<em style='color:green';>",fp);
             putc(ch,fp);

         }


          if(ch==' '||ch=='\n')
          {
              count++;
          }



     }
            fputs("</pre>",fp);
     fclose(fp);
   printf("\n the number of characts present inthe file:%d",count);

    fclose(fptr);
     getch();
    return 0;

}
