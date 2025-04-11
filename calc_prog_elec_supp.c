//dhlwsh vivlio8hkwn
#include <stdio.h>   //aparaithth vilvio9hkh hdh apo to dev pou periexei metavlhtous tupous,polles makroentoles kai diafores sunarthseis gia thn ektelesh eisodou - eksodou
#include <stdlib.h>  //aparaithth vilvio9hkh hdh apo to dev pou periexei 4 tupous metavlhtwn ,polles makroentoles kai diafores sunarthseis gia thn ektelesh genikwn leitourgiwn
#include <string.h> //vilvio8hkh pou orizei ena tupo metavlhths ,mia makroentolh kai diafores sunarthseis gia to xeirismo pinakwn xarakthrwn
#include <math.h>   //vivlio9hkh pou orizei diafores ma8hmatikes sunarthseis kai mia makroentolh , me voh8aei gia to final cost na krataei kai to akrives noumero meta to "0," 

//dhlwsh global metavlhtwn
int meters,number_of_days=243,testA=0,testB=0;
float Municipal_taxes,Total_charges,Final_cost,Initial_cost,discount;
char name[20],surname[20],address[20],username[20],choice[10],card[20],password[5],pay[5],step[5];
double first=0.00542, second=0.00682,third=0.00822;

//dhlwsh sunarthsewn
void signup_user();
void login_user();
void calculate_cost();
void payment();
void get_receipt();
void exit_user();
void logout();
void login_admin();
double change_cost(double first,double second,double third);
void exit_admin();
void terminate();

