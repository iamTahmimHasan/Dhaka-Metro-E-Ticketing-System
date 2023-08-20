#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <dos.h>
#include <time.h>


void Password();
void style_dmr();
void style_dmrl();
void ticket();
void tikc();
int random();
int t();
int Timg();
void Sellamount();



COORD coord = {0, 0};
void gotoxy (int x, int y)
{
coord.X = x; coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}





int main()
{
    int mod,p=1122,P,a;
    style_dmr();
    printf("\n\t\t\t\t\t\t\tPress 1 to User Mod");
    printf("\n\t\t\t\t\t\t\tPress 2 to Administer Mod");
    style_dmrl();
    t();
    printf("\n\t\t\t\t\t\t\tPress:");
    scanf("%d",&mod);

    system("CLS");
   switch(mod)
   {
    case 1:
       mr_fu1();
       break;
   case 2:
       style_dmr();
       Password();
   break;
   }

    printf("\n\n\n\n\n");
    return 0;
}




void style_dmr()
    {
        printf("\n\n\t\t\t\t\t\t...:::::\xB0\xB1\xB2\xB9  Welcome to DMRT  \xB9\xB2\xB1\xB0::::....\n\n");

    }


void style_dmrl()
    {
        printf("\n\n\t\t\t\t\t\t....::::::::::::::::::::::::::::::....\n\n");
    }



void mr_fu1()
    {
        float cal,cal2, to,_for;
        int k_1,vat,m_c, ifrom,ito,ch;
        //par kilo vara 5 taka
        k_1=5;
        vat=0;
        m_c=0;
        int x;
    printf("\n\n\t\t\t...:::::\xB2\xB2  Welcome to DMR.  \xB2\xB2::::....\n\n");
    printf("\t\t\t\t\t1.Buy a Ticket .\n");
    printf("\t\t\t\t\t2.Help.\n");
    printf("\t\t\t\t\t3.Exit .\n");
    printf("\n\t\t\t\t\tPress:");
    scanf("%d",&x);

    system("CLS");
    switch(x)
    {
    case 1:
        ticket();
        break;
    case 2:
        gotoxy(50,17);
        printf("Call Now: 01710449199");
        gotoxy(50,18);
        printf("Email : ras@gmail.com");
         break;
    case 3:
        exit(1);
        break;

    }
    }




