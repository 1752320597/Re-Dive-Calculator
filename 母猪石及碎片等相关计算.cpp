#include <bits/stdc++.h>
using namespace std;

int main()
{
  for(;;)
  {

    int now_price=0,now_buy=0,now_sp=0,now_star=0,want_star=0,need_sp=0,need_mzs=0,now_mzs=0;
    int s[4]= {30,100,120,150};
    int price[5]= {1,2,3,4,5};
    int price_num [5]= {20,40,60,80,100};
    cout<<"�����뵱ǰ��Ƭ������";
    for(int i =0; i<1;)
    {
      cin>>now_star;
      if((now_star >5)||(now_star<1))
      {
        cout<<"������������ȷ����ֵ��"<<endl<<"���뵱ǰ��Ƭ������" ;
      }
      else
      {
        i=1;
      }
    }

    cout<<"�����뵱ǰ��Ƭ���е���Ƭ��";
    for(int i =0; i<1;)
    {
      cin>>now_sp;
      if(((now_sp >s[now_star-1])||(now_sp<0)))
      {
        cout<<"������������ȷ����ֵ��"<<endl<<"�����뵱ǰ��Ƭ���е���Ƭ��" ;
      }
      else
      {
        i=1;
      }
    }

    cout<<"������ϣ����������������";
    for(int i =0; i<1;)
    {
      cin>>want_star;
      if(((want_star<now_star)&&(now_sp<2)))
      {
        cout<<"������������ȷ����ֵ��"<<endl<<"������ϣ����������������" ;
      }
      else
      {
        i=1;
      }
    }

    cout<<"--------------------------------------------------------"<<endl;
    need_sp=0;
    for(int i = now_star-1; i<want_star-1; i++)
    {
      need_sp=need_sp+s[i];
    }
    need_sp=need_sp-now_sp;

    cout<<"����Ҫ"<<need_sp<<"��Ƭ�ſɴ�"<<now_star<<"��������"<<want_star<<"��"<<endl<<"--------------------------------------------------------"<<endl;
    //cout<<s[0];

    cout<<"�����뵱ǰĸ��ʯ�ļ۸�";
    cin>>now_price;
    cout<<"�����뵱ǰĸ��ʯ�ļ۸��Ѿ������������";
    cin>>now_mzs;
    int now_mzs_temp = now_mzs*now_price;
    need_mzs-=now_mzs_temp;
    if((now_mzs>0)&&(now_price<5))
    {
      need_mzs=now_price*(20-now_mzs);
      need_sp-=20-now_mzs;
      now_price+=1;
    }
    for(; now_price<6; )
    {
      if(need_sp>20)
      {
        need_mzs+=20*now_price;
        need_sp-=20;
        if (now_price<5)
        {
          now_price+=1;
        }
      }
      else
      {
        need_mzs+=need_sp*now_price;
        now_price+=1;
      }
    }
    //need_mzs+=1;
    cout<<"����Ҫ"<<need_mzs<<"��ʯ�ſɴ�"<<now_star<<"��������"<<want_star<<"��"<<endl<<"--------------------------------------------------------"<<endl;

    system("pause");
    system("CLS");
  }
  return 0;
}