//main sunarthsh pou apartizetai apo to main menu tou susthmatos ,to admin's main menu kai to users's main menu mazi me to terminate olou tou programmatos
int main(void) 
{
  //dhlwsh local metavlhtwn ths main
   int i,y=0;
   char answer[5],entry[5];
    
    do //do while tis epiloges sto menu tou user ,oso o user den exei pathsei 0 gia na to kanei terminate
    {
    	
       system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
        
	   //Munhma pou einai h arxiki o8onh tou systhmatos, opou rwtaei an einai user h admin ton xrhsth etsi wtse na ksekinisei to  programma analoga me thn epilogh tou         	
       printf("\t\t Home Screen \n\n This is the main menu!\n If you wanna log in or sign up ,  please  answer to the following question..\n Are you an Admin or a User?\n \n If you wanna terminate the program press 0 .\n\n "); 

        do //elegxos gia to ti apanthsh edwse o xrhsths wste na metrhsw thn metavlhth i gia na mpainei sthn switch ws integer kai sumfwna me thn apanthsh tou xrhsth na mpainei sthn antistoixh sunarthsh 
        {
              
			   scanf(" %s", answer );
                  if (strcmp(answer, "admin")==0) //elegxoume me strcmp an h apanthsh tou xrhsth isoutai me admin tote to i na pairnei thn timh 1
                  {
                        i=1;
                  }
                  else if (strcmp(answer, "user")==0)//elegxoume me strcmp an h apanthsh tou xrhsth isoutai me user tote to i na pairnei thn timh 2
				  {
                        i=2;
                  }
                  else if (strcmp(answer, "0")==0)//elegxoume me strcmp an h apanthsh tou xrhsth isoutai me 0 tote to i na pairnei thn timh 3
				  {
                        i=3;
                  }
                  else //an h apanthsh tou xrhsth isoutai me otidhpote allo pera apo tis 3 do8oumenes epiloges tote to i na pairnei thn timh 4 kai ektupwnetai analogo mhnuma kai ton ksanavazei na apanthsei
                  {
                        i=4;
                        printf("\n Wrong answer please try again!\n\n If you wanna log in or sign up ,  please  answer to the following question..\n Are you an Admin or a User?\n \n If you wanna exit press 0 .\n ");
                  }
        }while (i==4);//sun8hkh while loop wste otan o xrhsths plhktrologei la8os apanthsh na vlepei to mhnuma pou ton enhmerwnei mexri na epileksei thn swsth
  
         switch(i)//domh pollaplwn epilogwn switch opou aksiopoiei thn metavlhth i pou upologizame prin kai tmhmatopoiei se cases tis epiloges admin ,user,0 
         {
             case 1://an h apanthsh tou isoutai me admin tote mpainei se auto to case kai vlepei to admin's main menu kai antistoixes epiloges
             {
              	//dhlwsh metavlhtwn gia admin menu
                char user[5],pass[10],option[5],response[5];
                 
                system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
                
                    do //elegxos gia na leitourgei to case mexri na valei exit o admin 
                    {
            
                       printf(" Welcome! \n This is the admin's main menu!\n Please type '1' if you want to login or '2' if you want to logout\n ");
                        
							do //elegxos an to responsepairnei thn swsth apanthsh
							{
							
							   scanf(" %s",response);
							    if((strcmp(response,"1")!=0) && (strcmp(response,"2")!=0))
							    {
								printf("\n You typed wrong  number. Please try again! Type '1' if you want to login or '2' if you want to logout!\n ");
							    }
						    }while((strcmp(response,"1")!=0) && (strcmp(response,"2")!=0));
                         
                
                       system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
     
			        	if (strcmp(response,"1")==0)//entolh if gia na elegxoume an o admin epelekse login alliws na paei sto logout
			         	{
			            	 printf(" You chose log in!\n");
			            	 
                                  do //elegxos me do while gia na scanarw an to username pou 8a valei einai swsto ,an oxi,analogo mhnuma mexri na valei to swsto
                                  {
                                      printf("\n Please type your username:\n ");
                                        scanf(" %s",user);
                                              if((strcmp(user,"root")!=0))
                                               {
                                                 	printf("\n Incorrect username. Please try again!\n");
				                            	}
				                            	
                                   }while(strcmp(user,"root")!=0);
 
                                  do //elegxos me do while gia na scanarw an to password pou 8a valei o admin einai swsto,an oxi,analogo mhnuma mexri na valei swsto
                                  {
                                      printf("\n Please type your password:\n ");
                                        scanf(" %s",pass);
                                             if((strcmp(pass,"admin123")!=0))
                                             {
                    	                        printf("\n Incorrect password. Please try again!\n");
					                         }
                                  }while(strcmp(pass,"admin123")!=0);
                                  
                             //mhnuma gia na tou dwsw thn epilogh na paei eite gia change cost h exit
                             printf("\n Please type 'a' if you want to Change cost or 'b' if you want to exit\n ");
                              
							  do //elegxos an o admin vazei to swsto gramma sto option
							  {
							  	
							  	 scanf(" %s",option);
							  	 
							  	  system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
                                    
                                
							  	              if (strcmp(option,"a")==0)//edw elegxw an h apanthsh tou einai a kai dhlwnw to y na isoutai me 1 an oxi me 2
							  	              {
							  	              	printf(" Consumption in kWh \t\t  Energy cost(EUR/kWh)\n\n Step 1:0-1600 \t\t\t  0.00542 EUR / kWh\n Step 2:1601-2000 \t\t  0.00682 EUR / kWh\n Step 3:>2000      \t\t  0.00822 EUR / kWh\n\n");
                                                printf(" Please choose between 1-3 of the steps that you want to change the cost of it\n ");
                                                
                                                 do //elgxw an o ari8mos pou 8a balei o admin sto step 8a einai swstos
                                                 {
										          scanf(" %s",step);
        
							  	                	y=1;
							  	    	                if (strcmp(step,"1")==0)
							  	    	                {
							  	    	                 	first= change_cost(first,second,third);
										                }
										                else if(strcmp(step,"2")==0)
										                {
										  	                second= change_cost(first,second,third);
										                }
										                else if(strcmp(step,"3")==0)
										                {
										  	                third= change_cost(first,second,third);
										                }
										                else
										                {
										                	printf("\n You typed wrong number. Please try again!\n\n ");
										               	}
										           }while( (strcmp(step,"1")!=0) &&  (strcmp(step,"2")!=0) && (strcmp(step,"3")!=0)); 
							  	     	         
								               }  
									           else if (strcmp(option,"b")==0)
									           {
									          	y=2;
									            exit_admin();
										         break;
									           }
									           else if ((strcmp(option,"a")!=0) && (strcmp(option,"b")!=0)) 
									           {
									           	printf("\n You typed the wrong letter. Please try again! Type 'a' if you want to change cost or 'b' if you want to exit\n ");
										        y=3;
									            }
							            
							   }while(y==3);
							   
                        }
                        else //edw einai an o admin pathse 2 gia logout opote odhgeitai sthn antistoixh sunarthsh
                        {
               	            logout();
               	            break;
			            }
			        }while(strcmp(response,"2")!=0);  
			    break;
             }
             case 2://an h apanthsh tou isoutai me user tote mpainei se auto to case kai vlepei to user's main menu kai antistoixes epiloges
             {
              
              	
                 do //do while gia na kanei o user tis epiloges sign up kai login kai na termatizei otan pataei 3 gia login ,ara sunexizei oso den einai 3
                 {
                 	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
                 	
				     //mhnuma pou emfanizetai ston ka8e user gia na mpei sto susthma kai tou dinei tis 3 epiloges signup ,login ,logout
                     printf(" Welcome!\n This is the user's main menu!\n Please type the number of the option you want:\n\n 1.Signup\n 2.Login\n 3.Logout\n\n ");
                      do //elegxos gia na vazei thn swsth apanthsh 1,2 h 3 
					  {
					
							
	                       scanf(" %s", entry);
                        
                             if (strcmp(entry,"1")==0)//elegxei an h apanthsh tou user einai 1 gia na mpei sto sign up
						    {
                               system("cls");
                               signup_user();
                            }
						    else if (strcmp(entry,"2")==0)//elegxei an h apanthsh tou user einai 2 gia na mpei sth login
						    {
                                 		     	       
									do //do while sunarthsh gia na mporei na dialegei o user ta a,b,c mexri na valei d pou einai to exit
									{
                                          login_user();
                                          scanf("%s", choice);
                                          
                                              if (strcmp(choice, "a")==0)//elegxei me strcmp an h apanthsh einai a  wste na ton valei sthn sunarthsh calculate cost 
											   {
                                                     calculate_cost();
                                                     testA=1;//to testA painrie timh 1 gia na kserw oti hdh mphke sthn calculate cost
				                               }
				                               else if(strcmp(choice, "b")==0)//elegxei me strcmp an h apanthsh einai b  wste na ton valei sthn sunarthsh payment
				                               {
				                               	    if(testA==1)//elegxw me thn timh ths testA an mphke hdh sthn calculate cost an oxi emfanizei mhnuma la8ous kai paei pisw sto menu
				                               	    {
				                               	    	payment();
				                               	    	testB=1;//to testB pairnei timh 1 gia na kserw otihdh mphke sto payment
													}
													else
											        {
											        	printf(" You haven't calculated your cost yet, please choose to do so and then move to payment\n");
											        }
											    }
											    else if(strcmp(choice, "c")==0)//elegxei me strcmp an h apanthsh einai c  wste na ton valei sthn sunarthsh get receipt
											    {
											    	if(testB==1)//elegxw me thn timh ths testB an mphke hdh sth payment an oxi emfanizei mhnuma la8ous kai paei pisw sto menu
											    	{
											    		get_receipt();	
													}
													else
													{
														printf(" You haven't paid your cost yet,please choose to do so and then move to getting your receipt\n");
													}
												}
												else if(strcmp(choice, "d")==0)//elegxei me strcmp an h apanthsh einai d  wste na ton valei sthn sunarthsh exit user
												{
													exit_user();
												}
											   
									}while(strcmp(choice, "d")!=0);
							  
						      }
						      else if(strcmp(entry,"3")==0)//elegxei an h apanthsh tou user einai 3 gia na kanei logout
						      {
						     	logout();
						      }
						      else
						      {
						   	     printf(" You typed wrong number.Type '1' if you want to signup,type '2' if you want to login and type '3' if you want to exit\n ");
						      }
					  }while((strcmp(entry,"1")!=0) && (strcmp(entry,"2")!=0) && (strcmp(entry,"3")!=0));	   
						   
			     }while(strcmp(entry,"3")!=0);
			     break; 
			            
             }
            case 3://an h apanthsh tou einai 0 tote vgainei apo to programma kai tuponetai mhnuma pou ton enhmerwnei
            {
            	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
   
                printf("\n You chose logout!");
                terminate();
                break;
            }
          
         }
      
    }while(i!=3);
  
  return 0;
}