void ticket()
    {

                long int mob;
                char Nem[40];
                int v, tik;

        float cal,cal2, to,_for;
        int k_1,vat,m_c, ifrom,ito,ch;
        //par kilo vara 5 taka
        k_1=5;
        vat=0;
        printf("\n\t\t\t\t\xB3 I FROM_____\n");


    printf("\n\t\t\t\t\t\t1.Uttara North.\n");
    printf("\t\t\t\t\t\t2.Uttara Center.\n");
    printf("\t\t\t\t\t\t3.Uttara South.\n");
    printf("\t\t\t\t\t\t4.Pallabi.\n");
    printf("\t\t\t\t\t\t5.Mirpur 11.\n");
    printf("\t\t\t\t\t\t6.Mirpur 10.\n");
    printf("\t\t\t\t\t\t7.Kazipara.\n");
    printf("\t\t\t\t\t\t8.Shewrapara.\n");
    printf("\t\t\t\t\t\t9.Agargaon.\n");
    printf("\t\t\t\t\t\t10.Bijoy Sarani.\n");
    printf("\t\t\t\t\t\t11.Farmgate.\n");
    printf("\t\t\t\t\t\t12.Karwan Bazar.\n");
    printf("\t\t\t\t\t\t13.Shahbag.\n");
    printf("\t\t\t\t\t\t14.Dhaka University.\n");
    printf("\t\t\t\t\t\t15.Bangladesh Secretariat.\n");
    printf("\t\t\t\t\t\t16.Motijheel.\n");
    style_dmrl();
    printf("\t\t\t\t\tPress:");
    scanf("%d",&ifrom);
    system("CLS");
    style_dmr();
    printf("\t\t\t\t\xB3 I TO_____\n");
    printf("\t\t\t\t\t1.Uttara North.\n");
    printf("\t\t\t\t\t2.Uttara Center.\n");
    printf("\t\t\t\t\t3.Uttara South.\n");
    printf("\t\t\t\t\t4.Pallabi.\n");
    printf("\t\t\t\t\t5.Mirpur 11.\n");
    printf("\t\t\t\t\t6.Mirpur 10.\n");
    printf("\t\t\t\t\t7.Kazipara.\n");
    printf("\t\t\t\t\t8.Shewrapara.\n");
    printf("\t\t\t\t\t9.Agargaon.\n");
    printf("\t\t\t\t\t10.Bijoy Sarani.\n");
    printf("\t\t\t\t\t11.Farmgate.\n");
    printf("\t\t\t\t\t12.Karwan Bazar.\n");
    printf("\t\t\t\t\t13.Shahbag.\n");
    printf("\t\t\t\t\t14.Dhaka University.\n");
    printf("\t\t\t\t\t15.Bangladesh Secretariat.\n");
    printf("\t\t\t\t\t16.Motijheel.\n");
    style_dmrl();
    printf("\t\t\t\t\tPress:");
    scanf("%d",&ito);





    ch=ifrom;
    if(ch==1)
    {
        _for=0;
    }
    else if(ch==2)
    {
        _for=3.5;
    }
    else if(ch==3)
    {
        _for=7.0;
    }

     else if(ch==4)
    {
        _for=21.0;
    }
    else if(ch==5)
    {
        _for=22.8;
    }
    else if(ch==6)
    {
        _for=27.0;
    }
    else if(ch==7)
    {
        _for=31.2;
    }

     else if(ch==8)
    {
        _for=34.0;
    }
    else if(ch==9)
    {
        _for=36.2;
    }
    else if(ch==10)
    {
        _for=40.3;
    }
    else if(ch==11)
    {
        _for=43.9;
    }

     else if(ch==12)
    {
        _for=45.1;
    }
    else if(ch==13)
    {
        _for=47.5;
    }
    else if(ch==14)
    {
        _for=48.7;
    }
    else if(ch==15)
    {
        _for=50.7;
    }

     else if(ch==16)
    {
        _for=51.9;
    }

    ch=ito;

    if(ch==1)
    {
        to=0;
    }
    else if(ch==2)
    {
        to=3.5;
    }
    else if(ch==3)
    {
        to=7.0;
    }

    else if(ch==4)
    {
        to=21.0;
    }
    else if(ch==5)
    {
        to=22.8;
    }
    else if(ch==6)
    {
        to=27.0;
    }
    else if(ch==7)
    {
        to=31.2;
    }

    else if(ch==8)
    {
        to=34.0;
    }
    else if(ch==9)
    {
        to=36.2;
    }
    else if(ch==10)
    {
        to=40.3;
    }
    else if(ch==11)
    {
        to=43.9;
    }
    else if(ch==12)
    {
        to=45.1;
    }
    else if(ch==13)
    {
        to=47.5;
    }
    else if(ch==14)
    {
        to=48.7;
    }
    else if(ch==15)
    {
        to=50.7;
    }
    else if(ch==16)
    {
        to=51.9;
    }
    //printf("To Is :%d",to);




   system("CLS");
   style_dmr();
   gotoxy(40,8);
          printf("Enter The Name--------------:");
          scanf("%s",&Nem);
          //gets(Nem);

          gotoxy(40,9);
          printf("Enter The Mobile Number-----:");
          scanf("%d",&mob);

          gotoxy(40,10);
          printf("Enter The Ticket------------:");
          scanf("%d",&tik);
          if(tik>5)
          {
           gotoxy(40,25);
              printf("Sorry you can't buy up to 4 Ticket");
              getch();
              exit(1);
          }




    cal=to-_for;

    cal2=cal<0?-cal:cal;
    printf("\n\n");
    printf("\n\t\t\t\t\t\t\tDISTANCE :%.2f km",cal2);
    printf("\n\t\t\t\t\t\t\tVARA     :%.2f * %d",cal2*k_1,tik);
    printf("\n\t\t\t\t\t\t\tVAT      :%d",vat);
    printf("\n\t\t\t\t\t\t__________________________________");
    printf("\n\t\t\t\t\t\t\tTOTAL FARE =%.2f/-",cal2*k_1*tik);

      v=random();

      gotoxy(38,25);
      printf("\Are you confirm?(Y/N)");
      if(getch()=='y')
      {
      gotoxy(38,26);
      printf("Your PNR:%d\n",v);
      }

      else
      {
      system("CLS");
      ticket();
      }




      FILE *file,*file1,*file2;
      file=fopen("DATA.txt","a+");
      file1=fopen("Ticket.txt","a+");
      file2=fopen("Atc.txt","a+");

      if(file==NULL)
      {
          printf("Error in saving ");
          return 1;
      }

      fprintf(file,"%s\t%d\t%d\t%d\t%d\t%.2f\t\t%d\t%d\n",Nem,mob,tik,ifrom,ito,cal2*k_1*tik,v,t());
      fprintf(file1,"%d\n",tik);
      fprintf(file2,"%.f\n",cal2*k_1*tik);
      fclose(file);
      fclose(file1);
      fclose(file2);

       style_dmrl();
        }


    void Password(void)
{
            style_dmr();
        char password[10]={"dmr2020"};
        system("cls");
        char d[25]=" Password Protected";
        char ch,pass[10];
        int i=0,j;
        gotoxy(10,4);
        for(j=0;j<20;j++)
        {
        Sleep(50);
        printf("*");
        }
        for(j=0;j<20;j++)
        {
        Sleep(50);
        printf("%c",d[j]);
        }
        for(j=0;j<20;j++)
        {
        Sleep(50);
        printf("*");
        }
        gotoxy(15,7);
        printf("Enter Password:");

        while(ch!=13)
        {
        ch=getch();

        if(ch!=13 && ch!=8){
        putch('*');
        pass[i] = ch;
        i++;
        }
        }
        pass[i] = '\0';
        if(strcmp(pass,password)==0)
        {
                    system("CLS");
                    style_dmr();
                    Administer();

        }
        else
        {
        gotoxy(15,16);
        printf("\aWarning!! Incorrect Password");
         getch();
         Password();
        }
        }


