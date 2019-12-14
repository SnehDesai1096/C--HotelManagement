#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>


class Puzzle
{
    char name[50],address[100],room_code[10];
    int room_no,day_stay;
    char phone_number[10];
    char dob[10];
   public:
    void input();
    void output();

};

void Puzzle :: input()
{

 struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);


 cout<<"\nEnter The Room Number : ";
 cin>>room_no;
 cout<<"\nEnter The Name : ";
 gets(name);
 cout<<"\nEnter The Address : ";
 gets(address);
 cout<<"\nEnter The Contact Number : ";
 gets(phone_number);
 cout<<"\nEnter The Date Of Birth : ";
 gets(dob);
 cout<<"\nChoose The Room Code : ";
 cout<<"\n1. TSCR..";
 cout<<"\n2. PLG...";
 cout<<"\n3. ES....";
 cout<<"\n4. LS....";
 cout<<"\n\nEnter The Choice : ";
 int a;
 cin>>a;
 if(a==1)
  strcpy(room_code,"TSCR");
 else if(a==2)
  strcpy(room_code,"PLG");
 else if(a==3)
  strcpy(room_code,"ES");
 else if(a==4)
  strcpy(room_code,"LS");
 cout<<"\nEnter The days of stay : ";
 cin>>day_stay;

 gotoxy(51,23);
   cout<<"(Press Enter To continue)";
 getch();

}


void Puzzle :: output()
{
 clrscr();

 struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

 cout<<"\n\nThe Room Number Is : "<<room_no;

 cout<<"\n\nThe Name Is : "<<(name);

 cout<<"\n\nThe Address Is : "<<(address);

 cout<<"\n\nThe Contact Number Is : "<<phone_number;

 cout<<"\n\nThe Date Of Birth Is : "<<(dob);

 cout<<"\n\nThe Room Code Is : "<<room_code;

 cout<<"\n\nThe Days Of Stay Is : "<<day_stay;

 gotoxy(51,23);
   cout<<"(Press Enter To continue)";
 getch();

}



void sys_crash();

struct log
{
 char id[50],pass1,pass2,pass3,pass4;
};

void frst_screen()
{
  gotoxy(10,8);
  cout<<"TTTTTTTTTTTT    HHH    HHH    EEEEEEEE    FFFFFFFFF    44      \n";
  gotoxy(10,9);
  delay(500);
  cout<<"TTTTTTTTTTTT    HHH    HHH    EEEEEE      FFFFFFF      44      \n";
  gotoxy(10,10);
  delay(500);
  cout<<"     TT         HHH    HHH    EE          FF           44    44\n";
  gotoxy(10,11);
  delay(500);
  cout<<"     TT         HHHHHHHHHH    EEEEEE      FFFFF        44444444\n";
  gotoxy(10,12);
  delay(500);
  cout<<"     TT         HHHHHHHHHH    EEEEEE      FFFFF        44444444\n";
  gotoxy(10,13);
  delay(500);
  cout<<"     TT         HHH    HHH    EE          FF                 44\n";
  gotoxy(10,14);
  delay(500);
  cout<<"     TT         HHH    HHH    EEEEEE      FF                 44\n";
  gotoxy(10,15);
  delay(500);
  cout<<"     TT         HHH    HHH    EEEEEEEE    FF                 44\n";
  delay(500);
  getch();


}
void frst_scrn()
{
 clrscr();
 gotoxy(27,2);
 delay(500);
 cout<<"TTTTTT";  delay(200);
 cout<<"  HH  HH"; delay(200);
 cout<<"  EEEEE\n";
 gotoxy(27,3);
 delay(500);
 cout<<"  TT";delay(200);
 cout<<"    HH  HH";delay(200);
 cout<<"  EE   \n";
 gotoxy(27,4);

 delay(500);
 cout<<"  TT";delay(200);
 cout<<"    HHHHHH";delay(200);
 cout<<"  EEE  \n";
 gotoxy(27,5);
 delay(500);
 cout<<"  TT";delay(200);
 cout<<"    HH  HH";delay(200);
 cout<<"  EE   \n";
 gotoxy(27,6);
 delay(500);
 cout<<"  TT";delay(200);
 cout<<"    HH  HH";delay(200);
 cout<<"  EEEEE\n";
 gotoxy(27,7);
 delay(500);
 gotoxy(12,9);
 cout<<"PPPPPPP    UU     UU    ZZZZZZZZ    ZZZZZZZZ    LL        EEEEEEE\n";
 delay(500);
 gotoxy(12,10);
 cout<<"PP   PP    UU     UU         ZZZ         ZZZ    LL        EEEEE  \n";
 delay(500);
 gotoxy(12,11);
 cout<<"PP   PP    UU     UU        ZZ          ZZ      LL        EE     \n";
 delay(500);
 gotoxy(12,12);
 cout<<"PPPPPPP    UU     UU       ZZ          ZZ       LL        EEEE   \n";
 delay(500);
 gotoxy(12,13);
 cout<<"PP         UU     UU     ZZ          ZZ         LL        EE     \n";
 delay(500);
 gotoxy(12,14);
 cout<<"PP         UUU   UUU    ZZZ         ZZZ         LLLLLL    EEEEE  \n";
 delay(500);
 gotoxy(12,15);
 cout<<"PP         UUUUUUUUU    ZZZZZZZ     ZZZZZZZZ    LLLLLLLL  EEEEEEE\n";
 delay(500);
 gotoxy(51,23);
 cout<<"(Press Enter To continue)";

 getch();
}


