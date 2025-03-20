#include <iostream>

using namespace std;

int main()
{
   int choice,quantity;
   double prices={};
   double price=0.0,bill=0.0,payment,total=0.0;
   char customer,good;
   string pay;

    while(true)
    {
    cout <<"================Disini Stores===================="<< endl;
    cout<<"=================WEL COME TO THE OUR SHOP========="<<endl;
    cout<<"1.Rice (1 kg): LKR 150" << endl;
    cout<<"2.Wheat Flour (1 kg): LKR 120 " <<endl;
    cout<<"3.Sugar (1 kg): LKR 150" <<endl;
    cout<<"4.Salt (1 kg): LKR 50 "<<endl;
    cout<<"5.Lentils (1 kg): LKR 300 "<<endl;
    cout<<"6.Dahal (1 kg): LKR 300"<<endl;
    cout<<"7.Tea (1 kg): LKR 1,200 "<<endl;
    cout<<"8.Coffee (1 kg): LKR 2,000 "<<endl;
    cout<<"9.Soft Drinks (500ml): LKR 100 " <<endl;
    cout<<"10.Bottled Water (1.5L): LKR 100"<<endl;

    while(true)
    {
    cout<<"Enter your good code :"<<endl;
    cin>>choice;
    double prices[] = {150,120,150,50,300,1200,2000,100,100};
    price = prices[choice-1];
    cout<<"Enter your good quantity :"<<endl;
    cin>>quantity;
    bill = price*quantity;
    total+=bill;


    cout<<"If you have next good (y/n):";
    cin>>good;

    if(good=='y'||good=='Y')
    {
        continue;
    }
    else if(good=='N'||good=='n')
    {
        break;
    }
    }

    cout<<"Your Bill is :Rs."<<bill<<endl;
    cout <<"card payment(card)/cash payment(cash):";
    cin>>pay;

      if (pay == "card")
    {
        cout<< "Your bill is sucessfully!Thank you deal with us!"<<endl;
    }
    else if (pay == "cash")
    {
        cout<<"Enter your payment:";
        cin>>payment;
        double balance = payment - bill;
        cout<<"Your balance is :Rs."<<balance<<endl;
        cout<< "Your bill is sucessfully!Thank you deal with us!"<<endl;
    }

    cout<<"if you have next customer(y/n): ";
    cin >>customer;

      if (customer =='y'||customer=='Y')
    {
        continue;
    }
    else if (customer== 'N'||customer =='n')
    {
        break;
    }

    }
    return 0;
}
