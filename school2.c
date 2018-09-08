#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define LEN 150
int menu2()
{
	int ch2;
	 printf("====================================================================================================================\n");

	printf("1. GO  FOR C LANGUAGE TEST\n");
	printf("2. GO  FOR PHP LANUAGE TEST\n");
	printf("3. GO  FOR HTML LANGUAGE TEST\n");
	printf("4. GO  FOR PYTHON LANGUAGE TEST\n");
	
	 printf("5. EXIT\n");
	  printf("====================================================================================================================\n");
	printf(" ENTER THE CHOICE :-  ");
	scanf("%d",&ch2);
	return ch2;
}

int menu()

{
     int c;
     printf("====================================================================================================================\n");
	 printf("1- ENTER THE INFORMATION\n");
	 printf("2- HAVE A LOOK ON RULES \n");
	 printf("3- TYPES OF QUESTION\n");
	 printf("4- START THE EXAM\n");
	 printf("5. EXIT\n");
	 printf("====================================================================================================================\n");
	 printf("enter the choice :-");
	 scanf("%d",&c);
	 
	 return c;
}
int menu1()
{               
int ch1;
		               printf("1. FOR INFORAMTION\n");
		               printf("2. START THE EXAM\n");
		               printf("3. EXIT\n");
						printf(" Enter choice for level 2 :-");
						scanf("%d",&ch1);
						printf("------------------------------------------------------------------------------------------------------------\n");
						return ch1;
}
void main()
{


   FILE *fp1,*fp;
  
  
   printf("\t\t\t\t.......WELCOME TO THE EXAMINATION.........\t\t\t\t\t\t\t\n") ;
	       char name[30];
	        int year,ch1;
	        char dep[10];
	        int a,b,d,e,g,x,y,z,m,n,t,r=0;
	        int mark;
	        int sum=0;
	        char str[5],c=' ';
            int i=0;
             char buf[LEN];
   time_t curtime;
   struct tm *loc_time;
 
	         
  int pass;
  char user[20],user1[20]="sagarprajapati";
  curtime = time (NULL);
 
   // Converting current time to local time
   loc_time = localtime (&curtime);
 
   // Displaying date and time in standard format
   printf("\t\t\t\t\t\t\t\t\t\t\t");
   printf("%s", asctime (loc_time));
 printf("\t\t\t\t\t\t\t\t\t\t\t");
   strftime (buf, LEN, "Today is %A, %b %d.\n", loc_time);
   fputs (buf, stdout);
   printf("\t\t\t\t\t\t\t\t\t\t\t");
   strftime (buf, LEN, "Time is %I:%M %p.\n", loc_time);
   fputs (buf, stdout);
   printf("************************************************************************************************************************\n");
 
  
  printf("\n\nENTER THE USERNAME:- ");
  scanf("%s",user);
  if(strcmp(user,user1)==0)
  {
  
printf("\nEnter the password : ");
scanf("%d",&pass);
if(pass==8032)
{
	   printf("\n\n\t\t\t\t....YOU HAVE WRITTEN RIGHT PASSWORD AND USERNAME......\t\t\t\n\n");
		   }
  else
  {
  printf("\nSORRY! YOU HAVE ENTERED WRONG PASSWORD\n");
  exit(0);
}
  
	 
		while(1)
		{
			switch(menu2())
			{
				
						case 1:
							printf("\t\t\t.................YOU HAVE SELECTED C LANGUAGE............................\n");
							while(1)
							{
								switch(menu())
								 {
	        	case 1:
	 	      fp=fopen("sch1.txt","w+");
	 	    printf("enter the name of the user :- ");
	 		scanf("%s",name);
	 		fprintf(fp,"%s\n",name);
	 		printf("\nenter the vtu no of the student :-");
        	scanf("%d",&year);
        	fprintf(fp,"%d\n",year);
        	printf("\nenter the name of the department :- ");
        	scanf("%s",dep);
        	fprintf(fp,"%s\n",dep);
        	printf("\nenter the cgpa in previous semester :-");
        	scanf("%d",&mark);
        	fprintf(fp,"%d\n",mark);
        	fclose(fp);
        	
        	break;
               case 2:
            	printf("1-you will have 5 questions \n");
        	    printf("2-every question has 4 choices\n");
        	    printf("3-u have to choose only one correct choice among those 4 choices\n");
        	    printf("4-No negtive marking\n");
        	    break;
        	         case 3:
        	        	printf("1-very basic questions of c language\n");
        	        	printf("2-total marks of this test is 20 \n");
        		        printf("3-No negative marking\n");
        		       break;
        	            	case 4:
        			        printf("\t\t\t\t........EXAM HAS BEEN STARTED.............\n");
        			        fp1=fopen("sch.txt","w+");
        			        printf("1.what is primitive data type of c\n");
        			        printf("(1). array\t(2). string\t(3). int\t(4). all of these\n");
        			        scanf("%d",&a);
        			        fprintf(fp1,"%d\n",a);
        			if(a==3)
        			{
        				
        				printf("your answer is correct\n");
					     sum=sum+4;	
					}
					else
					{
						printf("sorry! WRONG answer\n");
						
					}
					
					printf("2.Which of the following is not logical operator?\n");
					printf("(1).& \t(2).&&\t(3).||\t(4).!\n");
					scanf("%d",&b);
					fprintf(fp1,"%d\n",b);
					if(b==1)
					{
						printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
				
			         printf("sorry! WRONG answer\n");
				    }
					printf("3.Which of the following cannot be checked in a switch-case statement?\n");
					printf("(1).character\t(2).integer\t(3)flaot\t(4).enum\n");
					scanf("%d",&d);
					fprintf(fp1,"%d\n",d);
					if(d==3)
					{
						printf("your answer is correct\n");
					  sum=sum+4;
					}
					else
					{
						printf("sorry!WRONG answer\n");
					}
        			printf("4.What is (void*)0?\n");
        			printf("(1).Representation of NULL pointer\t(2).Representation of void pointer\t(3).Error\t(4).None\n");
        			scanf("%d",&e);
        			fprintf(fp1,"%d\n",e);
        			if(e==1)
					{
					printf("your answer is correct\n");
					sum=sum+4;
						
				    }
					else
					{
					printf("sorry! WRONG answer\n");
					
					}
					
						printf("5.The operator used to get value at address stored in a pointer variable is\n");
						printf("(1).*\t(2).&\t(3).&&\t(4).||\n");
						scanf("%d",&g);
						fprintf(fp1,"%d\n",g);
							if(g==1)
					{
					
							printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
					      printf("sorry! WRONG answer\n");
					
					}
						printf("\t\t\t\t\t..........EXAM HAS BEEN COMPLETED..........\n");
						if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND");
						fprintf(fp1,"%d",sum);
						exit(0);
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
						fprintf(fp1,"%d",sum);
					
					
						printf("\t******************************************************************************************\n\n\n\n");
						
						printf("\t\t\t\t-------------WELCOME TO THE LEVEL 2---------------\n\n\n");
					while(1)
					{
						switch(menu1())
						{
							case 1:
								printf("1. IN THIS LEVEL YOU HAVE 5 QUESTION\n");
						printf("2. THE LEVEL WILL BE MEDIUM\n");
						printf("3. FOR EVERY RIGHT QUESTION U WILL GET 5 MARKS\n");
						printf("4. 1 NEGATIVE MARKING FOR THIS LEVEL\n");
						printf("------------------------------------------------------------------------------------------------------------\n");
							break;
							case 2:
								printf("1. what is the keyword which is not used in looping statement??\n");
								printf("(1). break\t(2). continue\t(3). goto\t(4). none of these\n");
								scanf("%d",&x);
								if(x==4)
								{
									printf("COREECT ANSWER \n");
									sum=sum+5;
								}
								else
								{
									printf("SORRY ! WRONG ANSWER");
									sum=sum-1;
								}
								printf("The keyword used to transfer control from a function back to the calling function is?\n");
								printf("(1).switch\t(2).goto \t(3). return\t(4).go back\n");
                                   scanf("%d",&y);
if(y==4)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}
printf("3.Which of the following statements are correct about an array? \n");
printf("1:	The array int num[26]; can store 26 elements.\n");
printf("2:	The expression num[1] designates the very first element in the array.\n");
printf("3:	It is necessary to initialize the array at the time of declaration.\n");
printf("4:	The declaration num[SIZE] is allowed if SIZE is a macro.\n");
printf("(1).1\t(2). 1,4\t(3). 2,3\t(4).2,4\n");
scanf("%d",&z);
if(z==2)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("4. what is the keyword which is not used in looping statement??\n");
printf("(1). strnstr()\t(2). laststr()\t(3). strrchr()\t(4). strstr()\n");
scanf("%d",&m);
if(m==3)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}

						
					
printf("5.	Bit fields CANNOT be used in union?\n");
printf("(1).TRUE\t(2). FALSE\t (3).BOTH\t(4).NONE\n");
scanf("%d",&n);

if(n==2)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("\t\t\t**************EXAM HAS BEEN COMPLETED**********************\n\n");
		if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND\n");
						 exit(0);
					
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
						printf("\t\t********************THANKU*************************\t\t");
						
				     	}					

	exit(0);
	break;
	case 3:
		exit(0);
		break;
        			
    }
}
                     	case 5:
                     			printf("YOU HAVE BEEN EXIT");
        				exit(0);
        				break;
        			default:
        				printf("invalid choice");
        			}
        		
        	}
        }
        	case 2:
        			printf("\t\t\t.................YOU HAVE SELECTED PHP LANGUAGE............................\n");
							while(1)
							{
								switch(menu())
								 {
	        	case 1:
	 	      fp=fopen("sch1.txt","w+");
	 	    printf("enter the name of the user :- ");
	 		scanf("%s",name);
	 		fprintf(fp,"%s\n",name);
	 		printf("\nenter the vtu no of the student :-");
        	scanf("%d",&year);
        	fprintf(fp,"%d\n",year);
        	printf("\nenter the name of the department :- ");
        	scanf("%s",dep);
        	fprintf(fp,"%s\n",dep);
        	fclose(fp);
        	
        	break;
               case 2:
            	printf("1-you will have 5 questions \n");
        	    printf("2-every question has 4 choices\n");
        	    printf("3-u have to choose only one correct choice among those 4 choices\n");
        	    printf("4-No negtive marking\n");
        	    break;
        	         case 3:
        	        	printf("1-very basic questions of php language\n");
        	        	printf("2-total marks of this test is 20 \n");
        		        printf("3-No negative marking\n");
        		       break;
        	            	case 4:
        			        printf("\t\t\t\t........EXAM HAS BEEN STARTED.............\n");
        			        fp1=fopen("sch.txt","w+");
        			        printf("1.Full form of PHP?\n");
        			        printf("(1). PreHypertextProcessor\t(2). HypertextPreprocessor\t(3). Hypertext Postprocessor\t(4). PostHypertextProcessor\n");
        			        scanf("%d",&a);
        			        fprintf(fp1,"%d\n",a);
        			if(a==2)
        			{
        				
        				printf("your answer is correct\n");
					     sum=sum+4;	
					}
					else
					{
						printf("sorry! WRONG answer\n");
						
					}
					
					printf("2.Casting operator introduced in PHP 6 is?\n");
					printf("(1).Array \t(2).Int64\t(3).double or flaot\t(4).Object\n");
					scanf("%d",&b);
					fprintf(fp1,"%d\n",b);
					if(b==2)
					{
						printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
				
			         printf("sorry! WRONG answer\n");
				    }
					printf("3. The ___________ function can be used to compare two strings using a case-insensitive binary algorithm ?\n");
					printf("(1).strcmp()\t(2).stricmp()\t(3).strcasecmp()\t(4).stristr()\n");
					scanf("%d",&d);
					fprintf(fp1,"%d\n",d);
					if(d==3)
					{
						printf("your answer is correct\n");
					  sum=sum+4;
					}
					else
					{
						printf("sorry!WRONG answer\n");
					}
        			printf("4.The left association operator % is used in PHP for?\n");
        			printf("(1).Modulus\t(2).Percentage\t(3).Bitwise\t(4).Division\n");
        			scanf("%d",&e);
        			fprintf(fp1,"%d\n",e);
        			if(e==1)
					{
					printf("your answer is correct\n");
					sum=sum+4;
						
				    }
					else
					{
					printf("sorry! WRONG answer\n");
					
					}
					
						printf("5. Which datatypes are treaded as arrays?\n");
						printf("(1).Integer\t(2).Float\t(3).String\t(4).Boolean\n");
						scanf("%d",&g);
						fprintf(fp1,"%d\n",g);
							if(g==3)
					{
					
							printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
					      printf("sorry! WRONG answer\n");
					
					}
						printf("\t\t\t\t\t..........EXAM HAS BEEN COMPLETED..........\n");
						if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND");
						fprintf(fp1,"%d",sum);
						exit(0);
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
						fprintf(fp1,"%d",sum);
						printf("\t******************************************************************************************\n\n\n\n");
						printf(" ");
						printf("\t\t\t\t-------------WELCOME TO THE LEVEL 2---------------\n\n\n");
					while(1)
					{
						switch(menu1())
						{
							case 1:
								printf("1. IN THIS LEVEL YOU HAVE 5 QUESTION\n");
						printf("2. THE LEVEL WILL BE MEDIUM\n");
						printf("3. FOR EVERY RIGHT QUESTION U WILL GET 5 MARKS\n");
						printf("4. 1 NEGATIVE MARKING FOR THIS LEVEL\n");
						printf("------------------------------------------------------------------------------------------------------------\n");
							break;
							case 2:
								printf("1. When uploading a file if the UPLOAD_ERR-OK contains value 0 it means?\n");
								printf("(1). Uploaded file size is 0\t(2). Uplaod is not successful, error occurred\t(3). The file uploaded with success\t(4). File upload progress is 0% completed\n");
								scanf("%d",&x);
								if(x==1)
								{
									printf("COREECT ANSWER \n");
									sum=sum+5;
								}
								else
								{
									printf("SORRY ! WRONG ANSWER");
									sum=sum-1;
								}
								printf("2. In PHP the error control operator is _______ ?\n");
								printf("(1). .\t(2).* \t(3). @\t(4).&\n");
                                   scanf("%d",&y);
if(y==3)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}
printf("3. Which of following are compound data type? \n");
printf("1:	Array.\n");
printf("2:	Object.\n");
printf("3:	Both.\n");
printf("4:	None.\n");
printf("(1).1\t(2). 1,4\t(3). 2,3\t(4).2,4\n");
scanf("%d",&z);
if(z==3)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("4. You can define a constant by using the define() function. Once a constant is defined?\n");
printf("(1). It can never be changed or undefined\t(2). It can be changed and can be undefined\t(3). It can never be changed but can be undefined\t(4). It can be changed but can not be undefined\n");
scanf("%d",&m);
if(m==1)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}

						
					
printf("5. PHP code is embedded directly into XHTML document?\n");
printf("(1).TRUE\t(2). FALSE\t (3).BOTH\t(4).NONE\n");
scanf("%d",&n);

if(n==1)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("\t\t\t**************EXAM HAS BEEN COMPLETED**********************\n\n");
		if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND\n");
						 exit(0);
					
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
				     	}					

	exit(0);
	break;
	case 3:
		exit(0);
		break;
        			
    }
}
   
                     	case 5:
                     			printf("YOU HAVE BEEN EXIT");
        				exit(0);
        				break;
        			default:
        				printf("invalid choice");
        			}
        		
        	}
        }
        case 3:
        		printf("\t\t\t.................YOU HAVE SELECTED HTML LANGUAGE............................\n");
							while(1)
							{
								switch(menu())
								 {
	        	case 1:
	 	      fp=fopen("sch1.txt","w+");
	 	    printf("enter the name of the user :- ");
	 		scanf("%s",name);
	 		fprintf(fp,"%s\n",name);
	 		printf("\nenter the vtu no of the student :-");
        	scanf("%d",&year);
        	fprintf(fp,"%d\n",year);
        	printf("\nenter the name of the department :- ");
        	scanf("%s",dep);
        	fprintf(fp,"%s\n",dep);
        	fclose(fp);
        	
        	break;
               case 2:
            	printf("1-you will have 5 questions \n");
        	    printf("2-every question has 4 choices\n");
        	    printf("3-u have to choose only one correct choice among those 4 choices\n");
        	    printf("4-No negtive marking\n");
        	    break;
        	         case 3:
        	        	printf("1-very basic questions of html language\n");
        	        	printf("2-total marks of this test is 20 \n");
        		        printf("3-No negative marking\n");
        		       break;
        	            	case 4:
        			        printf("\t\t\t\t........EXAM HAS BEEN STARTED.............\n");
        			        fp1=fopen("sch.txt","w+");
        			        printf("1.Which of the following tags below are used for a multi-line text input control?\n");
        			        printf("(1). textarea tag\t(2). textml tag\t(3).text tag\t(4). Both b and c above\n");
        			        scanf("%d",&a);
        			        fprintf(fp1,"%d\n",a);
        			if(a==3)
        			{
        				
        				printf("your answer is correct\n");
					     sum=sum+4;	
					}
					else
					{
						printf("sorry! WRONG answer\n");
						
					}
					
					printf("2. All XHTML tags and attributes must be in lower case?\n");
					printf("(1).True\t(2).False\t(3).Both\t(4).None\n");
					scanf("%d",&b);
					fprintf(fp1,"%d\n",b);
					if(b==2)
					{
						printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
				
			         printf("sorry! WRONG answer\n");
				    }
					printf("3.Which of the following attributes below are used for a font name?\n");
					printf("(1).fontname\t(2).fn\t(3).font\t(4).fn\n");
					scanf("%d",&d);
					fprintf(fp1,"%d\n",d);
					if(d==3)
					{
						printf("your answer is correct\n");
					  sum=sum+4;
					}
					else
					{
						printf("sorry!WRONG answer\n");
					}
        			printf("4.What is the <br> tag for?\n");
        			printf("(1).Paragraph\t(2).Line\t(3).Space\t(4).Word break\n");
        			scanf("%d",&e);
        			fprintf(fp1,"%d\n",e);
        			if(e==1)
					{
					printf("your answer is correct\n");
					sum=sum+4;
						
				    }
					else
					{
					printf("sorry! WRONG answer\n");
					
					}
					
						printf("5. Is it possible to link within the current page ?\n");
						printf("(1).Only in frameset\t(2).Yes\t(3).No\t(4).None\n");
						scanf("%d",&g);
						fprintf(fp1,"%d\n",g);
							if(g==1)
					{
					
							printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
					      printf("sorry! WRONG answer\n");
					
					}
						printf("\t\t\t\t\t..........EXAM HAS BEEN COMPLETED..........\n");
						if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND");
						fprintf(fp1,"%d",sum);
						exit(0);
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
						fprintf(fp1,"%d",sum);
						printf("\t******************************************************************************************\n\n\n\n");
						printf(" ");
						printf("\t\t\t\t-------------WELCOME TO THE LEVEL 2---------------\n\n\n");
					while(1)
					{
						switch(menu1())
						{
							case 1:
								printf("1. IN THIS LEVEL YOU HAVE 5 QUESTION\n");
						printf("2. THE LEVEL WILL BE MEDIUM\n");
						printf("3. FOR EVERY RIGHT QUESTION U WILL GET 5 MARKS\n");
						printf("4. 1 NEGATIVE MARKING FOR THIS LEVEL\n");
						printf("------------------------------------------------------------------------------------------------------------\n");
							break;
							case 2:
								printf("1. Use<td> and </td>to add what to your tables?\n");
								printf("(1). Column\t(2). Steps\t(3). Rows\t(4). None\n");
								scanf("%d",&x);
								if(x==4)
								{
									printf("COREECT ANSWER \n");
									sum=sum+5;
								}
								else
								{
									printf("SORRY ! WRONG ANSWER");
									sum=sum-1;
								}
								printf(" Gif and jpg are the two main types of what ?\n");
								printf("(1). Animated Effects\t(2).Image \t(3). Outlines\t(4).None\n");
                                   scanf("%d",&y);
if(y==2)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}
printf("3.A file that specifies how the screen is divided into frames is called a __________? \n");
printf("1:	Frameset.\n");
printf("2:	Frametable.\n");
printf("3:	Tablelink.\n");
printf("4:	None.\n");
printf("(1).1\t(2). 1,4\t(3). 2,3\t(4).2,4\n");
scanf("%d",&z);
if(z==3)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("4. What is used to store information usually relevant to browsers and searchengines\n");
printf("(1)Cookies\t(2). Metatags\t(3). Tabs\t(4). None\n");
scanf("%d",&m);
if(m==1)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}

						
					
printf("5.Defining clickable sub-areas on an image is called?\n");
printf("(1).Multilinking\t(2). Image Maping\t (3).Image linking\t(4).NONE\n");
scanf("%d",&n);

if(n==1)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("\t\t\t**************EXAM HAS BEEN COMPLETED**********************\n\n");
		if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND\n");
						 exit(0);
					
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
				     	}					

	exit(0);
	break;
	case 3:
		exit(0);
		break;
        			
       }
}
                     	case 5:
        				exit(0);
        					printf("YOU HAVE BEEN EXIT");
        				break;
        			default:
        				printf("invalid choice");
        			}
        		
        	}
        }
        case 4:
        	printf("\t\t\t.................YOU HAVE SELECTED PYTHON LANGUAGE............................\n");
							while(1)
							{
								switch(menu())
								 {
	        	case 1:
	 	      fp=fopen("sch1.txt","w+");
	 	    printf("enter the name of the user :- ");
	 		scanf("%s",name);
	 		fprintf(fp,"%s\n",name);
	 		printf("\nenter the vtu no of the student :-");
        	scanf("%d",&year);
        	fprintf(fp,"%d\n",year);
        	printf("\nenter the name of the department :- ");
        	scanf("%s",dep);
        	fprintf(fp,"%s\n",dep);
        	fclose(fp);
        	
        	break;
               case 2:
            	printf("1-you will have 5 questions \n");
        	    printf("2-every question has 4 choices\n");
        	    printf("3-u have to choose only one correct choice among those 4 choices\n");
        	    printf("4-No negtive marking\n");
        	    break;
        	         case 3:
        	        	printf("1-very basic questions of html language\n");
        	        	printf("2-total marks of this test is 20 \n");
        		        printf("3-No negative marking\n");
        		       break;
        	            	case 4:
        			        printf("\t\t\t\t........EXAM HAS BEEN STARTED.............\n");
        			        fp1=fopen("sch.txt","w+");
        			        printf("1.Which of the following function convert a string to a frozen set in python?\n");
        			        printf("(1). Set(x)\t(2). Dict(d)\t(3).Frozenset(s)\t(4). char\n");
        			        scanf("%d",&a);
        			        fprintf(fp1,"%d\n",a);
        			if(a==3)
        			{
        				
        				printf("your answer is correct\n");
					     sum=sum+4;	
					}
					else
					{
						printf("sorry! WRONG answer\n");
						
					}
					
					printf("2. Which of the following function returns a random item from a list, tuple, or string?\n");
					printf("(1).choice\t(2).Randrange\t(3).Range\t(4).Seed([x])\n");
					scanf("%d",&b);
					fprintf(fp1,"%d\n",b);
					if(b==2)
					{
						printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
				
			         printf("sorry! WRONG answer\n");
				    }
					printf("3.What is the output of print str[2:] if str = 'Hello World!'?\n");
					printf("(1). llo world\t(2).llo\t(3).Hel\t(4).None\n");
					scanf("%d",&d);
					fprintf(fp1,"%d\n",d);
					if(d==1)
					{
						printf("your answer is correct\n");
					  sum=sum+4;
					}
					else
					{
						printf("sorry!WRONG answer\n");
					}
        			printf("4.What is the output of print tinylist * 2 if tinylist = [123, 'john']?\n");
        			printf("(1). [123, 'john']*2\t(2).[123, 'john',123, 'john']\t(3).Error\t(4).None\n");
        			scanf("%d",&e);
        			fprintf(fp1,"%d\n",e);
        			if(e==1)
					{
					printf("your answer is correct\n");
					sum=sum+4;
						
				    }
					else
					{
					printf("sorry! WRONG answer\n");
					
					}
					
						printf("5.  Which of the following is correct about tuples in python?\n");
						printf("(1). Tuple is another sequence data type like list \t(2).A tuple consists of number of elemnts separated by commas\t(3).Both\t(4).None\n");
						scanf("%d",&g);
						fprintf(fp1,"%d\n",g);
							if(g==1)
					{
					
							printf("your answer is correct\n");
					sum=sum+4;
				    }
					else
					{
					      printf("sorry! WRONG answer\n");
					
					}
						printf("\t\t\t\t\t..........EXAM HAS BEEN COMPLETED..........\n");
						if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND");
						fprintf(fp1,"%d",sum);
						exit(0);
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
						fprintf(fp1,"%d",sum);
						printf("\t******************************************************************************************\n\n\n\n");
						printf(" ");
						printf("\t\t\t\t-------------WELCOME TO THE LEVEL 2---------------\n\n\n");
					while(1)
					{
						switch(menu1())
						{
							case 1:
								printf("1. IN THIS LEVEL YOU HAVE 5 QUESTION\n");
						printf("2. THE LEVEL WILL BE MEDIUM\n");
						printf("3. FOR EVERY RIGHT QUESTION U WILL GET 5 MARKS\n");
						printf("4. 1 NEGATIVE MARKING FOR THIS LEVEL\n");
						printf("------------------------------------------------------------------------------------------------------------\n");
							break;
							case 2:
								printf("1.  Which of the following function convert a string to an int in python?\n");
								printf("(1). Flaot(x)\t(2). Str(x)\t(3). Int(x,[base])/t(4). None\n");
								scanf("%d",&x);
								if(x==4)
								{
									printf("COREECT ANSWER \n");
									sum=sum+5;
								}
								else
								{
									printf("SORRY ! WRONG ANSWER");
									sum=sum-1;
								}
								printf("2. Which of the following function convert a sequence of tuples to dictionary in python?\n");
								printf("(1). Set(x)\t(2). Dict(d) \t(3). Frozenset\t(4).chr(x)\n");
                                   scanf("%d",&y);
if(y==2)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}
printf("3.  What is the output of L[-2] if L = [1,2,3]? \n");
printf("1: 1\n");
printf("2: 2\n");
printf("3: 3\n");
printf("4:	None.\n");
printf("(1).1\t(2). 1,4\t(3). 2,3\t(4).2,4\n");
scanf("%d",&z);
if(z==3)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("4. Is python a case sensitive language?\n");
printf("(1). Yes\t(2). No\t(3). None\t(4). None\n");
scanf("%d",&m);
if(m==1)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");
sum=sum-1;								
}

						
					
printf("5. Which of the following function convert an integer to an unicode character in python?\n");
printf("(1).Unichr(x)\t(2). ord(x)\t (3). Hex(x)\t(4). Oct(x)\n");
scanf("%d",&n);

if(n==1)
{
 printf("COREECT ANSWER \n");
sum=sum+5;
}
else
{
printf("SORRY ! WRONG ANSWER\n");	
sum=sum-1;							
}
printf("\t\t\t**************EXAM HAS BEEN COMPLETED**********************\n\n");
		if(sum<10)
						{printf("your marks is %d\n",sum);
						 printf("SORRY!YOU HAVE NOT CLEARED THIS ROUND\n");
					
						}
						else
						{
						
						printf("CONGRATULATIONS YOUR total marks is :%d\n",sum);
						printf("YOU HAVE CLEARED THIS ROUND\n");
				     	}					

	exit(0);
	break;
	case 3:
		exit(0);
		break;
        			
       }
}
                     	case 5:
                     		printf(" YOU ENTERED EXIT");
        				exit(0);
        				
        				break;
        			default:
        				printf("invalid choice");
        			}
        		
        	}
        	case 5:
        		printf("YOU HAVE BEEN EXIT");
        		exit(0);
        		break;
        		default:
        			printf("INVALID CHOICE ! PLEASE TRY AGAIN");
        		     exit(0);
        			
    }
}
	
}
        			fclose(fp1);
}
    getch();
					}
	
	
	
		