void login()

{
 clrscr();
  struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

   gotoxy(15,11);

 struct log a1;
 gotoxy(15,10);
 cout<<"Enter The User Id:";
 gets(a1.id);
 gotoxy(15,11);
 cout<<"Enter The Password:";
 a1.pass1=getch();
 cout<<"*";
 a1.pass2=getch();
 cout<<"*";
 a1.pass3=getch();
 cout<<"*";
 a1.pass4=getch();
 cout<<"*";
 if(a1.pass1=='1' && a1.pass2=='0' && a1.pass3=='9' && a1.pass4=='6')
 {
   clrscr();

   struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

   gotoxy(15,11);
   cout<<"Welcome Mr./Ms. "<<a1.id<<" You Can Now Proceed Further...!!";

   gotoxy(51,23);
   cout<<"(Press Enter To continue)";


 }
 else
 {
  clrscr();
  cout<<"\n\n\n\n\n";
  cout<<"\n\n\tSorry You Entered The Wrong Password..";
  cout<<"\n";
  cout<<"\n\tThe Program Is Terminating In ";
  for(int i=0;i<3;i++)
  {
    cout<<3-i;
    delay(200);
    cout<<".";
    delay(200);
    cout<<".";
    delay(200);
    cout<<".";
    delay(500);

  }
  cout<<"0";
  clrscr();
  sys_crash();
  delay(100);
  sound(2);
  delay(1000);
  nosound();
  exit(0);
  }
 getch();
}

void program_load()
{
  clrscr();
  struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

  cout<<"\n\n\n\t\tPlease Wait Program Is Loading..";
  gotoxy(20,10);
  for(int i=0;i<20;)
  {
   cout<<"*";
   delay(500);
   i++;
  }

}

void sys_crash()
{
 clrscr();
  struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

  //cout<<"\n\n\n\t\tPlease Wait Program Is Loading..";
  //gotoxy(20,10);

  for(int i=0;i<30;i++)
  {

    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
    delay(500);

  }


}

