#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class visit
{
protected:
    string name;
    int a;
public:
    getdata()
    {
        cin.ignore();
        getline(cin,name);
        nazifa:
        cout<<"Enter Ticket Amount(per person 20/=):";
        cin>>a;
    if(a==20)
    {
        cout<<"Thank you for payment."<<endl;
    }
    else if(a>20)
    {
        int r=a-20;
        cout<<"Thank You.You Will receive "<<r<<"tk "<<"back."<<endl;
    }
    else
    {
        cout<<"Sorry!The Amount is not enough.Please do it again."<<endl;
        goto nazifa;
    }
    }
};
class info
{
protected:
string sciname,found,genus;
public:
    getinfo(string n,string f,string g)
    {

        sciname=n;
        found=f;
         genus=g;
      cout<<"\nIt's scientific name is "<<sciname<<"."<<endl;
         cout<<"\nIt belongs to "<<genus<<" genus."<<endl;
      cout<<"\nWe can found a large number of this species in "<<found<<"."<<endl;
      cout<<"\n\t\t\t\tHope This Information Was Helpful For You."<<endl;
    }
};
class tiger:public info
{
public:
    gettiger()
    {
        cout<<"\t\t\t\t*Let's Get Introduced With Tiger*\n"<<endl;
        cout<<"\nTiger also known as-Royal Bangel Tiger is our national animal."<<endl;
        getinfo("Panthera tigris","Mangrove forest of Bangladesh","Panthera" );
    }
};
class magpie:public info
{
public:
    getmag()
    {
        cout<<"\t\t\t\t*Let's Get Introduced With Magpie*\n"<<endl;
        cout<<"\nMagpie particularly well known for their songs is our national bird."<<endl;
        getinfo("Copsychus saularis","Almost every cities and villages of Bangladesh","Copsychus" );
    }
};
class lily:public info
{
public:
    getlily()
    {
        cout<<"\t\t\t\t*Let's Get Introduced With Water-lily*\n"<<endl;
        cout<<"\nWater-lily or Shada Shapla is our national flower."<<endl;
        getinfo("Nymphaea nouchali","the countries ponds, haors and lakes","Nymphaea" );
    }
};
class jack:public info
{
public:
    getjack()
    {
        cout<<"\t\t\t\t*Let's Get Introduced With Jack-fruit*\n"<<endl;
        cout<<"\nJackfruit is our national fruit."<<endl;
        getinfo("Artocarpus heterophyllus","Gazipur,Tangail,Mymensingh,Khustia,Rangamati,Khagrachari and Narsingdi","Artocarpus(Moraceae)" );
    }
};
class hilsa:public info
{
public:
    gethilsa()
    {
         cout<<"\t\t\t\t*Let's Get Introduced With Hilsha*\n"<<endl;
        cout<<"\nHilsha is our national fish."<<endl;
        getinfo("Tenualosa ilisha","Padma River(the main distributary of the Ganges),Bangladesh","Tenualosa" );
    }
};
int main()
{
    tiger t;
    lily l;
    magpie m;
    jack j;
    hilsa h;
    visit v;
    int choice;
    char c;
    int me;
    cout<<"\t\t\t\t\t*Welcome To My Encyclopedia*\n"<<endl;
    cout<<"\t\t\t\t\t*******Hello New World*******"<<endl;
    cout<<"\n\t\t\t\t**Please Confirm Your Ticket/Tickets First.**"<<endl;
    cout<<"Enter Total Number Of Ticket/Tickets You Wanted To Have:";
    cin>>me;
    for(int i=0;i<me;i++)
    {
        cout<<"Enter "<<i+1<<" person name please:";
       v.getdata();
    }

do
{
   cout<<"\n\n\t\t\t\tHeres's An Intro To Our Nationals.\n\n";
cout<<"Here you can find some basic information about some of our national species."<<endl;
cout<<"\nSelect your favourite one:"<<endl;
cout<<"\t\t\t\t-------------------------"<<endl;
cout<<"\t\t\t\t|1 for Tiger\t\t]"<<endl;
cout<<"\t\t\t\t|2 for Magpie\t\t]"<<endl;
cout<<"\t\t\t\t|3 for Water-lily\t]"<<endl;
cout<<"\t\t\t\t|4 for Jack-fruit\t]"<<endl;
cout<<"\t\t\t\t|5 for Hilsha\t\t]"<<endl;
cout<<"\t\t\t\t-------------------------"<<endl;
    cout<<"Enter Your Choice:";
cin>>choice;
switch(choice)
{
case 1:
    {
        t.gettiger();
break;
    }
    case 2:
        m.getmag();
        break;
    {
break;
    }
    case 3:
        l.getlily();
        break;
    {
break;
    }
    case 4:
        j.getjack();
        break;
    {
break;
    }
    case 5:
        {
        h.gethilsa();
        break;
        }
    default:
        {
            cout<<"Sorry! Invalid Choice:).Do it again please."<<endl;
        }
}
cout<<"\n\t\t\t\tDo You Want To Continue?"<<endl;
cout<<"\t\t\t\tPress Y/y for Continue:";
cin>>c;
}
while(c=='y'||c=='Y');
    getch();
}
