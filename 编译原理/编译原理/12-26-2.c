#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct
{
	char data[10];
	int top;
} 
message;//ջ��Ԫ�ض��� 
void create(message *&m)
{
	m=(message *)malloc(sizeof(message));
	m->top=-1;
}
void push(message *&m,char i)//��ջ���� 
{
	if(m->top<10)
	{
		m->top++;m->data[m->top]=i;
	}
	else
		cout<<"ջ��";
}
char pop(message *&m) //��ջ���� 
{
	char i;
	if(m->top!=-1)
	{
		i=m->data[m->top];
		m->top--;
		return i;
	}
	else
		cout<<"ջ��";
}
void getStr(char str[]) //���������$��β���ַ��� �������ַ���������
{
	int j=0;
	while(true)
	{
		cin>>str[j];
		if(str[j]=='$')
			break;
		elsej++;
	}
}
int main()
{
	char b[5][6]={
		{'>','<','<','<','>','>'},//�Զ������������� 
		{'>','>','<','<','>','>'},
		{'>','>',' ',' ','>','>'},
		{'<','<','<','<','=','>'},
		{'>','>',' ',' ','>','>'}
	};
	message *m;
	int n;
	create(m);
	cout<<"�����ַ������ַ�����$��β������ (i+i)*i$"<<endl;
	char str[20];
	getStr(str); //��ȡ��$��β�ַ���     
	char *j=str;
	push(m,'$');
	push(m,*j);
	j++;//�������ջ�ṹ����ÿһ�εı仯 
	while(true)
	{
		if(m->data[m->top]=='v'&& m->data[m->top-1]=='+' && m->data[m->top-2]=='v')//�ض���v+v
		{  
			pop(m);
			pop(m);  
			pop(m);
			push(m,'v');
		}
		else if(m->data[m->top]==')' && m->data[m->top-1]=='v' && m->data[m->top-2]=='(')//�ض���(v)  
		{ 
			pop(m);
			pop(m);
			pop(m);
			push(m,'v');
		}
		else if(m->data[m->top]=='v' && m->data[m->top-1]=='*' && m->data[m->top-2]=='v')//�ض���v*v  
		{  
			pop(m); 
			pop(m); 
			pop(m); 
			push(m,'v');
		}    //������+++  
		else if(m->data[m->top]=='+')   
		{    
			int m1=0;   
			switch(*j)   
			{        
			case '+':n=0;
				break;   
			case '*':n=1;
				break;   
			case 'i':n=2;
				break;   
			case '(':n=3;
				break;   
			case ')':n=4;
				break;   
			case '$':n=5;
				break;    
			}    
			if(b[m1][n]=='>')  
			{    
				pop(m); 
				push(m,'v');  
			}    else  
			{      
				push(m,*j);
				j++;   
			}    
		}        //������+++                  //������***   
		else if(m->data[m->top]=='*')   
		{   
			int m1=1;  
			switch(*j)  
			{    
			case '+':n=0;
				break;    
			case '*':n=1;
				break;  
			case 'i':n=2;
				break;    
			case '(':n=3;
				break;  
			case ')':n=4;
				break;   
			case '$':n=5;
				break;   
			}    
			if(b[m1][n]=='>')  
			{    
				pop(m); 
				push(m,'v'); 
			}    else    
			{      
				push(m,*j);  
				j++;     
			}    
		}    //������***         //������iii   
		else if(m->data[m->top]=='i')   
		{   
			int m1=2;  
			switch(*j)  
			{   
			case '+':n=0;
				break;  
			case '*':n=1;
				break;   
			case 'i':n=2;
				break;  
			case '(':n=3;
				break;  
			case ')':n=4;
				break;   
			case '$':n=5
				break;  
			}    
			if(b[m1][n]=='>')   
			{    
				pop(m);   
				push(m,'v'); 
			}    
			else   
			{    
				push(m,*j);   
				j++;    
			}    
		}    //������iii          //�����ڣ�����  
		else if(m->data[m->top]=='(')  
		{    
			int m1=3;  
			switch(*j)   
			{    
			case '+':n=0;break;  
			case '*':n=1;break;   
			case 'i':n=2;break;   
			case '(':n=3;break;   
			case ')':n=4;break;   
			case '$':n=5;break;  
			}   
			if(b[m1][n]=='>') 
			{   
				pop(m);   
				push(m,'v');    } 
			else    
			{    
				push(m,*j);  
				j++;    
			}    
		}    //�����ڣ�����         //�����ڣ�������  
		else if(m->data[m->top]==')')  
		{   
			int m1=4;  
			switch(*j)   
			{    
			case '+':n=0;break; 
			case '*':n=1;break;   
			case 'i':n=2;break;    
			case '(':n=3;break;    
			case ')':n=4;break;   
			case '$':n=5;break; 
			}    if(b[m1][n]=='>')  
			{   
				pop(m);   
				push(m,'v');  
			}    else    
			{     
				push(m,*j);   
				j++;   
			}    
		}//�����ڣ�������  //�ڲ�����v��ʼ���� 
		else if(m->data[m->top]=='v')  
		{    
			if(*j=='$') 
			{     
				if(m->data[m->top-1]=='$')  
				{   
					cout<<"����һ������";   
					break;   
				}       
				else    
				{     
					cout<<"�ⲻ��һ������";  
					break;       
				}    
			}      //�ڲ�+++ 
			else if(m->data[m->top-1]=='+')  
			{    
				int m1=0;   
				switch(*j) 
				{  
				case '+':n=0;break;  
				case '*':n=1;break; 
				case 'i':n=2;break;  
				case '(':n=3;break;    
				case ')':n=4;break;   
				case '$':n=5;break;  
				}    
				if(b[m1][n]=='>')  
				{    
					pop(m);    push(m,'v');  
				}    
				else   
				{     
					push(m,*j);   
					j++;    
				}   
			}     //�ڲ�*** 
			else if(m->data[m->top-1]=='*') 
			{    
				int m1=1;   
				switch(*j)   
				{   
				case '+':n=0;break;  
				case '*':n=1;break;   
				case 'i':n=2;break; 
				case '(':n=3;break;   
				case ')':n=4;break;   
				case '$':n=5;break;   
				}   
				if(b[m1][n]=='>')   
				{   
					pop(m); 
					push(m,'v');   
				}    else   
				{     
					push(m,*j);    
					j++;    
				}    
			}//�ڲ�iii 
			else if(m->data[m->top-1]=='i')  
			{    
				int m1=2;   
				switch(*j) 
				{    
				case '+':n=0;break;  
				case '*':n=1;break;  
				case 'i':n=2;break;  
				case '(':n=3;break;   
				case ')':n=4;break;   
				case '$':n=5;break; 
				}    
				if(b[m1][n]=='>')  
				{    
					pop(m);  
					push(m,'v');   
				}    
				else  
				{   
					push(m,*j);  
					j++;  
				}    
			}//�ڲ㣨���� 
			else if(m->data[m->top-1]=='(')  
			{   
				int m1=3; 
				switch(*j)
				{   
				case '+':n=0;break;  
				case '*':n=1;break;  
				case 'i':n=2;break;    
				case '(':n=3;break;   
				case ')':n=4;break;  
				case '$':n=5;break;  
				}  
				if(b[m1][n]=='>')  
				{   
					pop(m);    push(m,'v');  
				}    else   
				{      
					push(m,*j);   
					j++;    
				}   
			}//�ڲ㣩����
			else if(m->data[m->top-1]==')') 
			{    
				int m1=4;
				switch(*j) 
				{  
				case '+':n=0;break;  
				case '*':n=1;break; 
				case 'i':n=2;break; 
				case '(':n=3;break;  
				case ')':n=4;break;   
				case '$':n=5;break;  
				}    
				if(b[m1][n]=='>')  
				{   
					pop(m); 
					push(m,'v'); 
				}    
				else  
				{    
					push(m,*j); 
					j++;    
				} 
			}    //�ڲ�����v��ʼ���� //���$$$ 
			else if(m->data[m->top-1]=='$')
			{
				push(m,*j);   
				j++;
			} // ���$$$   
  }   
}  
return 0; 
}


