#include <stdio.h>
#include <string.h>
main()
{
	char create_user[20],create_pass[20];
	int ch,val,val2;
	printf("                                                   BANK MANAGEMENT SYSTEM                                                    \n");
	printf("1. CREATE AN ACCOUNT \n");
    printf("2. ALREADY A USER ? SIGN IN.. \n");
    printf("3. EXIT!!\n\n\n");
    printf("ENTER YOUR CHOICE :");
    scanf("%d",&ch,"\n");
    printf("\n\n\n");
    switch(ch)
	{
		case 1:
			{
			
    // CREATING AN ACCOUNT
    struct info      //USING struct 
    {
    char first_name[30],last_name[30],father_name[30],mother_name[30],address[30],acc_type[10],marital_status[10],pan[10],gender[6];
    int age,date,month,year;
    long aadhar[12],phone[10]
	} s1;
	
    printf("========================================================================================================================");
    printf("\n\n                                   !!!!!!!!!!!!!!!!!!!!!CREATING ACCOUNT!!!!!!!!!!!!!!!!!!!\n\n\n");
    printf("ENTER FIRST NAME :");
    scanf("%s",&s1.first_name,"\n");
    printf("\nENTER LAST NAME :");
    scanf("%s",&s1.last_name,"\n");
    printf("\nENTER YOUR AGE :");
    scanf("%d",&s1.age,"\n");
    if(s1.age>=18 && s1.age<=100)
    {
	printf("\nENTER YOUR GENDER (MALE /FEMALE):");
	scanf("%s",&s1.gender);
	val=strcmp(s1.gender,"MALE");
	val2=strcmp(s1.gender,"FEMALE");
	if(val==0 || val2==0)
	{
    printf("\nENTER FATHER'S NAME :");
    scanf("%s",&s1.father_name ,"\n");
    printf("\nENTER MOTHER'S NAME :");
    scanf("%s",&s1.mother_name,"\n");
    printf("\nENTER YOUR ADDRESS :");
    scanf("%s",&s1.address,"\n");
    printf("\nENTER YOUR PHONE NUMBER :");
    scanf("%ld",&s1.phone,"\n");
    printf("\nACCOUNT TYPE (SAVINGS/CURRENT) :");
    scanf("%s",&s1.acc_type,"\n");
    printf("\nMARITAL STATUS (SINGLE/MARRIED) :");
    scanf("%s",&s1.marital_status,"\n");
    printf("\nDATE OF BIRTH...(DD/MM/YYYY)\n");
    printf("\nDATE :");
    scanf("%d",&s1.date,"\n");
    int d=counter(s1.date);
    if( d==2 && s1.date<=31)
    {
    printf("\nMONTH :");
    scanf("%d",&s1.month,"\n");
    int m=counter(s1.month);
    if(m>=1 && m<=2 && s1.month<=12)
    {
    printf("\nYEAR :");
    scanf("%d",&s1.year,"\n");
    int y=counter(s1.year);
    if(y==4&& s1.year<=9999)
    {
    printf("\nENTER YOUR AADHAR NUMBER :");
    scanf("%ld",&s1.aadhar,"\n");
    printf("\nENTER YOUR PAN CARD NUMBER :");
    scanf("%ld",&s1.pan,"\n\n\n");
    
    
    
    
    printf("------------------------------------------------------------------------\n");
	printf("DETAILS SUCCESSFULLY FILLED!!!\n");
	printf("ACCOUNT SUCCESSFULLY CREATED!!!\n");
	printf("------------------------------------------------------------------------\n");	
	
	//CREATING A USERNAME AND PASSWORD....
	printf("                            !! IT SHOULD CONTAIN AN ALPHABET,A NUMBER AND A SPECIAL CHARACTER !!\n\n");
	printf("\nCREATE A USERNAME  : ");
	scanf("%s",&create_user);
	printf("\nCREATE A PASSWORD : ");
	scanf("%s",&create_pass);
	
    }
    else
     printf("WRONG INPUT\n");
    }
    else
    printf("WRONG INPUT\n"); 
    }
    else
    printf("WRONG INPUT\n");
    }
    else
    printf("WRONG INPUT\n");
    }
    else
    printf("WRONG INPUT\n");
}
    case 2:
    	{
    		int value,value2;
    		char user_name[20],password[20],user_name1[20],user_name2[20];
    		long acc_num1[20],acc_num2[20],trans_amt[15];
    		printf("                                                       ACCOUNT LOGIN\n");
    		printf("                                                       =============\n\n\n");
    		printf("                                                   =======LOG IN=======\n\n");
    		printf("                            !! IT SHOULD CONTAIN AN ALPHABET,A NUMBER AND A SPECIAL CHARACTER !!\n\n");
    		printf("ENTER YOUR USERNAME : ");
    		scanf("%s",&user_name,"\n");
    	//	value=strcmp(create_user,user_name);  //CHECKING FOR USERNAME
    	//	if(value==0)
    	//	{
    		printf("ENTER PASSWORD : ");
    		scanf("%s",&password,"\n");
    	//	value2=strcmp(create_pass,password);   //CHECKING FOR PASSWORD
    	//	if(value2==0)
    	//	{
    		printf("\n\n****");
    		printf("\nHOME\n");
    		printf("****\n\n");
    		
    int ch,curr_bal,dep_amt,with_amt;
    printf("1. DEPOSIT \n2. WITDRAWAL \n3. CHECK BALANCE \n4. TRANSFER MONEY \n5. EXIT \n\n");
	printf("ENTER YOUR CHOICE : ");
	scanf("%d", &ch,"\n");
	curr_bal=10000; //let current balance be 100000 rs 
	printf("\n\nASSUMING CURRENT BALANCE TO BE 10,000/-\n");
	if(ch==1)
	{
	printf("\nENTER DEPOSIT AMOUNT :");
	scanf("\n %d", &dep_amt);
	curr_bal=curr_bal+dep_amt;
	printf("YOUR CURRENT BALANCE IS %d",curr_bal);
	}
	else if(ch==2)
	{
		printf("\nENTER WITHDRAWAL AMOUNT :");
		scanf("\n %d", &with_amt);
		if(with_amt>curr_bal)
		printf("INSUFFICIENT BALANCE \n");
		else
		{
			curr_bal=curr_bal-with_amt;
			printf("\nYOUR CURRENT BALANCE IS %d",curr_bal);
		}
	}
	else if(ch==3)
		printf("\nYOUR CURRENT BALANCE IS %d:",curr_bal);
	else if(ch==4)
	{
	printf("\n\nTRANSFER MONEY \n\n");
	printf("---------------\n");
	printf("FROM (username) : ");
	scanf("%s",user_name1,"\n");
	printf("FROM (account number) : ");
	scanf("%ld",acc_num1,"\n");
	printf("\nTO (username) : ");
	scanf("%s",user_name2,"\n");
	printf("TO (account number) : ");
	scanf("%ld",acc_num2,"\n");
	printf("\nENTER AMOUNT : ");
	scanf("%ld",trans_amt,"\n");
	printf("\n\n                                                MONEY TRANSFERRED SUCCESSFULLY!!!\n");	
	printf("************************************************************************************************************************\n");
	
	}  
	else if(ch==5)
	break;  
	else
	    printf("INVALID INPUT"); 
   // }
    //else
   // printf("WRONG INPUT");
   //  }
  //  else
    //printf("WRONG INPUT");
     		
   }
   case 3:
   	{
   		break;
    }
}
}
int counter(int x)    //FUNCTION TO COUNT THE NUMBER OF DIGITS
    {
    int count=0;
	int b=0;
	while(x!=0)
	{
		x=x/10;
		count++;
		
	}
    b=count;
    return b;	
	}

