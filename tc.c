#include<stdio.h>
void main()
{

	//hi
	char ans;
	do
   {
    	int w=0;
		char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9',pos='0';
		printf("\t Tic Tac Toe \n Player 1 <X> - Player 2 <O>");
		printf("\n  %c | %c | %c\n  __|___|__\n  %c | %c | %c\n  __|___|__\n  %c | %c | %c \n", a,b,c,d,e,f,g,h,i);
    	for(int t=1; t<10 ; t++)
    	{
    	if( t%2 == 1 )
    	{
    		printf("\nPlayer 1's turn. Choose a postion(1-9) \n ");
    		scanf(" %c", &pos);
    		if(pos==a)
    			a='X';
    		else if(pos==b)
    			b='X';
    		else if(pos==c)
    			c='X';
    		else if(pos==d)
    			d='X';
    		else if(pos==e)
    			e='X';
    		else if(pos==f)
    			f='X';
    		else if(pos==g)
    			g='X';
    		else if(pos==h)
    			h='X';
    		else if(pos==i)
    			i='X';
    		printf("\n  %c | %c | %c\n  __|___|__\n  %c | %c | %c\n  __|___|__\n  %c | %c | %c \n", a,b,c,d,e,f,g,h,i);
    		if((a==b && b==c)||(d==e && e==f)||(g==h && h==i)||(a==d && d==g)||(b==e && e==h)||(c==f && f==i)||(a==e && e==i)||(c==e && e==g))
    		{
    			printf("\nPlayer 1 is the winner");
    			w=1;
    			break;
    		}
    	}
        else
    	{
    		printf("\nPlayer 2's turn. Choose a postion(1-9) \n ");
    		scanf(" %c", &pos);
    		if(pos==a)
    			a='O';
    		else if(pos==b)
    			b='O';
    		else if(pos==c)
    			c='O';
    		else if(pos==d)
    			d='O';
    		else if(pos==e)
    			e='O';
    		else if(pos==f)
    			f='O';
    		else if(pos==g)
    			g='O';
    		else if(pos==h)
    			h='O';
    		else if(pos==i)
    			i='O';
    		printf("\n  %c | %c | %c\n  __|___|__\n  %c | %c | %c\n  __|___|__\n  %c | %c | %c \n", a,b,c,d,e,f,g,h,i);
    		if((a==b && b==c)||(d==e && e==f)||(g==h && h==i)||(a==d && d==g)||(b==e && e==h)||(c==f && f==i)||(a==e && e==i)||(c==e && e==g))
    		{
    			printf("\nPlayer 2 is the winner");
    			w=2;
    			break;
    		}
    	}
    	}
    	if(w==0)
    		printf("\nNo winner");
    	printf("\n Do you want to continue? (y/n)");             
    	scanf(" %c", &ans);
    }while(ans=='y');
}