void signup_user()//sunarthsh wste na kanei sign up o user sto susthma kai tou zhtaei ta aparaithta stoixeia
{
    //dhlwsh metavlhtwn ths signup_user
    int flag=0;
    char continuity[5];
    
    system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
    
     //aples printf kai scanf gia na parw ta stoixeia tou user
     printf(" You chose sign up! \n Please fill up your information\n\n ");
     printf("\n What is your name?\n ");
       scanf(" %s",name);
     printf("\n What is your surname?\n ");
       scanf(" %s",surname);
     printf("\n What is your address?\n ");
       scanf(" %s",address);
     printf("\n Please choose your username\n ");
       scanf(" %s",username);
     printf("\n Please choose your password\n ");
    
         do // do while loop pou elegxei an o kwdikos pou 8a valei o user 8a einai 4 digits opws xreiazetai
	     {
           scanf("%s", password);
           
            int j=0;
               for(j=0; j<5; j++)//exei dhlw8ei to password ws pinakas max 5 8esewn opote mia for pou na trexei ka8e 8esh tou kai sto telos na krataei to j poses 8eseis pianei to password pou plhktrologise
               {
                	if(password[j]=='\0')//metraei mia mia tis 8eseis tou pinaka kai gia ta strings panta sto teleutaio einai to \0 opote elegxei ena ena mexri na to vrei kai na termatisei
            	     {
            		
            	    	break;
			      	 }
			   }
                    if(j==4)//an o kwdikos pianei 4 8eseis mnhmhs tote ginetai apodektos kai tou emfanizei analogo mhnuma 
			        {
			   	         flag=1;//to flag pairnei timh 1 gia na akurwnetai to do while loop ama valei to swsto plh8os kwdikou
                          printf("\n Your username and password was accepted!\n");
                    }
			        else //an o kwdikos einai mikroteros h megaluteros apo 4 8eseis mnhmhs pou einai to epi8umito emfanizetai mhnuma la8os kai zhtaw na ksanaplhktrologhsei
		            {
		       	         flag=0;//to flag pairnei timh 0 gia na sunexizetai h do while loopmexri na valei ton epi8umito kwdiko
		                 printf("\n Invalid password.Please try again\n ");
		            }

         }while(flag==0); 
        
       
         //mhnuma ston user gia na ton rwthsw an 8elei na sunexisei kai na mpei sto susthma afou ekane sign up
         printf("\n\n If you want to continue with login please type '2' otherwise type '3' to logout.\n ");
	        do //elegxw thn timh ths continuity na einai valid
	        {
			
			 scanf(" %s", continuity);
	             if((strcmp(continuity,"2")==0) || (strcmp(continuity,"3")==0))
	             {
				    if(strcmp(continuity,"2")==0)
				    {
				    	login_user();
                        break;
					}
					else if (strcmp(continuity,"3")==0)
					{
						
                        logout();        
                        break;
					}
	                
                  }
                  else
				  {
				  	printf("\n You typed the wrong number. Type '2' if you want to logn or '3' if you want to logout\n ");
				  }
                
           } while((strcmp(continuity,"2")!=0) && (strcmp(continuity,"3")!=0));    
}


