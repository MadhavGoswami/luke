                            /*                          # #            MADE BY :- KARTIK WADHWA                 # #
			    # #		   CLASS :- 11TH -B                       # #
			    # #		   ROLL NO.:- 15                            # #
###########################################################################################################################################					       */
#include<iostream.h>
#include<conio.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
//project on restaurant
float sum;
struct foody
   {
	int   idno;
	char  dish[30];
	float price;
   };

foody soup[3]={{001,"Tomato    ",100.00},
			   {002,"Sweet corn",120.00},
			   {003,"Manchow   ",120.00}};

foody chin[4]={{101,"Honey chilli potato  ",150.00},
			   {102,"Spring roll          ",110.00},
			   {103,"Stuffed Chilly Paneer",210.00},
			   {104,"Manchurian Dry/Gravy ",180.00}};

foody mc[10]={{201,"Shai paneer         ",260.00},
			  {202,"Paneer butter masala",265.00},
			  {203,"Malai kofta         ",220.00},
			  {204,"Dum aaloo           ",130.00},
			  {205,"Dal makhani         ",190.00},
			  {206,"Mix veg             ",170.00},
			  {207,"Mutter mushroom     ",150.00},
			  {208,"Rajma               ",160.00},
			  {209,"Masala bhindi       ",130.00},
			  {210,"Meithi Malai Mutter ",190.00}};

foody rn[5]={{301,"Steamed rice     ",90.00},
			 {302,"Schezwan rice    ",130.00},
			 {303,"Veg.Briyani      ",150.00},
			 {304,"Veg.Chowmein     ",110.00},
			 {305,"Singapore noodles",130.00}};

foody bread[5]={{401,"Plain roti  ",10.00},
				{402,"Butter roti ",15.00},
				{403,"Plain Naan  ",20.00},
				{404,"Butter Naan ",23.00},
				{405,"Aloo Prantha",50.00}};

foody pasta[2]={{501,"Red sauce pasta  ",140.00},
				{502,"White sauce pasta",140.00}};

foody drinks[4]={{601,"Mango shake    ",90.00},
				 {602,"Chocolate shake",70.00},
				 {603,"Cold coffee    ",50.00},
				 {604,"Hot coffee     ",50.00}};

void bill();
void bill()
{
 sum=sum+18;
 cout<<sum;
}

void main()

