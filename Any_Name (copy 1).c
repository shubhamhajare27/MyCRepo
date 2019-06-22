	
	#include<stdlib.h>

	#include<stdio.h>

	#include<unistd.h>

	void Display(char * str)
	{
		register int i=0,j=0,l=0,k=0,flag=1,icnt=5;
		
		register char ch=0;		

		for(i=0;i<10;i++)
		{	
			for(j=0;j<150;j++)
			{
				if(i==3 || i==4 ||i==5 ||i==6 || i==7 || i==8)
				{
					if(flag == 1)
					{
						ch = str[k];
			
						k++;

						l=j;

						if(ch == '\0')
						{
							k = k % k;
	
							break;
						}
					}//end of flag if

					if(ch == 'a' || ch == 'A')
					{
						if(i==3 && j==(l+1))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==5 && j==(l+1))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of A if
					if(ch == 'b' || ch == 'B')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==5 && j==(l+1))
						{
							printf("*");
						}
						else if(i==7 && j==l+1)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of B if
					if(ch == 'c' || ch == 'c')
					{
						if(i==3 && (j==(l+1) || j==l || j==l+2))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if(i==7 && (j==l+1 || j==l+2))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of c if

					if(ch == 'd' || ch == 'D')
					{
						if(i==3 && (j==(l+1) || j==l))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 ) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==7 && (j==l+1 || j==l))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of D if

	
					if(ch == 'e' || ch == 'E')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if(i==5 && (j==(l+1) || j==l+2))
						{
							printf("*");
						}
						else if(i==7 && (j==l+1 || j==l+2))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of E if

					if(ch == 'f' || ch == 'F')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if(i==5 && (j==(l+1) || j==l+2))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of F if
	
					if(ch == 'g' || ch == 'G')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if((i==5 || i==6 || i==7) && (j==l+2))
						{
							printf("*");
						}

						else if(i==5 && j==(l+1))
						{
							printf("*");
						}
						else if(i==7 && j==l+1)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of G if

					if(ch == 'h' || ch == 'H')
					{
						if(i==3 && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==5 && j==(l+1))
						{
							printf("*");
						}
						
						else
						{
							printf(" ");
						}
					}//end of H if


					if(ch == 'i' || ch == 'I')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==5 || i==4 || i==6) && j==(l+1))
						{
							printf("*");
						}
						else if(i==7 && (j==l+1 || j==l || j==l+2))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of I if
	
					if(ch == 'j' || ch == 'J')
					{
						if(i==3 && j==(l+2))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && j==(l+2))
						{
							printf("*");
						}

						else if(i==7 && (j==l+1 || j==l || j==l+2))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of J if

						
					if(ch == 'k' || ch == 'K')
					{
						if(i==3 && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if(i==4 && j==(l+1))
						{
							printf("*");
						}
						else if(i==6 && j==l+1)
						{
							printf("*");
						}
						else if(i==7 && j==l+2)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of K if

					if(ch == 'l' || ch == 'L')
					{
						if(i==3 && j==l)
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if(i==7 && (j==l+1 || j==l+2))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of L if

							
					if(ch == 'm' || ch == 'M')
					{
						if(j==l)
						{
							icnt = 7;
						}
					
						if(i==3 && (j==l || j==(l+4)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+4)))
						{
							printf("*");
						}

						else if(i==4 && (j==(l+1) || j==l+3))
						{
							printf("*");
						}
						
						else if(i==5 && j==l+2)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of M if

					if(ch == 'n' || ch == 'N')
					{
	
						if(j==l)
						{
							icnt = 7;
						}
						if(i==3 && (j==l || j==(l+4)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+4)))
						{
							printf("*");
						}

						else if(i==4 && (j==(l+1)))
						{
							printf("*");
						}
						
						else if(i==5 && j==l+2)
						{
							printf("*");
						}
						
						else if(i==6 && j==l+3)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of N if

					if(ch == 'o' || ch == 'O')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==7 && j==l+1)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of O if


					if(ch == 'p' || ch == 'P')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if((i==4 || i==5 ) && (j==l+2))
						{
							printf("*");
						}

						else if(i==5 && j==(l+1))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of P if	
					
					if(ch == 'q' || ch == 'Q')
					{
						if(j==l)
						{
							icnt = 6;
						}

						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==7 && j==(l+1))
						{
							printf("*");
						}
						else if(i==8 && j==l+3)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of Q if

					if(ch == 'r' || ch == 'R')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l))
						{
							printf("*");
						}

						else if((i==4 || i==5) && (j==l+2))
						{
							printf("*");
						}

						else if(i==5 && j==(l+1))
						{
							printf("*");
						}

						else if(i==6 && j==l+1)
						{
							printf("*");
						}

						else if(i==7 && j==l+2)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of R if

					if(ch == 's' || ch == 'S')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5) && (j==l))
						{
							printf("*");
						}

						else if(i==5 && (j==(l+1) || j==(l+2)))
						{
							printf("*");
						}
						else if(i==7 && (j==l+1 || j==l || j==l+2))
						{
							printf("*");
						}

						else if(i==6 && j==l+2)	
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of S if
	
					if(ch == 't' || ch == 'T')
					{
						if(i==3 && (j==(l+1) || j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==5 || i==4 || i==6 || i==7) && j==(l+1))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of T if
		
					if(ch == 'u' || ch == 'U')
					{
						if(i==3 && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6 || i==7) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==7 && j==l+1)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of U if
	
					if(ch == 'v' || ch == 'V')
					{
						if(i==3 && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6) && (j==l || j==(l+2)))
						{
							printf("*");
						}

						else if(i==7 && j==l+1)
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of V if

					if(ch == 'w' || ch == 'W')
					{
						if(j==l)
						{
							icnt = 7;
						}

						if(i==3 && (j==l || j==l+4))
						{
							printf("*");
						}

						else if((i==4 || i==5 || i==6) && (j==l || j==l+4))
						{
							printf("*");
						}

						else if(i==6 & j==l+2)
						{
							printf("*");
						}

						else if(i==7 && (j==l+1 || j==l+3))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of W if	
		
					if(ch == 'x' || ch == 'X')
					{
						if(j==l)
						{
							icnt = 7;
						}

						if(i==3 && (j==l || j==l+4))
						{
							printf("*");
						}

						else if((i==4) && (j==l+1 || j==l+3))
						{
							printf("*");
						}

						else if(i==5 && j==l+2)
						{
							printf("*");
						}

						else if(i==6 && (j==l+1 || j==l+3))
						{
							printf("*");
						}
		
						else if(i==7 && (j==l || j==l+4))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of X if
			
					if(ch == 'y' || ch == 'Y')
					{
						if(j==l)
						{
							icnt = 7;
						}

						if(i==3 && (j==l || j==l+4))
						{
							printf("*");
						}

						else if((i==4) && (j==l+1 || j==l+3))
						{
							printf("*");
						}

						else if(i==5 && j==l+2)
						{
							printf("*");
						}

						else if((i==6 || i==7) && j==l+2)
						{
							printf("*");
						}
		
						else
						{
							printf(" ");
						}
					}//end of Y if
	
					if(ch == 'z' || ch == 'Z')
					{
						if(j==l)
						{
							icnt = 7;
						}

						if(i==3 && (j==l || j==l+1 ||j==l+2 || j==l+3 || j==l+4))
						{
							printf("*");
						}

						else if((i==4) && (j==l+3))
						{
							printf("*");
						}

						else if(i==5 && j==l+2)
						{
							printf("*");
						}

						else if(i==6 && j==l+1)
						{
							printf("*");
						}
		
						else if(i==7 && (j==l || j==l+1 || j==l+2 || j==l+3 || j==l+4))
						{
							printf("*");
						}
						else
						{
							printf(" ");
						}
					}//end of Z if			
					if (ch == ' ')
					{
						printf(" ");
					}

					icnt--;
	
					if(icnt == 0)
					{
						flag = 1;
	
						icnt = 5;
					}
					else
					{
						flag = 0;
					}
				}
				else
				{
					printf(" ");
				}
			}//end of j
			printf("\n");
		}//end of i

		printf("\n");		

	}

	int main()
	{
		char str[80]={'\0'};

		fflush(stdin);

		fgets(str,80,stdin);

		printf("%s",str);

		//system("clear");		
		
		Display(str);

		return 0;
	}