void login_user()//sunarthsh login gia ton user opou epibebaiwnontai ta stoixeia tou kai emfanizetai analogo menu epilogwn
{
   //dhlwsh metavlhtwn ths login_user
   int i,flag;
   char un[10],pw[10];
   
    system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
    
      printf(" You chose login! \n\n");//o user epelsekse login opote tou vazoume na plhktrologisei to username tou kai to password tou 
      
         do //while loop opou na sunexizetai h epanalhpsh kai na emfanizetai analogo mhnuma ama exei plhktrologizei la8os username mexri na valei to swsto
         {
            printf("\n Enter your username here: \n ");
              scanf(" %s",un);
              
                if(strcmp(un,username)==0)//edw elegxoume me strcmp an to username pou ebale o xrhsths einai to idio me auto pou evale sto sign up ,to un, kai emfanizei analogo mhnuma
                {
                  printf("\n You have entered your Username successfully!\n");
                }
                else
                {
                  printf("\n Username is incorrect.Please try again!\n");
                }
  
          }while(strcmp(un,username)!=0);
          
          
          do //while loop opou na sunexizetai h epanalhpsh kai na emfanizetai analogo mhnuma ama exei plhktrologizei la8os password mexri na valei to swsto
		  {
            printf("\n Enter your password here: \n ");
              scanf(" %s", pw);
              
                    if(strcmp(pw,password)==0)//edw elegxoume an to password pou ebale o xrhsths einai to idio me auto pou evale sto sign up ,to pw, kai emfanizei analogo mhnuma
					{
					    printf("\n You have entered your Password successfully!\n");
					}
					else 
					{
						printf("\n Password is incorrect.Please try again!\n");
					}
           }while(strcmp(pw,password)!=0);
            
            	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
            	
               	printf(" You logged in!\n");
                  do //elegxos an vazei o user swsto gramma ws apanthsh
                  {
				  
                      do //do while loop opou na mporei o user na kanei tis epiloges tou menu tou mexri na pathsei d gia exit
			         {
               
               	         printf("\n\tMenu:\n\n a.Calculate Cost\n b.Payment\n c.Receipt\n d.Exit\n Please choose a,b,c or d for your demand\n\n ");//edw emfanizetai to menu epilogwn tou user
                      scanf(" %s",choice);
                      	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
               	
                                              if (strcmp(choice, "a")==0)//elegxei me strcmp an h apanthsh einai a  wste na ton valei sthn sunarthsh calculate cost 
											   {
                                                     calculate_cost();
                                                     testA=1;//h testA painrei timh 1 gia na mporw na elegxw argotera oti hdh mphke apo thn calculate cost 
				                               }
				                               else if(strcmp(choice, "b")==0)//elegxei me strcmp an h apanthsh einai b  wste na ton valei sthn sunarthsh payment
				                               {
				                               	    if(testA==1)//elegxei thn timh ths testA an isoutai me 1 dhladh an exei hdh mpei sthn calculate cost 
				                               	    {
				                               	    	payment();
				                               	    	testB=1;//h testB pairnei timh 1 gia na mporw na elegxw argotera an mphke sthn payment
													}
													else//an to testA den isoutai me 1,dhladh den exei mpei sthn calculate cost, den mporei na mpei sthn payment ,emfanizei analogo mhnuma kai paei sto main menu
											        {
											        	printf(" \n You haven't calculated your cost yet, please choose to do so and then move to payment");
											        }
											    }
											    else if(strcmp(choice, "c")==0)//elegxei me strcmp an h apanthsh einai c  wste na ton valei sthn sunarthsh get receipt
											    {
											    	if(testB==1)//elegxei thn timh ths testB an einai ish me to 1 dhladh an exei mpei hdh sto payment 
											    	{
											    		get_receipt();	
													}
													else//an to testB den isoutai me 1,dhladh den exei mpei sthn payment, den mporei na mpei sthn get receipt ,emfanizei analogo mhnuma kai paei sto main menu
													{
														printf(" \n You haven't paid your cost yet, please choose to do so and then move to getting your receipt");
													}
												}
												else if(strcmp(choice, "d")==0)//elegxei me strcmp an h apanthsh einai d  wste na ton valei sthn sunarthsh exit user
												{
													exit_user();
												}
												else
												{
													printf("\n You typed wrong letter.Please try again!\n");
												}
					      				   
			            }while(strcmp(choice, "d")!=0);
			        }while((strcmp(choice, "a")!=0) && (strcmp(choice, "b")!=0) && (strcmp(choice, "c")!=0) && (strcmp(choice, "d")!=0));    
       
}


