#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
#define MIN 0 
#define MAX 100
#define SUANFA 2
using namespace std; 
int grade12(c) 
{ 
	int lab4[2];
    int a;//�����ɵĵ�һ��������浽��ֵ�� 
    int b;//�����ɵ�������������мӻ���ļ��� 
    int c;//���ɵ���Ŀ�� 
    int suanfa[2];//�������Ĵ�1��4������ŵ��������� 
	int i; 
	int score=100;
	int q;//�û�������� 
	cout<<"��������Ŀ������";
	cin>>c;
	srand((unsigned)time(NULL));  
	for(int j=0;j<c;j++){
    	for(i=0; i<2; i++) 
    	{ 
        	lab4[i]=MIN + rand() % (MAX + MIN - 1); 
        	a=MIN +rand()%(SUANFA+MIN-1);

    	} 
    	if(a=0){
    		cout<<lab4[0]<<"+"<<lab4[1]<<endl;
        	b=lab4[0]+lab4[1];
        	cout<<"��������Ĵ�";
    		cin>>q;
        	if(q!=b){
        	score=score-100/c;
			}
		}
		else if(a=1)
		{
			cout<<lab4[0]<<"-"<<lab4[1]<<endl;
			b=lab4[0]-lab4[1];
			cout<<"��������Ĵ�";
    		cin>>q;
			if(q!=b){
        	score=score-100/c;
			}
		}
		cout<<b<<endl;
	}
	cout<<"��ķ�����"; 
	cout<<score;
    return score; 
}

