#include <iostream>
#include <cstdlib>
using namespace std;
void line();
bool exit();
void economy();
void business_class();
void first_class();
char choose;
bool boolean;
int main() {
	string name;
 	int pass,conPass;
	 cout<<"Enter your name:";
	getline(cin,name);
	for(int i =1;i<=3;i++){
	cout<<"Enter your passward:";
	cin>>pass;
	cout<<"Confirm passward:";
	cin>>conPass;
	system("cls");
    if(pass!=conPass)
	{if (i<3)
	cout<<"Your passward is wrong.\n";
	else if (i==3)
  cout<<"You have enter the passsword three times wrong.\n";
 }
	else
	{
		line();
	cout<<"You are Welcome in AbrarFly program "<<name<<"^_^"<<endl;
	line();
	cout<<"Choose the type of ticket you want to purchase:\na.economy.\nb.business class.\nc.first class.\n";
  cin>>choose;
  switch(choose)
  {	case 'a':{  economy();
cout<<"Good bye "<<name<<" ^_^"<<endl;line ();break;}
    case 'b':{business_class();
cout<<"Good bye "<<name<<" ^_^"<<endl;line ();break;}
    case 'c':{ first_class();
cout<<"Good bye "<<name<<" ^_^"<<endl;
line ();break;}
    default:cout<<"You choose a wrong character.";
	cout<<"Good bye "<<name<<" ^_^ "<<endl;}






		break;}

	 	}
	return 0;
}
void line()
{cout<<"_____________________________________________________________\n";}

