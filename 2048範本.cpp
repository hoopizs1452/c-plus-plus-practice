#include<iostream>  
#include <iomanip>  
#include<math.h>  
#include<stdlib.h>  
#include<time.h>  
#include <conio.h> //為了讀取方向鍵  
#include<windows.h>  
using namespace std;    
//srand( (unsigned)time( NULL ) ); //隨機數種子 不能用在這裡  
int pane[4][4]; //棋盤  
int N=1; //2的n次方  
void showpane() //顯示棋盤  
{  
 cout<<setw(46)<<"X2048 by Reason"<<endl;  
 cout<<setw(50)<<" |-----------------------|"<<endl;  
 for(int i=0;i<=3;i++)   
 {  
 cout<<setw(24)<<"";  
 for(int j=0;j<=3;j++)  
 {  
 //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);   
 cout<<setw(2)<<"|"<<setw(4)<<pane[i][j];  
   
 if(j==3)  
 {  
 cout<<setw(2)<<"|"<<endl;  
 cout<<setw(50)<<" |-----------------------|"<<endl;  
 }  
 }  
 }  
}  
void newgame() //開始游戲  
{  
 N=1;  
 for(int i=0;i<=3;i++) //初始化棋盤  
 for(int j=0;j<=3;j++)  
 pane[i][j]=0;  
 srand( (unsigned)time( NULL ) );  
 int m=rand()%4;  
 int n=rand()%4;  
 int p=rand()%4;  
 int q=rand()%4;  
 pane[m][n]=pane[p][q]=2;  
 showpane();  
}  
int if2n(int x) //判斷x是否是2的n次方  
{  
 int flag=0;  
 for(int n=1;n<=11;n++)  
 {  
 if(x==pow(2,n))  
 {  
 flag=1;  
 if(n>N)  
 N=n;  
 return flag;  
 }  
 }  
 return flag;  
}  
int upmove() //上移  
{  
 int flag=0;  
 for(int j=0;j<=3;j++)  
 for(int i=0;i<3;i++)  
 {  
 if(if2n(pane[i][j]+pane[i+1][j])==1)  
 {  
 pane[i][j]=pane[i][j]+pane[i+1][j];  
 pane[i+1][j]=0;  
 flag=1;  
 }  
 }  
 return flag;  
}  
int downmove() //下移  
{  
 int flag=0;  
 for(int j=0;j<=3;j++)  
 for(int i=3;i>0;i--)  
 {  
 if(if2n(pane[i][j]+pane[i-1][j])==1)  
 {  
 pane[i][j]=pane[i][j]+pane[i-1][j];  
 pane[i-1][j]=0;  
 flag=1;  
 }  
 }  
 return flag;  
}  
int leftmove() //左移  
{  
 int flag=0;  
 for(int i=0;i<=3;i++)  
 for(int j=0;j<3;j++)  
 {  
 if(if2n(pane[i][j]+pane[i][j+1])==1)  
 {  
 pane[i][j]=pane[i][j]+pane[i][j+1];  
 pane[i][j+1]=0;  
 flag=1;  
 }  
 }  
 return flag;  
}  
int rightmove() //右移  
{  
 int flag=0;  
 for(int i=0;i<=3;i++)  
 for(int j=3;j>0;j--)  
 {  
 if(if2n(pane[i][j]+pane[i][j-1])==1)  
 {  
 pane[i][j]=pane[i][j]+pane[i][j-1];  
 pane[i][j-1]=0;  
 flag=1;  
 }  
 }  
 return flag;  
}  
int testup() //能否上移測試  
{  
 int flag=0;  
 for(int j=0;j<=3;j++)  
 for(int i=0;i<3;i++)  
 {  
 if(if2n(pane[i][j]+pane[i+1][j])==1)  
 {  
 flag=1;  
 }  
 }  
 return flag;  
}  
int testdown() //測試能否下移  
{  
 int flag=0;  
 for(int j=0;j<=3;j++)  
 for(int i=3;i>0;i--)  
 {  
 if(if2n(pane[i][j]+pane[i-1][j])==1)  
 {  
 flag=1;  
 }  
 }  
 return flag;  
}  
int testleft() //測試能否左移  
{  
 int flag=0;  
 for(int i=0;i<=3;i++)  
 for(int j=0;j<3;j++)  
 {  
 if(if2n(pane[i][j]+pane[i][j+1])==1)  
 {  
 flag=1;  
 }  
 }  
 return flag;  
}  
int testright() //測試能否右移  
{  
 int flag=0;  
 for(int i=0;i<=3;i++)  
 for(int j=3;j>0;j--)  
 {  
 if(if2n(pane[i][j]+pane[i][j-1])==1)  
 {  
 flag=1;  
 }  
 }  
 return flag;  
}  
int panemax() //棋盤最大數  
{  
 int max=pane[0][0];  
 for(int i=0;i<=3;i++)  
 for(int j=0;j<=3;j++)  
 if(pane[i][j]>max)  
 max=pane[i][j];  
 return max;  
}  
int ifwin() //判斷是否勝利  
{  
 int flag=0;  
 if(panemax()==2048)  
 {  
 cout<<setw(45)<<"You Win!"<<endl;  
 flag=1;  
 }  
 return flag;  
}  
int ifGameOver() //判斷是否游戲結束  
{  
 int flag=0;  
 if(testup()+ testdown() + testleft() + testright() ==0)  
 {  
 cout<<setw(43)<<"Game Over!"<<endl;  
 flag=1;  
 }  
 return flag;  
}  
void addnewnumberup() //上移後添加新數  
{  
 srand( (unsigned)time( NULL ) );  
 int n;  
 if(N==1)  
 n=1;  
 else 
 n=(rand()%(N)+1);   
 int newnumber=pow(2,n);  
 for(int i=3;i>=0;i--)  
 for(int j=0;j<=3;j++)  
 if(pane[i][j]==0)  
 {  
 pane[i][j]=newnumber;  
 return;  
 }  
}  
void addnewnumberdown() //下移後添加新數  
{  
 srand( (unsigned)time( NULL ) );  
 int n;  
 if(N==1)  
 n=1;  
 else 
 n=(rand()%(N)+1); int newnumber=pow(2,n);  
 for(int i=0;i<=3;i++)  
 for(int j=0;j<=3;j++)  
 if(pane[i][j]==0)  
 {  
 pane[i][j]=newnumber;  
 return;  
 }  
}  
void addnewnumberleft() //左移後添加新數  
{  
 srand( (unsigned)time( NULL ) );  
 int n;  
 if(N==1)  
 n=1;  
 else 
 n=(rand()%(N)+1);   
 int newnumber=pow(2,n);  
 for(int j=3;j>=0;j--)  
 for(int i=0;i<=3;i++)  
 if(pane[i][j]==0)  
 {  
 pane[i][j]=newnumber;  
 return;  
 }  
}  
void addnewnumberright() //右移後添加新數  
{  
 srand( (unsigned)time( NULL ) );  
 int n;  
 if(N==1)  
 n=1;  
 else 
 n=(rand()%(N)+1);   
 int newnumber=pow(2,n);  
 for(int j=0;j<=3;j++)  
 for(int i=0;i<=3;i++)  
 if(pane[i][j]==0)  
 {  
 pane[i][j]=newnumber;  
 return;  
 }  
}  
int GetDirection() //讀取方向  
{  
    int ret = 0;  
   
    do   
    {  
        int ch = _getch();  
        if(isascii(ch))  
            continue;  
   
        ch = _getch();  
        switch(ch)  
        {  
        case 72:     
            ret = 2; // top  
            break;  
        case 75:     
            ret = 1; // left   
            break;  
        case 77:     
            ret = 3; // right  
            break;  
        case 80:     
            ret = 4; // down  
            break;  
        default:     
            break;  
        }  
    } while (ret == 0);  
       
    return ret;  
}  
int main() //主函數  
{  
 system("color f9");  
 int makesure=1;  
 while(makesure)  
 {   
 system("cls");  
 newgame();  
 while(ifwin()+ifGameOver()==0)  
 {  
 int c=GetDirection();  
 switch(c)  
 {  
 case 2:  
 upmove();  
 addnewnumberup();  
 system("cls");  
 showpane();  
 break;  
 case 4:  
 downmove();  
 addnewnumberdown();  
 system("cls");  
 showpane();  
 break;  
 case 1:  
 leftmove();  
 addnewnumberleft();  
 system("cls");  
 showpane();  
 break;  
 case 3:  
 rightmove();  
 addnewnumberright();  
 system("cls");  
 showpane();  
 break;  
 default:     
 break;  
 }  
 }  
 cout<<setw(43)<<"你的最後成績為："<<panemax()<<endl;  
 cout<<setw(60)<<"若要重新開始游戲請輸入1，若要結束請輸入0。"<<endl;  
 cin>>makesure;  
 while(makesure!=1&&makesure!=0)  
 {  
 cout<<"輸入不正確，請重新輸入!"<<endl;  
 cin>>makesure;  
 }  
 }  
 cout<<"再見！"<<endl;  
 system("pause");  
   
} 