void calculate_cost()//sunarthsh opou mporei o user na upologizei to teliko kostos paroxhs hlektrikou reumatos tou
{
     //dhlwsh metavlhtwn ths calculate_cost
     int num;
     char next[5];
     float Municipal_charges,Energy_charge;
   
     system("cls"); //entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
     
        //plhktrologei o xrhsths ta stoixeia tou dhladh twn ari8mo kilovatorwn kai ta tetragwnika metra wste na upoogistei to teliko kostos 
         printf(" You chose to calculate your final cost.\n\n Please enter your final number of kWh you have spent:\n ");
           scanf(" %d",&num);
         printf("\n and your square meters of your home:\n ");
           scanf(" %d",&meters);

              //to pinakaki me tis analogies gia ton upologismo telikou posou xrewshs sumfwna me to fulladio
               if ((num>= 0) && (num<=1600))
               {
                   Energy_charge = first * num ;
               }
               else if ((num>= 1601) && (num<=2000))
               {
                   Energy_charge = second * num ;
               }
               else 
               {
                   Energy_charge = third * num ;
               }
  
               if ((meters>= 0) && (meters<=75)) 
               {
                   Municipal_charges= 0.13*meters;
               }
               else if((meters>75) && (meters<=115))
               {
                   Municipal_charges= 0.26*meters;
                }
               else 
               {
                   Municipal_charges= 0.42*meters;
               }
               
  //upologismos telikwn poswn sumfwna me to fulladio
  Municipal_taxes =  Municipal_charges * number_of_days/365 ;
  Municipal_taxes= floorf(Municipal_taxes*100)/100;
  
  Total_charges = Energy_charge;
  Total_charges= floorf(Total_charges*100)/100;
  
  Initial_cost = Municipal_taxes + Total_charges;
 
  Final_cost = Total_charges + Municipal_taxes;
  Final_cost = floorf(Final_cost*100)/100;
  
  printf("\n Your final cost is %.2f EUR\n", Final_cost);
  
   printf("\n\n If you want to continue with Payment please type 'b' or if you want to Exit please type 'd':\n ");
	do // elegxos gia to an vazei to swsto gramma
	{
		
		scanf(" %s",next);
		
	       if((strcmp(next, "b")==0))
	        {
               payment();
               break;
            }
            else if((strcmp(next, "d")==0))
            {
                logout();        
                 break;
            }
            else
            {
            	printf("\n You typed the wrong letter.Type 'b' for payment or type 'd' for exit\n ");
			}
    }while((strcmp(next, "b")!=0) && (strcmp(next, "d")!=0));
   	 system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
           
}


