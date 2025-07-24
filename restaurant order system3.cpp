#include<iostream>
/*------------------------------------------------------------------------------*/
#include <windows.h>
#include <conio.h>
/*------------------------------------------------------------------------------*/
using namespace std;
/*------------------------------------------------------------------------------*/
void set(char x,char y){
		COORD coord = {x, y};
        SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}
/*------------------------------------------------------------------------------*/
void  lod_wel(){
    system("color 8f");
    system("color f0");

	int x=0,y=0;
    char z[12]={'L','O','A','D','I','N','G','.','.','.','.','.',};
		x=46;
		y=12;
    for(int i=0;i<12;i++)
	{
	set(x,y);
    cout<<z[i];
    x++;
    Sleep(100);
    }
    x=40,y=10;
    for(int i=0;i<25;i++)
	{
	set(x,y);
    cout<<"*";x++;
    Sleep(20);
    }
	for(int i=0;i<5;i++)
	{
	set(x,y);
    cout<<"*";y++;
    Sleep(20);
    }
	for(int i=25;i>=0;i--)
	{
	set(x,y);
    cout<<"*";x--;
    Sleep(20);
    }     
	for(int i=0;i<5;i++)
	{
	set(x,y);
    cout<<"*";y--;
    Sleep(20);
    }
    system("cls");	

    x=38,y=10;
	for(int i=0;i<30;i++)
	{
	set(x,y);
    cout<<"*";x++;
    }
	for(int i=0;i<5;i++)
	{
	set(x,y);
    cout<<"*";y++;
	}
	for(int i=30;i>=0;i--)
	{
	set(x,y);
     cout<<"*";x--;
	}
	for(int i=0;i<5;i++)
	{
	set(x,y);
    cout<<"*";y--;
    }	
		x=40;
		y=12;
    char k[]={'W','E','L','C','O','M','E',' ','T','o',' ','o','u','r',' ','P','R','O','J','E','C','T'};
	for(int i=0;i<22;i++)
	{
	set(x,y);
    cout<<k[i];
    Sleep(100);
    x++;
    }

}
/*------------------------------------------------------------------------------*/
int main(){ 

/*______________________________________________________________*/
    lod_wel();
	system("cls");
/*______________________________________________________________*/

system("color 8f");
system("color f0");
cout<<endl<<endl;
cout<<"	          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"	          ~..M'''bgd.`7MMF'`7MN....`7MF'`7MM'''Yb..`7MMF'..`7MMF'`7MM'''Mq...`7MMF'~"<<endl;
cout<<"	          ~,MI...''Y...MM....MMN.....M....MM....`Yb..MM......MM....MM...`MM....MM..~"<<endl;
cout<<"	          ~`MMb........MM....M.YMb...M....MM.....`Mb.MM......MM....MM...,M9....MM..~"<<endl;
cout<<"	          ~..`YMMNq....MM....M..`MN..M....MM......MM.MMmmmmmmMM....MMmmdM9.....MM..~"<<endl;
cout<<"	          ~......`MM...MM....M...`MM.M....MM.....,MP.MM......MM....MM..YM......MM..~"<<endl;
cout<<"	          ~Mb.....dM...MM....M.....YMM....MM....,dP'.MM......MM....MM...`Mb....MM..~"<<endl;
cout<<"	          ~P'Ybmmd'...JMML..JML.....YM...JMMmmmdP'..JMML....JMML..JMML...JMM..JMML.~"<<endl;
cout<<"	          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

cout<<"                                   -----------RESTAURANT------------    "<<endl <<endl;
cout<<"                                         Food_For_Royalty!            "<<endl<<endl;
cout<<"                                               _MENU_                  "<<endl<<endl;
cout<<"                                   ----------REGULAR FOOD-----------        "<<endl<<endl<<endl;
cout<<"                                  1.Fast Food"<<endl;
cout<<"                                  2.Beverages"<<endl;
cout<<"                                  3.Desserts"<<endl;
cout<<"                                  4.Desi Food"<<endl;

cout<<"                                   __Deals Of The Week__"<<endl<<endl;
cout<<"         1-Monday-Tuesday                                                "                    <<"2-Wednesday-Thursday"<<endl;
cout<<"         Deal: 01                                                      Deal:02"<<endl;
// yaha jitni deal hai unky variable bana dy and mere code me jo mene samjhaya  iski trha
//price waghera rakhy dekhy samjh aw raha hai and dicuss bhe kry members se  then ye deal walo 
//ky variables wala kaam tu ho jae ga
cout<<"                 Mutton karhai     |                                      2 Paratha          |"<<endl; 
cout<<"                 Chawal roti       |                                      1/2 Chicken Karahi |"<<endl;
cout<<"                 Gandum roti       |                                      2 coldrinks 125ml  |"<<endl;
cout<<"                 fried fish        | --2999 Rs-/                          1 Chicken biryani  | --2889 Rs-/" <<endl;
cout<<"                 Raita             |                                      2 Tikka            |"<<endl;
cout<<"                 Chicken pulao     |                                      1 Fried Fish       |"<<endl;
cout<<"         __________________________|                                   ______________________|"<<endl<<endl;
  
cout<<"         3-Friday                                                        4-Saturday-Sunday"<<endl;
cout<<"         Deal: 03                  |                                   Deal:04               |"<<endl;
cout<<"                 1/2 Chicken Karhai|                                       1 Raita           |"<<endl;
cout<<"                 1 Saag            |                                       2 chicken Fried   |"<<endl;
cout<<"                 1 Daal            |                                       1 Mutton Handi    |"<<endl;
cout<<"                 1 Raita           |--2499 Rs-/                            1 Daal            |--2500 Rs-/"<<endl;
cout<<"                 2 Chawal Roti     |                                       4 Paratha         |"<<endl;
cout<<"                 6 Gandum roti     |                                       3 coldrinks 125ml |"<<endl;
cout<<"                 1 Mutton Biryani  |                                       4 Gandum roti     |"<<endl;
cout<<"         __________________________|                                    _____________________|"<<endl<<endl;
int choice;
cout<<"enter number for choice whether you have to choose deals or not "<<endl;
cout<<"enter 1 for deals and 2 for regular food :";
cin>>choice;
system("CLS");


if(choice==1)
{
int day;
cout<<"\n 1.Monday \n 2.Tuesday \n 3.wednesday \n 4.Thursday \n 5.Friday \n 6.Saturday \n 7.Sunday"<<endl;
cout<<"enter number of day :";
cin>>day;
     
	if(day==1)
{	int deal1money;
	cout<<" Here is the deal of Monday-Tuesday"<<endl<<endl;
cout<<"           Deal: 01   "<<endl;                                               

cout<<"                 Mutton karhai     |"<<endl;                                      
cout<<"                 Chawal roti       |"<<endl;                                      
cout<<"                 Gandum roti       |"<<endl;                                   
cout<<"                 fried fish        | --2999 Rs-/  "<<endl;                        
cout<<"                 Raita             |"<<endl;                                      
cout<<"                 Chicken pulao     |"<<endl;                                  
cout<<"         __________________________|"<<endl;

cout<<"Please Enter the money you have to buy Deal 01 : ";
cin>>deal1money; 


if(deal1money >= 2999)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";

} 
else if(day==2)
{	int deal2money;
	cout<<" Here is the deal of Monday-Tuesday"<<endl<<endl;
cout<<"           Deal: 01   "<<endl;                                               

cout<<"                 Mutton karhai     |"<<endl;                                      
cout<<"                 Chawal roti       |"<<endl;                                      
cout<<"                 Gandum roti       |"<<endl;                                   
cout<<"                 fried fish        | --2999 Rs-/  "<<endl;                        
cout<<"                 Raita             |"<<endl;                                      
cout<<"                 Chicken pulao     |"<<endl;                                  
cout<<"         __________________________|"<<endl;

cout<<"Please Enter the money you have to buy Deal 01 : ";
cin>>deal2money; 


if(deal2money >= 2999)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";

} 
else if(day==3)
{ int deal3money;
	cout<<" Here is the deal of Wednesday-Thursday"<<endl<<endl;
cout<<"           Deal: 02   "<<endl; 

cout<<"                 02 Paratha           |"<<endl;                                      
cout<<"                 Chicken karahi       |"<<endl;                                      
cout<<"                 02 Colddrinks        |"<<endl;                                   
cout<<"                 01 Chicken Biryani   | --2889 Rs-/  "<<endl;                        
cout<<"                 02 Tikka             |"<<endl;                                      
cout<<"                 01 Fried Fish        |"<<endl;                                  
cout<<"         _____________________________|"<<endl;


cout<<"Please Enter the money you have to buy Deal 02 : ";
cin>>deal3money; 


if(deal3money >= 2889)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";
	}	
else if(day==4)
{ int deal4money;
	cout<<" Here is the deal of Wednesday-Thursday"<<endl<<endl;
cout<<"           Deal: 02   "<<endl; 

cout<<"                 02 Paratha           |"<<endl;                                      
cout<<"                 Chicken karahi       |"<<endl;                                      
cout<<"                 02 Colddrinks        |"<<endl;                                   
cout<<"                 01 Chicken Biryani   | --2889 Rs-/  "<<endl;                        
cout<<"                 02 Tikka             |"<<endl;                                      
cout<<"                 01 Fried Fish        |"<<endl;                                  
cout<<"         _____________________________|"<<endl;

cout<<"Please Enter the money you have to buy Deal 01 : ";
cin>>deal4money; 


if(deal4money >= 2999)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";



	}	

else if(day==5)
{  int deal5money;
	cout<<" Here is the deal of Friday"<<endl<<endl;
cout<<"           Deal: 03   "<<endl; 

cout<<"                 1/2 Chicken Karhai      |"<<endl;                                      
cout<<"                 01 Saag                 |"<<endl;                                      
cout<<"                 01 Daal                 |"<<endl;                                   
cout<<"                 01 Raita                | --2499 Rs-/  "<<endl;                        
cout<<"                 02 Chawal Roti          |"<<endl;                                      
cout<<"                 06 Gandum Roti          |"<<endl; 
cout<<"                 01 Mutton Biryani       |"<<endl;                                 
cout<<"         ________________________________|"<<endl;
	
	cout<<"Please Enter the money you have to buy Deal 01 : ";
cin>>deal5money; 


if(deal5money >= 2499)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";
	
	
	
	}	
	
	
	else if(day==6)
{ int deal5money;
	cout<<" Here is the deal of Saturday-Sunday"<<endl<<endl;
cout<<"           Deal: 04   "<<endl; 

cout<<"                 01  Raita               |"<<endl;                                      
cout<<"                 02 CHICKEN Fried        |"<<endl;                                      
cout<<"                 01 Mutton Handi         |"<<endl;                                   
cout<<"                 01 Daal                 | --2500 Rs-/  "<<endl;                        
cout<<"                 04 Paratha              |"<<endl;                                      
cout<<"                 03 Colddrinks 125ml     |"<<endl; 
cout<<"                 04 Gandum Roti          |"<<endl;                                 
cout<<"         ________________________________|"<<endl;

cout<<"Please Enter the money you have to buy Deal 01 : ";
cin>>deal5money; 


if(deal5money >= 2999)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";


	}
	
	else if(day==7)
{ int deal6money;
	cout<<" Here is the deal of Saturday-Sunday"<<endl<<endl;
cout<<"           Deal: 04   "<<endl; 

cout<<"                 01  Raita               |"<<endl;                                      
cout<<"                 02 CHICKEN Fried        |"<<endl;                                      
cout<<"                 01 Mutton Handi         |"<<endl;                                   
cout<<"                 01 Daal                 | --2500 Rs-/  "<<endl;                        
cout<<"                 04 Paratha              |"<<endl;                                      
cout<<"                 03 Colddrinks 125ml     |"<<endl; 
cout<<"                 04 Gandum Roti          |"<<endl;                                 
cout<<"         ________________________________|"<<endl;

cout<<"Please Enter the money you have to buy Deal 01 : ";
cin>>deal6money; 


if(deal6money >= 2500)
cout<<"Thankyou for your confirmation, Your deal will be served to you in a short while.";
 else cout<<"Sorry,ur money does not meet our criteria";


	}
	
		} 
	
	
	  
else if(choice==2)
{  int reglrfud;
cout<<"In the regular food options provided,pick any one number,\n and you'll receive the corresponding items according to their menu :"<<endl;
cout<<"         1.Fast Food"<<endl;
cout<<"         2.Beverages"<<endl;
cout<<"         3.Desserts"<<endl;
cout<<"         4.Desi Food"<<endl<<endl<<endl;
	cin>>reglrfud;


system("CLS"); 

if(reglrfud==1) 
{	int item;
    int itemoney;
	cout<<" ----FAST-FOOD----"<<endl<<endl;                                               

cout<<"                1. 01 Zinger burger       |--200 Rs-/"<<endl;                                      
cout<<"                2. 01 Qtr Broast          |--200 Rs-/"<<endl;                                      
cout<<"                3. 02 Small Pizza         |--500 Rs-/"<<endl;                                   
cout<<"                4. 01 Zinger Crispy Roll  |--250 Rs-/  "<<endl;                        
cout<<"                5. 04 Chicken Pieces      |--300 Rs-/"<<endl;                                      
cout<<"                6. 01 Loaded Fries        |--239 Rs-/"<<endl;                                  
cout<<"           _______________________________|"<<endl;

cout<<"Enter the number of your selected item:";
cin>>item;


if(item==1 ) 
{   int qt1; 
    cout<<"How many zinger burger you want to order?"<<endl;
    cin>>qt1; 
    cout<<"Enter the amount of money you have to buy this item:";
    
cin>>itemoney;
if ((qt1==2)&&(itemoney>=400)||(qt1==1)&&(itemoney>=200)||(qt1==3)&&(itemoney>=600)||(qt1==4)&&(itemoney>=800)||(qt1==5)&&(itemoney>=1000))
{

cout<<"  __Your"<<qt1<<" Zinger burger will be served to you Shortly, Thanks!__";

} else cout<<"Sorry,your money doesnt meet the criteria.";

}
else if(item==2)
{  int qt2;
    cout<<"How many Qtr Broast you want to order?"<<endl;
    cin>>qt2;
    cout<<"Enter the amount of money you have to buy this item:";
    
cin>>itemoney;

if((qt2==2)&&(itemoney>=400)||(qt2==1)&&(itemoney>=200)||(qt2==3)&&(itemoney>=600)||(qt2==4)&&(itemoney>=800))
	cout<<"  __Your"<<qt2<<" Qtr Broast will be served to you Shortly, Thanks!__"; 
} else cout<<"Sorry,your money doesnt meet the criteria."; 

if(item==3)
{   int qt3;
    cout<<"How many Small pizza  you want to order?"<<endl;
    cin>>qt3;
    cout<<"Enter the amount of money you have to buy this item:";
    
cin>>itemoney;

if((qt3==2)&&(itemoney>=1000)||(qt3==1)&&(itemoney>=500)||(qt3==3)&&(itemoney>=1500)||(qt3==4)&&(itemoney>=2000))
	cout<<"  __Your"<<qt3<<" Qtr Broast will be served to you Shortly, Thanks!__"; 
} else cout<<"Sorry,your money doesnt meet the criteria."; 


 
if ((item==4)&&(itemoney>=250))
{  int qt4;
    cout<<"How many Zinger crispy Roll you want to order?"<<endl;
    cin>>qt4;
	cout<<" \n\n  _Your "<<qt4<<"Zinger crispy Roll will be served to you Shortly, Thanks_!";
}
else if((item==5)&&(itemoney>=300))
{  int qt5;
    cout<<"How many Chicken Pieces you want to order?"<<endl;
    cin>>qt5;
cout<<"  \n\n  _Your "<<qt5<<"Chicken Pieces will be served to you Shortly, Thanks_!";
}
else if ((item==6)&&(itemoney>=239))
{     int qt6;
    cout<<"How many Loaded fries you want to order?"<<endl;
    cin>>qt6;
    
cout<<"    \n\n __Your"<<qt6<<" loaded Fries will be served to you Shortly, Thanks!__";
}
else cout<<" \n\n __Sorry, ur range doesn't meet the criteria!__";
} 

else if(reglrfud==2)
{	int drinknum;
	cout<<" ----COLD-BEVERAGES----"<<endl<<endl;                                               

cout<<"                1. 01 Mineral Water Large   |--75 Rs-/"<<endl;                                      
cout<<"                2. 01 Papita Milk Shake     |--200 Rs-/"<<endl;                                      
cout<<"                3. 01 Mango Shake           |--500 Rs-/"<<endl;                                   
cout<<"                4. 01 Banana Milkshake      | --250 Rs-/  "<<endl;                        
cout<<"                5. 01 Chikoo Milkshake      |--300 Rs-/"<<endl;                                      
cout<<"                6. 01 Strawberry Milkshake  |--250"<<endl; 

    cout<<" ----HOT-BEVERAGES----"<<endl<<endl;
    
cout<<"                7. 01 Milk Tea              |--65 Rs-/"<<endl;                                      
cout<<"                8. 01 Fruit Tea             |--80 Rs-/"<<endl;                                      
cout<<"                9. 01 Green Tea             |--50 Rs-/"<<endl;                                   
cout<<"               10. 01 Milk Coffee           | --85 Rs-/  "<<endl;                        
cout<<"               11. 01 Cardamom Tea          |--75 Rs-/"<<endl;                                      
cout<<"               12. 01 Chocolate Tea         |--75 Rs-/"<<endl; 
cout<<"         ___________________________________|"<<endl;

cout<<"Enter the number of your selected beverage:";
cin>>drinknum;

 if(drinknum==1)
{
	int quantity;
	cout<<"how many mineral water you want to order?"<<endl;
	cin>>quantity;
	cout<<"Your "<<quantity<<" Mineral Water Large will be served to you Shortly, Thanks!";
}
else if(drinknum==2)
{
	int q2;
	cout<<"How many Papita Milk you want to order?"<<endl;
	cin>>q2;
	cout<<"Your"<<q2<<" Papita Milk Shake will be served to you Shortly, Thanks!";
}
else if(drinknum==3)
{   int q3;
    cout<<"How many  you want to order?"<<endl;
	cin>>q3;
	cout<<"Your 01 Mango Shake will be served to you Shortly, Thanks!";
}
else if (drinknum==4)
{   int q4;
    cout<<"How many Banana shakes you want to order?"<<endl;
	cin>>q4;
cout<<"Your" <<q4<<"Banana Milk Shake will be served to you Shortly, Thanks!";
}	
else if (drinknum==5)
{  int q5;
    cout<<"How many chikoo shake you want to order?"<<endl;
	cin>>q5;
cout<<"Your "<<q5<<"chikoo Shake will be served to you Shortly, Thanks!";
}	
else if(drinknum==6) 
{  int q6;
    cout<<"How many  Strawberry milk you want to order?"<<endl;
	cin>>q6;
cout<<"Your "<<q6<<" Strawberry milk Shake will be served to you Shortly, Thanks!";
}
else if(drinknum==7)
{ int q7;
    cout<<"How many Milk tea  you want to order?"<<endl;
	cin>>q7;
cout<<"Your "<<q7<<" Milk Tea will be served to you Shortly, Thanks!";
}
else if(drinknum==8)
{ int q8;
    cout<<"How many Fruit tea you want to order?"<<endl;
	cin>>q8;
cout<<"Your "<< q8<<"Fruit Tea will be served to you Shortly, Thanks!";
}
else if(drinknum==9)
{ int q9;
    cout<<"How many Green tea you want to order?"<<endl;
	cin>>q9;
cout<<"Your"<<q9 <<"Green Tea will be served to you Shortly, Thanks!";
}
else if(drinknum==10)
{  int q10;
    cout<<"How many Milk coffee  you want to order?"<<endl;
	cin>>q10;
cout<<"Your"<<q10<<" Milk Coffee will be served to you Shortly, Thanks!";
}
else if (drinknum==11)
{ int q11;
    cout<<"How many Cardamom tea you want to order?"<<endl;
	cin>>q11;
cout<<"Your "<<q11<<" Cardamom Tea will be served to you Shortly, Thanks!";
}
else if(drinknum==12)
{ int q12;
    cout<<"How many Chocolate tea you want to order?"<<endl;
	cin>>q12;
cout<<"Your "<<q12<<" Chocolate Tea will be served to you Shortly, Thanks!";
}
else 
cout<<" Sorry, Invalid selection!";
}

else if(reglrfud==3) 
{	int Desertnum;
    int itemoney;
	cout<<" ----DESSERTS----"<<endl<<endl;                                               

cout<<"                1. Gulab Jamun            |--200 Rs-/"<<endl;                                      
cout<<"                2. 01 Kheer               |--200 Rs-/"<<endl;                                      
cout<<"                3. 01 Mango Ice-Cream     |--250 Rs-/"<<endl;                                   
cout<<"                4. 01 Pista Ice-Cream     |--250 Rs-/  "<<endl;                        
cout<<"                5. 04 Falooda             |--300 Rs-/"<<endl;                                      
cout<<"                6. 01 Kulfi               |--200 Rs-/"<<endl;                                  
cout<<"           _______________________________|"<<endl;

cout<<"Enter the number of your selected item:";
cin>>Desertnum;
cout<<"Enter the amount of money you have to buy this item:";
cin>>itemoney;

if((Desertnum==1 ) && (itemoney >= 200)) 
{
	cout<<"  __Your Gulab Jamun will be served to you Shortly, Thanks!__";
}
else if((Desertnum==2) && (itemoney >= 200))
{
	cout<<"  __Your Kheer will be served to you Shortly, Thanks!__";
}
else if((Desertnum==3) && (itemoney >= 250))
{
	cout<<"  __Your Mango Ice-Cream will be served to you Shortly, Thanks!__";
}
else if ((Desertnum==4)&&(itemoney>=250))
{
	cout<<" \n\n  _Your Pista Ice-Cream Roll will be served to you Shortly, Thanks_!";
}
else if((Desertnum==5)&&(itemoney>=300))
{
cout<<"  \n\n  _Your Falooda will be served to you Shortly, Thanks_!";
}
else if ((Desertnum==6)&&(itemoney>=200))
{
cout<<"    \n\n __Your Kulfi will be served to you Shortly, Thanks!__";
}
else cout<<" \n\n _Invalid Selection_";
} 
else if (reglrfud==4)
{
	int desinum;
	int itemoney;
		cout<<" ----DESI FOOD----"<<endl<<endl;                                               

cout<<"                1. Haleem           |--350 Rs-/"<<endl;                                      
cout<<"                2. 01 Karhai        |--500Rs-/"<<endl;                                      
cout<<"                3. 01 Biryani       |--350 Rs-/"<<endl;                                   
cout<<"                4. 01 Saag          |--250 Rs-/  "<<endl;                        
cout<<"                5. 01 Chicken Pulao |--300 Rs-/"<<endl;                                      
cout<<"                6. 01 Beh           |--200 Rs-/"<<endl;                                  
cout<<"           _________________________|"<<endl;

cout<<"Enter the number of your selected item:";
cin>>desinum;
cout<<"Enter the amount of money you have to buy this item:";
cin>>itemoney;

if((desinum==1 ) && (itemoney >= 350)) 
{
	cout<<"  __Your Haleem will be served to you Shortly, Thanks!__";
}
else if((desinum==2) && (itemoney >= 500))
{
	cout<<"  __Your Karhai will be served to you Shortly, Thanks!__";
}
else if((desinum==3) && (itemoney >= 350))
{
	cout<<"  __Your Biryani will be served to you Shortly, Thanks!__";
}
else if ((desinum==4)&&(itemoney>=250))
{
	cout<<" \n\n  _Your Saag will be served to you Shortly, Thanks_!";
}
else if((desinum==5)&&(itemoney>=300))
{
cout<<"  \n\n  _Your Chicken Pulao will be served to you Shortly, Thanks_!";
}
else if ((desinum==6)&&(itemoney>=200))
{
cout<<"    \n\n __Your Beh will be served to you Shortly, Thanks!__";
}
else cout<<" \n\n _Invalid Selection_";
} 
}

return 0;
}