{
 char ch,ch2,chx;
 int choice,n;  //variable which can able to input dish
 float choose;

do
{
clrscr();
 cout<<"\t\t\t STREET KING ";
 cout<<"\n\tMENU";
 cout<<"\n1.SOUP";
 cout<<"\n2.CHINESE STARTERS";
 cout<<"\n3.MAIN COURSE";
 cout<<"\n4.RICE & NOODLES";
 cout<<"\n5.BREADS";
 cout<<"\n6.PASTA";
 cout<<"\n7.DRINKS";
 cout<<"\n8.MODIFY DETAILS";
 cout<<"\n0.EXIT";

 cout<<"\nCHOOSE VALID OPTION:";
 cin>>ch;
  switch(ch)
  {

   case'1' :for(int i=0;i<3;i++)
			 cout<<endl<<soup[i].idno<<"."<<soup[i].dish<<"\t"<<soup[i].price;

			 cout<<"\nEnter soups you like:";cin>>choice;

			if(choice>=1 &&  choice <=3)
			  {cout<<"\nEnter quantity of "<<soup[choice-1].dish<<":";
			   cin>>n;
			   choose=(soup[choice-1].price)*n;
			   sum+=choose;
			  }


			else
			cout<<"\nInvalid option......";

			break;

  case'2' :for(i=0;i<4;i++)
			cout<<endl<<chin[i].idno<<"."<<chin[i].dish<<"\t"<<chin[i].price;

			cout<<"\nEnter starter you like:";cin>>choice;

		   if(choice>=101 && choice<=104)
			{ cout<<"\nEnter quantity of "<<chin[choice-101].dish<<":";
			  cin>>n;
			  choose=(chin[choice-101].price)*n;
			  sum+=choose;
			}

		   else
		   cout<<"\nInvalid option......";

		   break;

  case'3' :for(i=0;i<10;i++)
			cout<<endl<<mc[i].idno<<"."<<mc[i].dish<<"\t"<<mc[i].price;

			cout<<"\nEnter dish you like:";cin>>choice;

		   if(choice>=201 && choice<=210)
			 { cout<<"\nEnter quantity of "<<mc[choice-201].dish<<":";
			   cin>>n;
			   choose=(mc[choice-201].price)*n;
			   sum+=choose;
			 }

		   else
		   cout<<"\nInvalid option......";

		   break;

  case'4' :for(i=0;i<5;i++)
			cout<<endl<<rn[i].idno<<"."<<rn[i].dish<<"\t"<<rn[i].price;

			cout<<"\nEnter Rice or Noodles you like:";cin>>choice;

		   if(choice>=301 && choice<=305)
			 { cout<<"\nEnter quantity of "<<rn[choice-301].dish<<":";
			   cin>>n;
			   choose=(rn[choice-301].price)*n;
			   sum+=choose;
			 }

		   else
		   cout<<"\nInvalid option......";

		   break;

  case'5' :for(i=0;i<5;i++)
			cout<<endl<<bread[i].idno<<"."<<bread[i].dish<<"\t"<<bread[i].price;

			cout<<"\nEnter bread you like:";cin>>choice;

		   if(choice>=401 && choice<=405)
			 { cout<<"\nEnter quantity of "<<bread[choice-401].dish<<":";
			   cin>>n;
			   choose=(bread[choice-401].price)*n;
			   sum+=choose;
			 }
		   else
		   cout<<"\nInvalid option......";

		   break;

  case'6' :for(i=0;i<2;i++)
			cout<<endl<<pasta[i].idno<<"."<<pasta[i].dish<<"\t"<<pasta[i].price;

			cout<<"\nEnter pasta you like:";cin>>choice;

		   if(choice>=501 && choice<=502)
			 { cout<<"\nEnter quantity of "<<pasta[choice-501].dish<<":";
			   cin>>n;
			   choose=(pasta[choice-501].price)*n;
			   sum+=choose;
			 }
		   else
		   cout<<"\nInvalid option......";

		   break;

  case'7' :for(i=0;i<4;i++)
			cout<<endl<<drinks[i].idno<<"."<<drinks[i].dish<<"\t"<<drinks[i].price;

			cout<<"\nEnter drinks you like:";cin>>choice;

		  if(choice>=601 && choice<=604)
			{ cout<<"\nEnter quantity of "<<drinks[choice-601].dish<<":";
			  cin>>n;
			  choose=(drinks[choice-601].price)*n;
			  sum+=choose;
			}
		  else
		  cout<<"\nInvalid option......";

		  break;
  case'8' :cout<<"\nEnter ID number of that dish that you dont want";
	   cout<<"\n(you can modify details only for soups):";
	   int id;
	   char chx,chx2;
	   cin>>id;
	   for(i=0;i<3;i++)
	   if(soup[i].idno==id)
	   { clrscr();
	     cout<<"\nyou are changing "<<soup[i].dish<<"Rs"<<soup[i].price;

	    do
	    {
	     cout<<"\n\n\t\t\tMODIFY";
	      cout<<"\n1.DISH";
	      cout<<"\n2.PRICE";
	      cout<<"\n0.EXIT";
	      cout<<"\nEnter choice:";
	      cin>>chx;

	      switch(chx)
	      {
	       case '1':cout<<"\nEnter new name of the soup:";
			gets(soup[i].dish);
			cout<<"\nyou change dish name successfully!!!!";
			break;

	       case '2':cout<<"\nEnter new price for the soup:";
			cin>>soup[i].price;
			cout<<"\nyou change price of the soup successfully!!!!";
			break;

	       case '0':cout<<"breaking";
			exit(0);

	       default :cout<<"\nInvalid choice....";
	      }
	       cout<<"\nwant to modify more???(y/n):";
	       cin>>chx2;

	       if(chx2=='y'||chx2=='Y')
	       cout<<"\nchoose option again:";


	    }while(chx2=='y'||chx2=='Y');
      }
		  break;
  case'0' :cout<<"breaking";
		   exit(0);

  default :cout<<"\nenter valid one";
		   break;
 }

   cout<<"\n\nOrder more food ???(y/n) : ";

 cin>>ch2;
 if(ch2=='y'||ch2=='Y')

   cout<<"\nChoose option again : ";

 else if(ch2=='n'||ch2=='N')
		{
   cout<<"\n***************************************************************************";
   cout<<"\n\t\t\t\t BILL";
   cout<<"\n\t\t\t\tGST:Rs18";
   cout<<"\n"<<"\t\t\t\tTotal Cost:Rs"; bill();
   cout<<"\n"<<"\n\t\t---------THANK YOU FOR VISITING!!--------";
		}

  }
 while(ch2=='y'||ch2=='Y');
 getch();
}