void economy(){
	int chairsNumbers_ForAdult,chairsNumbers_ForChaild,chairsNumbers_ForBaby;
	int originalPrice=300,priceChaild=150,priceBaby=30;
    int size;
    int chairsNumbers;
   for(int j=1;j==1;j++) {
   	line();
   	cout<<"The ticket price for adult is "<<originalPrice<<"$.\n";
   	cout<<"The ticket price for chaildern between(2-17)years is "<<priceChaild<<"$.\n";
   	cout<<"The ticket price for baby is under 2 years "<<priceBaby<<"$.\n";
   	line();
    if(exit()){
	break;}
   	line();
   	cout<<"How many passengers?\n";cin>>size;
   	string TravelNames[size];
   	cout<<"Enter the names of passengers::\n";
   	for(int s=0;s<size;++s){
   	cin>>TravelNames[s];}
   	line();
   	cout<<"The names of passenger\n";
   	for(int g=0;g<size;g++){
   	cout<<g+1<<".Passenger "<<TravelNames[g]<<endl;}
    line();
    if(exit()){
	break;}
   	line();
   	do{
   	cout<<"How many seats you want to book for adults?\n";
   	cin>>chairsNumbers_ForAdult;
   	cout<<"\nHow many seats you want to book for childern between(2-17)years is ?\n";
   	cin>>chairsNumbers_ForChaild;
   	cout<<"\nHow many seats you want to book for babies under 2 years ?\n";
   	cin>>chairsNumbers_ForBaby;
   	chairsNumbers=chairsNumbers_ForBaby+chairsNumbers_ForChaild+chairsNumbers_ForAdult;
   	if(chairsNumbers!=size){
   		cout<<"Sorry,number of passengers is not equal to the number of reserved seats.\n";line();}}
   		while(chairsNumbers!=size);
   		 int totalPrice_Adult=chairsNumbers_ForAdult*originalPrice;
         int totalPrice_Chaild=chairsNumbers_ForChaild*priceChaild;
         int totalPrice_baby=chairsNumbers_ForBaby*priceBaby;
         line();
    if(chairsNumbers_ForAdult>0){
   	cout<<"The amount of reserved seats for adults is "<<totalPrice_Adult<<"$.\n";}
   	 if(chairsNumbers_ForChaild>0){
   	  cout<<"The amount of reserved seats for childern is "<<totalPrice_Chaild<<"$.\n";}
    if(chairsNumbers_ForBaby>0){
   	  cout<<"The amount of reserved seats for babies is "<<totalPrice_baby<<"$.\n";}

   	line();
    if(exit()){
	break;}
   	line();
   	int total_Price=totalPrice_Adult+totalPrice_Chaild+totalPrice_baby;
   	do{
   	cout<<"The ticket value is "<<total_Price<<"$\n"<<"You have to pay the amount.\n";
    int money;
    cin>>money;
if (money==total_Price){
	cout<<"Have been booked.\n";
	line();
	for(int p=0;p<size;++p){
	cout<<"Have a nice trip "<<TravelNames[p]<<endl;}
	line();break;}
else if(money>total_Price){
	int rest=money-total_Price;
	cout<<"The rest of the paid "<<rest<<"$\n";
    cout<<"Have been booked.\n";
    line();
    for(int p=0;p<size;++p){
	cout<<"Have a nice trip "<<TravelNames[p]<<endl;}
    line();break;}
else if(money<total_Price){
	cout<<"You paid less than "<<total_Price<<"$\n";
	cout<<"Do you want\na.Re-enter the ticket value?.\nb.Reservation depends on your money?.\n";
	cin>>choose;
	line();
	switch(choose){
	case 'b':
	if((chairsNumbers_ForAdult>0)&&(money>=totalPrice_Adult)){
	cout<<"Have been booked for adult.\n";
	money=money-totalPrice_Adult;}
	else if(chairsNumbers_ForAdult>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve adult seats.\n";
	if((chairsNumbers_ForChaild>0)&&(money>=totalPrice_Chaild)){
	cout<<"Have been booked for childern.\n";
	money=money-totalPrice_Chaild;}
	else if(chairsNumbers_ForChaild>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve childern seats.\n";
	if((chairsNumbers_ForBaby>0)&&(money>=totalPrice_baby)){
	cout<<"Have been booked for babies.\n";
	money=money-totalPrice_baby;}
	else if(chairsNumbers_ForBaby>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve babies seats.\n";
	line();
	cout<<"The rest of the paid "<<money<<"$\n";
    line();
	cout<<"Have a nice trip.\n";
    line();break;
	 
	}}
    
   	}
	   while(choose=='a');//do..while
   	
   	
   }//for
}//function
bool exit(){
	 	cout<<"Do you want to exit out of the program?"<<endl;
	 	cout<<"a.Yes \t b.No\n";
	 	cin>>choose;
	 	line();
	 	switch (choose){
	 	case 'a':return 1;break;
	 	case 'b':return 0;break;}

}
void business_class(){
	int chairsNumbers_ForAdult,chairsNumbers_ForChaild,chairsNumbers_ForBaby;
	int originalPrice=500,priceChaild=250,priceBaby=50;
    int size;
    int chairsNumbers;
   for(int j=1;j==1;j++) {
   	line();
   	cout<<"The ticket price for adult is "<<originalPrice<<"$.\n";
   	cout<<"The ticket price for chaildern between(2-17)years is "<<priceChaild<<"$.\n";
   	cout<<"The ticket price for baby is under 2 years "<<priceBaby<<"$.\n";
   	line();
   	boolean=exit();
    if(boolean){
	break;}
   	line();
   	cout<<"How many passengers?\n";cin>>size;
   	string TravelNames[size];
   	cout<<"Enter the names of passengers::\n";
   	for(int s=0;s<size;++s){
   	cin>>TravelNames[s];}
   	line();
   	cout<<"The names of passenger\n";
   	for(int g=0;g<size;g++){
   	cout<<g+1<<".Passenger "<<TravelNames[g]<<endl;}
    line();
    boolean=exit();
    if(boolean){
	break;}
   	line();
   	do{
   	cout<<"How many seats you want to book for adults?\n";
   	cin>>chairsNumbers_ForAdult;
   	cout<<"\nHow many seats you want to book for childern between(2-17)years is ?\n";
   	cin>>chairsNumbers_ForChaild;
   	cout<<"\nHow many seats you want to book for babies under 2 years ?\n";
   	cin>>chairsNumbers_ForBaby;
   	chairsNumbers=chairsNumbers_ForBaby+chairsNumbers_ForChaild+chairsNumbers_ForAdult;
   	if(chairsNumbers!=size){
   		cout<<"Sorry,number of passengers is not equal to the number of reserved seats.\n";line();}}
   		while(chairsNumbers!=size);
   		 int totalPrice_Adult=chairsNumbers_ForAdult*originalPrice;
         int totalPrice_Chaild=chairsNumbers_ForChaild*priceChaild;
         int totalPrice_baby=chairsNumbers_ForBaby*priceBaby;
         line();
    if(chairsNumbers_ForAdult>0){
   	cout<<"The amount of reserved seats for adults is "<<totalPrice_Adult<<"$.\n";}
   	 if(chairsNumbers_ForChaild>0){
   	  cout<<"The amount of reserved seats for childern is "<<totalPrice_Chaild<<"$.\n";}
    if(chairsNumbers_ForBaby>0){
   	  cout<<"The amount of reserved seats for babies is "<<totalPrice_baby<<"$.\n";}

   	line();
    boolean=exit();
    if(boolean){
	break;}
   	line();
   	int total_Price=totalPrice_Adult+totalPrice_Chaild+totalPrice_baby;
   	do{
   	cout<<"The ticket value is "<<total_Price<<"$\n"<<"You have to pay the amount.\n";
    int money;
    cin>>money;
if (money==total_Price){
	cout<<"Have been booked.\n";
	line();
	for(int p=0;p<size;++p){
	cout<<"Have a nice trip "<<TravelNames[p]<<endl;}
	line();break;}
else if(money>total_Price){
	int rest=money-total_Price;
	cout<<"The rest of the paid "<<rest<<"$\n";
    cout<<"Have been booked.\n";
    line();
    for(int p=0;p<size;++p){
	cout<<"Have a nice trip "<<TravelNames[p]<<endl;}
    line();break;}
else if(money<total_Price){
	cout<<"You paid less than "<<total_Price<<"$\n";
	cout<<"Do you want\na.Re-enter the ticket value?.\nb.Reservation depends on your money?.\n";
	cin>>choose;
	line();
	switch(choose){
	case 'b':
	if((chairsNumbers_ForAdult>0)&&(money>=totalPrice_Adult)){
	cout<<"Have been booked for adult.\n";
	money=money-totalPrice_Adult;}
	else if(chairsNumbers_ForAdult>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve adult seats.\n";
	if((chairsNumbers_ForChaild>0)&&(money>=totalPrice_Chaild)){
	cout<<"Have been booked for childern.\n";
	money=money-totalPrice_Chaild;}
	else if(chairsNumbers_ForChaild>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve childern seats.\n";
	if((chairsNumbers_ForBaby>0)&&(money>=totalPrice_baby)){
	cout<<"Have been booked for babies.\n";
	money=money-totalPrice_baby;}
	else if(chairsNumbers_ForBaby>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve babies seats.\n";
	line();
	cout<<"The rest of the paid "<<money<<"$\n";
    line();
	cout<<"Have a nice trip.\n";
    line();break;
	 
	}}
    
   	}
	   while(choose=='a');//do..while
   	
   	
   }//for
}//function
void first_class(){
	int chairsNumbers_ForAdult,chairsNumbers_ForChaild,chairsNumbers_ForBaby;
	int originalPrice=800,priceChaild=400,priceBaby=90;
    int size;
    int chairsNumbers;
   for(int j=1;j==1;j++) {
   	line();
   	cout<<"The ticket price for adult is "<<originalPrice<<"$.\n";
   	cout<<"The ticket price for chaildern between(2-17)years is "<<priceChaild<<"$.\n";
   	cout<<"The ticket price for baby is under 2 years "<<priceBaby<<"$.\n";
   	line();
   	boolean=exit();
    if(boolean){
	break;}
   	line();
   	cout<<"How many passengers?\n";cin>>size;
   	string TravelNames[size];
   	cout<<"Enter the names of passengers::\n";
   	for(int s=0;s<size;++s){
   	cin>>TravelNames[s];}
   	line();
   	cout<<"The names of passenger\n";
   	for(int g=0;g<size;g++){
   	cout<<g+1<<".Passenger "<<TravelNames[g]<<endl;}
    line();
    boolean=exit();
    if(boolean){
	break;}
   	line();
   	do{
   	cout<<"How many seats you want to book for adults?\n";
   	cin>>chairsNumbers_ForAdult;
   	cout<<"\nHow many seats you want to book for childern between(2-17)years is ?\n";
   	cin>>chairsNumbers_ForChaild;
   	cout<<"\nHow many seats you want to book for babies under 2 years ?\n";
   	cin>>chairsNumbers_ForBaby;
   	chairsNumbers=chairsNumbers_ForBaby+chairsNumbers_ForChaild+chairsNumbers_ForAdult;
   	if(chairsNumbers!=size){
   		cout<<"Sorry,number of passengers is not equal to the number of reserved seats.\n";line();}}
   		while(chairsNumbers!=size);
   		 int totalPrice_Adult=chairsNumbers_ForAdult*originalPrice;
         int totalPrice_Chaild=chairsNumbers_ForChaild*priceChaild;
         int totalPrice_baby=chairsNumbers_ForBaby*priceBaby;
         line();
    if(chairsNumbers_ForAdult>0){
   	cout<<"The amount of reserved seats for adults is "<<totalPrice_Adult<<"$.\n";}
   	 if(chairsNumbers_ForChaild>0){
   	  cout<<"The amount of reserved seats for childern is "<<totalPrice_Chaild<<"$.\n";}
    if(chairsNumbers_ForBaby>0){
   	  cout<<"The amount of reserved seats for babies is "<<totalPrice_baby<<"$.\n";}

   	line();
    boolean=exit();
    if(boolean){
	break;}
   	line();
   	int total_Price=totalPrice_Adult+totalPrice_Chaild+totalPrice_baby;
   	do{
   	cout<<"The ticket value is "<<total_Price<<"$\n"<<"You have to pay the amount.\n";
    int money;
    cin>>money;
if (money==total_Price){
	cout<<"Have been booked.\n";
	line();
	for(int p=0;p<size;++p){
	cout<<"Have a nice trip "<<TravelNames[p]<<endl;}
	line();break;}
else if(money>total_Price){
	int rest=money-total_Price;
	cout<<"The rest of the paid "<<rest<<"$\n";
    cout<<"Have been booked.\n";
    line();
    for(int p=0;p<size;++p){
	cout<<"Have a nice trip "<<TravelNames[p]<<endl;}
    line();break;}
else if(money<total_Price){
	cout<<"You paid less than "<<total_Price<<"$\n";
	cout<<"Do you want\na.Re-enter the ticket value?.\nb.Reservation depends on your money?.\n";
	cin>>choose;
	line();
	switch(choose){
	case 'b':
	if((chairsNumbers_ForAdult>0)&&(money>=totalPrice_Adult)){
	cout<<"Have been booked for adult.\n";
	money=money-totalPrice_Adult;}
	else if(chairsNumbers_ForAdult>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve adult seats.\n";
	if((chairsNumbers_ForChaild>0)&&(money>=totalPrice_Chaild)){
	cout<<"Have been booked for childern.\n";
	money=money-totalPrice_Chaild;}
	else if(chairsNumbers_ForChaild>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve childern seats.\n";
	if((chairsNumbers_ForBaby>0)&&(money>=totalPrice_baby)){
	cout<<"Have been booked for babies.\n";
	money=money-totalPrice_baby;}
	else if(chairsNumbers_ForBaby>0)
	cout<<"Sorry, depending on your money, it is not enough to reserve babies seats.\n";
	line();
	cout<<"The rest of the paid "<<money<<"$\n";
    line();
	cout<<"Have a nice trip.\n";
    line();break;
	 
	}}
    
   	}
	   while(choose=='a');//do..while
   	
   	
   }//for
}//function
