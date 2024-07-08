#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;
int D_TO_B.();
int D_TO_O.();
int D_TO_H.();
int B_TO_D.();
int O_TO_D.();
int H_TO_D.();
int B_TO_O.();
int B_TO_H.();
int O_TO_B.();
int H_TO_B.();
int O_TO_H.();
int H_TO_O.();


int D_TO_B();
int D_TO_O();
int D_TO_H();
int B_TO_D();
int O_TO_D();
int H_TO_D();
int B_TO_O();
int B_TO_H();
int O_TO_B();
int H_TO_B();
int O_TO_H();
int H_TO_O();


int BINARY_BIYOG();
int BINARY_JOG();
int BINARY_BIYOG_._();
int BINARY_JOG_._();
int FIRST_COMPLEMENT();
int SECOUND_COMPLEMENT();
int PORIPUROK();


int HEX-HEX();
int HEX+HEX();
int HEX-HEX_._();
int HEX+HEX_._();
int OCTAL-OCTAL();
int OCTAL+OCTAL();
int OCTAL-OCTAL_._();
int OCTAL+OCTAL_._();
int main()
{
    D_TO_B.();
    D_TO_O.();
    D_TO_H.();
    B_TO_D.();
    O_TO_D.();
    H_TO_D.();
    B_TO_O.();
    B_TO_H.();
    O_TO_B.();
    H_TO_B.();
    O_TO_H.();
    H_TO_O.();


    D_TO_B();
    D_TO_O();
    D_TO_H();
    B_TO_D();
    O_TO_D();
    H_TO_D();
    B_TO_O();
    B_TO_H();
    O_TO_B();
    H_TO_B();
    O_TO_H();
    H_TO_O();


    BINARY_BIYOG();
    BINARY_JOG();
    BINARY_BIYOG_._();
    BINARY_JOG_._();
    FIRST_COMPLEMENT();
    SECOUND_COMPLEMENT();
    PORIPUROK();


    HEX-HEX();
    HEX+HEX();
    HEX-HEX_._();
    HEX+HEX_._();
    OCTAL-OCTAL();
    OCTAL+OCTAL();
    OCTAL-OCTAL_._();
    OCTAL+OCTAL_._();
}
int D_TO_B.()
{
    int ans=0;
    int i;
    string n;
    string m;
    cin>>n;
    int b=stoi(n);
    int x=1;
    while(x<=b)
    {
        x=x*2;
    }
    x=x/2;
    while(x>0)
    {
        int lastdigit=b/x;
        b=b-lastdigit*x;
        x=x/2;
        ans=ans*10+lastdigit;
    }
    cout<<ans<<'.';
    for(i=0;n[i]!='.';i++)
    {
        continue;
    }
    for(int l=i;n[l]!='\0';l++)
    {
        m=m+n[l];
    }
    stringstream convert;
    convert<<m;
    float f;
    convert>>f;
    for(int j=1;j<=5;j++)
    { 
        int r=f*2;
        float k=(f*2)-r;
        f=k;
        cout<<r;
    }
}
int D_TO_O.()
{
    int ans=0;
    int i;
    string n;
    string m;
    cin>>n;
    int b=stoi(n);
    int x=1;
    while(x<=b)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=b/x;
        b=b-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans<<'.';
    for(i=0;n[i]!='.';i++)
    {
        continue;
    }
    for(int l=i;n[l]!='\0';l++)
    {
        m=m+n[l];
    }
    stringstream convert;
    convert<<m;
    float f;
    convert>>f;
    for(int j=1;j<=5;j++)
    { 
        int r=f*8;
        float k=(f*8)-r;
        f=k;
        cout<<r;
    }
}
int D_TO_H.()
{
    string l;
    string m;
    string ans,out;
    cin>>l;
    int i;
    int x=1;
    int n=stoi(l);
    while(x<=n)
    {
        x=x*16;
    }
    x=x/16;
    while(x>0)
    {
        int lastdigit=n/x;
        n=n-lastdigit*x;
        x=x/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans<<'.';
    for(i=0;l[i]!='.';i++)
    {
        continue;
    }
    for(int j=i;l[j]!='\0';j++)
    {
        m=m+l[j];
    }
    stringstream convert;
    convert<<m;
    float f;
    convert>>f;
    for(int j=1;j<=5;j++)
    { 
        int r=f*16;
        float k=(f*16)-r;
        f=k;
        if(r<=9)
        {
            cout<<r;
        }
        else
        {
            char c='A'+r-10;
            cout<<c;
        }
    }
}
int B_TO_D.()
{
    string n;
    string o;
    cin>>n;
    int e=stoi(n);
    int m=0;
    float w=0.00;
    int i;
    for(int i=0;e>0;i++){
        int k=e%10;
        m=m+(k*pow(2,i));
        e=e/10;
    }
    for(i=0;n[i]!='.';i++)
    {
        continue;
    }
    for(int j=i+1;n[j]!='\0';j++)
    {
        o=o+n[j];
    }
    int x=o.size();
    for(int j=0;j<=x-1;j++)
    {
        int l=o[j]-48;
        w=w+(l*pow(2,-(j+1)));
    }
    cout<<m+w;
}
int O_TO_D.()
{
    string n;
    string o;
    cin>>n;
    int e=stoi(n);
    int m=0;
    float w=0.00;
    int i;
    for(int i=0;e>0;i++){
        int k=e%10;
        m=m+(k*pow(8,i));
        e=e/10;
    }
    for(i=0;n[i]!='.';i++)
    {
        continue;
    }
    for(int j=i+1;n[j]!='\0';j++)
    {
        o=o+n[j];
    }
    int x=o.size();
    for(int j=0;j<=x-1;j++)
    {
        int l=o[j]-48;
        w=w+(l*pow(8,-(j+1)));
    }
    cout<<m+w;
}
int H_TO_D.()
{
    string n;
    float ooo=0.00;
    string mo;
    string ko;
    int i;
    cin>>n;
    for(i=0;n[i]!='.';i++)
    {
        mo=mo+n[i];
    }
    int m,k,l=0;
    int s=mo.size();
    for(int i=(s-1),e=0;i>=0;i--,e++){
        if(mo[i]<='9')
        { 
            m=mo[i]-48;
            k=m*pow(16,e);
            l=l+k;
        }else{
            m=(mo[i]-'A'+10)*pow(16,e);
            l=l+m;
        }
    }
    for(int j=i;n[j]!='\0';j++)
    {
        ko=ko+n[j];
    }
    int q=ko.size();
    for(int k=1;k<q;k++)
    {
        if(ko[k]<='9')
        {
            float cc=ko[k]-48;
            ooo=ooo+cc*pow((16),(-k));
        }
        else
        {
            float ff=ko[k]-'A'+10;
            ooo=ooo+ff*pow(16,(-k));
        }
    }
    cout<<l+ooo;
}
int B_TO_O.()
{
        string n;
    cin>>n;
    string ml;
    int d=0;
    string lo="0";
    string mk;
    int s=stoi(n);
    int m=0;
    int i;
    for(int ii=0;s>0;ii++)
    {
        int k=s%10;
        m=m+(k*pow(2,ii));
        s=s/10;
    }
    int ans=0;
    int x=1;
    while(x<=m)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans<<'.';
    for(i=0;n[i]!='.';i++)
    {
        continue;
    }
    for(int j=i+1;n[j]!='\0';j++)
    {
        mk=mk+n[j];
    }
    int a1=mk.size();
    int z=0;
    int y=0;
    again:for(int l=z,a=1;a<=3;l++,a++)
    {
        if(mk[l]!='\0')
        { 
            lo=lo+mk[l];
            y=y+1;
        }
        else
        {
            break;
        }
    }
    int xx=lo.size();
    for(int ll=xx;ll<=3;ll++)
    {
        lo=lo+"0";
    }
    z=z+3;
    int ss=stoi(lo);
    int m1=0;
    for(int ii=0;ss>0;ii++)
    {
        int k=ss%10;
        m1=m1+(k*pow(2,ii));
        ss=ss/10;
    }
    int ans1=0;
    int x1=1;
    while(x1<=m1)
    {
        x1=x1*8;
    }
    x1=x1/8;
    while(x1>0)
    {
        int lastdigit=m1/x1;
        m1=m1-lastdigit*x1;
        x1=x1/8;
        ans1=ans1*10+lastdigit;
    }
    cout<<ans1;
    lo="0";
    if(a1==y)
    {
        return 0;
    }
    else
    {
        goto again;
    }
}
int B_TO_H.()
{
    string n;
    cin>>n;
    string ml;
    string lo="0";
    string mk;
    long int s=stoi(n);
    int m=0;
    int i;
    for(int ii=0;s>0;ii++)
    {
        int k=s%10;
        m=m+(k*pow(2,ii));
        s=s/10;
    }
    string ans;
    int x=1;
    while(x<=m)
    {
        x=x*16;
    }
    x=x/16;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans<<'.';



    for(i=0;n[i]!='.';i++)
    {
        continue;
    }
    for(int j=i+1;n[j]!='\0';j++)
    {
        mk=mk+n[j];
    }
    int a1=mk.size();
    int z=0;
    int y=0;
    again:for(int l=z,a=1;a<=4;l++,a++)
    {
        if(mk[l]!='\0')
        { 
            lo=lo+mk[l];
            y=y+1;
        }
        else
        {
            break;
        }
    }
    int xx=lo.size();
    for(int ll=xx;ll<=4;ll++)
    {
        lo=lo+"0";
    }
    z=z+4;
    int ss=stoi(lo);
    int m1=0;
    if(ss==0)
    {
        cout<<ss;
    }
    for(int ii=0;ss>0;ii++)
    {
        int k=ss%10;
        m1=m1+(k*pow(2,ii));
        ss=ss/10;
    }
    string ans1;
    int x1=1;
    while(x1<=m1)
    {
        x1=x1*16;
    }
    x1=x1/16;
    while(x1>0)
    {
        int lastdigit=m1/x1;
        m1=m1-lastdigit*x1;
        x1=x1/16;
        if(lastdigit<=9)
        {
        ans1=ans1+to_string(lastdigit);
        }
        else
        {
            char c='A'+lastdigit-10;
            ans1.push_back(c);
        }
    }
    cout<<ans1;
    lo="0";
    if(a1==y)
    {
        return 0;
    }
    else
    {
        goto again;
    }
}
int O_TO_B.()
{
    string n;
    string kk,hh;
    string o,oo;
    int ii;
    cin>>n;
    for(ii=0;n[ii]!='.';ii++)
    {
        int l=n[ii]-48;
        int x=1;
        int ans=0;
        while(x<=l)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=l/x;
            l=l-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }
        kk=to_string(ans);
        int p=kk.size();
        for(int i=p;i<3;i++)
        {
            kk="0"+kk;
        }
        o=o+kk;
    }
    cout<<o<<'.';
    for(int j=ii+1;n[j]!='\0';j++)
    {
        int l=n[j]-48;
        int x=1;
        int ans=0;
        while(x<=l)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=l/x;
            l=l-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }
        hh=to_string(ans);
        int p=hh.size();
        for(int i=p;i<3;i++)
        {
            hh="0"+hh;
        }
        oo=oo+hh;
    }
    cout<<oo;
}
int H_TO_B.()
{
        int l,ll;
    string n;
    string kk,hh;
    string o,oo;
    int ii;
    cin>>n;
    for(ii=0;n[ii]!='.';ii++)
    {   
        if(n[ii]<='9')
        {  
            l=n[ii]-48;
        }
        else
        {
            l=n[ii]-'A'+10;
        }
        int x=1;
        int ans=0;
        while(x<=l)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=l/x;
            l=l-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }
        kk=to_string(ans);
        int p=kk.size();
        for(int i=p;i<4;i++)
        {
            kk="0"+kk;
        }
        o=o+kk;
    }
    cout<<o<<'.';
    for(int j=ii+1;n[j]!='\0';j++)
    {   
        if(n[j]<='9')
        {  
            ll=n[j]-48;
        }
        else
        {
            ll=n[j]-'A'+10;
        }
        int x=1;
        int ans=0;
        while(x<=ll)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=ll/x;
            ll=ll-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }    
        hh=to_string(ans);
        int p=hh.size();
        for(int i=p;i<4;i++)
        {
        hh="0"+hh;
        }
        oo=oo+hh;
    }
    cout<<oo;
}
int O_TO_H.()
{
    string n;
    string kk,hh;
    string o,oo;
    int ii;
    cin>>n;
    for(ii=0;n[ii]!='.';ii++)
    {
        int l=n[ii]-48;
        int x=1;
        int ans=0;
        while(x<=l)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=l/x;
            l=l-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }
        kk=to_string(ans);
        int p=kk.size();
        for(int i=p;i<3;i++)
        {
            kk="0"+kk;
        }
        o=o+kk;
    }
    for(int j=ii+1;n[j]!='\0';j++)
    {
        int l=n[j]-48;
        int x=1;
        int ans=0;
        while(x<=l)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=l/x;
            l=l-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }
        hh=to_string(ans);
        int p=hh.size();
        for(int i=p;i<3;i++)
        {
            hh="0"+hh;
        }
        oo=oo+hh;
    }

    string aa=o+"."+oo;
    string ml;
    string lo="0";
    string mk;
    long int s=stoi(aa);
    int m=0;
    int i;
    for(int ii=0;s>0;ii++)
    {
        int k=s%10;
        m=m+(k*pow(2,ii));
        s=s/10;
    }
    string ans;
    int x=1;
    while(x<=m)
    {
        x=x*16;
    }
    x=x/16;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans<<'.';



    for(i=0;aa[i]!='.';i++)
    {
        continue;
    }
    for(int j=i+1;aa[j]!='\0';j++)
    {
        mk=mk+aa[j];
    }
    int a1=mk.size();
    int z=0;
    int y=0;
    again:for(int l=z,a=1;a<=4;l++,a++)
    {
        if(mk[l]!='\0')
        { 
            lo=lo+mk[l];
            y=y+1;
        }
        else
        {
            break;
        }
    }
    int xx=lo.size();
    for(int ll=xx;ll<=4;ll++)
    {
        lo=lo+"0";
    }
    z=z+4;
    int ss=stoi(lo);
    int m1=0;
    if(ss==0)
    {
        cout<<ss;
    }
    for(int ii=0;ss>0;ii++)
    {
        int k=ss%10;
        m1=m1+(k*pow(2,ii));
        ss=ss/10;
    }
    string ans1;
    int x1=1;
    while(x1<=m1)
    {
        x1=x1*16;
    }
    x1=x1/16;
    while(x1>0)
    {
        int lastdigit=m1/x1;
        m1=m1-lastdigit*x1;
        x1=x1/16;
        if(lastdigit<=9)
        {
        ans1=ans1+to_string(lastdigit);
        }
        else
        {
            char c='A'+lastdigit-10;
            ans1.push_back(c);
        }
    }
    cout<<ans1;
    lo="0";
    if(a1==y)
    {
        return 0;
    }
    else
    {
        goto again;
    }
}
int H_TO_O.()
{
    int l,ll;
    string n;
    string kk,hh;
    string o,oo;
    int ii;
    cin>>n;
    for(ii=0;n[ii]!='.';ii++)
    {   
        if(n[ii]<='9')
        {  
            l=n[ii]-48;
        }
        else
        {
            l=n[ii]-'A'+10;
        }
        int x=1;
        int ans=0;
        while(x<=l)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=l/x;
            l=l-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }
        kk=to_string(ans);
        int p=kk.size();
        for(int i=p;i<4;i++)
        {
            kk="0"+kk;
        }
        o=o+kk;
    }
    for(int j=ii+1;n[j]!='\0';j++)
    {   
        if(n[j]<='9')
        {  
            ll=n[j]-48;
        }
        else
        {
            ll=n[j]-'A'+10;
        }
        int x=1;
        int ans=0;
        while(x<=ll)
        {
            x=x*2;   
        }
        x=x/2;
        while(x>0)
        {
            int lastdigit=ll/x;
            ll=ll-lastdigit*x;
            x=x/2;
            ans=ans*10+lastdigit;
        }    
        hh=to_string(ans);
        int p=hh.size();
        for(int i=p;i<4;i++)
        {
        hh="0"+hh;
        }
        oo=oo+hh;
    }
    string aa=o+"."+oo;
    string ml;
    int d=0;
    string lo="0";
    string mk;
    int s=stoi(aa);
    int m=0;
    int i;
    for(int ii=0;s>0;ii++)
    {
        int k=s%10;
        m=m+(k*pow(2,ii));
        s=s/10;
    }
    int ans=0;
    int x=1;
    while(x<=m)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans<<'.';
    for(i=0;aa[i]!='.';i++)
    {
        continue;
    }
    for(int j=i+1;aa[j]!='\0';j++)
    {
        mk=mk+aa[j];
    }
    int a1=mk.size();
    int z=0;
    int y=0;
    again:for(int l=z,a=1;a<=3;l++,a++)
    {
        if(mk[l]!='\0')
        { 
            lo=lo+mk[l];
            y=y+1;
        }
        else
        {
            break;
        }
    }
    int xx=lo.size();
    for(int ll=xx;ll<=3;ll++)
    {
        lo=lo+"0";
    }
    z=z+3;
    int ss=stoi(lo);
    int m1=0;
    for(int ii=0;ss>0;ii++)
    {
        int k=ss%10;
        m1=m1+(k*pow(2,ii));
        ss=ss/10;
    }
    int ans1=0;
    int x1=1;
    while(x1<=m1)
    {
        x1=x1*8;
    }
    x1=x1/8;
    while(x1>0)
    {
        int lastdigit=m1/x1;
        m1=m1-lastdigit*x1;
        x1=x1/8;
        ans1=ans1*10+lastdigit;
    }
    cout<<ans1;
    lo="0";
    if(a1==y)
    {
        return 0;
    }
    else
    {
        goto again;
    }
}
int BINARY_BIYOG()
{
    string a,b;
    cin>>a>>b;
    string vv;
    string pp;
    string ll;
    string m,h,r;
    int carry_value=0;
    char k;
    int s=a.size();
    int n=b.size();
    for(int i=s-1;i>=0;i--)
    {
        vv=vv+a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        pp=pp+b[i];
    }
    int ss1=vv.size();
    int nn1=pp.size();
    if(ss1<nn1)
    {
        for(int i=ss1;i!=nn1;i++)
        {
            vv=vv+"0";
        }
    }
    else if(ss1>nn1)
    {
        for(int i=nn1;i!=ss1;i++)
        {
            pp=pp+"0";
        }
    }
    int zz1=vv.size();
    for(int i=0;i<zz1;i++)
    {
        if(vv[i]=='0'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
            }
        }
        else if(vv[i]=='0'&&pp[i]=='1')
        {
            if(carry_value==0)
            { 
                k='1';
                carry_value=1;
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else if(vv[i]=='1'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='1';
            }
            else
            {
                k='0';
                carry_value=0;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r=r+k;
    }
    int p=r.size();
    for(int i=(p-1);i>=0;i--)
    {
        h=h+r[i];
    }
    cout<<carry_value<<h;
}
int BINARY_JOG()
{
    string a,b;
    cin>>a>>b;
    string vv;
    string pp;
    string ll;
    string m,h,r;
    int carry_value=0;
    char k;
    int s=a.size();
    int n=b.size();
    for(int i=s-1;i>=0;i--)
    {
        vv=vv+a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        pp=pp+b[i];
    }
    int ss1=vv.size();
    int nn1=pp.size();
    if(ss1<nn1)
    {
        for(int i=ss1;i!=nn1;i++)
        {
            vv=vv+"0";
        }
    }
    else if(ss1>nn1)
    {
        for(int i=nn1;i!=ss1;i++)
        {
            pp=pp+"0";
        }
    }
    int zz1=vv.size();
    for(int i=0;i<zz1;i++)
    {
        if(vv[i]=='0'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
                carry_value=0;
            }
        }
        else if(vv[i]=='0'&&pp[i]=='1'||vv[i]=='1'&&pp[i]=='0')
        {
            if(carry_value==0)
            { 
                k='1';
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
                carry_value=1;
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r=r+k;
    }
    int p=r.size();
    for(int i=(p-1);i>=0;i--)
    {
        h=h+r[i];
    }
    cout<<carry_value<<h;
}
int BINARY_BIYOG_._()
{
    string a,b;
    cin>>a>>b;
    string ans;
    string kk;
    string vv;
    string pp;
    string ll;
    string aa;
    string m,h,r;
    int carry_value=0;
    char k;
    int s=a.size();
    int n=b.size();
    for(int i=(s-1);a[i]!='.';i--)
    {
        kk=kk+a[i];
    }
    for(int l=(n-1);b[l]!='.';l--)
    {
        aa=aa+b[l];
    }
    int ss=kk.size();
    int nn=aa.size();
    if(ss<nn)
    {
        for(int i=ss;i!=nn;i++)
        {
            kk="0"+kk;
        }
    }
    else if(ss>nn)
    {
        for(int i=nn;i!=ss;i++)
        {
            aa="0"+aa;
        }
    }
    int zz=kk.size();
    for(int i=0;i<zz;i++)
    {
        if(kk[i]=='0'&&aa[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
            }
        }
        else if(kk[i]=='0'&&aa[i]=='1')
        {
            if(carry_value==0)
            { 
                k='1';
                carry_value=1;
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else if(kk[i]=='1'&&aa[i]=='0')
        {
            if(carry_value==0)
            {
                k='1';
            }
            else
            {
                k='0';
                carry_value=0;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        ans=ans+k;
    }
    int q=ans.size();
    for(int i=(q-1);i>=0;i--)
    {
        m=m+ans[i];
    }
    int w=m.size();
    for(int i=(s-w-2);i>=0;i--)
    {
        vv=vv+a[i];
    }
    for(int i=(n-w-2);i>=0;i--)
    {
        pp=pp+b[i];
    }
    int ss1=vv.size();
    int nn1=pp.size();
    if(ss1<nn1)
    {
        for(int i=ss1;i!=nn1;i++)
        {
            vv=vv+"0";
        }
        cout<<"vv="<<vv<<endl;
    }
    else if(ss1>nn1)
    {
        for(int i=nn1;i!=ss1;i++)
        {
            pp=pp+"0";
        }
    }
    int zz1=vv.size();
    for(int i=0;i<zz1;i++)
    {
        if(vv[i]=='0'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
            }
        }
        else if(vv[i]=='0'&&pp[i]=='1')
        {
            if(carry_value==0)
            { 
                k='1';
                carry_value=1;
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else if(vv[i]=='1'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='1';
            }
            else
            {
                k='0';
                carry_value=0;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r=r+k;
    }
    int p=r.size();
    for(int i=(p-1);i>=0;i--)
    {
        h=h+r[i];
    }
    cout<<carry_value<<h<<'.'<<m;
}
int BINARY_JOG_._()
{
     string a,b;
    cin>>a>>b;
    string ans;
    string kk;
    string vv;
    string pp;
    string ll;
    string aa;
    string m,h,r;
    int carry_value=0;
    char k;
    int s=a.size();
    int n=b.size();
    for(int i=(s-1);a[i]!='.';i--)
    {
        kk=kk+a[i];
    }
    for(int l=(n-1);b[l]!='.';l--)
    {
        aa=aa+b[l];
    }
    int ss=kk.size();
    int nn=aa.size();
    if(ss<nn)
    {
        for(int i=ss;i!=nn;i++)
        {
            kk="0"+kk;
        }
    }
    else if(ss>nn)
    {
        for(int i=nn;i!=ss;i++)
        {
            aa="0"+aa;
        }
    }
    int zz=kk.size();
    for(int i=0;i<zz;i++)
    {
        if(kk[i]=='0'&&aa[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
                carry_value=0;
            }
        }
        else if(kk[i]=='0'&&aa[i]=='1'||kk[i]=='1'&&aa[i]=='0')
        {
            if(carry_value==0)
            { 
                k='1';
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
                carry_value=1;
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        ans=ans+k;
    }
    int q=ans.size();
    for(int i=(q-1);i>=0;i--)
    {
        m=m+ans[i];
    }

    int w=m.size();
    for(int i=(s-w-2);i>=0;i--)
    {
        vv=vv+a[i];
    }
    for(int i=(n-w-2);i>=0;i--)
    {
        pp=pp+b[i];
    }
    int ss1=vv.size();
    int nn1=pp.size();
    if(ss1<nn1)
    {
        for(int i=ss1;i!=nn1;i++)
        {
            vv=vv+"0";
        }
    }
    else if(ss1>nn1)
    {
        for(int i=nn1;i!=ss1;i++)
        {
            pp=pp+"0";
        }
    }
    int zz1=vv.size();
    for(int i=0;i<zz1;i++)
    {
        if(vv[i]=='0'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
                carry_value=0;
            }
        }
        else if(vv[i]=='0'&&pp[i]=='1'||vv[i]=='1'&&pp[i]=='0')
        {
            if(carry_value==0)
            { 
                k='1';
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
                carry_value=1;
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r=r+k;
    }
    int p=r.size();
    for(int i=(p-1);i>=0;i--)
    {
        h=h+r[i];
    }
    cout<<carry_value<<h<<'.'<<m;
}
int D_TO_B()
{
    int n;
    string c;
    cin>>n;
    while(n>0)
    {
        int k=n%2;
        c=c+to_string(k);
        n=n/2;
    }
    int s=c.size();
    for(int i=s-1;i>=0;i--){
        cout<<c[i];
    }
}
int D_TO_O()
{
    int ans=0;
    int n;
    cin>>n;
    int x=1;
    while(x<=n)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=n/x;
        n=n-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}
int D_TO_H()
{
    string ans;
    int n;
    cin>>n;
    int x=1;
    while(x<=n)
    {
        x=x*16;
    }
    x=x/16;
    while(x>0)
    {
        int lastdigit=n/x;
        n=n-lastdigit*x;
        x=x/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans;
}
int B_TO_D()
{
    int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(2,i));
        n=n/10;
    }
    cout<<m;
}
int O_TO_D()
{
    int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    cout<<m;
}
int H_TO_D()
{
    string n;
    cin>>n;
    int m,k,l=0;
    int s=n.size();
    cout<<s<<endl;
    for(int i=(s-1),e=0;i>=0;i--,e++){
        if(n[i]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e);
            l=l+k;
        }else{
            m=(n[i]-'A'+10)*pow(16,e);
            l=l+m;
        }
    }
    cout<<l;
}
int B_TO_O()
{
        int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(2,i));
        n=n/10;
    }
    int ans=0;
    int x=1;
    while(x<=m)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}
int B_TO_H()
{
        int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(2,i));
        n=n/10;
    }
    string ans;
    int x=1;
    while(x<=m)
    {
        x=x*16;
    }
    x=x/16;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans;
}
int O_TO_B()
{
    int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    string c;
    while(m>0)
    {
        int k=m%2;
        c=c+to_string(k);
        m=m/2;
    }
    int s=c.size();
    for(int i=s-1;i>=0;i--){
        cout<<c[i];
    }
}
int H_TO_B()
{
    string n;
    cin>>n;
    int m,k,l=0;
    int s=n.size();
    for(int i=(s-1),e=0;i>=0;i--,e++){
        if(n[i]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e);
            l=l+k;
        }else{
            m=(n[i]-'A'+10)*pow(16,e);
            l=l+m;
        }
    }
    string c;
    while(l>0)
    {
        int k=l%2;
        c=c+to_string(k);
        l=l/2;
    }
    int ss=c.size();
    for(int i=ss-1;i>=0;i--){
        cout<<c[i];
    }
}
int O_TO_H()
{
        int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    string ans;
    int x=1;
    while(x<=m)
    {
        x=x*16;
    }
    x=x/16;
    while(x>0)
    {
        int lastdigit=m/x;
        m=m-lastdigit*x;
        x=x/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans;
}
int H_TO_O()
{
    string n;
    cin>>n;
    int m,k,l=0;
    int s=n.size();
    for(int i=(s-1),e=0;i>=0;i--,e++){
        if(n[i]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e);
            l=l+k;
        }else{
            m=(n[i]-'A'+10)*pow(16,e);
            l=l+m;
        }
    }
    int ans=0;
    int x=1;
    while(x<=l)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=l/x;
        l=l-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}
int FIRST_COMPLEMENT()
{
    string n;
    string l;
    cin>>n;   
    int k=n.size();
    for(int i=k+1;i<=8;i++)
    {
        n="0"+n;
    }
    for(int i=0;i<8;i++)
    {
        if(n[i]=='0')
        {
            l=l+"1";
        }
        else
        {
            l=l+"0";
        }
    }
    cout<<l;
}
int SECOUND_COMPLEMENT()
{
    string n;
    string l;
    cin>>n;   
    int kp=n.size();
    for(int i=kp+1;i<=8;i++)
    {
        n="0"+n;
    }
    cout<<"n="<<n<<endl;
    for(int i=0;i<8;i++)
    {
        if(n[i]=='0')
        {
            l=l+"1";
        }
        else
        {
            l=l+"0";
        }
    }
    cout<<"l="<<l<<endl;
    string b="1";
    string ll;
    string r,h;
    int carry_value=0;
    char k;
    int s=l.size();
    int nn=b.size();
    for(int i=nn;i!=s;i++)
    {
        b="0"+b;
    }
    cout<<"B="<<b<<endl;
    for(int i=7;i>=0;i--)
    {
        if(l[i]=='0'&&b[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
                carry_value=0;
            }
        }
        else if(l[i]=='0'&&b[i]=='1'||l[i]=='1'&&b[i]=='0')
        {
            if(carry_value==0)
            { 
                k='1';
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
                carry_value=1;
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r=r+k;
    }
    int p=r.size();
    for(int i=(p-1);i>=0;i--)
    {
        h=h+r[i];
    }
    cout<<carry_value<<h;
}
int PORIPUROK()
{
    int ahad,abid;
    cin>>ahad>>abid;
    int oo=min(ahad,abid);
    int no=max(ahad,abid);
    int x1=1;
    int ans1=0;
    while(x1<=no)
    {
        x1=x1*2;   
    }
    x1=x1/2;
    while(x1>0)
    {
        int lastdigit=no/x1;
        no=no-lastdigit*x1;
        x1=x1/2;
        ans1=ans1*10+lastdigit;
    }
    string n=to_string(ans1);
    string l;
    int x=1;
    int ans=0;
    while(x<=oo)
    {
        x=x*2;   
    }
    x=x/2;
    while(x>0)
    {
        int lastdigit=oo/x;
        oo=oo-lastdigit*x;
        x=x/2;
        ans=ans*10+lastdigit;
    }
    string ko=to_string(ans);
    int kp=ko.size();
    for(int i=kp+1;i<=8;i++)
    {
        ko="0"+ko;
    }
    for(int i=0;i<8;i++)
    {
        if(ko[i]=='0')
        {
            l=l+"1";
        }
        else
        {
            l=l+"0";
        }
    }
    string b="1";
    string r,h;
    int carry_value=0;
    char k;
    int s=l.size();
    int nn=b.size();
    for(int i=nn;i!=s;i++)
    {
        b="0"+b;
    }
    for(int i=7;i>=0;i--)
    {
        if(l[i]=='0'&&b[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
                carry_value=0;
            }
        }
        else if(l[i]=='0'&&b[i]=='1'||l[i]=='1'&&b[i]=='0')
        {
            if(carry_value==0)
            { 
                k='1';
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
                carry_value=1;
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r=r+k;
    }
    string mb;
    int p=r.size();
    for(int i=(p-1);i>=0;i--)
    {
        h=h+r[i];
    }
    if(carry_value==1)
    {
        mb='1'+h;
    }
    else
    {
        mb=h;
    }
    string vv;
    string pp;
    string m1,h1,r1;
    carry_value=0;
    
    s=mb.size();
    int n11=n.size();
    for(int i=s-1;i>=0;i--)
    {
        vv=vv+mb[i];
    }
    for(int i=n11-1;i>=0;i--)
    {
        pp=pp+n[i];
    }
    int ss1=vv.size();
    int nn1=pp.size();
    if(ss1<nn1)
    {
        for(int i=ss1;i!=nn1;i++)
        {
            vv=vv+"0";
        }
    }
    else if(ss1>nn1)
    {
        for(int i=nn1;i!=ss1;i++)
        {
            pp=pp+"0";
        }
    }
    int zz1=vv.size();
    for(int i=0;i<zz1;i++)
    {
        if(vv[i]=='0'&&pp[i]=='0')
        {
            if(carry_value==0)
            {
                k='0';
            }
            else
            {
                k='1';
                carry_value=0;
            }
        }
        else if(vv[i]=='0'&&pp[i]=='1'||vv[i]=='1'&&pp[i]=='0')
        {
            if(carry_value==0)
            { 
                k='1';
            }
            else
            {
                k='0';
                carry_value==1;
            }
        }
        else
        {
            if(carry_value==0)
            {   
                k='0';
                carry_value=1;
            }
            else
            {
                k='1';
                carry_value=1;
            }
        }
        r1=r1+k;
    }
    int p1=r1.size();
    for(int i=(p1-1);i>=0;i--)
    {
        h1=h1+r1[i];
    }
    cout<<carry_value<<h1;
}
int HEX-HEX()
{
    string n;
    cin>>n;
    int m,k,l=0;
    int s=n.size();
    for(int i=(s-1),e=0;i>=0;i--,e++){
        if(n[i]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e);
            l=l+k;
        }else{
            m=(n[i]-'A'+10)*pow(16,e);
            l=l+m;
        }
    }
    string n1;
    cin>>n1;
    int m1,k1,l1=0;
    int s1=n1.size();
    for(int i=(s1-1),e1=0;i>=0;i--,e1++){
        if(n1[i]<='9'){ 
            int m1=n1[i]-48;
            k1=m1*pow(16,e1);
            l1=l1+k1;
        }else{
            m1=(n1[i]-'A'+10)*pow(16,e1);
            l1=l1+m1;
        }
    }
    int lok=max(l,l1);
    int cok=min(l,l1);
    int kok=lok-cok;
    string ans;
    int x2=1;
    while(x2<=kok)
    {
        x2=x2*16;
    }
    x2=x2/16;
    while(x2>0)
    {
        int lastdigit=kok/x2;
        kok=kok-lastdigit*x2;
        x2=x2/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans;
}
int HEX+HEX()
{
    string n;
    cin>>n;
    int m,k,l=0;
    int s=n.size();
    for(int i=(s-1),e=0;i>=0;i--,e++){
        if(n[i]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e);
            l=l+k;
        }else{
            m=(n[i]-'A'+10)*pow(16,e);
            l=l+m;
        }
    }
    string n1;
    cin>>n1;
    int m1,k1,l1=0;
    int s1=n1.size();
    for(int i=(s1-1),e1=0;i>=0;i--,e1++){
        if(n1[i]<='9'){ 
            int m1=n1[i]-48;
            k1=m1*pow(16,e1);
            l1=l1+k1;
        }else{
            m1=(n1[i]-'A'+10)*pow(16,e1);
            l1=l1+m1;
        }
    }
    int lok=max(l,l1);
    int cok=min(l,l1);
    int kok=lok+cok;
    string ans;
    int x2=1;
    while(x2<=kok)
    {
        x2=x2*16;
    }
    x2=x2/16;
    while(x2>0)
    {
        int lastdigit=kok/x2;
        kok=kok-lastdigit*x2;
        x2=x2/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans;
}
int HEX-HEX_._()
{
        string np;
    cin>>np;
    string n;
    int i;
    for(i=0;np[i]!='.';i++)
    {
        n=n+np[i];
    }
    int m,k,l=0;
    int s=n.size();
    for(int i1=(s-1),e1=0;i1>=0;i1--,e1++){
        if(n[i1]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e1);
            l=l+k;
        }else{
            m=(n[i1]-'A'+10)*pow(16,e1);
            l=l+m;
        }
    }
    string nk1;
    cin>>nk1;
    string n1;
    int j;
    for(j=0;nk1[j]!='.';j++)
    {
        n1=n1+nk1[j];
    }
    int m1,k1,l1=0;
    int s1=n1.size();
    for(int i1=(s1-1),e1=0;i1>=0;i1--,e1++){
        if(n1[i1]<='9'){ 
            int m1=n1[i1]-48;
            k1=m1*pow(16,e1);
            l1=l1+k1;
        }else{
            m1=(n1[i1]-'A'+10)*pow(16,e1);
            l1=l1+m1;
        }
    }
    int lok=max(l,l1);
    int cok=min(l,l1);
    int kok=lok-cok;
    string ans;
    int x2=1;
    while(x2<=kok)
    {
        x2=x2*16;
    }
    x2=x2/16;
    while(x2>0)
    {
        int lastdigit=kok/x2;
        kok=kok-lastdigit*x2;
        x2=x2/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans<<'.';


    string nn;
    for(int kl=i+1;np[kl]!='\0';kl++)
    {
        nn=nn+np[kl];
    }
    int m3,k3,l3=0;
    s=nn.size();
    for(int i1=(s-1),e=0;i1>=0;i1--,e++){
        if(nn[i1]<='9'){ 
            int m3=nn[i1]-48;
            k3=m3*pow(16,e);
            l3=l3+k3;
        }else{
            m3=(nn[i1]-'A'+10)*pow(16,e);
            l3=l3+m3;
        }
    }

    string nn1;
    for(int i1=j+1;nk1[i1]!='\0';i1++)
    {
        nn1=nn1+nk1[i1];
    }
    int m2,k2,l2=0;
    s1=nn1.size();
    for(int i1=(s1-1),e1=0;i1>=0;i1--,e1++){
        if(nn1[i1]<='9'){ 
            int m2=nn1[i1]-48;
            k2=m2*pow(16,e1);
            l2=l2+k2;
        }else{
            m2=(nn1[i1]-'A'+10)*pow(16,e1);
            l2=l2+m2;
        }
    }
    lok=max(l3,l2);
    cok=min(l2,l3);
    kok=lok-cok;
    string ans1;
    x2=1;
    while(x2<=kok)
    {
        x2=x2*16;
    }
    x2=x2/16;
    while(x2>0)
    {
        int lastdigit=kok/x2;
        kok=kok-lastdigit*x2;
        x2=x2/16;
        if(lastdigit<=9)
        {
            ans1=ans1+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans1.push_back(c);
        }
    }
    cout<<ans1;
}
int HEX+HEX_._()
{
        string np;
    cin>>np;
    string n;
    int i;
    for(i=0;np[i]!='.';i++)
    {
        n=n+np[i];
    }
    int m,k,l=0;
    int s=n.size();
    for(int i1=(s-1),e1=0;i1>=0;i1--,e1++){
        if(n[i1]<='9'){ 
            int m=n[i]-48;
            k=m*pow(16,e1);
            l=l+k;
        }else{
            m=(n[i1]-'A'+10)*pow(16,e1);
            l=l+m;
        }
    }
    string nk1;
    cin>>nk1;
    string n1;
    int j;
    for(j=0;nk1[j]!='.';j++)
    {
        n1=n1+nk1[j];
    }
    int m1,k1,l1=0;
    int s1=n1.size();
    for(int i1=(s1-1),e1=0;i1>=0;i1--,e1++){
        if(n1[i1]<='9'){ 
            int m1=n1[i1]-48;
            k1=m1*pow(16,e1);
            l1=l1+k1;
        }else{
            m1=(n1[i1]-'A'+10)*pow(16,e1);
            l1=l1+m1;
        }
    }
    int lok=max(l,l1);
    int cok=min(l,l1);
    int kok=lok+cok;
    string ans;
    int x2=1;
    while(x2<=kok)
    {
        x2=x2*16;
    }
    x2=x2/16;
    while(x2>0)
    {
        int lastdigit=kok/x2;
        kok=kok-lastdigit*x2;
        x2=x2/16;
        if(lastdigit<=9)
        {
            ans=ans+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    cout<<ans<<'.';


    string nn;
    for(int kl=i+1;np[kl]!='\0';kl++)
    {
        nn=nn+np[kl];
    }
    int m3,k3,l3=0;
    s=nn.size();
    for(int i1=(s-1),e=0;i1>=0;i1--,e++){
        if(nn[i1]<='9'){ 
            int m3=nn[i1]-48;
            k3=m3*pow(16,e);
            l3=l3+k3;
        }else{
            m3=(nn[i1]-'A'+10)*pow(16,e);
            l3=l3+m3;
        }
    }

    string nn1;
    for(int i1=j+1;nk1[i1]!='\0';i1++)
    {
        nn1=nn1+nk1[i1];
    }
    int m2,k2,l2=0;
    s1=nn1.size();
    for(int i1=(s1-1),e1=0;i1>=0;i1--,e1++){
        if(nn1[i1]<='9'){ 
            int m2=nn1[i1]-48;
            k2=m2*pow(16,e1);
            l2=l2+k2;
        }else{
            m2=(nn1[i1]-'A'+10)*pow(16,e1);
            l2=l2+m2;
        }
    }
    lok=max(l3,l2);
    cok=min(l2,l3);
    kok=lok+cok;
    string ans1;
    x2=1;
    while(x2<=kok)
    {
        x2=x2*16;
    }
    x2=x2/16;
    while(x2>0)
    {
        int lastdigit=kok/x2;
        kok=kok-lastdigit*x2;
        x2=x2/16;
        if(lastdigit<=9)
        {
            ans1=ans1+to_string(lastdigit);
        }else
        {
            char c='A'+lastdigit-10;
            ans1.push_back(c);
        }
    }
    cout<<ans1;
}
int OCTAL+OCTAL()
{
        int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    
    int n1;
    cin>>n1;
    int m1=0;
    for(int i=0;n1>0;i++){
        int k=n1%10;
        m1=m1+(k*pow(8,i));
        n1=n1/10;
    }
    int ma=max(m,m1);
    int mi=min(m,m1);
    int nn=ma+mi;
    int ans=0;
    int x=1;
    while(x<=nn)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=nn/x;
        nn=nn-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}
int OCTAL-OCTAL()
{
    int n;
    cin>>n;
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    
    int n1;
    cin>>n1;
    int m1=0;
    for(int i=0;n1>0;i++){
        int k=n1%10;
        m1=m1+(k*pow(8,i));
        n1=n1/10;
    }
    int ma=max(m,m1);
    int mi=min(m,m1);
    int nn=ma-mi;
    int ans=0;
    int x=1;
    while(x<=nn)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=nn/x;
        nn=nn-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}
int OCTAL+OCTAL_._()
{
        string ah;
    cin>>ah;
    int n=stoi(ah);
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    string ab;
    cin>>ab;
    int n1=stoi(ab);
    int m1=0;
    for(int i=0;n1>0;i++){
        int k=n1%10;
        m1=m1+(k*pow(8,i));
        n1=n1/10;
    }
    int ma=max(m,m1);
    int mi=min(m,m1);
    int nn=ma+mi;
    int ans=0;
    int x=1;
    while(x<=nn)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=nn/x;
        nn=nn-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans<<'.';
    int ii,j;
    for(ii=0;ah[ii]!='.';ii++)
    {
        continue;
    }
    for(j=0;ab[j]!='.';j++)
    {
        continue;
    }
    string np;
    for(int i=ii+1;ah[i]!='\0';i++)
    {
        np=np+ah[i];
    }
    int npp=stoi(np);
    m=0;
    for(int i=0;npp>0;i++){
        int k=npp%10;
        m=m+(k*pow(8,i));
        npp=npp/10;
    }
    string np1;
    for(int i=j+1;ab[i]!='\0';i++)
    {
        np1=np1+ab[i];
    }
    m1=0;
    int npp1=stoi(np1);
    for(int i=0;npp1>0;i++){
        int k=npp1%10;
        m1=m1+(k*pow(8,i));
        npp1=npp1/10;
    }
    ma=max(m,m1);
    mi=min(m,m1);
    nn=ma+mi;
    ans=0;
    x=1;
    while(x<=nn)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=nn/x;
        nn=nn-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}
int OCTAL-OCTAL_._()
{
    string ah;
    cin>>ah;
    int n=stoi(ah);
    int m=0;
    for(int i=0;n>0;i++){
        int k=n%10;
        m=m+(k*pow(8,i));
        n=n/10;
    }
    string ab;
    cin>>ab;
    int n1=stoi(ab);
    int m1=0;
    for(int i=0;n1>0;i++){
        int k=n1%10;
        m1=m1+(k*pow(8,i));
        n1=n1/10;
    }
    int ma=max(m,m1);
    int mi=min(m,m1);
    int nn=ma-mi;
    int ans=0;
    int x=1;
    while(x<=nn)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=nn/x;
        nn=nn-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans<<'.';
    int ii,j;
    for(ii=0;ah[ii]!='.';ii++)
    {
        continue;
    }
    for(j=0;ab[j]!='.';j++)
    {
        continue;
    }
    string np;
    for(int i=ii+1;ah[i]!='\0';i++)
    {
        np=np+ah[i];
    }
    int npp=stoi(np);
    m=0;
    for(int i=0;npp>0;i++){
        int k=npp%10;
        m=m+(k*pow(8,i));
        npp=npp/10;
    }
    string np1;
    for(int i=j+1;ab[i]!='\0';i++)
    {
        np1=np1+ab[i];
    }
    m1=0;
    int npp1=stoi(np1);
    for(int i=0;npp1>0;i++){
        int k=npp1%10;
        m1=m1+(k*pow(8,i));
        npp1=npp1/10;
    }
    ma=max(m,m1);
    mi=min(m,m1);
    nn=ma-mi;
    ans=0;
    x=1;
    while(x<=nn)
    {
        x=x*8;
    }
    x=x/8;
    while(x>0)
    {
        int lastdigit=nn/x;
        nn=nn-lastdigit*x;
        x=x/8;
        ans=ans*10+lastdigit;
    }
    cout<<ans;
}