#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;



 void start()
 {
    cout<<"********************************"<<endl;
    cout<<"     TRO CHOI OAN TU TI      "<<endl;
    cout<<endl;
    cout<<"1. BUA"<<endl;
    cout<<"2. BAO"<<endl;
    cout<<"3. KEO"<<endl;

 }

 void check(int so)
 {
    switch(so)
    {
      case 1: cout<<" BUA"<<endl;break;
      case 2: cout<<" BAO"<<endl;break;
      case 3: cout<<" KEO"<<endl;break;
    }
 }

int ramdom()
{
  srand(time(NULL));
  return rand()%3+1;
}

void ketQua(int soMay,int soNguoiNhap)
{
  if(soMay==soNguoiNhap)
  {
    cout<<"Ban va May hoa nhau"<<endl;
  }

  if(soMay<soNguoiNhap)
  {
    cout<<"Ban Thang "<<endl;
  }

  if(soMay>soNguoiNhap)
  {
    cout<<"Ban Thua "<<endl;
  }

}

void delay(long long  time)
{
  while(time--);


}

int main()
{
  int soNguoiNhap=0;
  int soMay=0;
  char temp;

  do
    {
      system("clear");
      start();
      cout<<"Ban chon : "<<endl;
      cin>>soNguoiNhap;
      cout<<"Ban da chon ";check(soNguoiNhap);
      soMay=ramdom();
      delay(1000000000);cout<<"**";

      cout<<endl;
      cout<<"May chon";check(soMay);
      ketQua(soMay,soNguoiNhap);

      cout<<"Ban co muon tiep tuc : Y/N"<<endl;
      cin>>temp;



    } while (temp=='y' || temp=='Y');







    return 0;
}