void payment()//sunarthsh opou dinetai ston user h epilogh na plhrwsei to kostos tou eite me metrhta eite me pistwtiki karta
{
   //dhlwsh metavlhtwn ths payment
   int pl;
   char action[5];
   float cost;
   pl=0;//arxikopoihsh tou pl
   
    system("cls"); //entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
        
   printf(" You chose payment! \n Please type '1' if you want to pay with cash or '2' if you want to pay with credit card\n ");
    do // elegxos gia an o user dinei swsth timh sth metavlhth pay
    {
	
     	scanf(" %s",pay);
  
         if(strcmp(pay, "1")==0)//elegxoume an to pay exei thn timh 1 dhladh an epelekse me metrhta
         {
         	system("cls"); //entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
            printf(" You chose cash!\n");
            
              do //do while loop gia na zhtaw apo ton xrhsth na vazei to poso pou einai na plhrwsei pou upologisthke sto calculate cost mexri na to valei swsta
              { 
                 printf(" \n Please write correctly the final cost you got from earlier\n ");
                   scanf("%f",&cost);
              }while (cost!=Final_cost);
             printf("\n The payment was successful!\n");
             
         }
        else if ((strcmp(pay, "2")==0))
        {
             system("cls"); //entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
 
              printf(" You chose credit card!\n\n Please enter correctly all of the 16-numbers of your card\n ");
             
             do //do while loop gia na elegxei to plh8os twn ari8mwn poy plhktrologise o user gia thn pistwtikh karta mexri na valei swsto
	         {
                 scanf(" %s", card);
                 
                 int i = 0;
                 for(i=0; i<20; i++) //for loop gia na trexei ka8e mia 8esh tou string card kai sto telos na krataei to i poses 8eseis pianei to card pou plhktrologise gia na to elegxei
				 {
                      if(card[i]=='\0')//metraei mia mia tis 8eseis tou pinaka kai gia ta strings panta sth teleutaia einai to \0 opote elegxei ena ena mexri na to vrei kai na termatisei
					  {
                        break;
                      }
                 }
                 
                 
                   if(i==16)// an en telei to j isoutai me 16 dhladh exei plhktrologisei 16 pshfia etsi opws einai to zhtoumeno, th dexomaste
			       {
                       pl=1;//to pl pairnei timh 1 gia na spaei thn do while loop an dwsei to swsto noumero
                    printf("\n Great!Your credit card was accepted!\n\n");
                   }
			       else // an o user dwsei mikrotero h megalutero noumero apo to 16 pou xreaiazomaste den ginetai apodekth kai tou ksanazhtame na plhktrologisei me analogo mhnuma
		           { 
	                   pl=0;//to pl pairnei timh 0 epeidi einai mhnuma la8os wste na to valw sthn sxesh while kai na sunexizetai h loupa oso einai alh8es
		               printf("\n Invalid number.Please try again\n ");
		           }

             }while(pl==0); 
            
              do //do while loop gia na valei to swsto poso pou einai na plhrwsei pou phre apo to calculate cost
              { 
                 printf(" Please write correctly the final cost you got from earlier\n ");
                   scanf(" %f",&cost);
              }while (cost!=Final_cost);
              
             printf("\n The payment was successful!\n ");
            
         }
         else
         {
         	printf("\n You typed the wrong number.Please type '1' if you want to pay with cash or '2' if you want to pay with credit card\n ");
		 }
    }while((strcmp(pay, "1")!=0) && (strcmp(pay, "2")!=0));
               
    discount =  Final_cost - (Final_cost*0.10); 
       //mhnuma gia na sunexisei to menu epilogwn
      printf("\n\n If you want to continue with getting your receipt, please type 'c' otherwise type 'd' to exit.\n ");
	     do
	     {
		    scanf(" %s", action); 
		        if(strcmp(action, "c")==0)
		        {
		        	get_receipt();
		        	break;
				}
                else if(strcmp(action, "d")==0)
                {
                    exit_user();
				    break;
			    }
			    else
			    {
			    	printf("\n You typed the wrong letter.Type 'c' if you want your receipt or type 'd' if you want to exit\n ");
				}
		}while((strcmp(action, "c")!=0) && (strcmp(action, "d")!=0));
         system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata      
}
  
  
void get_receipt()//sunarthsh opou ektupwnetai h apodeiksh tou user me ola tou ta stoixeia
{
	//dhlwsh metavlhtwn get_receipt
	int akeraios;
    system("cls"); //entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
    
  //mhnuma apodeikshs
  printf("\t\t\t\t PERSONAL DETAILS\n\n \tName:\t\t\t\t\t\t\t %s\n \tSurname:\t\t\t\t\t\t %s\n \tAddress:\t\t\t\t\t\t %s\n",name,surname,address);
  printf(" \tTotal days of consumption:\t\t\t\t %d\n \tSq. Meters:\t\t\t\t\t\t %d\n\n\t\t\t\t   PRICING\n\n \tInitial Cost:\t\t\t\t\t\t EUR %.2f\n",number_of_days,meters,Initial_cost); 
  printf(" \tDetails:\n \t\tMunicipal Taxes:\t\t\t\t EUR %.2f\n \t\tTotal Charges:\t\t\t\t\t EUR %.2f\n ",Municipal_taxes,Total_charges);
      	
		if ((strcmp(pay, "1")==0))//an to pay isoutai me 1 paei na pei oti o user plhrwse me metrhta ara den exei extra paren8esh mhnumatos sthn apodeiksh
     	{
		    printf("\tFinal cost:\t\t\t\t\t\t EUR %.2f\n",Final_cost);
     	}
     	else//an to pay isoutai me 2 paei na pei oti o user plhrwse me pistwtikh karta ara 8a mpei extra paren8esh mhnumatos sthn apodeiksh
     	{
     		printf("\tFinal cost (after credit card payment deduction):  \t EUR %.2f\n",discount);
		}
		
	printf("\n\t\t\t\t PAYMENT DETAILS\n\n \tCredit Card Number:\t\t\t\t\t %s\n\n",card);
	printf("\n Type any integer to continue...\n ");	
	scanf("%d",&akeraios);
	
}


