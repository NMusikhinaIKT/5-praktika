#include <8051.h>

void main()
{	
	unsigned int i,flag;
	unsigned char *str="123456789ABCDEF";

	P0 = 0x38;
	P0 = 0x80;
	P2 = 0x1;
	P2 = 0x0;

	while(1)
	{
        flag=0;
	    i = -1;
        P3 = 0xFE;//1 stolbec
        if(P1 == 0xFE && flag==0) 
        {  
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 0;
           flag=1;
        }            
        if(P1 == 0xFD && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 3;
           flag=1;
        }     
        if(P1 == 0xFB && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 6;
           flag=1;
        }     
        if(P1 == 0xF7 && flag==0) 
           {
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 9;
           flag=1;
           }  
     
        if(P1 == 0xEF && flag==0) 
           {
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 12;
           flag=1;
           }  

        P3 = 0xFD;//2 stolbec
        if(P1 == 0xFE && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 1;
           flag = 1;
        }   
        if(P1 == 0xFD && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 4;
           flag=1;
        }   
        if(P1 == 0xFB && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 7;
           flag=1;
        }   

        if(P1 == 0xF7 && flag==0) 
           {
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 10;
           flag=1;
           }     

        if(P1 == 0xEF && flag==0) 
           {
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 13;
           flag=1;
           }  

        P3 = 0xFB;//3 stolbec
        if(P1 == 0xFE && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 2;
           flag=1;
        }   

        if(P1 == 0xFD && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 5;
           flag=1;
        }   

        if(P1 == 0xFB && flag==0)
        {   
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 8;
           flag=1;
        }   

        if(P1 == 0xF7 && flag==0)
           {
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 11;
           flag=1;
           }  

        if(P1 == 0xEF && flag==0)
           {
           P0=0x01;
           P2=0x3;
           P2=0x2;
           i = 14;
           flag=1;
           }  

		if(i!=-1)
		{   
                P0 = 0x0C;
                P2 = 0x1;
                P2 = 0x0;
                P0 = 0x80;
                P2 = 0x1;
                P2 = 0x0;
                P0 = str[i];
		P2 = 0x3;
		P2 = 0x2;
		}
	}
}