#include<stdio.h>

void Max_Palindrome(char *);

int main(int argc,char * argv[])
{
	char * ptr="xyzadaazbmadamyo";

	Max_Palindrome(ptr);

	return 0;
}

void Max_Palindrome(char * arr)
{
	int iPal=0,iStart=0,iEnd=0,i=0,j=0,iMax=0,bRet=0;
	
	while(arr[i]!='\0')
	{
		j=i+1;
		
		while((arr[i]!=arr[j]) && (arr[j]!='\0'))
		{
			j++;
		}
		if(arr[j]=='\0')//no palindrome for arr[i]
		{
			i++;
		}
		else //there may be palindrome
		{
			iStart=i;
			iEnd=j;
			while((arr[iStart]==arr[iEnd]) && (iStart<=iEnd))
			{
				iStart++;
				iEnd--;
			}
			if(iStart>iEnd) //it is a palindrome
			{
				if(bRet==0)
				{	
					iMax=j-i+1;
					iPal=i;
				
				
				}
				else
				{
					if((j-i)+1 > iMax)
					{	
						iMax=j-i+1;
						iPal=i;
					}
				}
			}	
			i++;

		}//end of else

	}//end of while	

	if(iMax==0)
	{
		printf("There is no palindrome\n");	
	}
	else
	{	
		while(iMax!=0)
		{
			printf("%c",arr[iPal]);
			iPal++;
			iMax--;
		}
	}
}