void exit_user()//sunarthsh opou o user kanei exit apo thn epilogh pou vrisketai kai odhgeitai sto user's main menu
{   
  printf("\n You chose exit.You will get transferred in the user's main menu!\n");
}


void logout()//sunarthsh opou o xrhsths odhgeitai sto main menu tou programmatos
{
  printf("\n You chose to log out.\n");
}


void terminate()//sunarthsh opou termatizei to programma
{
  printf("\n Program has been terminated \n");
 
}


double change_cost(double first,double second,double third)//sunarthsh opou o admin mporei na allaksei thn timh ths kilovatoras
{
  //dhlwsh metavlhtwn ths change_cost	
  float new_charge;
 
  system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata      
    
         
     if((strcmp(step, "1")==0))//elegxos an o admin epelekse thn 1h va8mida 
     {
     	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata      

      printf(" You chose Step 1:0-1600 \t\t  0.00542 EUR / kWh\n Please write the new number of charge\n ");
        scanf(" %f",&new_charge);
        
		do // do while loop opou enhmerwnei ton admin an valei parapano h ligotero kostos 20 %diafora apo to prohgoumeno
		{
		    
          if ((new_charge >= first + (first*0.20)) || (new_charge <= first - (first*0.20)))
          {
           printf("\n Your number can not be accepted due to the big gap between the previous one. Please choose a different number\n ");
            scanf(" %f",&new_charge);
          }   
	    }while((new_charge >= first + (first*0.20)) || (new_charge <= first - (first*0.20)));
	    
	    printf("\n The cost changed successfully!\n\n");
     }
     else if((strcmp(step, "2")==0))//elegxos an o admin epelekse thn 2h va8mida 
     {
     	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata      

      printf(" You chose Step 2:1601-2000 \t\t  0.00682 EUR / kWh\n Please write the new number of charge\n ");
        scanf(" %f",&new_charge);
        
        do // do while loop opou enhmerwnei ton admin an valei parapano h ligotero kostos 20 %diafora apo to prohgoumeno
        {
		
           if ((new_charge >= second + (second*0.20)) || (new_charge <= second - (second*0.20)))
           {
               printf("\n Your number can not be accepted due to the big gap between the previous one. Please choose a different number ");
                 scanf(" %f",&new_charge);
            } 
	    }while((new_charge >= second + (second*0.20)) || (new_charge <= second - (second*0.20)));
	    
	     printf("\n The cost changed successfully!\n\n");
    }
    else if((strcmp(step, "3")==0))//elegxos an o admin epelekse thn 3h va8mida 
    {
    	system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata      

      printf(" You chose Step 3:>2000      \t\t  0.00822 EUR / kWh\n Please write the new number of charge\n ");
        scanf(" %f",&new_charge);
         
         do // do while loop opou enhmerwnei ton admin an valei parapano h ligotero kostos 20 %diafora apo to prohgoumeno
         {
		 
              if ((new_charge >= third + (third*0.20)) || (new_charge <= third - (third*0.20)))
               {
                    printf("\n Your number can not be accepted due to the big gap between the previous one. Please choose a different number ");
                      scanf(" %f",&new_charge);
               }   
         }while((new_charge >= third + (third*0.20)) || (new_charge <= third-(third*0.20)));
         
          printf("\n The cost changed successfully!\n\n");
    }
    return new_charge ;
}


void exit_admin()//sunarthsh opou o admin kanei exit apo thn epilogh pou vrisketai kai odhgeitai sto admin's main menu
{   

	printf("\n You chose exit.You will get transferred in the admin's main menu!\n");
		system("cls");//entolh pou ka8arizei ola ta prohgoumena mhnumata wste na exei ka8arh o9onh mono me ta kainouria mhnumata
				
}