int t(void)
    {
    time_t t;
    time(&t);
    printf("Date and time:%s\n",ctime(&t));

    return 0 ;
    }



void Sellamount()

{
    FILE* f = fopen("Atc.txt", "r");
    int number = 0;
    int sum = 0; /* the sum of numbers in the file */

        while( fscanf(f, "%d,", &number) > 0 ) // parse %d followed by ','
        {
            sum += number; // instead of sum you could put your numbers in an array
        }

    gotoxy(50,10);
    printf("Total sell Amount:%d",sum);
    fclose(f);
    gotoxy(50,12);
      printf("\Are you confirm back to main menu?(Y/N)");
      if(getch()=='y')
      {
          system("CLS");
      gotoxy(50,13);
      main();
      }
    return 0;
}



void Sellticket()

{
    FILE* f = fopen("Ticket.txt", "r");
    int number = 0;
    int sum = 0; /* the sum of numbers in the file */

        while( fscanf(f, "%d,", &number) > 0 ) // parse %d followed by ','
        {
            sum += number; // instead of sum you could put your numbers in an array
        }

    gotoxy(50,10);
    printf("Total sell Amount:%d",sum);
    fclose(f);
    return 0;
}


int random()
    {

        int r;

        //initialize random
        srand(time(NULL));

        //generate random number
        //find mod 11
        //result from 0 to 10
        r = rand();

        //output
        //printf("Random Number from 0 to 10: %d", r);
        return r;

    }

Administer()
    {
    int as;
    printf("\n\t\t\t\t\t\t\tPress 1 to Ticket Management");
    printf("\n\t\t\t\t\t\t\tPress 2 to Sell Amount");
    printf("\n\t\t\t\t\t\t\tPress 3 to Main Menu");
    printf("\n\t\t\t\t\t\t\tPress 4 to Exit");
    style_dmrl();
    t();
    printf("\n\t\t\t\t\t\t\tPress:");
    scanf("%d",&as);
    system("CLS");
   switch(as)
   {
    case 1:
       Timg();
       break;
   case 2:
       style_dmr();
       Sellamount();
   break;

   case 3:
       main();
       break;
   case 4:
       style_dmr();
       exit(1);


   break;
   }
}


Timg()
{
   style_dmr();
    FILE *fptr;

    char filename[100], c;
    gotoxy(40,8);
    printf("Write Now 'DATA.txt'");
    gotoxy(40,9);
    printf("Enter the filename to open:");
    scanf("%s", filename);

    // Open file

    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    system("CLS");
    style_dmr();
    gotoxy(0,10);
    printf("NAME       MOBILE      Ticket  From     TO      Total Amount           PNR    \n");
    printf("----------------------------------------------------------------------------------");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    style_dmrl();
    return 0;

}