void overview()
{
 clrscr();

 int a;
 char y='y';
 for(;y=='y';)
 {
    clrscr();
    struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

    cout<<"\n\n\t\tAgain Choose From The Option.";
    cout<<"\n\n\t\t\t\t1. Rooms And Suits.";
    cout<<"\n\t\t\t\t2. Indoor Activities.";
    cout<<"\n\t\t\t\t3. Outdoor Sports.";
    cout<<"\n\t\t\t\t4. Return To Previous Menu. ";
    cout<<"\n\t\t\t\t5. Exit";

    cout<<"\n\n\nEnter Your Choice:";
    cin>>a;
    if(a<0 || a>5)
    {
     cout<<"\nInvalid Choice.... Choose Again..";
     //y='y';
     delay(2000);
     y='y';

    }

    if(a==2)
    {
     clrscr();
     struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

     cout<<"\n\t\t\tINDOOR ACTIVITIES..!!";
     cout<<"\n\n\n\t   There Are Various Indoor Activities Here At THE PUZZLES That You";
     cout<<"\n\tCan't Even Imagine Of. We Have Indoor Basketball Court, Gym, Kids Arena";
     cout<<"\n\tWE Even Have Indoor Swimming Pool, And Last But Not The List";
     cout<<"\n\tThere Even Is A Karoke Room.";
     cout<<"\n\n\t\t CHARGES FOR KAROKE MAY BE APPLIED..";
     gotoxy(51,23);
   cout<<"(Press Enter To continue)";
      getch();
      y='y';

    }

    if(a==3)
    {
     clrscr();
     struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);

      cout<<"\n\n\t\t\tOUTDOOR ACTIVITIES..";
      cout<<"\n\n\t1. Cricket Pitch..";
      cout<<"\n\t2. Football Ground..";
      cout<<"\n\t3. Go Karting..";
      cout<<"\n\t4. Conoing..";
      cout<<"\n\t5. Tennis Court..";
      cout<<"\n\n\t\tThis Are Some Of The Few Outdoor Activities That We Are Indulged In..";



      gotoxy(51,23);
   cout<<"(Press Enter To continue)";

      getch();
      y='y';
    }


    if(a==1)
    {
     clrscr();
     struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);


     cout<<" \n\n\t\t\t ****Rooms And Suites****";
     cout<<"\n\n\n\t\t Discover The Story Behind Every Pillar Of The Puzzles,";
     cout<<"\n\tOverlooking The Epochal Piece Of India. The Hotel's 560 Rooms";
     cout<<"\n\tAnd Suits, In The Palace And Tower Wings, Blend Old-World Charm";
     cout<<"\n\tAn Modern Facilities.";
     gotoxy(51,23);
   cout<<"(Press Enter To continue)";

     getch();

     clrscr();
     struct  time t1;

   gettime(&t1);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t1.ti_hour, t1.ti_min, t1.ti_sec);

     cout<<"\n\n\t\t\tTOWER SUPERIOR CITY-VIEW ROOMS..";
     cout<<"\n\n\n \tThe Spacious Tower Superior City-View Rooms Offer Stunning views of \n\tThe Vibrant City Of Mumbai From Between The Second And Ninth Floor.";
     cout<<"\n\t\t BEDS - 1 KING SIZE, QUEEN-SIZE OR TWIN BED.";
     cout<<"\n\t\t VIEW - CITY VIEW.";
     cout<<"\n\t\t SIZE - 275 sq. ft.";
     cout<<"\n\t\t SIGNATURE HIGHLIGHT - UNINTERRUPTED VIEW OF CITY.";
     cout<<"\n\t\t BOOKING CODE - TSCR";
     cout<<"\n        In Room Amenities.";
     cout<<"\n* Complimentry Basic Wifi..";
     cout<<"\n* Premium Wifi At Nominal Charges..";
     cout<<"\n* 40 - inch Flat-Screen TV..";
     cout<<"\n* Room Servies 24x7..";
     cout<<"\n\n\t\t\t THE TARIFF IS RUPEES 8000 PER NIGHT.";

     gotoxy(51,23);
   cout<<"(Press Enter To continue)";

     getch();


     clrscr();
     struct  time t2;

   gettime(&t2);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t2.ti_hour, t2.ti_min, t2.ti_sec);

     cout<<"\n\n\t\t\tPALACE LUXARY GRANDE ROOMS..";
     cout<<"\n\n\n \tThe Elegance Of A Bygone Era Is Retained In These Classic Rooms.";
     cout<<"\n\t\t BEDS - 1 KING SIZE, QUEEN-SIZE OR TWIN BED.";
     cout<<"\n\t\t VIEW - CITY VIEW And Pool View.";
     cout<<"\n\t\t SIZE - 350-400 sq. ft.";
     cout<<"\n\t\t SIGNATURE HIGHLIGHT - LUXURIOUS ITALIAN MARBLE BATHROOM.";
     cout<<"\n\t\t BOOKING CODE - PLG";
     cout<<"\n        In Room Amenities.";
     cout<<"\n* Italian Marble Bathroom With Bathtub, Seperate Shower And Dressing..";
     cout<<"\n* Complimentry Basic Wifi..";
     cout<<"\n* Premium Wifi At Nominal Charges..";
     cout<<"\n* 40 - inch Flat-Screen TV..";
     cout<<"\n* Sony Bravia Home Theater With Surround Sound.";
     cout<<"\n* Room Servies 24x7..";
     cout<<"\n\n\t\t\t THE TARIFF IS RUPEES 10000 PER NIGHT.";

     gotoxy(51,24);
   cout<<"(Press Enter To continue)";

     getch();


     clrscr();
     struct  time t3;

   gettime(&t3);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t3.ti_hour, t3.ti_min, t3.ti_sec);

     cout<<"\n\t\t\tTHE EXECUTIVE SUITES..";
     cout<<"\n\n\n \tThis Newly Renovated Suirs Are Chic And Contemporary Equipped With Modern Amenities..";
     cout<<"\n\t\t BEDS - 1 KING SIZE BED.";
     cout<<"\n\t\t VIEW - CITY VIEW And Pool View.";
     cout<<"\n\t\t SIZE - 700-750 sq. ft.";
     cout<<"\n\t\t SIGNATURE HIGHLIGHT - CLASSIC STYLE AND ARCHITECTURE CHARACHTER\t\t                        THAT PROVIDES A SCENE OF HISTORY";
     cout<<"\n\t\t BOOKING CODE - ES";
     cout<<"\n        In Room Amenities.";
     cout<<"\n* Italian Marble Bathroom With Bathtub, Seperate Shower And Dressing..";
     cout<<"\n* Complimentry Basic Wifi..";
     cout<<"\n* Premium Wifi At Nominal Charges..";
     cout<<"\n* 50 - inch Flat-Screen TV..";
     cout<<"\n* Sony Bravia Home Theater With Surround Sound.";
     cout<<"\n* Room Servies 24x7..";
     cout<<"\n\n\t\t\t THE TARIFF IS RUPEES 15000 PER NIGHT.";


     gotoxy(51,25);
   cout<<"(Press Enter To continue)";

     getch();

     clrscr();
     struct  time t4;

   gettime(&t4);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t4.ti_hour, t4.ti_min, t4.ti_sec);

     cout<<"\n\t\t\tLUXARY SUITES..";
     cout<<"\n\n\n \tEach OF Our Delightful Theamed Suites Is Adorned With\n\tOriginal Painting And Period Furniture To Evoke Age-Old\n\tGrandeur. Combined Classic Style With Contenpary Amenities.";
     cout<<"\n\t\t BEDS - 1 KING SIZE.";
     //cout<<"\n\t\t VIEW - CITY VIEW And Pool View.";
     cout<<"\n\t\t SIZE - 900-1000 sq. ft.";
     cout<<"\n\t\t SIGNATURE HIGHLIGHT - UNIQUELY THEAMED SUITES WITH\n\t\t                        ORIGINAL ART AND FURNITURE.";
     cout<<"\n\t\t BOOKING CODE - LS";
     cout<<"\n        In Room Amenities.";
     cout<<"\n* Italian Marble Bathroom With Bathtub, Seperate Shower And Dressing..";
     cout<<"\n* Brand Bath Amenities..";
     cout<<"\n* Premium Wifi Free Of Charges..";
     cout<<"\n* 56 - inch Flat-Screen TV..";
     cout<<"\n* Sony Bravia Home Theater With Surround Sound.";
     cout<<"\n* Room Servies 24x7..";
     cout<<"\n\n\t\t\t THE TARIFF IS RUPEES 20000 PER NIGHT.";

     gotoxy(51,25);
   cout<<"(Press Enter To continue)";

     getch();


     y='y';

     }

     if(a==4)
     {
      y='n';
     }

     if(a==5)
     {
      exit(0);
     }

 }
}

void menu()
{
 clrscr();
 Puzzle a1;

 int a;
 char y='y';
 for(;y=='y';)
 {
    clrscr();
    struct  time t;

   gettime(&t);
   gotoxy(73,1);
   printf("%2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);


    cout<<"\n\nChoose From The Option.";
    cout<<"\n\n1. Overview.";
    cout<<"\n2. Book A room.";
    cout<<"\n3. Check Availability.";
    cout<<"\n4. Show Your Booking.";
    cout<<"\n5. Modify Booking. ";
    cout<<"\n6. Cancel Booking. ";
    cout<<"\n7. Billing.";
    cout<<"\n8. Exit";

    cout<<"\n\n\n Enter The Choice:";
    cin>>a;

    if(a<0 || a>8)
    {
     cout<<"Invalid Choice.. Choose Again.";
     y='y';
     getch();
    }

    if(a==1)
    {
     overview();
     y='y';
    }

    if(a==2)
    {
    clrscr();
    a1.input();
    a1.output();
     y='y';
    }

    if(a==8)
    {

     exit(0);
    }


 }





}



void main()
{
 clrscr();
 frst_scrn();
 program_load();
 login();
 menu();

 getch();
}
