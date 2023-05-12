#include<iostream>
     using std::cout;
     using std::cin;
     using std::endl;
     class CarParking
{
protected:
int u_input,amount,count,car,bus,rikshaw,bike,truck;
public: 
CarParking(){
amount=0;
count=0;
car=0;
rikshaw=0;
bike=0;
truck=0;
}
int getuinput()
{
	 return u_input;
}
 int getamount()
{
	 return amount;
}
int  getcount()
{
	 return count;
}
int  getcar()
{
	 return car;
}
int getbike ()
{
	 return bike;
}int getrikshaw()
{
	 return rikshaw;
}
int gettruck()
{
	 return truck;
}
int getbus()
{
	 return bus;
}
void setinput(int up)
{
	u_input=up;
}
void  setamount( int am)
{
	amount=am;
}
void setcount(int co)
{
	count=co;
}
void setcar(int c)
{
	car=c;
}
void setbike(int sb)
{
	bike=sb;
}
void setrikshaw(int ri)
{
	rikshaw=ri;
}
void settruck(int tr)
{
	truck=tr;
}
void setbus(int bu)
{
	bus=bu;
}
public:
void getinput(){
	cout<<"\n\n\t\t\t\t Welcome To Telecom Car Parking System!!\n"<<endl;
	cout<<"\tToken 1 for Bike\t\t\t"<<endl;
	cout<<"\tToken 2 for Rickshaw\t\t\t"<<endl;
	cout<<"\tToken 3 for Car\t\t\t\t"<<endl;
	cout<<"\tToken 4 for Bus\t\t\t\t"<<endl;
	cout<<"\tToken 5 for Truck\t\t\t"<<endl;
	cout<<"\tToken 6 for Show Record\t\t\t"<<endl;
	cout<<"\tToken 7 for Delete Record\t\t"<<endl;
}
public:
void Basic(){
while (true)
    {
        cout<<"Press the Token Number : ";
        cin>>u_input;
      if (u_input == 1)
	{
	 if (count <= 50)
	    {
amount = amount + 50;
	      count = count + 1;
	      bike = bike + 1;
	    }
	  else
	    cout << "No More parking!"<<endl;
	}
    else  if (u_input == 2)
	{
if (count <= 50)
	    {
	      amount = amount + 100;
	      count = count + 1;
	      rikshaw = rikshaw + 1;
	    }
else
	    cout << "No More parking!"<<endl;
	}
      else if (u_input == 3)
	{
if (count <= 50)
	    {
amount = amount + 150;
	      count = count + 1;
	      car = car + 1;
	    }
	  else
	    cout << "No more parking!"<<endl;
	}
      else if (u_input == 4)
	{
if (count <= 50)
	    {
amount = amount + 200;
	      count = count + 1;
	      bus = bus + 1;
	    }
	  else
	    cout << "No more parking !" << endl;
	}
      else if (u_input == 5)
	{
if (count <= 50)
	    {
amount = amount + 250;
	      count = count + 1;
	      truck = truck + 1;
	    }
	  else
	 cout << "No more parking !" << endl;
	}
      else if (u_input == 6)
	{
cout << "\t\t\t\t*****"<< endl;
cout << "\t\t\t\tThe total amount = " << amount << endl;
cout << "\t\t\t\tThe total number of Vehicals Parked = " << count <<endl;
	  cout << "\t\t\t\tThe total number of bikes=" << bike<< endl;
	  cout << "\t\t\t\tThe total number of Cars = " << car << endl;
	  cout << "\t\t\t\tThe total number of Buses = " << bus << endl;
	  cout << "\t\t\t\tThe total number of Rickshaw's' = " << rikshaw <<
	    endl;
	  cout << "\t\t\t\tThe total number of trucks=" << truck << endl;
	  cout << "\t\t\t\t*****" << endl;
	}
       else if (u_input == 7)
	{
cout << "\t\t\t\t\t****"
	    << endl;
	  amount = 0;
	  count = 0;
	  bike = 0;
	  car = 0;
	  bus = 0;
	  truck = 0;
	  rikshaw = 0;
	  cout << "\t\t\t\t\t****" << endl;
	  cout << "\n\t\t\t\t\t\t#RECORD DELETED#" << endl;
	  cout << "\t\t\t\t\t*****" << endl;
	}
    }
}
};
class DomesticClass :public CarParking{
public:
DomesticClass():CarParking(){

}

void getdcinput(){
	getinput();

}
};

class BussinessClass:public CarParking
{
public:
BussinessClass():CarParking(){

}
public : 
void getbcinput(){
    
}

};

int main () {
char ch;
cout<<"Enter the Choice \n A for Domestic Parking \n B for  Bussiness Parking " ;
cin>>ch;
switch ( ch )
{
case 'A':
{
cout<<"\n*** Welcome to Domestic Parking ****";
DomesticClass DC;
DC.getinput();
DC.Basic();
}
case 'B': 
{
cout<<"\n ***Welcome To Bussiness Parking ***";
BussinessClass BC;
BC.getinput();
BC.Basic();
} 
default:
{ cout<<"wrong choice";
}
}
}
