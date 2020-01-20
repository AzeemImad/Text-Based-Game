/*
Filename 	: <Azeemuddin Imad Mohammed >
Program		:The program is a TAG. It is a game that runs on Integers.The storyline comprises of the user  going throught the building throughout the game
			trying to steal the diamond. 	 
Programmer	: <Azeemuddin Imad Mohammed>
Class		: ICS203 (Mr.Sze)
Due Date	: <June 5th 2015>
*/

#include <iostream>
#include <string>
#ifdef __cplusplus__
#include <cstdlib>
#else
#include <stdlib.h>
#endif

using namespace std;

void delay ()
{
	int c = 1 , d = 1 ;
		for (c = 1; c <= 30000 ; c++)
		for (d = 1; d <= 30000 ; d++)
		{}
		
}

int gameover () 
{
	int istart ;
	cout << " YOU ARE SURROUNDED! HAND OVER YOUR WEAPONS NOW !!!\n" ;
	
	delay () ;
	
	cout<< " GAURDS SHOOT!!\n ";
	
	delay () ;
	
	cout <<" ENEMY DOWN! \n";
	
	delay () ;
	
	cout << "GAME OVER \n";
				
	delay () ;
		
	system ("COLOR 01") ;
	
	istart = 7 ;
}

//Pat is color 09
//Ali is color 08
//Ninja is color 0

int main ()
{
// start screen 
// it's a game runnign on integers. put in anything else, it will crash . This is part of the story plan.
// little to no comments needed here

//character info:
// Pat talks like a teenager.
// Ali talks like a mexican
//Retro and cracker have the same slang . Cracker speaks in shakespearean english 
//Ninja stresses his s's.

	
string sname ,sriddle ;
int istart,iroom2, iover, iriddle, iunderstood, iunderstood2, iroom, ians1,ians2,ians3,ians4,ians5,ians6,ians10,ians11, ians13, icode, iperson, iperson2, ians7,ians8,ians9, iperson3, ipoints, ininja, ininja2, iperson5, iridode, ideathwish;
		
cout<<"          ______________________________________         "<<endl;
cout<<"       .-'  /\\     \\ _.-''-._ /         /\\      '-.      "<<endl;
cout<< "    .-    /\\       .'.      .'.        /\\\        -.     "<<endl;
cout<<"    _'    /  \\.    '   '.  .'   '.     /  \\\        '_    "<<endl;
cout<<"    :==============AZEEM==IMAD==MOHAMMED============:    "<<endl;
cout<<"    '.         \\         ''           /        .' .'    "<<endl;
cout<<"     '. .       \\       :  :         /        . .'      "<<endl;
cout<<"       '.'       \\      '  '        /        '.'        "<<endl;
cout<<"         ':       \\    :    :      /        :'          "<<endl;
cout<<"           '.      \\  '      '    /       .'            "<<endl;
cout<<"             '.     \\   THIEF    /      .'              "<<endl;
cout<<"               '.    \\          /     .'                "<<endl;
cout<<"                 '.   \\        /    .'                  "<<endl;
cout<<"                   '.  \\      /   .'                    "<<endl;
cout<<"                     '. \\    /  .'                      "<<endl;
cout<<"                       '.\\  / .'                        "<<endl;
cout<<"                         '\\/'                           "<<endl;
cout<<"                       DIAMOND!!!                        " <<endl;

cout << "RULES: \n " <<endl;
cout << "  The character in the game owns a self made watch . It is very crude \n " ;
cout << " Use ONLY GIVEN ints. Otherwise , the watch will malfuntion and sometimes call the gaurds \n" <<endl ; 
cout <<" 1. START" <<endl;
cout <<" 2. STORY" <<endl;
cin >> istart ;
if (system("CLS")) system("clear");

while (istart == 9)
	{
		gameover () ;
	}

if (istart == 2)	
 {
// story 	
	cout<< " Year 2053\n"; 
	
    delay ();
    
	cout << "  the world was relived as the thefts were going down each day\n";
		
	delay ();
		
	cout<< " the the annual robbery testing unit, (AR2), an artificial intelligent system, wasnt satisfied with the measures" <<endl;
		
    delay ();
        //this changes the colour of the program.
    system ("COLOR 02") ;
        
	delay () ;
        
    if (system("CLS")) system("clear");
        
    cout<<" it just wanted more.... \n "<<endl ;
        
    delay ();
        
    cout<<" the annual diamond challange has been called out\n";
        
    delay ();
        
    cout<< " win , you get to keep the diamond \n";
        
    delay ();
        
    cout<< " lose , you get erased from face of the earth\n";
        
	delay ();
        
    cout<< " are you ready?\n" ;  
	     
        
         istart = 1 ;
    // this will get clear the oupput and then it will bring the cursor to the top left of the compiler     
	if (system("CLS")) system("clear");
	
}

while (istart == 1 ==0 );	
	{
	
		// actual game.
		
		//game depends on points 
		while (istart ==1 == 0  ) ;
		{
			// you always start with 2000 points.
			 
			ipoints = 2000 ; 
		
		delay ();
		
		system ("COLOR 02") ;
		
		cout<< " whats your name ? \n" ;
		
		cin >> sname ;
		
		cout<< "Hello!\n" <<sname << "\n Pat:I am Pat. Nice to meet you.\n" ;
		
		delay ();
		
		system ("COLOR 08") ;
		
		cout << " Ali: Pat maaaan , wouldnt you introduce your paaals, eh ?\n" ; 
		
		delay () ;
		
		system ("COLOR 09") ;
		
		cout << " Pat: ok fine ! so " <<sname  ;
		
		cout<< " , I am Pat, the hacker, member of the group of five\n ";
		
		delay ();
		
		cout<< "Ali is the another member. (yeah, the idiot you just heard).\n " ;
		
		delay ();
		
		cout << "Ali: Hey!!! \n" <<endl;
		
		system ("COLOR 02") ;
		
		cout << "Ninja: tell massster about me too Pat.\n"<<endl ;
		
		delay ();
		
		system ("COLOR 09") ;
		
	     cout << " Pat : yea, im getting to that\n"<<endl ;
	    
	   	delay ();
	    
		cout << " Ok, so ninja is also a member of 5\n"<<endl ;
		
		delay ();
		
		cout << " so are retro and cracker\n"<<endl  ;
		
		delay ();
		
		cout << "all of us cost points \n "<<endl ;
		
		cout << "Pat: I cost 800\n "<<endl ;
		
		cout << "Ali : I cost 100 \n"<<endl ;
		
		cout << "Ninja : I cost 500\n" <<endl ;
		
		cout << "Cracker : I cost 1000\n" <<endl ;
		
		cout << " Retro : I will Award you 600 for all correct answers\n"<<endl ;
		
		delay () ;
		
		cout << " Ok man,listen, you have technically 5 minutes to break into the facility and then steal the diamond\n"<<endl;
		
		delay () ;
		 
		cout << "Grab the diamond and exit the building, alright\n"<<endl ;
		 
		delay () ;
			
		cout <<   "so far so good?\n " <<endl;
			
		cout << "1.Yes or 2.No?\n "<<endl;
			
		cin>>  iunderstood ;
		
		// here the person will be briefed again if he didnt catch the thing.
		
	    if (iunderstood == 1)
	    	{
	    	cout <<"ok, moving on,\n " <<endl;
			 		
	 		cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
			 	
	 		delay () ;
	 		
			 	
	 		if (system("CLS")) system("clear");
			 		
	 		system ("COLOR 02" ) ;
			  		
	  		cout << " ENTERED ROOM 1.\n"<<endl ;
			  		
	  		system ("COLOR 09" ) ;
			  		
	  		cout<< "this room has a camera\n"<<endl ;
			  			
	  		cout << "Pat:  this is your first time so lemme teach you how to battle it out! \n "<<endl ;
			  		
			system ("COLOR 09") ;
			//password to gain access into the next room
			cout << " ok the password for the camera is 27456 \n" <<endl;
			
				delay () ;
			
				delay ();
					
				delay () ;
					
				delay () ;
					
				//delay () ;
					
					
			//te below command clears system 
			if (system("CLS")) system("clear");
			
			cout<< " ok, you have to enter the password into your watch . Enter ....." ;
			
				delay (); 
			
			cout <<" Now!\n"<<endl;
		
			cin>> icode;
			
			if (icode == 27456) 
				{
					// here if the if statement is correct, then it will move the game forward.
				cout<< 	"great job!\n "<<endl;
						
				delay () ;
			
	  			 cout<<  "ok time to call Retro\n"<<endl ;
		    
	  			delay () ;
		  				  
		  		system ("COLOR 05") ;
		
				cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n "<<endl ;
		
				delay ();
				
				cout <<  " Who was toronto's mayor in 2015\n " ;
			
				cout<< " 1.Rob Ford\n";
			
				cout<< " 2. John Tory\n " ;
			
				cout<< " 3. Eugene Choi\n ";
		
				cin >> ians1 ;
				
				if (ians1 == 2 )
					{
					cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
	
					delay ();
			
					cout << " 1. Ottawa\n";
			
			
			
					cout << " 2. Toronto\n";
			
		
			
					cout << "3. Vancouver\n";
			
					cin  >>  ians2 ;
					
					if (ians2 == 1)
						{
		
						cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
			
						//delay ();
			
						 cout << " 1. Russia\n" ;
			
						 cout << " 2. India\n" ;
			 
						 cout << " 3. Canada\n" ;
			 
						 cin >> ians3 ;
						 
						icode = 12345 ; 
			
	    				}	
	    				else 
						{
					 	cout<< " you are on the wrong track buddy \n" <<endl ;
					
						delay () ;
					
				 		cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
	 				
	 					delay () ;
	 				
		  				cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
		  				
		  				ians3 = 3;
						}
						
						
			
					}
					else 
					{
					cout<< " you are on the wrong track buddy \n"<<endl  ;
					
					delay () ;
					
				 	cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
	 				
	 				delay () ;
	 				
		  			cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
		  			
		  			ians3 = 3 ;
		  			}
		  			
			  	if (ians3 == 3) ;
				    {
				 	 cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n " <<endl ;
				
					delay () ; 
			
					 cout << "call me whenever you want , but I got to go now . see you later, \n"  <<endl;
							
					delay () ;
							
					 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
					 //new room is entered. here points will come into effect. 
					 cout << "  ENTERED ROOM 2 " <<endl ;
					//this will then output the points on compiler  screen
					 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
				
					 delay ();
					//Condition/obstacle is given here
					 cout << " there is a camera here\n "<<endl  ;
				
				   	 delay ();
				
					 cout << "whom do you want to call. I think i will let Ali handle it . \n " <<endl  ;
				
					 delay ();
					//condition to choose the person is given here 
					 cout << "I am going to go now , so if you call me, the watch might malfuntion\n "  <<endl ; 
					
					 cout << "1.Ali or 2.Pat" <<endl  ;
				
					 cin >> iperson ;
					  				//if statement to show youre game is successfull. 	
				 			
				 	 if ( iperson == 1)
					 	{//check here if the points are more than 100 
					 		if (ipoints >= 100 )
					 		{//character ali will be called forth. 
					 			icode = 0 ;
					 			
			  		 	   	 ipoints = ipoints - 100 ;
							
					 	 	 system ("COLOR 08") ;
						
						 	 cout << "you currently have " <<ipoints << " points in your watch\n"<<endl;
						
			  		  		 cout <<" Hmm ill break the camera in no time \n" ;
			  			 
			  		 	 	 delay () ;
			  			 
			  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n "<<endl ;
			  			 
			  		 		 delay () ;
			  			 
			  		 		 cout << " Please , no time to call retro , we gotta move quick \n "<<endl ;
			  		 		 
			  		 		 iperson = 2 ;
			  		 		 
			  		 		 iperson = 2 ;
				  		 		 system ("COLOR 09") ;
						        
						         ipoints - 800 ; 
				 	 
								 cout << " ok the password for the camera is 84573 \n" <<endl  ;
						
								 delay () ;
						
								 delay () ;
								 
								 delay () ;
						
								 if (system("CLS")) system("clear");
						
								 cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
						
								 delay ();
								
							  						
								 cout <<" Now!\n"<<endl ;
						
								 cin>> icode;
								
								  if (icode == 84573 ) 
								{
				
								cout<< 	"great job!\n "<<endl ;
				
					    		cout<<  "ok time to call Retro\n" <<endl ;
					    		
					    		 system ("COLOR 05") ;
		
								cout << " ok my friend , you know the drill answer my following questions \n "<<endl ;
				
								delay ();
					
								cout <<  " What was Goerges Vanier's Mascot in 2015 ? \n" <<endl;
				
								cout<< " 1.Viking\n"<<endl;
				
								cout<< " 2.Puma\n" <<endl;
				
								cout<< " 3. Nathan Dong\n "<<endl;
				
								cin >> ians4 ;
				
								if (ians4 == 1 )
									{
										ipoints = ipoints + 200 ;
									cout<<  "Great Job ! Next Question : What year did  Air France Flight 358 bursts into flames while landing at Toronto Pearson International Airport?\n";
					
									delay ();
					
									cout << " 1. 2005\n" ;
							
									cout << " 2. 2000\n" ;
							
									cout << " 3. 2010\n" ;
					
									cin  >>  ians5  ;
					
									if (ians5 == 1)
										{
											ipoints = ipoints + 200 ; 
						
										cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
					
										 delay ();
					 
										 cout << " 1. Russia\n" ;
					 
										 cout << " 2. India\n" ;
					 
										 cout << " 3. Canada\n" ;
					 
										 cin >> ians6 ;
										
					 
					
										}
										else
										   if(ians6 =! 3)
											{
				 							cout<< " you are on the wrong track buddy \n" <<endl;
				 		
											 cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
						 
				 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl   ;
											 
											 ians6 = 3 ; 
				 				 			  
											}
										else 
										{
										 cout<< " you are on the wrong track buddy \n"  ;
					 
				 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
				 	
					  					delay () ;
					  					
					  					cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
					  					// this will kick out of the loop.
					  					ians6 = 3 ;
					  					
										}
				
					
									}
									else 
									{
									 cout<< " you are on the wrong track buddy \n" <<endl ;
				 
									 cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
										
									cout<< "you have "<<ipoints <<" points in your watch \n"<<endl;		 
				 
				  					delay () ;
				  					
				  					ians6 = 3 ;
									}
									
									if (ians6 == 3 )
									{
									cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n " <<endl  ;
								
									 delay () ; 
							
									 cout << "call me whenever you want , but i got to go now . see you later, \n" <<endl;
											
									 delay () ;
											
									 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl  ;
									 // same thing as above
									 cout << "  ENTERED ROOM 3 " <<endl  ;
									
									delay ();
									
									cout << " there is a camera AND a gaurd here/n "<<endl  ;
									
									delay ();
									
									cout << "whom do you want to call \n " <<endl ;
									
									delay ();
									
									cout << "1. Pat OR 2. Ninja \n " <<endl;
									
									cin >> iperson2 ;
									
									if  (iperson2 == 1)
										{
											if (ipoints >= 800)
											{//checksif the points are mre than 800
											system ("COLOR 09") ;
									    	// ipoints are subtracted   
									        ipoints - 800 ; 
							 	 			
											cout << " ok the password for the camera is 40976 \n" <<endl  ;
											
											delay () ;
					
											delay () ;
									
											if (system("CLS")) system("clear");
									
											cout<< " ok, you have to enter the pass word into your watch . Enter ....."   <<endl;
									
											delay ();
											
											delay () ;
											
											delay () ; 
									
											cout <<" Now!\n"<<endl  ;
									
											cin>> icode;
											
											 if (icode == 40976 ) 
												{//checks if password is correct.
												cout<< 	"great job!\n "<<endl;
										
									    		cout<<  "ok time to call Retro\n"<<endl ;

											
												cout << " ok my friend , you know the drill answer my following questions \n "<<endl ;

												delay ();
										
												cout <<  " When did Canada get their official flag? \n" ;
									
												cout<< " 1. Year : 1989\n";
									
												cout<< " 2.Year : 1965 \n" ;
									
												cout<< " 3. Year : 1898\n ";
									
												cin >> ians7 ;
												
												if (ians7 == 2 )
													{// 200 points will be added.
														ipoints = ipoints +200 ;
													cout<<  "Great Job ! Next Question : Official Language Of Pakistan \n";
											
													delay ();
										
													cout << " 1. Urdu\n";
														
													cout << " 2. Arabic\n";
												
													cout << "3. Persian\n";
										
													cin  >>  ians8 ;
										
													if (ians8 == 1)
														{
														
														ipoints = ipoints + 200 ; 
														
														cout << " another one answered! Ok, Last Question : What the largest amount of money in coins without being able to make change for a dollar.\n" ;
										
														 delay ();
										
														 cout << " 1.  5 quarters, 4 dimes, and 2 pennies\n" ;
										 
										 				cout << " 2.  6 quarters, 0 dimes, and 8 pennies\n" ;
										 
														cout << " 3.  3 quarters, 4 dimes, and 4 pennies\n" ;
										 
										 				cin >> ians9 ;
										 				
														   if(ians9 =! 3)
															{
								 							cout<< " you are on the wrong track buddy \n" <<endl;
								 		
															 cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
										 
								 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
															 
															 ians9 = 3 ; 
								 				 			  
															}
															else 
															{
															 cout<< " you are on the wrong track buddy \n"  ;
										 
									 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
									 	
										  					delay () ;
										  					
										  					cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
										  					
										  					ians9 = 3 ;
										  					
															}
									
										
														}
														else 
														{//if answer is wrong, the code will therefore give you only earned. 
														 cout<< " you are on the wrong track buddy \n"  ;
									 
														 cout<< " I really cant reward you any recharge more recharge points\n "<<endl  ;
															
														cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;		 
									 
									  					delay () ;
									  					
									  					ians9 = 3 ;
														}
																				
													}
													else
													{
														cout<< " you are on the wrong track buddy \n"<<endl  ;
									 
														 cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
															
														cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;		 
									 
									  					delay () ;
									  					
									  					ians9 = 3 ;
													}
													if (ians9 == 3)
													{
													cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n " <<endl ;
												
													 delay () ; 
											
													 cout << "call me whenever you want , but i got to go now . see you later, \n" <<endl ;
															
													 delay () ;
															
													 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl  ;
													 
													cout << "  ENTERED ROOM 4. " <<endl  ;

													delay ();
												
													cout << " there is a camera AND a gaurd here\n "<<endl   ;
												
													delay ();
												
													cout << "whom do you want to call \n " <<endl  ;
												
													delay ();
														
													cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl   ;
												
													cin >> iperson3 ;
												
													delay ();
													if (iperson3 == 1)
														{
															if ( ipoints >= 800)
															{
																ipoints = ipoints -800 ;
																
																	system ("COLOR 05") ;
				
															cout << " ok the password for the camera is 66966 \n"<<endl ;
													
															delay () ;
													
															delay () ;
													
															if (system("CLS")) system("clear");
													
															cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
													
															delay (); 
													
															cout <<" Now!\n"<<endl;
													
															cin>> icode;
															
															if (icode == 66966 ) 
																{//reapeating of what has been stated above.
																cout<< 	"great job!\n "<<endl;
													
												   				 cout<<  "ok time to call Retro\n" <<endl;
												    
												 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n "<<endl ;
		
																	delay ();
																
																cout <<  " Who was torontos mayor in 2015\n "  ;
															
																cout<< " 1.Rob Ford\n";
															
																cout<< " 2. John Tory\n " ;
															
																cout<< " 3. Eugene Choi\n ";
														
																cin >> ians10 ;
																
																if (ians10 == 2 )
																	{
																	cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
													
																	delay ();
															
																	cout << " 1. Ottawa\n";
															
															
															
																	cout << " 2. Toronto\n";
															
														
															
																	cout << "3. Vancouver\n";
															
																	cin  >>  ians11 ;
																	
																	if (ians11 == 1)
																		{
														
																		cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
															
																		delay ();
															
																		 cout << " 1. Russia\n" ;
															
																		 cout << " 2. India\n" ;
															 
																		 cout << " 3. Canada\n" ;
															 
																		 cin >> ians13 ;
																		 
																		 
															
													    				}	
													    				else 
																		{
																	 	cout<< " you are on the wrong track buddy \n" <<endl ;
																	
																		delay () ;
																	
																 		cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
													 				
													 					delay () ;
													 				
														  				cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
														  				
														  				ians13 = 3;
																		}
																		
																		
															
																	}
																	else 
																	{
																	cout<< " you are on the wrong track buddy \n" <<endl ;
																	
																	delay () ;
																	
																 	cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
													 				
													 				delay () ;
													 				
														  			cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
														  			
														  			ians13 = 3 ;
												    
												    			
												    
																	}
																
																if (ians13 == 3 )
																	{
																	cout << "ENTERED ROOM 5 \n" <<endl;
	  
																	 cout<< " This is it...\n " <<endl;
																	  
																   	 delay () ;
																   	 
																   	 system ("COLOR 02" ) ;
																		  
																	 cout << "The Vault \n " <<endl;
																	 
																	 delay () ;
																	 
																		 
																	 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																	 
																	delay () ;
																	
																	cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																	
																	delay () ;
																	
																	cout << " time to call cracker \n "<<endl ; 
																	
																	delay () ;
																	
																	cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																	
																	delay () ;
																	
																	cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																	
																	delay () ;
																	
																	cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																	
																	delay () ;
																	
																	cin >> 	iperson5 ;
																	
																	delay () ;
																	
																	if (iperson5 == 1 )
																		{ if (ipoints >= 800)
																			{
																				ipoints = ipoints - 800 ;
																			
																			system ("COLOR 09") ;
																				
																			cout << " ok the password for the camera is 13579 \n" <<endl;
																	
																			delay () ;
																	
																			delay () ;
																	
																			if (system("CLS")) system("clear");
																	
																			cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
																	
																			delay (); 
																	
																			cout <<" Now!\n";
																	
																			cin>> icode;
																	
																			if (icode == 13579 ) 
																				{
																				cout<< 	"great job!\n "<<endl;
																	
																   				 cout<<  "ok time to call Cracker\n"<<endl; 
																 			    
																 			    cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																    
																    			iperson5 = 2 ; 
																    																		    			
																    
																				}
																			else 
																			if (icode != 13579)
																				{
																				cout << "damn ! wrong code buddy ! \n" <<endl;
																		
																				delay ();
																		
																				cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl;
																		
																				delay ();
																		
																				cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																		
																				cout << " ru.... " ;
																																																									
																				// function called endgame over here ;
																				istart = 4; 
																    			}	
																			}
																			else
																			{
																				cout << "youre outta points mate\n"<<endl ;
																				
																				istart = 4; 
																			}
																		
																			
																			
																		}
																		else if (iperson5 == 2)
																		{//Vault is here
																			if ( ipoints >= 1000)
																			{
																				ipoints = ipoints - 1000 ; 
		 		
																		 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																		 		
																		 	 cout << "I am Ze Cracker. I am here to help you ! \n "<<endl ;
																		 		
																			 delay ();
																			 
																			 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " <<endl;
																			 
																			 delay ();
																			 
																			 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n "<<endl ;
																			 
																			 delay ();
																			 
																			 cout << " Answer this question for me so I will crack za vault for you !\n "<<endl ;
																			 
																			 delay ();
																			 
																			 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n"<<endl ;
																			 
																			 cout << "1.nothing or 2.poverty\n" <<endl ;  
																			 cin >> iriddle ;
																			 
																			 if ( iriddle == 1)
																			 	{
																			 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n"<<endl ;
																			 		
																			   	 delay ();
																					
																					cout << " MINUTES LATER \n" <<endl;
																					
																			   	 delay ();
																					
																					cout << " VAULT CRACKED !!! \n"<<endl;
																					
																					delay ();
																					
																					cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n"<<endl ;
																					
																					delay ();
																					
																					cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																					
																					delay ();
																					
																					system ("COLOR 09") ;
																					
																					cout << "Pat: wow ," <<sname ; 
																					
																					cout<< " this is the first time Ive seen him so emotional, \n "<<endl ; 
																					
																					delay ();
																					
																					cout << " time to open the Vault\n "<<endl ;
																					
																					cout << "The diamond isnt here?\n"<<endl ;
																					
																					cout << " ENTERED ROOM 6 \n"<<endl ;
																					
																					delay () ;
																					
																					cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																					
																					delay ();
																					
																					cout << " The diamond id in this room ! I see it ! \n"<<endl ;
																					
																					delay ();
																					
																					cout << " Pat: there is a security pass on this thing \n "<<endl; 	 	 	
																					
																					delay ();
																					
																					cout << " it says the password is the square root of squares of 3 and 4 \n "<<endl ;
																					
																					delay ();
																					
																					cout << "do you know the answer ?\n " <<endl;
																					
																					delay ();
																					
																					cin >> iridode ;
																					
																					delay ();
																					
																				 	if (iridode == 5 )
																						{
																							cout << "yes!!! we got the diamond!!! The security has been breached!!! \n"<<endl;
																							
																							system ( "COLOR 09") ;
  
																						  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n "<<endl ;
																						  
																						  delay ();
																						  
																						  cout << " We would like to but it from you " <<sname<<endl ;
																						  
																						  delay ();
																						  
																						  cout << "Name your price\n" <<endl;  
																						  
																						  delay ();
																						  
																						  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" <<endl;
																						  
																						  delay ();
																						  
																						  cout << "you may also notice, this room has only one exit which is the only place you can escape \n"<<endl;
																						  
																						  delay ();
																						  
																						  cout << "what do you want to do , escape? fat chance \n " <<endl;
																						  
																						  delay ();
																						  
																						  cout << " the exit is covered by my officers and they will be coming for you.\n " <<endl;
																						   
																						  delay ();
																						  
																						  cout << "unless you agree to my terms. \n "<<endl ;
																						  
																						  cout << "Yes or no ?\n " <<endl;
																						  
																						  delay ();
																						  
																						  cout << "Pat: I have an idea " <<sname <<" just do as i say \n"<<endl;
																						  
																						  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n"<<endl ; 
																						  
																						  cin >> ideathwish ;
																						  
																						  if (ideathwish == 1)
																						 	{
																						 		cout << "Very well , " <<sname <<", you will have what you wished for .\n"<<endl ;
																						 		
																						 		istart = 3; 
																						 	} 
																						  else
																						  	if (ideathwish == 2)
																						    	{
																						    		cout << " Thank you for trading the watch \n " <<endl;
																						    		
																						    		cout << "AR2: Ali , come on\n " ;
																						    		
																						    		cout << "Please kill "  <<sname <<"for me \n"<<endl ; 
																						    		
																						    		istart = 4; 
																						    	}		
																							else 
																							if (ideathwish==3)
																								{
																									cout <<  "ok good choice\n"<<endl ;
																									
																									delay ();
																									
																									cout << "Now Run!! \n" <<endl;
																									
																									delay ();
																									
																									cout << "Ali and Ninja ,GO!!! " <<endl;
																									
																									delay ();
																									
																									cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n"<<endl ;
																									
																									delay ();
																									
																									cout << "Ali : Master, i see the exit.\n"<<endl;
																									
																									delay ();
																									
																									cout << " Ninja: Me too Sssssire!\n" <<endl ;
																									
																									delay ();
																									
																									cout << " ENEMY EXITED BUILDING "<<endl ;
																									
																									delay ();
																									
																									cout << " Year 2060\n"<<endl;
																									
																									delay ();
																									
																									cout << " 7  years had passed after the faithful events of the annual diamond challenge\n"<<endl ;
																									
																									delay ();
																									
																									cout << " AR2 had been disabled due to its failure in the upcoming years \n" <<endl;
																									
																									delay ();
																									
																									cout << "The country has since been protected manually by the NA- National Army \n"<<endl ;
																									
																									delay ();
																									
																									cout << "As for the winner of the challenge ....."<<endl;
																									
																									delay ();
																									delay ();
																									
																									if (system("CLS")) system("clear");
																									
																									cout << "No one knows where he is .\n "<<endl ;
																									
																									delay () ; 
																									
																									cout << "And no one wants to know  .\n"<<endl ;
																									
																									delay () ;
																									
																									istart = 4 ; 	     
																									
																								}	  	 	        
																						}
																						else
																						{
																						cout << "damn ! wrong code buddy ! \n"<<endl ;
																						
																						delay ();
																						
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl ;
																						
																						delay ();
																						
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname <<endl;
																						
																						cout << " ru.... " ;
																						
																						istart = 5 ;
																						} 
																				}
																				else
																				{
																			  	cout << " ok " <<sname ;
																			  		
																				delay ();
																			  		
																				cout << " the answer waz 'nothing' .\n" ;
																					  
																				delay ();
																					  
																				cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" <<endl;
																					  
																				delay ();
																					 
																				 cout  << " im leaving . goodbye" <<endl; 
																					 
																				 istart =5 ;  
																				 
																			  	}
																					
																				
																				
																			}
																			
																			
																		}	
																	}
															
																}
																else 
																{
																cout << "damn ! wrong code buddy ! \n" <<endl;
																						
																delay ();
																
																cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl ;
																
																delay ();
																
																cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																
																cout << " ru.... " ;
																
																istart = 5 ;	
																
																}
																
																
															}								
																						
											
														}
													else if (iperson3 == 2)
														{
														if (ipoints >= 100 )
													 		{
													 		
											  		 	   	 ipoints = ipoints - 100 ;
															
													 	 	 system ("COLOR 08") ;
														
														 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
														
											  		  		 cout <<" Hmm ill break the camera in no time \n" ;
											  			 
											  		 	 	 delay () ;
											  			 
											  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " <<endl;
											  			 
											  		 		 delay () ;
											  			 
											  		 		 cout << " Please , no time to call retro , we gotta move quick \n "<<endl ;
											  		 		 
											  		 		 ians13 = 3;
											  		 		 
											  		 		 	if (ians13 == 3 )
																	{
																		cout << "ENTERED ROOM 5 \n"<<endl ;
	  
																	 cout<< " This is it...\n "<<endl ;
																	  
																   	 delay () ;
																   	 
																   	 system ("COLOR 02" ) ;
																		  
																	 cout << "The Vault \n " <<endl;
																	 
																	 delay () ;
																	 
																		 
																	 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																	 
																	delay () ;
																	
																	cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																	
																	delay () ;
																	
																	cout << " time to call cracker \n "<<endl ; 
																	
																	delay () ;
																	
																	cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																	
																	delay () ;
																	
																	cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																	
																	delay () ;
																	
																	cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																	
																	delay () ;
																	
																	cin >> 	iperson5 ;
																	
																	delay () ;
																	
																	if (iperson5 == 1 )
																		{ if (ipoints >= 800)
																			{
																				ipoints = ipoints - 800 ;
																			
																			system ("COLOR 09") ;
																				
																			cout << " ok the password for the camera is 13579 \n"<<endl ;
																	
																			delay () ;
																	
																			delay () ;
																	
																			if (system("CLS")) system("clear");
																	
																			cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																	
																			delay (); 
																	
																			cout <<" Now!\n"<<endl;
																	
																			cin>> icode;
																	
																			if (icode == 13579 ) 
																				{
																				cout<< 	"great job!\n "<<endl;
																	
																   				 cout<<  "ok time to call Cracker\n"<<endl ;
																    
																 			    icode = icode + 1 ; 
																 			    
																 			    cout << "you currently have " <<ipoints << "points in your watch\n"<<endl ;
																    
																    			iperson5 = 2 ; 
																    																		    			
																    
																				}
																			else 
																			if (icode != 13579)
																				{
																				cout << "damn ! wrong code buddy ! \n" <<endl;
																		
																				delay ();
																		
																				cout << " Oh no there are gaurds on the radar . they've found the ......\n" <<endl;
																		
																				delay ();
																		
																				cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname <<endl;
																		
																				cout << " ru.... " ;
																																																									
																				// function called endgame over here ;
																				istart = 4; 
																    			}	
																			}
																			else
																			{
																				cout << "youre outta points mate\n"<<endl ;
																				
																				istart = 4; 
																			}
																		
																			
																			
																		}
																		else if (iperson5 == 2)
																		{
																			if ( ipoints >= 1000)
																			{
																				ipoints = ipoints - 1000 ; 
		 		
																		 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																		 		
																		 	 cout << "I am Ze Cracker. I am here to help you ! \n "<<endl ;
																		 		
																			 delay ();
																			 
																			 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																			 
																			 delay ();
																			 
																			 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																			 
																			 delay ();
																			 
																			 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																			 
																			 delay ();
																			 
																			 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																			 
																			 cin >> sriddle ;
																			 
																			 if (sriddle.compare("nothing") )
																			 	{
																			 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																			 		
																					delay ();
																					
																					cout << " MINUTES LATER \n" ;
																					
																			  	 delay ();
																					
																					cout << " VAULT CRACKED !!! \n";
																					
																					delay ();
																					
																					cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																					
																		   		 delay ();
																					
																					cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																					
																					delay ();
																					
																					system ("COLOR 09") ;
																					
																					cout << "Pat: wow ," <<sname ; 
																					
																					cout<< " this is the first time Ive seen him so emotional, \n " ; 
																					
																					delay ();
																					
																					cout << " time to open the Vault\n " ;
																					
																					cout << "The diamond isnt here?\n"<<endl ;
																					
																					cout << " ENTERED ROOM 6 \n" ;
																					
																					delay () ;
																					
																					cout << "you currently have " <<ipoints << "points in your watch\n" ;
																					
																					delay ();
																					
																					cout << " The diamond id in this room ! I see it ! \n" ;
																					
																					delay ();
																					
																					cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																					
																					delay ();
																					
																					cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																					
																					delay ();
																					
																					cout << "do you know the answer ?\n " ;
																					
																					delay ();
																					
																					cin >> iridode ;
																					
																					delay ();
																					
																				 	if (iridode == 5 )
																						{
																							cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																				
  			
																							system ("COLOR 09") ;
																						  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																						  
																						  delay ();
																						  
																						  cout << " We would like to but it from you \n " <<sname ;
																						  
																						  delay ();
																						  
																						  cout << "Name your price\n" ;  
																						  
																						  delay ();
																						  
																						  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																						  
																						  delay ();
																						  
																						  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																						  
																						  delay ();
																						  
																						  cout << "what do you want to do , escape? fat chance \n " ;
																						  
																						  delay ();
																						  
																						  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																						   
																						  delay ();
																						  
																						  cout << "unless you agree to my terms. \n " ;
																						  
																						  cout << "Yes or no ?\n " ;
																						  
																						  delay ();
																						  
																						  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																						  
																						  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																						  
																						  cin >> ideathwish ;
																						  
																						  if (ideathwish == 1)
																						 	{
																						 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																						 		
																						 		istart = 3; 
																						 	} 
																						  else
																						  	if (ideathwish == 2)
																						    	{
																						    		cout << " Thank you for trading the watch \n " ;
																						    		
																						    		cout << "AR2: Ali , come on\n " ;
																						    		
																						    		cout << "Please kill "  <<sname <<"for me \n" ; 
																						    		
																						    		istart = 3; 
																						    	}		
																							else 
																							if (ideathwish==3)
																								{
																									cout <<  "ok good choice\n" ;
																									
																									delay ();
																									
																									cout << "Now Run!! \n" ;
																									
																									delay ();
																									
																									cout << "Ali and Ninja ,GO!!! " ;
																									
																									delay ();
																									
																									cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																									
																									delay ();
																									
																									cout << "Ali : Master, i see the exit.\n";
																									
																									delay ();
																									
																									cout << " Ninja: Me too Sssssire!\n"  ;
																									
																									delay ();
																									
																									cout << " ENEMY EXITED BUILDING " ;
																									
																									delay ();
																									
																									cout << " Year 2060\n";
																									
																									delay ();
																									
																									cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																									
																									delay ();
																									
																									cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																									
																									delay ();
																									
																									cout << "The country has since been protected manually by the NA- National Army \n" ;
																									
																									delay ();
																									
																									cout << "As for the winner of the challenge .....";
																									
																									delay ();
																									delay ();
																									
																									if (system("CLS")) system("clear");
																									
																									cout << "No one knows where he is .\n " ;
																									
																									delay () ; 
																									
																									cout << "And no one wants to know  .\n" ;
																									
																									delay () ;
																									
																									istart = 4 ; 	     
																									
																								}	  	 	        
																						}
																						else
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																						
																						delay ();
																						
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																						
																						delay ();
																						
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																						
																						cout << " ru.... " ;
																						
																						istart = 5 ;
																						} 
																				}
																				else
																				{
																			  	cout << " ok " <<sname ;
																			  		
																				delay ();
																			  		
																				cout << " the answer waz 'nothing' .\n" ;
																					  
																				delay ();
																					  
																				cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																					  
																				delay ();
																					 
																				 cout  << " im leaving . goodbye" ; 
																					 
																				 istart =5 ;  
																				 
																			  	}
														  		 			}
																		}
																	
																	
																			
																	
																	}
																else 
																if (ipoints <= 100)
																{
																	cout << "outta points buddy\n" ;
																	
																	istart = 4 ; 
																}
						
															}
															else if (iperson == 2 )
															{
															if (ipoints >= 100 )
													 			{
													 		
											  		 	   		 ipoints = ipoints - 100 ;
															
													 	 		 system ("COLOR 08") ;
														
														 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
														
											  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
											  			 
											  		 	 		 delay () ;
											  			 	
											  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
											  			 
											  		 		 	 delay () ;
											  			 
											  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
											  		 		 	 
											  		 		 	 // more of the game here .
											  		 			}
											  		 			else 
											  		 			{
											  		 				cout << "your outta points buddy ! \n" ;
											  		 			
											  		 				istart = 4 ;
											  		 			}	
															}
															
														}
														else if (iperson == 3)
														{
															if ( ipoints >= 300)
															{
																system ("COLOR 02" ) ;
																
											          			cout << "ssssirreee... i am here to help you ! \n " ;
											          			
											          			cout << " 1. Cloak or 2. Bomb \n " ;
																  
																 cin >> ininja2 ;  
											          			
											          			if (ininja2 == 1 )
																{
																	ipoints = ipoints - 500 ;
																	cout << " you are now dissguissed .\n" ; 
																	
																	delay () ;
																	
																	cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																	
																	ipoints = ipoints +200 ; 
																}
																else
																{
																	cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																	
																	delay () ;
																	
																	cout << " Run!!\n "<<endl <<endl ;
																	
																	delay () ;
																	
																}
															
																
																
															}
															
															
														}
														
														
														
													}
													
													
													
													
													
													
													
													
													
													
												}
												
													 
										 	}
										}
										else 
										if (iperson2 == 2)
										{
											if ( ipoints >= 300)
											{
												system ("COLOR 02" ) ;
												
							          			cout << "ssssirreee... i am here to help you ! \n " ;
							          			
							          			cout << " 1. Cloak or 2. Bomb \n " ;
												  
												 cin >> ininja2 ;  
							          			
							          			if (ininja2 == 1 )
												{
													ipoints = ipoints - 500 ;
													cout << " you are now dissguissed .\n" ; 
													
													delay () ;
													
													cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
													
													ipoints = ipoints +200 ; 
													ians9 = 3 ;
												}
												else
												{
													cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
													
													delay () ;
													
													cout << " Run!!\n "<<endl <<endl ;
													
													delay () ;
													
													ians9 = 3; 
													
													
													
													
												}
												
										cout << "  ENTERED ROOM 4. " <<endl  ;

											delay ();
										
											cout << " there is a camera AND a gaurd here\n "<<endl   ;
										
											delay ();
										
											cout << "whom do you want to call \n " <<endl  ;
										
											delay ();
												
											cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl   ;
										
											cin >> iperson3 ;
										
											delay ();
											if (iperson3 == 1)
												{
													if ( ipoints >= 800)
													{
														ipoints = ipoints -800 ;
														
															system ("COLOR 05") ;
		
													cout << " ok the password for the camera is 66966 \n"<<endl ;
											
													delay () ;
											
													delay () ;
											
													if (system("CLS")) system("clear");
											
													cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
											
													delay (); 
											
													cout <<" Now!\n"<<endl;
											
													cin>> icode;
													
													if (icode == 66966 ) 
														{//repeating of what happened before 
														cout<< 	"great job!\n "<<endl;
											
										   				 cout<<  "ok time to call Retro\n" <<endl;
										    
										 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n "<<endl ;

															delay ();
														
														cout <<  " Who was torontos mayor in 2015\n "  ;
													
														cout<< " 1.Rob Ford\n";
													
														cout<< " 2. John Tory\n " ;
													
														cout<< " 3. Eugene Choi\n ";
												
														cin >> ians10 ;
														
														if (ians10 == 2 )
															{
															cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
											
															delay ();
													
															cout << " 1. Ottawa\n";
													
													
													
															cout << " 2. Toronto\n";
													
												
													
															cout << "3. Vancouver\n";
													
															cin  >>  ians11 ;
															
															if (ians11 == 1)
																{
												
																cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
													
																//delay ();
													
																 cout << " 1. Russia\n" ;
													
																 cout << " 2. India\n" ;
													 
																 cout << " 3. Canada\n" ;
													 
																 cin >> ians13 ;
																 
																 
													
											    				}	
											    				else 
																{
															 	cout<< " you are on the wrong track buddy \n" <<endl ;
															
																delay () ;
															
														 		cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
											 				
											 					delay () ;
											 				
												  				cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
												  				
												  				ians13 = 3;
																}
																
																
													
															}
															else 
															{
															cout<< " you are on the wrong track buddy \n" <<endl ;
															
															delay () ;
															
														 	cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
											 				
											 				delay () ;
											 				
												  			cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
												  			
												  			ians13 = 3 ;
										    
										    			
										    
															}
														
														if (ians13 == 3 )
															{
															cout << "ENTERED ROOM 5 \n" <<endl;

															 cout<< " This is it...\n " <<endl;
															  
														   	 delay () ;
														   	 
														   	 system ("COLOR 02" ) ;
																  
															 cout << "The Vault \n " <<endl;
															 
															 delay () ;
															 
																 
															 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
															 
															delay () ;
															
															cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
															
															delay () ;
															
															cout << " time to call cracker \n "<<endl ; 
															
															delay () ;
															
															cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
															
															delay () ;
															
															cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
															
															delay () ;
															
															cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
															
															delay () ;
															
															cin >> 	iperson5 ;
															
															delay () ;
															
															if (iperson5 == 1 )
																{ if (ipoints >= 800)
																	{
																		ipoints = ipoints - 800 ;
																	
																	system ("COLOR 09") ;
																		
																	cout << " ok the password for the camera is 13579 \n" <<endl;
															
																	delay () ;
															
																	delay () ;
															
																	if (system("CLS")) system("clear");
															
																	cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
															
																	delay (); 
															
																	cout <<" Now!\n";
															
																	cin>> icode;
															
																	if (icode == 13579 ) 
																		{
																		cout<< 	"great job!\n "<<endl;
															
														   				 cout<<  "ok time to call Cracker\n"<<endl; 
														 			    
														 			    cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
														    
														    			iperson5 = 2 ; 
														    																		    			
														    
																		}
																	else 
																	if (icode != 13579)
																		{
																		cout << "damn ! wrong code buddy ! \n" <<endl;
																
																		delay ();
																
																		cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl;
																
																		delay ();
																
																		cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																
																		cout << " ru.... " ;
																																																							
																		// function called endgame over here ;
																		istart = 4; 
														    			}	
																	}
																	else
																	{
																		cout << "youre outta points mate\n"<<endl ;
																		
																		istart = 4; 
																	}
																
																	
																	
																}
																else if (iperson5 == 2)
																{
																	if ( ipoints >= 1000)
																	{
																		ipoints = ipoints - 1000 ; 
 		
																 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																 		
																 	 cout << "I am Ze Cracker. I am here to help you ! \n "<<endl ;
																 		
																	 delay ();
																	 
																	 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " <<endl;
																	 
																	 delay ();
																	 
																	 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n "<<endl ;
																	 
																	 delay ();
																	 
																	 cout << " Answer this question for me so I will crack za vault for you !\n "<<endl ;
																	 
																	 delay ();
																	 
																	 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n"<<endl ;
																	 
																	 cout << "1.nothing or 2.poverty\n" <<endl ;  
																	 cin >> iriddle ;
																	 
																	 if ( iriddle == 1)
																	 	{
																	 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n"<<endl ;
																	 		
																	   	 delay ();
																			
																			cout << " MINUTES LATER \n" <<endl;
																			
																	   	 delay ();
																			
																			cout << " VAULT CRACKED !!! \n"<<endl;
																			
																			delay ();
																			
																			cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n"<<endl ;
																			
																			delay ();
																			
																			cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																			
																			delay ();
																			
																			system ("COLOR 09") ;
																			
																			cout << "Pat: wow ," <<sname ; 
																			
																			cout<< " this is the first time Ive seen him so emotional, \n "<<endl ; 
																			
																			delay ();
																			
																			cout << " time to open the Vault\n "<<endl ;
																			
																			cout << "The diamond isnt here?\n"<<endl ;
																			
																			cout << " ENTERED ROOM 6 \n"<<endl ;
																			
																			delay () ;
																			
																			cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																			
																			delay ();
																			
																			cout << " The diamond id in this room ! I see it ! \n"<<endl ;
																			
																			delay ();
																			
																			cout << " Pat: there is a security pass on this thing \n "<<endl; 	 	 	
																			
																			delay ();
																			
																			cout << " it says the password is the square root of squares of 3 and 4 \n "<<endl ;
																			
																			delay ();
																			
																			cout << "do you know the answer ?\n " <<endl;
																			
																			delay ();
																			
																			cin >> iridode ;
																			
																			delay ();
																			
																		 	if (iridode == 5 )
																				{
																					cout << "yes!!! we got the diamond!!! The security has been breached!!! \n"<<endl;
																					
																					// Ar2 colour still to decide.

																				  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n "<<endl ;
																				  
																				  delay ();
																				  
																				  cout << " We would like to but it from you \n " <<sname<<endl ;
																				  
																				  delay ();
																				  
																				  cout << "Name your price\n" <<endl;  
																				  
																				  delay ();
																				  
																				  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" <<endl;
																				  
																				  delay ();
																				  
																				  cout << "you may also notice, this room has only one exit which is the only place you can escape \n"<<endl;
																				  
																				  delay ();
																				  
																				  cout << "what do you want to do , escape? fat chance \n " <<endl;
																				  
																				  delay ();
																				  
																				  cout << " the exit is covered by my officers and they will be coming for you.\n " <<endl;
																				   
																				  delay ();
																				  
																				  cout << "unless you agree to my terms. \n "<<endl ;
																				  
																				  cout << "Yes or no ?\n " <<endl;
																				  
																				  delay ();
																				  
																				  cout << "Pat: I have an idea " <<sname <<" just do as i say \n"<<endl;
																				  
																				  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n"<<endl ; 
																				  
																				  cin >> ideathwish ;
																				  
																				  if (ideathwish == 1)
																				 	{
																				 		cout << "Very well , " <<sname <<", you will have what you wished for .\n"<<endl ;
																				 		
																				 		istart = 3; 
																				 	} 
																				  else
																				  	if (ideathwish == 2)
																				    	{
																				    		cout << " Thank you for trading the watch \n " <<endl;
																				    		
																				    		cout << "AR2: Ali , come on\n " ;
																				    		
																				    		cout << "Please kill "  <<sname <<"for me \n"<<endl ; 
																				    		
																				    		istart = 4; 
																				    	}		
																					else 
																					if (ideathwish==3)
																						{
																							cout <<  "ok good choice\n"<<endl ;
																							
																							delay ();
																							
																							cout << "Now Run!! \n" <<endl;
																							
																							delay ();
																							
																							cout << "Ali and Ninja ,GO!!! " <<endl;
																							
																							delay ();
																							
																							cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n"<<endl ;
																							
																							delay ();
																							
																							cout << "Ali : Master, i see the exit.\n"<<endl;
																							
																							delay ();
																							
																							cout << " Ninja: Me too Sssssire!\n" <<endl ;
																							
																							delay ();
																							
																							cout << " ENEMY EXITED BUILDING "<<endl ;
																							
																							delay ();
																							
																							cout << " Year 2060\n"<<endl;
																							
																							delay ();
																							
																							cout << " 7  years had passed after the faithful events of the annual diamond challenge\n"<<endl ;
																							
																							delay ();
																							
																							cout << " AR2 had been disabled due to its failure in the upcoming years \n" <<endl;
																							
																							delay ();
																							
																							cout << "The country has since been protected manually by the NA- National Army \n"<<endl ;
																							
																							delay ();
																							
																							cout << "As for the winner of the challenge ....."<<endl;
																							
																							delay ();
																							delay ();
																							
																							if (system("CLS")) system("clear");
																							
																							cout << "No one knows where he is .\n "<<endl ;
																							
																							delay () ; 
																							
																							cout << "And no one wants to know  .\n"<<endl ;
																							
																							delay () ;
																							
																							istart = 4 ; 	     
																							
																						}	  	 	        
																				}
																				else
																				{
																				cout << "damn ! wrong code buddy ! \n"<<endl ;
																				
																				delay ();
																				
																				cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl ;
																				
																				delay ();
																				
																				cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																				cout << " ru.... " ;
																				
																				istart = 5 ;
																				} 
																		}
																		else
																		{
																	  	cout << " ok " <<sname ;
																	  		
																		delay ();
																	  		
																		cout << " the answer waz 'nothing' .\n" ;
																			  
																		delay ();
																			  
																		cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																			  
																		delay ();
																			 
																		 cout  << " im leaving . goodbye" ; 
																			 
																		 istart =5 ;  
																		 
																	  	}
																			
																		
																		
																	}
																	
																	
																}	
															}
													
														}
														else 
														{
														cout << "damn ! wrong code buddy ! \n" ;
																				
														delay ();
														
														cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
														
														delay ();
														
														cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
														
														cout << " ru.... " ;
														
														istart = 5 ;	
														
														}
														
														
													}								
																				
																				
																				
																				
																				
																				
																				
																				
																				
																				
																				
																				
																				
												
												}
											else if (iperson3 == 2)
												{
												if (ipoints >= 100 )
											 		{
											 		
									  		 	   	 ipoints = ipoints - 100 ;
													
											 	 	 system ("COLOR 08") ;
												
												 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
												
									  		  		 cout <<" Hmm ill break the camera in no time \n" ;
									  			 
									  		 	 	 delay () ;
									  			 
									  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
									  			 
									  		 		 delay () ;
									  			 
									  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
									  		 		 
									  		 		 	if (ians13 == 3 )
														{
															cout << "ENTERED ROOM 5 \n" ;

														 cout<< " This is it...\n " ;
														  
													   	delay () ;
													   	 
													   	 system ("COLOR 02" ) ;
															  
														 cout << "The Vault \n " ;
														 
														 delay () ;
														 
															 
														 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
														 
														delay () ;
														
														cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
														
														delay () ;
														
														cout << " time to call cracker \n "<<endl ; 
														
														delay () ;
														
														cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
														
														delay () ;
														
														cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
														
														delay () ;
														
														cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
														
														delay () ;
														
														cin >> 	iperson5 ;
														
														delay () ;
														
														if (iperson5 == 1 )
															{ if (ipoints >= 800)
																{
																	ipoints = ipoints - 800 ;
																
																system ("COLOR 09") ;
																	
																cout << " ok the password for the camera is 13579 \n" ;
														
																delay () ;
														
																delay () ;
														
																if (system("CLS")) system("clear");
														
																cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
														
																delay (); 
														
																cout <<" Now!\n";
														
																cin>> icode;
														
																if (icode == 13579 ) 
																	{
																	cout<< 	"great job!\n ";
														
													   				 cout<<  "ok time to call Cracker\n" ;
													    
													 			    icode = icode + 1 ; 
													 			    
													 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
													    
													    			iperson5 = 2 ; 
													    																		    			
													    
																	}
																else 
																if (icode != 13579)
																	{
																	cout << "damn ! wrong code buddy ! \n" ;
															
																	delay ();
															
																	cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
															
																	delay ();
															
																	cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
															
																	cout << " ru.... " ;
																																																						
																	// function called endgame over here ;
																	istart = 4; 
													    			}	
																}
																else
																{
																	cout << "youre outta points mate\n" ;
																	
																	istart = 4; 
																}
															
																
																
															}
															else if (iperson5 == 2)
															{
																if ( ipoints >= 1000)
																{
																	ipoints = ipoints - 1000 ; 
	
															 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															 		
															 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
															 		
																 delay ();
																 
																 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																 
																 delay ();
																 
																 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																 
																 delay ();
																 
																 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																 
																 delay ();
																 
																 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																 
																 cin >> sriddle ;
																 
																 if (sriddle.compare("nothing") )
																 	{
																 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																 		
																		delay ();
																		
																		cout << " MINUTES LATER \n" ;
																		
																		delay ();
																		
																		cout << " VAULT CRACKED !!! \n";
																		
																		delay ();
																		
																		cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																		
																		delay ();
																		
																		cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																		
																		delay ();
																		
																		system ("COLOR 09") ;
																		
																		cout << "Pat: wow ," <<sname ; 
																		
																		cout<< " this is the first time Ive seen him so emotional, \n " ; 
																		
																		delay ();
																		
																		cout << " time to open the Vault\n " ;
																		
																		cout << "The diamond isnt here?\n"<<endl ;
																		
																		cout << " ENTERED ROOM 6 \n" ;
																		
																		delay () ;
																		
																		cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		
																		delay ();
																		
																		cout << " The diamond id in this room ! I see it ! \n" ;
																		
																		delay ();
																		
																		cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																		
																		delay ();
																		
																		cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																		
																		delay ();
																		
																		cout << "do you know the answer ?\n " ;
																		
																		delay ();
																		
																		cin >> iridode ;
																		
																		delay ();
																		
																	 	if (iridode == 5 )
																			{
																				cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																				
																				// Ar2 colour still to decide.

																			  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																			  
																			  delay ();
																			  
																			  cout << " We would like to but it from you \n " <<sname ;
																			  
																			  delay ();
																			  
																			  cout << "Name your price\n" ;  
																			  
																			  delay ();
																			  
																			  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																			  
																			  delay ();
																			  
																			  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																			  
																			  delay ();
																			  
																			  cout << "what do you want to do , escape? fat chance \n " ;
																			  
																			  delay ();
																			  
																			  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																			   
																			  delay ();
																			  
																			  cout << "unless you agree to my terms. \n " ;
																			  
																			  cout << "Yes or no ?\n " ;
																			  
																			  delay ();
																			  
																			  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																			  
																			  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																			  
																			  cin >> ideathwish ;
																			  
																			  if (ideathwish == 1)
																			 	{
																			 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																			 		
																			 		istart = 3; 
																			 	} 
																			  else
																			  	if (ideathwish == 2)
																			    	{
																			    		cout << " Thank you for trading the watch \n " ;
																			    		
																			    		cout << "AR2: Ali , come on\n " ;
																			    		
																			    		cout << "Please kill "  <<sname <<"for me \n" ; 
																			    		
																			    		istart = 3; 
																			    	}		
																				else 
																				if (ideathwish==3)
																					{
																						cout <<  "ok good choice\n" ;
																						
																						delay ();
																						
																						cout << "Now Run!! \n" ;
																						
																						delay ();
																						
																						cout << "Ali and Ninja ,GO!!! " ;
																						
																						delay ();
																						
																						cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																						
																						delay ();
																						
																						cout << "Ali : Master, i see the exit.\n";
																						
																						delay ();
																						
																						cout << " Ninja: Me too Sssssire!\n"  ;
																						
																						delay ();
																						
																						cout << " ENEMY EXITED BUILDING " ;
																						
																						delay ();
																						
																						cout << " Year 2060\n";
																						
																						delay ();
																						
																						cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																						
																						delay ();
																						
																						cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																						
																						delay ();
																						
																						cout << "The country has since been protected manually by the NA- National Army \n" ;
																						
																						delay ();
																						
																						cout << "As for the winner of the challenge .....";
																						
																						delay ();
																						delay ();
																						
																						if (system("CLS")) system("clear");
																						
																						cout << "No one knows where he is .\n " ;
																						
																						delay () ; 
																						
																						cout << "And no one wants to know  .\n" ;
																						
																						delay () ;
																						
																						istart = 4 ; 	     
																						
																					}	  	 	        
																			}
																			else
																			{
																			cout << "damn ! wrong code buddy ! \n" ;
																			
																			delay ();
																			
																			cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																			delay ();
																			
																			cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																			cout << " ru.... " ;
																			
																			istart = 5 ;
																			} 
																	}
																	else
																	{
																  	cout << " ok " <<sname ;
						
						
																  		
																	delay ();
																  		
																	cout << " the answer waz 'nothing' .\n" ;
																		  
																	delay ();
																		  
																	cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																		  
																	delay ();
																		 
																	 cout  << " im leaving . goodbye" ; 
																		 
																	 istart =5 ;  
																	 
																  	}
											  		 		}
														}
														
														}
														else 
														if (ipoints <= 100)
														{
															cout << "outta points buddy\n" ;
															
															istart = 4 ;
														}
				
													}
													else if (iperson == 2 )
													{
													if (ipoints >= 100 )
											 			{
											 		
									  		 	   		 ipoints = ipoints - 100 ;
													
											 	 		 system ("COLOR 08") ;
												
												 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
												
									  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
									  			 
									  		 	 		 //delay () ;
									  			 	
									  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
									  			 
									  		 		 	 //delay () ;
									  			 
									  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
									  		 		 	 
									  		 		 	 // more of the game here .
									  		 			}
									  		 			else 
									  		 			{
									  		 				cout << "your outta points buddy ! \n" ;
									  		 			
									  		 				gameover () ;
									  		 			}	
													}
													
												}
												else if (iperson == 3)
												{
													if ( ipoints >= 300)
													{
														system ("COLOR 02" ) ;
														
									          			cout << "ssssirreee... i am here to help you ! \n " ;
									          			
									          			cout << " 1. Cloak or 2. Bomb \n " ;
														  
														 cin >> ininja2 ;  
									          			
									          			if (ininja2 == 1 )
														{
															ipoints = ipoints - 500 ;
															cout << " you are now dissguissed .\n" ; 
															
															delay () ;
															
															cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
															
															ipoints = ipoints +200 ; 
														}
														else
														{
															cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
															
															delay () ;
															
															cout << " Run!!\n "<<endl <<endl ;
															
															delay () ;
															
														}
													
														
														
													}
													
													
												}
												
												
												
											
												
											}
					  		 			}
						  		 		else 
						  		 		{
						  		 			cout << "your outta points buddy ! \n" ;
						  		 			
						  		 			istart = 4 ;
						  		 		}
						  		 		
					  		 		
						   	 		}
								else 
								if (iperson == 2)
								{
									if (ipoints >= 800)
									{
									system ("COLOR 09") ;
							        
							        ipoints - 800 ; 
					 	 
									cout << " ok the password for the camera is 84573 \n" <<endl <<endl;
							
									//delay () ;
							
									//delay () ;
							
									if (system("CLS")) system("clear");
							
									cout<< " ok, you have to enter the pass word into your watch . Enter ....." <<endl <<endl;
							
									delay ();
									
									delay () ;
									
									delay () ; 
							
									cout <<" Now!\n"<<endl <<endl;
							
									cin>> icode;
									
									if (icode == 84573 ) 
										{
						
										cout<< 	"great job!\n "<<endl <<endl;
						
							    		cout<<  "ok time to call Retro\n" <<endl <<endl;
							    		
							    		   system ("COLOR 05") ;
				
										cout << " ok my friend , you know the drill answer my following questions \n " ;
						
										//delay ();
							
										cout <<  " What was Goerges Vanier's Mascot in 2015 ? \n" ;
						
										cout<< " 1.Viking\n";
						
										cout<< " 2.Puma\n" ;
						
										cout<< " 3. Nathan Dong\n ";
						
										cin >> ians4 ;
						
										if (ians4 == 1 )
											{
												ipoints = ipoints + 200 ;
											cout<<  "Great Job ! Next Question : What year did  Air France Flight 358 bursts into flames while landing at Toronto Pearson International Airport?\n";
							
											//delay ();
							
											cout << " 1. 2005\n" ;
									
											cout << " 2. 2000\n" ;
									
											cout << " 3. 2010\n" ;
							
											cin  >>  ians5  ;
							
											if (ians5 == 1)
												{
													ipoints = ipoints + 200 ; 
								
												cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
							
												// delay ();
							 
												 cout << " 1. Russia\n" ;
							 
												 cout << " 2. India\n" ;
							 
												 cout << " 3. Canada\n" ;
							 
												 cin >> ians6 ;
												
							 
							
												}
												else
												   if(ians6 =! 3)
													{
						 							cout<< " you are on the wrong track buddy \n" ;
						 		
													 cout<< " I really cant reward you any recharge more recharge points\n " ;
								 
						 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl <<endl ;
													 
													 ians6 = 3 ; 
						 				 			  
													}
												else 
												{
												 cout<< " you are on the wrong track buddy \n"  ;
							 
						 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
						 	
							  					//delay () ;
							  					
							  					cout<< "you have "<<ipoints <<" points in your watch \n" ;
							  					
							  					ians6 = 3 ;
							  					
												}
						
							
											}
											else 
											{
											 cout<< " you are on the wrong track buddy \n"  ;
						 
											 cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
												
											cout<< "you have "<<ipoints <<" points in your watch \n" ;		 
						 
						  					//delay () ;
						  					
						  					ians6 = 3 ;
											}
											
											if (ians6 == 3 )
											{
											cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n "  ;
										
											 //delay () ; 
									
											 cout << "call me whenever you want , but i got to go now . see you later, \n"  ;
													
											 //delay () ;
													
											 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
											 
											 cout << "  ENTERED ROOM 3 " <<endl <<endl;
											
											//delay ();
											
											cout << " there is a camera AND a gaurd here/n "<<endl <<endl ;
											
											//delay ();
											
											cout << "whom do you want to call \n " <<endl <<endl ;
											
											//delay ();
											
											cout << "1. Pat  or 2. Ninja \n " <<endl <<endl ;
											
											cin >> iperson2 ;
											
											if  (iperson2 == 1)
												{
													if (ipoints >= 800)
													{
													system ("COLOR 09") ;
											        
											        ipoints - 800 ; 
									 	 
													cout << " ok the password for the camera is 40976 \n" <<endl <<endl;
													
													//delay () ;
							
													//delay () ;
											
													if (system("CLS")) system("clear");
											
													cout<< " ok, you have to enter the pass word into your watch . Enter ....." <<endl <<endl;
											
													//delay ();
													
													//delay () ;
													
													//delay () ; 
											
													cout <<" Now!\n"<<endl <<endl;
											
													cin>> icode;
													
													 if (icode == 40976 ) 
														{
														cout<< 	"great job!\n ";
												
											    		cout<<  "ok time to call Retro\n" ;
	    
													
														cout << " ok my friend , you know the drill answer my following questions \n " ;
		
														//delay ();
												
														cout <<  " When did Canada get their official flag? \n" ;
											
														cout<< " 1. Year : 1989\n";
											
														cout<< " 2.Year : 1965 \n" ;
											
														cout<< " 3. Year : 1898\n ";
											
														cin >> ians7 ;
														
														if (ians7 == 2 )
															{
																ipoints = ipoints +200 ;
															cout<<  "Great Job ! Next Question : Official Language Of Pakistan \n";
													
															//delay ();
												
															cout << " 1. Urdu\n";
																
															cout << " 2. Arabic\n";
														
															cout << "3. Persian\n";
												
															cin  >>  ians8 ;
												
															if (ians8 == 1)
																{
																
																ipoints = ipoints + 200 ; 
																
																cout << " another one answered! Ok, Last Question : What the largest amount of money in coins without being able to make change for a dollar.\n" ;
												
																 //delay ();
												 
																 cout << " 1.  5 quarters, 4 dimes, and 2 pennies\n" ;
												 
												 				cout << " 2.  6 quarters, 0 dimes, and 8 pennies\n" ;
												 
																 cout << " 3.  3 quarters, 4 dimes, and 4 pennies\n" ;
												 
												 				cin >> ians9 ;
												 				
																   if(ians9 =! 3)
																	{
										 							cout<< " you are on the wrong track buddy \n" ;
										 		
																	 cout<< " I really cant reward you any recharge more recharge points\n " ;
												 
										 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl <<endl ;
																	 
																	 ians9 = 3 ; 
										 				 			  
																	}
																	else 
																	{
																	 cout<< " you are on the wrong track buddy \n"  ;
												 
											 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
											 	
												  					//delay () ;
												  					
												  					cout<< "you have "<<ipoints <<" points in your watch \n" ;
												  					
												  					ians9 = 3 ;
												  					
																	}
											
												
																}
																else 
																{
																 cout<< " you are on the wrong track buddy \n"  ;
											 
																 cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
																	
																cout<< "you have "<<ipoints <<" points in your watch \n" ;		 
											 
											  					//delay () ;
											  					
											  					ians6 = 3 ;
																}
																						
															}
															if (ians9 == 3)
															{
															cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n "  ;
														
															 //delay () ; 
													
															 cout << "call me whenever you want , but i got to go now . see you later, \n"  ;
																	
															 //delay () ;
																	
															 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
															 
															cout << "  ENTERED ROOM 4. " <<endl <<endl;
		
															//delay ();
														
															cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
														
															//delay ();
														
															cout << "whom do you want to call \n " <<endl <<endl ;
														
															//delay ();
																
															cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
														
															cin >> iperson3 ;
														
															//delay ();
															if (iperson3 == 1)
																{
																	if ( ipoints >= 800)
																	{
																		ipoints = ipoints -800 ;
																		
																			system ("COLOR 05") ;
						
																	cout << " ok the password for the camera is 66966 \n" ;
															
																	//delay () ;
															
																	//delay () ;
															
																	if (system("CLS")) system("clear");
															
																	cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
															
																	//delay (); 
															
																	cout <<" Now!\n";
															
																	cin>> icode;
																	
																	if (icode == 66966 ) 
																		{
																		cout<< 	"great job!\n ";
															
														   				 cout<<  "ok time to call Retro\n" ;
														    
														 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n " ;
				
																		//	delay ();
																		
																		cout <<  " Who was torontos mayor in 2015\n " ;
																	
																		cout<< " 1.Rob Ford\n";
																	
																		cout<< " 2. John Tory\n " ;
																	
																		cout<< " 3. Eugene Choi\n ";
																
																		cin >> ians10 ;
																		
																		if (ians10 == 2 )
																			{
																			cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
															
																		//	delay ();
																	
																			cout << " 1. Ottawa\n";
																	
																	
																	
																			cout << " 2. Toronto\n";
																	
																
																	
																			cout << "3. Vancouver\n";
																	
																			cin  >>  ians11 ;
																			
																			if (ians11 == 1)
																				{
																
																				cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																	
																				//delay ();
																	
																				 cout << " 1. Russia\n" ;
																	
																				 cout << " 2. India\n" ;
																	 
																				 cout << " 3. Canada\n" ;
																	 
																				 cin >> ians13 ;
																				 
																				 
																	
															    				}	
															    				else 
																				{
																			 	cout<< " you are on the wrong track buddy \n"  ;
																			
																				//delay () ;
																			
																		 		cout<< " I really cant reward you any recharge more recharge points\n " ;
															 				
															 					//delay () ;
															 				
																  				cout<< "you have "<<ipoints <<" points in your watch \n" ;
																  				
																  				ians13 = 3;
																				}
																				
																				
																	
																			}
																			else 
																			{
																			cout<< " you are on the wrong track buddy \n"  ;
																			
																			//delay () ;
																			
																		 	cout<< " I really cant reward you any recharge more recharge points\n " ;
															 				
															 				//delay () ;
															 				
																  			cout<< "you have "<<ipoints <<" points in your watch \n" ;
																  			
																  			ians13 = 3 ;
														    
														    			
														    
																			}
																		
																		if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							//delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							///delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							//delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							//delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							//delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							//d/elay ();
																							
																							cin >> iridode ;
																							
																							//delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  //delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  //delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  //elay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  //delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  //delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  //delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  //delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  //delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											//delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											//delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											//delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											//delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											//delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											istart = 4 ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																							
																						
																						
																					}
																					
																					
																				}	
																			}
																	
																		}
																		
																		
																		
																	}								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																
																}
															else if (iperson3 == 2)
																{
																if (ipoints >= 100 )
															 		{
															 		
													  		 	   	 ipoints = ipoints - 100 ;
																	
															 	 	 system ("COLOR 08") ;
																
																 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																
													  		  		 cout <<" Hmm ill break the camera in no time \n" ;
													  			 
													  		 	 	 //delay () ;
													  			 
													  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
													  			 
													  		 		 //delay () ;
													  			 
													  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
													  		 		 
													  		 		 	if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							delay ();
																							
																							cin >> iridode ;
																							
																							delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  delay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											istart = 4 ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																  		 		}
																			}
																			else
																			{
																					
																			}
																			}
																		else 
																		if (ipoints <= 100)
																		{
																			cout << "outta points buddy\n" ;
																			
																		istart = 4 ;
																		}
								
																	}
																	else if (iperson == 2 )
																	{
																	if (ipoints >= 100 )
															 			{
															 		
													  		 	   		 ipoints = ipoints - 100 ;
																	
															 	 		 system ("COLOR 08") ;
																
																 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																
													  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
													  			 
													  		 	 		 //delay () ;
													  			 	
													  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
													  			 
													  		 		 	 //delay () ;
													  			 
													  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
													  		 		 	 
													  		 		 	 // more of the game here .
													  		 			}
													  		 			else 
													  		 			{
													  		 				cout << "your outta points buddy ! \n" ;
													  		 			
													  		 				istart = 4 ;
													  		 			}	
																	}
																	
																}
																else if (iperson == 3)
																{
																	if ( ipoints >= 300)
																	{
																		system ("COLOR 02" ) ;
																		
													          			cout << "ssssirreee... i am here to help you ! \n " ;
													          			
													          			cout << " 1. Cloak or 2. Bomb \n " ;
																		  
																		 cin >> ininja2 ;  
													          			
													          			if (ininja2 == 1 )
																		{
																			ipoints = ipoints - 500 ;
																			cout << " you are now dissguissed .\n" ; 
																			
																			delay () ;
																			
																			cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																			
																			ipoints = ipoints +200 ; 
																		}
																		else
																		{
																			cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																			
																			delay () ;
																			
																			cout << " Run!!\n "<<endl <<endl ;
																			
																			delay () ;
																			
																		}
																	
																		
																		
																	}
																	
																	
																}
																
																
																
															}
															
															
															
															
															
															
															
															
															
															
														}
														
															 
												 	}
												}
												else if (iperson2 == 2)
												{
													if (ipoints >= 100 )
													{
														ipoints= ipoints - 100 ;
				
													system ("COLOR 08") ;
													
													cout << "you currently have " <<ipoints << "points in your watch\n" ;
													
										  			 cout <<" Hmm ill break the camera in no time \n" ;
										  			 
										  			 delay () ;
										  			 
										  			 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
										  			 
										  			 delay () ;
										  			 
										  			 cout << " Please , no time to call retro , we gotta move quick \n " ;
										  			 
										  			 cout << "  ENTERED ROOM 4. " <<endl <<endl;
	
														//delay ();
													
														cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
													
														//delay ();
													
														cout << "whom do you want to call \n " <<endl <<endl ;
													
														//delay ();
															
														cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
													
														cin >> iperson3 ;
													
														//delay ();
														if (iperson3 == 1)
															{
																if ( ipoints >= 800)
																{
																	ipoints = ipoints -800 ;
																	
																		system ("COLOR 05") ;
					
																cout << " ok the password for the camera is 66966 \n" ;
														
																//delay () ;
														
																//delay () ;
														
																if (system("CLS")) system("clear");
														
																cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
														
																//delay (); 
														
																cout <<" Now!\n";
														
																cin>> icode;
																
																if (icode == 66966 ) 
																	{
																	cout<< 	"great job!\n ";
														
													   				 cout<<  "ok time to call Retro\n" ;
													    
													 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n " ;
			
																	//	delay ();
																	
																	cout <<  " Who was torontos mayor in 2015\n " ;
																
																	cout<< " 1.Rob Ford\n";
																
																	cout<< " 2. John Tory\n " ;
																
																	cout<< " 3. Eugene Choi\n ";
															
																	cin >> ians10 ;
																	
																	if (ians10 == 2 )
																		{
																		cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
														
																	//	delay ();
																
																		cout << " 1. Ottawa\n";
																
																
																
																		cout << " 2. Toronto\n";
																
															
																
																		cout << "3. Vancouver\n";
																
																		cin  >>  ians11 ;
																		
																		if (ians11 == 1)
																			{
															
																			cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																
																			//delay ();
																
																			 cout << " 1. Russia\n" ;
																
																			 cout << " 2. India\n" ;
																 
																			 cout << " 3. Canada\n" ;
																 
																			 cin >> ians13 ;
																			 
																			 
																
														    				}	
														    				else 
																			{
																		 	cout<< " you are on the wrong track buddy \n"  ;
																		
																			//delay () ;
																		
																	 		cout<< " I really cant reward you any recharge more recharge points\n " ;
														 				
														 					//delay () ;
														 				
															  				cout<< "you have "<<ipoints <<" points in your watch \n" ;
															  				
															  				ians13 = 3;
																			}
																			
																			
																
																		}
																		else 
																		{
																		cout<< " you are on the wrong track buddy \n"  ;
																		
																		//delay () ;
																		
																	 	cout<< " I really cant reward you any recharge more recharge points\n " ;
														 				
														 				//delay () ;
														 				
															  			cout<< "you have "<<ipoints <<" points in your watch \n" ;
															  			
															  			ians13 = 3 ;
													    
													    			
													    
																		}
																	
																	if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n" ;
		  
																		 cout<< " This is it...\n " ;
																		  
																	   	// delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " ;
																		 
																		 ///delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		///delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		//delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		//delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		//delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		//delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		//delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		//delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" ;
																		
																				//delay () ;
																		
																				//delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				//delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n ";
																		
																	   				 cout<<  "ok time to call Cracker\n" ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																			
																				//	delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																				//	delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n" ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																			 		
																			//	 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																			//	 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																				//		delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																				///		delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																				//		delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																				//		delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																				//		delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																				//		delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						//delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						///delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						//delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						//delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						//delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						//d/elay ();
																						
																						cin >> iridode ;
																						
																						//delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  //delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  //delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  //elay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  //delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  //delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  //delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  //delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  //delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										//delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										//delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										//delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										//delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										//delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										gameover () ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																				//	delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																				//	delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																				//	delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
																						
																					
																					
																				}
																				
																				
																			}	
																		}
																
																	}
																	
																	
																	
																}								
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
															
															}
														else if (iperson3 == 2)
															{
															if (ipoints >= 100 )
														 		{
														 		
												  		 	   	 ipoints = ipoints - 100 ;
																
														 	 	 system ("COLOR 08") ;
															
															 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 	 //delay () ;
												  			 
												  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 //delay () ;
												  			 
												  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 
												  		 		 	if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n" ;
		  
																		 cout<< " This is it...\n " ;
																		  
																	   	 delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " ;
																		 
																		delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" ;
																		
																				delay () ;
																		
																				delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n ";
																		
																	   				 cout<<  "ok time to call Cracker\n" ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																			
																					delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																					delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n" ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																			 		
																				 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																				 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																				 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																				 delay ();
																			 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																						delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																				 	delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																						delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																						delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																						delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																						delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																				//	delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																				//	delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																				//	delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
															  		 		}
																		}
																		else
																		{
																				
																		}
																	}
																	else 
																	if (ipoints <= 100)
																	{
																		cout << "outta points buddy\n" ;
																		
																		istart = 4 ;
																	}
							
																}
																else if (iperson == 2 )
																{
																if (ipoints >= 100 )
														 			{
														 		
												  		 	   		 ipoints = ipoints - 100 ;
																
														 	 		 system ("COLOR 08") ;
															
															 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 		 //delay () ;
												  			 	
												  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 	 //delay () ;
												  			 
												  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 	 
												  		 		 	 // more of the game here .
												  		 			}
												  		 			else 
												  		 				{
												  		 				cout << "your outta points buddy ! \n" ;
												  		 			
												  		 					istart = 4 ;
											  		 					}	
																}
															
															}
															else 
															{
																cout <<" sssiiirrrreeee, what do you prefer? 1.Dissguisse or 2.Bomb\n" ;
																
																cin >> ininja ;
					
																if (ininja == 1 )
																{
																	ipoints = ipoints - 500 ;
																	cout << " you are now dissguissed .\n" ; 
																	
																	delay () ;
																	
																	cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																	
																	ipoints = ipoints +200 ;
																	
																	ians13 = 3 ; 
																} 
																else 
																  if ( ininja == 2)
																{
																	cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																	
																	delay () ;
																	
																	cout << " Run!!\n "<<endl <<endl ;
																	
																	ians13 = 3 ; 
																	
																	
																}
																
																if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n" ;
		  
																		 cout<< " This is it...\n " ;
																		  
																	   	// delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " ;
																		 
																		 ///delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		///delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		//delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		//delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		//delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		//delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		//delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		//delay () ;
																		
																		if (iperson5 == 1 )																		
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" ;
																		
																				//delay () ;
																		
																				//delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				//delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n ";
																		
																	   				 cout<<  "ok time to call Cracker\n" ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																			
																				//	delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																				//	delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n" ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																			 		
																			//	 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																			//	 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																				//		delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																				///		delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																				//		delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																				//		delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																				//		delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																				//		delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																				//	delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																				//	delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																				//	delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
															  		 		}
																		}
																	
															}
														
														
														
													}
													
													
													
													
													
													
													
													
													
													
												}//room 3
												else if (iperson2 == 3 )
												{
													cout << " Ninja activated\n " ; 
													
													if (ipoints >= 500)
													{
													ipoints = ipoints - 500 ;
														
														system ("COLOR 02" ) ;
															
								          			cout << "ssssirreee... i am here to help you ! \n " ;
								          			
								          			delay () ;
								          			
								          			cout << "Mysssself ninja\n . Masssster of disssguises ssssiirreee\n" ;
													  
												    delay () ;
													  
													cout << " I help you in ssstealth by disssguisssing you \n " ;
													
													delay () ;  
								          			
								          			cout << "i alssso sssabatoge the camera! \n " ;
								          			
								          			delay () ;
								          			
								          			cout << " but thessse thingsss cossst ssseperately. the cloak cossstsss 500 per use. the sssabatoging ,300.\n" ;
													  
													delay () ; 
													  
													cout << " what you want ? 1. Cloak or  2.bomb ?\n" ;
													
													cin >> ininja ;
													
													if (ininja == 1 )
														{
															ipoints = ipoints - 500 ;
															cout << " you are now dissguissed .\n" ; 
															
															delay () ;
															
															cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
															
															ipoints = ipoints +200 ; 
														} 
														else 
														  if ( ininja == 2)
														{
															cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
															
															delay () ;
															
															cout << " Run!!\n "<<endl <<endl ;
														}
													cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
															 
													cout << "  ENTERED ROOM 4. " <<endl <<endl;
	
													//delay ();
												
													cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
												
													//delay ();
												
													cout << "whom do you want to call \n " <<endl <<endl ;
												
													//delay ();
														
													cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
												
													cin >> iperson3 ;
													
													if (iperson3 == 1)
														{
																															
															 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
															 
															cout << "  ENTERED ROOM 4. " <<endl <<endl;
		
															//delay ();
														
															cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
														
															//delay ();
														
															cout << "whom do you want to call \n " <<endl <<endl ;
														
															//delay ();
																
															cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
														
															cin >> iperson3 ;
														
															//delay ();
															if (iperson3 == 1)
															{
																if ( ipoints >= 800)
																{
																	ipoints = ipoints -800 ;
																	
																		system ("COLOR 05") ;
					
																cout << " ok the password for the camera is 66966 \n" ;
														
																//delay () ;
														
																//delay () ;
														
																if (system("CLS")) system("clear");
														
																cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
														
																//delay (); 
														
																cout <<" Now!\n";
														
																cin>> icode;
																
																if (icode == 66966 ) 
																	{
																	cout<< 	"great job!\n ";
														
													   				 cout<<  "ok time to call Retro\n" ;
													    
													 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n " ;
			
																	//	delay ();
																	
																	cout <<  " Who was torontos mayor in 2015\n " ;
																
																	cout<< " 1.Rob Ford\n";
																
																	cout<< " 2. John Tory\n " ;
																
																	cout<< " 3. Eugene Choi\n ";
															
																	cin >> ians10 ;
																	
																	if (ians10 == 2 )
																		{
																		cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
														
																	//	delay ();
																
																		cout << " 1. Ottawa\n";
																
																
																
																		cout << " 2. Toronto\n";
																
															
																
																		cout << "3. Vancouver\n";
																
																		cin  >>  ians11 ;
																		
																		if (ians11 == 1)
																			{
															
																			cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																
																			//delay ();
																
																			 cout << " 1. Russia\n" ;
																
																			 cout << " 2. India\n" ;
																 
																			 cout << " 3. Canada\n" ;
																 
																			 cin >> ians13 ;
																			 
																			 
																
														    				}	
														    				else 
																			{
																		 	cout<< " you are on the wrong track buddy \n"  ;
																		
																			//delay () ;
																		
																	 		cout<< " I really cant reward you any recharge more recharge points\n " ;
														 				
														 					//delay () ;
														 				
															  				cout<< "you have "<<ipoints <<" points in your watch \n" ;
															  				
															  				ians13 = 3;
																			}
																			
																			
																
																		}
																		else 
																		{
																		cout<< " you are on the wrong track buddy \n"  ;
																		
																		//delay () ;
																		
																	 	cout<< " I really cant reward you any recharge more recharge points\n " ;
														 				
														 				//delay () ;
														 				
															  			cout<< "you have "<<ipoints <<" points in your watch \n" ;
															  			
															  			ians13 = 3 ;
													    
													    			
													    
																		}
																	
																	if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n" ;
		  
																		 cout<< " This is it...\n " ;
																		  
																	   	// delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " ;
																		 
																		 ///delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		///delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		//delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		//delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		//delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		//delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		//delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		//delay () ;
																		
																		if (iperson5 == 1 )
																		
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" ;
																		
																				//delay () ;
																		
																				//delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				//delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n ";
																		
																	   				 cout<<  "ok time to call Cracker\n" ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																			
																				//	delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																				//	delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n" ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																			 		
																			//	 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																			//	 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																				//		delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																				///		delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																				//		delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																				//		delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																				//		delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																				//		delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						//delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						///delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						//delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						//delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						//delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						//d/elay ();
																						
																						cin >> iridode ;
																						
																						//delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  //delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  //delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  //elay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  //delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  //delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  //delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  //delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  //delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										//delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										//delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										//delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										//delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										//delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																				//	delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																				//	delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																				//	delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
																						
																					
																					
																				}
																				
																				
																			}	
																		}
																
																	}
																	
																	
																	
																}								
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
															
															}
														else if (iperson3 == 2)
															{
															if (ipoints >= 100 )
														 		{
														 		
												  		 	   	 ipoints = ipoints - 100 ;
																
														 	 	 system ("COLOR 08") ;
															
															 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 	 //delay () ;
												  			 
												  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 //delay () ;
												  			 
												  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 
												  		 		 	if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n" ;
		  
																		 cout<< " This is it...\n " ;
																		  
																	   	// delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " ;
																		 
																		 ///delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		///delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		//delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		//delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		//delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		//delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		//delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		//delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" ;
																		
																				//delay () ;
																		
																				//delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				//delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n ";
																		
																	   				 cout<<  "ok time to call Cracker\n" ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																			
																				//	delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																				//	delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n" ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																			 		
																			//	 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																			//	 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																			//	 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																				//		delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																				///		delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																				//		delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																				//		delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																				//		delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																				//		delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																				//	delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																				//	delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																				//	delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
															  		 			}
																			}
																	
																		}
																		else 
																		if (ipoints <= 100)
																		{
																			cout << "outta points buddy\n" ;
																			
																			istart = 4 ; 
																		}
							
																}
																else if (iperson == 2 )
																{
																if (ipoints >= 100 )
														 			{
														 		
												  		 	   		 ipoints = ipoints - 100 ;
																
														 	 		 system ("COLOR 08") ;
															
															 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 		 //delay () ;
												  			 	
												  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 	 //delay () ;
												  			 
												  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 	 
												  		 		 	 // more of the game here .
												  		 			}
												  		 			else 
												  		 			{
												  		 				cout << "your outta points buddy ! \n" ;
												  		 			
												  		 				istart = 4 ;
												  		 			}
																	   	
																}
																
																
															}
															else if (iperson3 == 3 )
															{
																if (ipoints >= 500)
																
																system ("COLOR 02" ) ;
																	
											          			cout << "ssssirreee... i am here to help you ! \n " ;
											          			
											          			cout << " 1. Cloak or 2. Bomb \n " ;
																  
																 cin >> ininja2 ; 
																 
																 cout << "you now have" << ipoints << "points in your watch \n" ; 
											          			
											          			if (ininja2 == 1 )
																{
																	ipoints = ipoints - 500 ;
																	cout << " you are now dissguissed .\n" ; 
																	
																	delay () ;
																	
																	cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																	
																	ipoints = ipoints +200 ; 
																}
																else
																{
																	cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																	
																	delay () ;
																	
																	cout << " Run!!\n "<<endl <<endl ;
																	
																	delay () ;
																}
															
																if (ians13 == 3 )
																{
																	cout << "ENTERED ROOM 5 \n" ;
	
																 cout<< " This is it...\n " ;
																  
															   	// delay () ;
															   	 
															   	 system ("COLOR 02" ) ;
																	  
																 cout << "The Vault \n " ;
																 
																 ///delay () ;
																 
																	 
																 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																 
																///delay () ;
																
																cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																
																//delay () ;
																
																cout << " time to call cracker \n "<<endl ; 
																
																//delay () ;
																
																cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																
																//delay () ;
																
																cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																
																//delay () ;
																
																cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																
																//delay () ;
																
																cin >> 	iperson5 ;
																
																//delay () ;
																
																if (iperson5 == 1 )
																
																	{ if (ipoints >= 800)
																		{
																			ipoints = ipoints - 800 ;
																		
																		system ("COLOR 09") ;
																			
																		cout << " ok the password for the camera is 13579 \n" ;
																
																		//delay () ;
																
																		//delay () ;
																
																		if (system("CLS")) system("clear");
																
																		cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																
																		//delay (); 
																
																		cout <<" Now!\n";
																
																		cin>> icode;
																
																		if (icode == 13579 ) 
																			{
																			cout<< 	"great job!\n ";
																
															   				 cout<<  "ok time to call Cracker\n" ;
															    
															 			    icode = icode + 1 ; 
															 			    
															 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
															    
															    			iperson5 = 2 ; 
															    																		    			
															    
																			}
																		else 
																		if (icode != 13579)
																			{
																			cout << "damn ! wrong code buddy ! \n" ;
																	
																		//	delay ();
																	
																			cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																	
																		//	delay ();
																	
																			cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																	
																			cout << " ru.... " ;
																																																								
																			// function called endgame over here ;
																			istart = 4; 
															    			}	
																		}
																		else
																		{
																			cout << "youre outta points mate\n" ;
																			
																			istart = 4; 
																		}
																	
																		
																		
																	}
																	else if (iperson5 == 2)
																	{
																		if ( ipoints >= 1000)
																		{
																			ipoints = ipoints - 1000 ; 
	 		
																	 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	 		
																	 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																	 		
																	//	 delay ();
																		 
																		 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																		 
																	//	 delay ();
																		 
																		 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																		 
																	//	 delay ();
																		 
																		 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																		 
																	//	 delay ();
																		 
																		 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																		 
																		 cin >> sriddle ;
																		 
																		 if (sriddle.compare("nothing") )
																		 	{
																		 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																		 		
																		//		delay ();
																				
																				cout << " MINUTES LATER \n" ;
																				
																		///		delay ();
																				
																				cout << " VAULT CRACKED !!! \n";
																				
																		//		delay ();
																				
																				cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																				
																		//		delay ();
																				
																				cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																				
																		//		delay ();
																				
																				system ("COLOR 09") ;
																				
																				cout << "Pat: wow ," <<sname ; 
																				
																				cout<< " this is the first time Ive seen him so emotional, \n " ; 
																				
																		//		delay ();
																				
																				cout << " time to open the Vault\n " ;
																				
																				cout << "The diamond isnt here?\n"<<endl ;
																				
																				cout << " ENTERED ROOM 6 \n" ;
																				
																				//delay () ;
																				
																				cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				
																				///delay ();
																				
																				cout << " The diamond id in this room ! I see it ! \n" ;
																				
																				//delay ();
																				
																				cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																				
																				//delay ();
																				
																				cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																				
																				//delay ();
																				
																				cout << "do you know the answer ?\n " ;
																				
																				//d/elay ();
																				
																				cin >> iridode ;
																				
																				//delay ();
																				
																			 	if (iridode == 5 )
																					{
																						cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																						
																						// Ar2 colour still to decide.
	
																					  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																					  
																					  //delay ();
																					  
																					  cout << " We would like to but it from you \n " <<sname ;
																					  
																					  //delay ();
																					  
																					  cout << "Name your price\n" ;  
																					  
																					  //elay ();
																					  
																					  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																					  
																					  //delay ();
																					  
																					  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																					  
																					  //delay ();
																					  
																					  cout << "what do you want to do , escape? fat chance \n " ;
																					  
																					  //delay ();
																					  
																					  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																					   
																					  //delay ();
																					  
																					  cout << "unless you agree to my terms. \n " ;
																					  
																					  cout << "Yes or no ?\n " ;
																					  
																					  //delay ();
																					  
																					  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																					  
																					  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																					  
																					  cin >> ideathwish ;
																					  
																					  if (ideathwish == 1)
																					 	{
																					 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																					 		
																					 		istart = 3; 
																					 	} 
																					  else
																					  	if (ideathwish == 2)
																					    	{
																					    		cout << " Thank you for trading the watch \n " ;
																					    		
																					    		cout << "AR2: Ali , come on\n " ;
																					    		
																					    		cout << "Please kill "  <<sname <<"for me \n" ; 
																					    		
																					    		istart = 3; 
																					    	}		
																						else 
																						if (ideathwish==3)
																							{
																								cout <<  "ok good choice\n" ;
																								
																								//delay ();
																								
																								cout << "Now Run!! \n" ;
																								
																								//delay ();
																								
																								cout << "Ali and Ninja ,GO!!! " ;
																								
																								//delay ();
																								
																								cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																								
																								//delay ();
																								
																								cout << "Ali : Master, i see the exit.\n";
																								
																								//delay ();
																								
																								cout << " Ninja: Me too Sssssire!\n"  ;
																								
																								delay ();
																								
																								cout << " ENEMY EXITED BUILDING " ;
																								
																								delay ();
																								
																								cout << " Year 2060\n";
																								
																								delay ();
																								
																								cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																								
																								delay ();
																								
																								cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																								
																								delay ();
																								
																								cout << "The country has since been protected manually by the NA- National Army \n" ;
																								
																								delay ();
																								
																								cout << "As for the winner of the challenge .....";
																								
																								delay ();
																								delay ();
																								
																								if (system("CLS")) system("clear");
																								
																								cout << "No one knows where he is .\n " ;
																								
																								delay () ; 
																								
																								cout << "And no one wants to know  .\n" ;
																								
																								delay () ;
																								
																								istart = 4 ; 	     
																								
																							}	  	 	        
																					}
																					else
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																					
																					delay ();
																					
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																					
																					delay ();
																					
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																					
																					cout << " ru.... " ;
																					
																					istart = 5 ;
																					} 
																			}
																			else
																			{
																		  	cout << " ok " <<sname ;
																		  		
																		//	delay ();
																		  		
																			cout << " the answer waz 'nothing' .\n" ;
																				  
																		//	delay ();
																				  
																			cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																				  
																		//	delay ();
																				 
																			 cout  << " im leaving . goodbye" ; 
																				 
																			 istart =5 ;  
																			 
																		  	}
																				
																			
																			
																		}
																		
																		
																	}	
																}
																
															}
																		
																		
																		
														}								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																
													}
												else if (iperson3 == 2)
													{
													if (ipoints >= 100 )
												 		{
												 		
										  		 	   	 ipoints = ipoints - 100 ;
														
												 	 	 system ("COLOR 08") ;
													
													 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
													
										  		  		 cout <<" Hmm ill break the camera in no time \n" ;
										  			 
										  		 	 	 //delay () ;
										  			 
										  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
										  			 
										  		 		 //delay () ;
										  			 
										  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
										  		 		 
										  		 		 	if (ians13 == 3 )
															{
																cout << "ENTERED ROOM 5 \n" ;
	
															 cout<< " This is it...\n " ;
															  
														   	// delay () ;
														   	 
														   	 system ("COLOR 02" ) ;
																  
															 cout << "The Vault \n " ;
															 
															 ///delay () ;
															 
																 
															 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
															 
															///delay () ;
															
															cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
															
															//delay () ;
															
															cout << " time to call cracker \n "<<endl ; 
															
															//delay () ;
															
															cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
															
															//delay () ;
															
															cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
															
															//delay () ;
															
															cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
															
															//delay () ;
															
															cin >> 	iperson5 ;
															
															//delay () ;
															
															if (iperson5 == 1 )
																{ if (ipoints >= 800)
																	{
																		ipoints = ipoints - 800 ;
																	
																	system ("COLOR 09") ;
																		
																	cout << " ok the password for the camera is 13579 \n" ;
															
																	//delay () ;
															
																	//delay () ;
															
																	if (system("CLS")) system("clear");
															
																	cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
															
																	//delay (); 
															
																	cout <<" Now!\n";
															
																	cin>> icode;
															
																	if (icode == 13579 ) 
																		{
																		cout<< 	"great job!\n ";
															
														   				 cout<<  "ok time to call Cracker\n" ;
														    
														 			    icode = icode + 1 ; 
														 			    
														 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
														    
														    			iperson5 = 2 ; 
														    																		    			
														    
																		}
																	else 
																	if (icode != 13579)
																		{
																		cout << "damn ! wrong code buddy ! \n" ;
																
																	//	delay ();
																
																		cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																
																	//	delay ();
																
																		cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																
																		cout << " ru.... " ;
																																																							
																		// function called endgame over here ;
																		istart = 4; 
														    			}	
																	}
																	else
																	{
																		cout << "youre outta points mate\n" ;
																		
																		istart = 4; 
																	}
																
																	
																	
																}
																else if (iperson5 == 2)
																{
																	if ( ipoints >= 1000)
																	{
																		ipoints = ipoints - 1000 ; 
		
																 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																 		
																 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																 		
																//	 delay ();
																	 
																	 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																	 
																//	 delay ();
																	 
																	 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																	 
																//	 delay ();
																	 
																	 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																	 
																//	 delay ();
																	 
																	 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																	 
																	 cin >> sriddle ;
																	 
																	 if (sriddle.compare("nothing") )
																	 	{
																	 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																	 		
																	//		delay ();
																			
																			cout << " MINUTES LATER \n" ;
																			
																	///		delay ();
																			
																			cout << " VAULT CRACKED !!! \n";
																			
																	//		delay ();
																			
																			cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																			
																	//		delay ();
																			
																			cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																			
																	//		delay ();
																			
																			system ("COLOR 09") ;
																			
																			cout << "Pat: wow ," <<sname ; 
																			
																			cout<< " this is the first time Ive seen him so emotional, \n " ; 
																			
																	//		delay ();
																			
																			cout << " time to open the Vault\n " ;
																			
																			cout << "The diamond isnt here?\n"<<endl ;
																			
																			cout << " ENTERED ROOM 6 \n" ;
																			
																			delay () ;
																			
																			cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			
																			delay ();
																			
																			cout << " The diamond id in this room ! I see it ! \n" ;
																			
																			delay ();
																			
																			cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																			
																			delay ();
																			
																			cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																			
																			delay ();
																			
																			cout << "do you know the answer ?\n " ;
																			
																			delay ();
																			
																			cin >> iridode ;
																			
																			delay ();
																			
																		 	if (iridode == 5 )
																			{
																				cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																				
																				// Ar2 colour still to decide.
	
																			  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																			  
																			  delay ();
																			  
																			  cout << " We would like to but it from you \n " <<sname ;
																			  
																			  delay ();
																			  
																			  cout << "Name your price\n" ;  
																			  
																			  delay ();
																			  
																			  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																			  
																			  delay ();
																			  
																			  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																			  
																			  delay ();
																			  
																			  cout << "what do you want to do , escape? fat chance \n " ;
																			  
																			  delay ();
																			  
																			  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																			   
																			  delay ();
																			  
																			  cout << "unless you agree to my terms. \n " ;
																			  
																			  cout << "Yes or no ?\n " ;
																			  
																			  delay ();
																			  
																			  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																			  
																			  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																			  
																			  cin >> ideathwish ;
																			  
																			if (ideathwish == 1)
																		 	{
																		 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																		 		
																		 		istart = 3; 
																		 	} 
																		  	else
																		  	if (ideathwish == 2)
																		    	{
																		    		cout << " Thank you for trading the watch \n " ;
																		    		
																		    		cout << "AR2: Ali , come on\n " ;
																		    		
																		    		cout << "Please kill "  <<sname <<"for me \n" ; 
																		    		
																		    		istart = 3; 
																		    	}		
																			else 
																			if (ideathwish==3)
																				{
																					cout <<  "ok good choice\n" ;
																					
																					delay ();
																					
																					cout << "Now Run!! \n" ;
																					
																					delay ();
																					
																					cout << "Ali and Ninja ,GO!!! " ;
																					
																					delay ();
																					
																					cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																					
																					delay ();
																					
																					cout << "Ali : Master, i see the exit.\n";
																					
																					delay ();
																					
																					cout << " Ninja: Me too Sssssire!\n"  ;
																					
																					delay ();
																					
																					cout << " ENEMY EXITED BUILDING " ;
																					
																					delay ();
																					
																					cout << " Year 2060\n";
																					
																					delay ();
																					
																					cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																					
																					delay ();
																					
																					cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																					
																					delay ();
																					
																					cout << "The country has since been protected manually by the NA- National Army \n" ;
																					
																					delay ();
																					
																					cout << "As for the winner of the challenge .....";
																					
																					delay ();
																					delay ();
																					
																					if (system("CLS")) system("clear");
																					
																					cout << "No one knows where he is .\n " ;
																					
																					delay () ; 
																					
																					cout << "And no one wants to know  .\n" ;
																					
																					delay () ;
																					
																					istart = 4 ; 	     
																					
																				}	  	 	        
																			}
																			else
																			{
																			cout << "damn ! wrong code buddy ! \n" ;
																			
																			delay ();
																			
																			cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																			delay ();
																			
																			cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																			cout << " ru.... " ;
																			
																			istart = 5 ;
																			} 
																		}
																		else
																		{
																	  	cout << " ok " <<sname ;
																	  		
																	//	delay ();
																	  		
																		cout << " the answer waz 'nothing' .\n" ;
																			  
																	//	delay ();
																			  
																		cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																			  
																	//	delay ();
																			 
																		 cout  << " im leaving . goodbye" ; 
																			 
																		 istart =5 ;  
																		 
																	  	}
													
																	}
																	
																	
																}
																											
														
														
															}
														
											
														 
											 			}
													}
										  			 
																								
													}
									
									
												}
						
												
											 	
												
														
											}
										
												
										}
								
										
									}
					
						
								}
						
						
								}
								else
								{
									gameover() ;
								}
							}
							else  
							{
							cout << "damn ! You're out of points mate ! \n" <<endl;
									
							delay ();
				
							cout << " Oh no there are gaurds on the radar . they've found the ......\n" <<endl ;
					
							delay ();
				
							cout << "  Oh no ,you are trapped due to no points. waiting for inevitable death is all you can do now  " <<sname <<endl ;
								
							delay () ;
					
							cout << "Here come the gaurds. It was nice knowing you "<<sname <<endl  ;
													
							istart = 4 ;
			
							}
							
												
											
						
						}
							
							
					
				
					}
					 
					if ( icode != 27456)
						{
							cout << "damn ! wrong code buddy ! \n" ;
										
							delay ();
					
							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
						
							delay ();
					
							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
									
							delay () ;
						
							cout << " ru....\n " ;
														
							istart = 4 ;
						}	
					
					
					
					
					
					
					
					
					
					

				}
				else if (icode != 27456) 
				{
				cout << "damn ! wrong code buddy ! \n" ;
						
		//		delay ();
	
				cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
		
		//		delay ();
	
				cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
					
		//		delay () ;
		
				cout << " ru....\n " ;
										
				istart = 4 ;
			
								
							
		
				}
			
			
		
			}
			if (iunderstood == 2 )
				{
				
					
					
						cout << "oh you may be hard to work with \n" ;
						delay () ;
						cout << "lets try this again\n" ;
						delay () ;
						cout << " I am Pat, member of a Group of 5\n" ;
						delay () ;
						cout << "Partners are Ali , Ninja ,Retro and Cracker\n" ;
						delay () ;
						cout << " got it ? \n " ;  
						delay () ;
											 
				cout <<"ok, moving on,\n " <<endl;
			 		
		 		cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
				 	
		 		delay () ;
		 		//delay () ;
		 		//delay () ;
				 	
		 		if (system("CLS")) system("clear");
				 		
		 		system ("COLOR 02" ) ;
				  		
		  		cout << " ENTERED ROOM 1.\n"<<endl ;
				  		
		  		system ("COLOR 09" ) ;
				  		
		  		cout<< "this room has a camera\n"<<endl ;
				  			
		  		cout << "Pat:  this is your first time so lemme teach you how to battle it out! \n "<<endl ;
				  		
				system ("COLOR 09") ;
				//password to gain access into the next room
				cout << " ok the password for the camera is 27456 \n" <<endl;
				
					delay () ;
				
					delay ();
						
					delay () ;
						
					delay () ;
						
					//delay () ;
						
						
				//te below command clears system 
				if (system("CLS")) system("clear");
				
				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
				
					delay (); 
				
				cout <<" Now!\n"<<endl;
			
				cin>> icode;
				
				if (icode == 27456) 
					{
						
					cout<< 	"great job!\n "<<endl;
							
					delay () ;
				
		  			 cout<<  "ok time to call Retro\n"<<endl ;
			    
		  			delay () ;
			  				  
			  		system ("COLOR 05") ;
			
					cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n "<<endl ;
			
					delay ();
					
					cout <<  " Who was toronto's mayor in 2015\n " ;
				
					cout<< " 1.Rob Ford\n";
				
					cout<< " 2. John Tory\n " ;
				
					cout<< " 3. Eugene Choi\n ";
			
					cin >> ians1 ;
					
					if (ians1 == 2 )
						{
						cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
		
						delay ();
				
						cout << " 1. Ottawa\n";
				
				
				
						cout << " 2. Toronto\n";
				
			
				
						cout << "3. Vancouver\n";
				
						cin  >>  ians2 ;
						
						if (ians2 == 1)
							{
			
							cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
				
							//delay ();
				
							 cout << " 1. Russia\n" ;
				
							 cout << " 2. India\n" ;
				 
							 cout << " 3. Canada\n" ;
				 
							 cin >> ians3 ;
							 
							icode = 12345 ; 
				
		    				}	
		    				else 
							{
						 	cout<< " you are on the wrong track buddy \n" <<endl ;
						
							//delay () ;
						
					 		cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
		 				
		 					//delay () ;
		 				
			  				cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
			  				
			  				ians3 = 3;
							}
							
							
				
						}
						else 
						{
						cout<< " you are on the wrong track buddy \n"<<endl  ;
						
						delay () ;
						
					 	cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
		 				
		 				delay () ;
		 				
			  			cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
			  			
			  			ians3 = 3 ;
			  			}
			  			
				  	if (ians3 == 3) ;
					    {
					 	 cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n " <<endl ;
					
						delay () ; 
				
						 cout << "call me whenever you want , but I got to go now . see you later, \n"  <<endl;
								
						delay () ;
								
						 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
						 //new room is entered. here points will come into effect. 
						 cout << "  ENTERED ROOM 2 " <<endl ;
						//this will then output the points o screen
						 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
					
						 delay ();
					
						 cout << " there is a camera here\n "<<endl  ;
					
					   	 delay ();
					
						 cout << "whom do you want to call. I think i will let Ali handle it . \n " <<endl  ;
					
						 delay ();
						
						 cout << "I am going to go now , so if you call me, the watch might malfuntion\n "  <<endl ; 
					
						 cout << "1.Ali or 2.Pat" <<endl  ;
					
						 cin >> iperson ;
						  				//if statement to show youre game is successfull. 				
					 	 if ( iperson == 1)
						 	{
						 		if (ipoints >= 100 )
						 		{
						 			icode = 0 ;
						 			
				  		 	   	 ipoints = ipoints - 100 ;
								
						 	 	 system ("COLOR 08") ;
							
							 	 cout << "you currently have " <<ipoints << "points in your watch\n"<<endl;
							
				  		  		 cout <<" Hmm ill break the camera in no time \n" ;
				  			 
				  		 	 	 delay () ;
				  			 
				  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n "<<endl ;
				  			 
				  		 		 delay () ;
				  			 
				  		 		 cout << " Please , no time to call retro , we gotta move quick \n "<<endl ;
				  		 		 
				  		 		 iperson = 2 ;
				  		 		 
				  		 		 iperson = 2 ;
					  		 		 system ("COLOR 09") ;
							        
							         ipoints - 800 ; 
					 	 
									 cout << " ok the password for the camera is 84573 \n" <<endl  ;
							
									 delay () ;
							
									 delay () ;
									 
									 delay () ;
							
									 if (system("CLS")) system("clear");
							
									 cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
							
									 delay ();
									
								  	 //d//elay () ;
									
									 //delay () ; 
							
									 cout <<" Now!\n"<<endl ;
							
									 cin>> icode;
									
									  if (icode == 84573 ) 
									{
					
									cout<< 	"great job!\n "<<endl ;
					
						    		cout<<  "ok time to call Retro\n" <<endl ;
						    		
						    		 system ("COLOR 05") ;
			
									cout << " ok my friend , you know the drill answer my following questions \n "<<endl ;
					
									delay ();
						
									cout <<  " What was Goerges Vanier's Mascot in 2015 ? \n" <<endl;
					
									cout<< " 1.Viking\n"<<endl;
					
									cout<< " 2.Puma\n" <<endl;
					
									cout<< " 3. Nathan Dong\n "<<endl;
					
									cin >> ians4 ;
					
									if (ians4 == 1 )
										{
											ipoints = ipoints + 200 ;
										cout<<  "Great Job ! Next Question : What year did  Air France Flight 358 bursts into flames while landing at Toronto Pearson International Airport?\n";
						
										delay ();
						
										cout << " 1. 2005\n" ;
								
										cout << " 2. 2000\n" ;
								
										cout << " 3. 2010\n" ;
						
										cin  >>  ians5  ;
						
										if (ians5 == 1)
											{
												ipoints = ipoints + 200 ; 
							
											cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
						
											 delay ();
						 
											 cout << " 1. Russia\n" ;
						 
											 cout << " 2. India\n" ;
						 
											 cout << " 3. Canada\n" ;
						 
											 cin >> ians6 ;
											
						 
						
											}
											else
											   if(ians6 =! 3)
												{
					 							cout<< " you are on the wrong track buddy \n" <<endl;
					 		
												 cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
							 
					 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl   ;
												 
												 ians6 = 3 ; 
					 				 			  
												}
											else 
											{
											 cout<< " you are on the wrong track buddy \n"  ;
						 
					 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
					 	
						  					delay () ;
						  					
						  					cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
						  					// this will kick out of the loop 
						  					ians6 = 3 ;
						  					
											}
					
						
										}
										else 
										{
										 cout<< " you are on the wrong track buddy \n" <<endl ;
					 
										 cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
											
										cout<< "you have "<<ipoints <<" points in your watch \n"<<endl;		 
					 
					  					delay () ;
					  					
					  					ians6 = 3 ;
										}
										
										if (ians6 == 3 )
										{
										cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n " <<endl  ;
									
										 delay () ; 
								
										 cout << "call me whenever you want , but i got to go now . see you later, \n" <<endl;
												
										 delay () ;
												
										 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl  ;
										 // same thing as above
										 cout << "  ENTERED ROOM 3 " <<endl  ;
										
										delay ();
										
										cout << " there is a camera AND a gaurd here/n "<<endl  ;
										
										delay ();
										
										cout << "whom do you want to call \n " <<endl ;
										
										delay ();
										
										cout << "1. Pat OR 2. Ninja \n " <<endl;
										
										cin >> iperson2 ;
										
										if  (iperson2 == 1)
											{
												if (ipoints >= 800)
												{
												system ("COLOR 09") ;
										        
										        ipoints - 800 ; 
								 	 
												cout << " ok the password for the camera is 40976 \n" <<endl  ;
												
												delay () ;
						
												delay () ;
										
												if (system("CLS")) system("clear");
										
												cout<< " ok, you have to enter the pass word into your watch . Enter ....."   <<endl;
										
												delay ();
												
												delay () ;
												
												delay () ; 
										
												cout <<" Now!\n"<<endl  ;
										
												cin>> icode;
												
												 if (icode == 40976 ) 
													{
													cout<< 	"great job!\n "<<endl;
											
										    		cout<<  "ok time to call Retro\n"<<endl ;
	
												
													cout << " ok my friend , you know the drill answer my following questions \n "<<endl ;
	
													delay ();
											
													cout <<  " When did Canada get their official flag? \n" ;
										
													cout<< " 1. Year : 1989\n";
										
													cout<< " 2.Year : 1965 \n" ;
										
													cout<< " 3. Year : 1898\n ";
										
													cin >> ians7 ;
													
													if (ians7 == 2 )
														{
															ipoints = ipoints +200 ;
														cout<<  "Great Job ! Next Question : Official Language Of Pakistan \n";
												
														delay ();
											
														cout << " 1. Urdu\n";
															
														cout << " 2. Arabic\n";
													
														cout << "3. Persian\n";
											
														cin  >>  ians8 ;
											
														if (ians8 == 1)
															{
															
															ipoints = ipoints + 200 ; 
															
															cout << " another one answered! Ok, Last Question : What the largest amount of money in coins without being able to make change for a dollar.\n" ;
											
															 delay ();
											
															 cout << " 1.  5 quarters, 4 dimes, and 2 pennies\n" ;
											 
											 				cout << " 2.  6 quarters, 0 dimes, and 8 pennies\n" ;
											 
															cout << " 3.  3 quarters, 4 dimes, and 4 pennies\n" ;
											 
											 				cin >> ians9 ;
											 				
															   if(ians9 =! 3)
																{
									 							cout<< " you are on the wrong track buddy \n" <<endl;
									 		
																 cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
											 
									 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
																 
																 ians9 = 3 ; 
									 				 			  
																}
																else 
																{
																 cout<< " you are on the wrong track buddy \n"  ;
											 
										 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
										 	
											  					delay () ;
											  					
											  					cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
											  					
											  					ians9 = 3 ;
											  					
																}
										
											
															}
															else 
															{
															 cout<< " you are on the wrong track buddy \n"  ;
										 
															 cout<< " I really cant reward you any recharge more recharge points\n "<<endl  ;
																
															cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;		 
										 
										  					delay () ;
										  					
										  					ians9 = 3 ;
															}
																					
														}
														else
														{
															cout<< " you are on the wrong track buddy \n"<<endl  ;
										 
															 cout<< " I really cant reward you any recharge more recharge points\n "<<endl   ;
																
															cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;		 
										 
										  					delay () ;
										  					
										  					ians9 = 3 ;
														}
														if (ians9 == 3)
														{
														cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n " <<endl ;
													
														 delay () ; 
												
														 cout << "call me whenever you want , but i got to go now . see you later, \n" <<endl ;
																
														 delay () ;
																
														 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl  ;
														 
														cout << "  ENTERED ROOM 4. " <<endl  ;
	
														delay ();
													
														cout << " there is a camera AND a gaurd here\n "<<endl   ;
													
														delay ();
													
														cout << "whom do you want to call \n " <<endl  ;
													
														delay ();
															
														cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl   ;
													
														cin >> iperson3 ;
													
														delay ();
														if (iperson3 == 1)
															{
																if ( ipoints >= 800)
																{
																	ipoints = ipoints -800 ;
																	
																		system ("COLOR 05") ;
					
																cout << " ok the password for the camera is 66966 \n"<<endl ;
														
																delay () ;
														
																delay () ;
														
																if (system("CLS")) system("clear");
														
																cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
														
																delay (); 
														
																cout <<" Now!\n"<<endl;
														
																cin>> icode;
																
																if (icode == 66966 ) 
																	{
																	cout<< 	"great job!\n "<<endl;
														
													   				 cout<<  "ok time to call Retro\n" <<endl;
													    
													 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n "<<endl ;
			
																		delay ();
																	
																	cout <<  " Who was torontos mayor in 2015\n "  ;
																
																	cout<< " 1.Rob Ford\n";
																
																	cout<< " 2. John Tory\n " ;
																
																	cout<< " 3. Eugene Choi\n ";
															
																	cin >> ians10 ;
																	
																	if (ians10 == 2 )
																		{
																		cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
														
																		delay ();
																
																		cout << " 1. Ottawa\n";
																
																
																
																		cout << " 2. Toronto\n";
																
															
																
																		cout << "3. Vancouver\n";
																
																		cin  >>  ians11 ;
																		
																		if (ians11 == 1)
																			{
															
																			cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																
																			delay ();
																
																			 cout << " 1. Russia\n" ;
																
																			 cout << " 2. India\n" ;
																 
																			 cout << " 3. Canada\n" ;
																 
																			 cin >> ians13 ;
																			 
																			 
																
														    				}	
														    				else 
																			{
																		 	cout<< " you are on the wrong track buddy \n" <<endl ;
																		
																			delay () ;
																		
																	 		cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
														 				
														 					delay () ;
														 				
															  				cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
															  				
															  				ians13 = 3;
																			}
																			
																			
																
																		}
																		else 
																		{
																		cout<< " you are on the wrong track buddy \n" <<endl ;
																		
																		delay () ;
																		
																	 	cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
														 				
														 				delay () ;
														 				
															  			cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
															  			
															  			ians13 = 3 ;
													    
													    			
													    
																		}
																	
																	if (ians13 == 3 )
																		{
																		cout << "ENTERED ROOM 5 \n" <<endl;
		  
																		 cout<< " This is it...\n " <<endl;
																		  
																	   	 delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " <<endl;
																		 
																		 delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" <<endl;
																		
																				delay () ;
																		
																				delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
																		
																				delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n "<<endl;
																		
																	   				 cout<<  "ok time to call Cracker\n"<<endl; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" <<endl;
																			
																					delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl;
																			
																					delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n"<<endl ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{//Vault is here
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n "<<endl ;
																			 		
																				 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " <<endl;
																				 
																				 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n "<<endl ;
																				 
																				 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n "<<endl ;
																				 
																				 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n"<<endl ;
																				 
																				 cout << "1.nothing or 2.poverty\n" <<endl ;  
																				 cin >> iriddle ;
																				 
																				 if ( iriddle == 1)
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n"<<endl ;
																				 		
																				   	 delay ();
																						
																						cout << " MINUTES LATER \n" <<endl;
																						
																				   	 delay ();
																						
																						cout << " VAULT CRACKED !!! \n"<<endl;
																						
																						delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n"<<endl ;
																						
																						delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																						delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n "<<endl ; 
																						
																						delay ();
																						
																						cout << " time to open the Vault\n "<<endl ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n"<<endl ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n"<<endl ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n "<<endl; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n "<<endl ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " <<endl;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n"<<endl;
																								
																								system ( "COLOR 09") ;
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n "<<endl ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you " <<sname<<endl ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" <<endl;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" <<endl;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n"<<endl;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " <<endl;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " <<endl;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n "<<endl ;
																							  
																							  cout << "Yes or no ?\n " <<endl;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n"<<endl;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n"<<endl ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n"<<endl ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " <<endl;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n"<<endl ; 
																							    		
																							    		istart = 4; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n"<<endl ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" <<endl;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " <<endl;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n"<<endl ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n"<<endl;
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n" <<endl ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING "<<endl ;
																										
																										delay ();
																										
																										cout << " Year 2060\n"<<endl;
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n"<<endl ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" <<endl;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n"<<endl ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge ....."<<endl;
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n "<<endl ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n"<<endl ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n"<<endl ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname <<endl;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																					delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																					delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" <<endl;
																						  
																					delay ();
																						 
																					 cout  << " im leaving . goodbye" <<endl; 
																						 
																					 istart =5 ;  
																					 
																				  	}
																						
																					
																					
																				}
																				
																				
																			}	
																		}
																
																	}
																	else 
																	{
																	cout << "damn ! wrong code buddy ! \n" <<endl;
																							
																	delay ();
																	
																	cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl ;
																	
																	delay ();
																	
																	cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																	
																	cout << " ru.... " ;
																	
																	istart = 5 ;	
																	
																	}
																	
																	
																}								
																							
												
															}
														else if (iperson3 == 2)
															{
															if (ipoints >= 100 )
														 		{
														 		
												  		 	   	 ipoints = ipoints - 100 ;
																
														 	 	 system ("COLOR 08") ;
															
															 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
															
												  		  		 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 	 delay () ;
												  			 
												  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " <<endl;
												  			 
												  		 		 delay () ;
												  			 
												  		 		 cout << " Please , no time to call retro , we gotta move quick \n "<<endl ;
												  		 		 
												  		 		 ians13 = 3;
												  		 		 
												  		 		 	if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n"<<endl ;
		  
																		 cout<< " This is it...\n "<<endl ;
																		  
																	   	 delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " <<endl;
																		 
																		 delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n"<<endl ;
																		
																				delay () ;
																		
																				delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				delay (); 
																		
																				cout <<" Now!\n"<<endl;
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n "<<endl;
																		
																	   				 cout<<  "ok time to call Cracker\n"<<endl ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n"<<endl ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" <<endl;
																			
																					delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" <<endl;
																			
																					delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname <<endl;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n"<<endl ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n "<<endl ;
																			 		
																				 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																				 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																				 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																				 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																						delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																				  	 delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																						delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																			   		 delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																						delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																						delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																					
	  			
																								system ("COLOR 09") ;
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																					delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																					delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																					delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
															  		 			}
																			}
																		
																		
																				
																		
																		}
																	else 
																	if (ipoints <= 100)
																	{
																		cout << "outta points buddy\n" ;
																		
																		gameover () ; 
																	}
							
																}
																else if (iperson == 2 )
																{
																if (ipoints >= 100 )
														 			{
														 		
												  		 	   		 ipoints = ipoints - 100 ;
																
														 	 		 system ("COLOR 08") ;
															
															 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 		 delay () ;
												  			 	
												  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 	 delay () ;
												  			 
												  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 	 
												  		 		 	 // more of the game here .
												  		 			}
												  		 			else 
												  		 			{
												  		 				cout << "your outta points buddy ! \n" ;
												  		 			
												  		 				gameover () ;
												  		 			}	
																}
																
															}
															else if (iperson == 3)
															{
																if ( ipoints >= 300)
																{
																	system ("COLOR 02" ) ;
																	
												          			cout << "ssssirreee... i am here to help you ! \n " ;
												          			
												          			cout << " 1. Cloak or 2. Bomb \n " ;
																	  
																	 cin >> ininja2 ;  
												          			
												          			if (ininja2 == 1 )
																	{
																		ipoints = ipoints - 500 ;
																		cout << " you are now dissguissed .\n" ; 
																		
																		delay () ;
																		
																		cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																		
																		ipoints = ipoints +200 ; 
																	}
																	else
																	{
																		cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																		
																		delay () ;
																		
																		cout << " Run!!\n "<<endl <<endl ;
																		
																		delay () ;
																		
																	}
																
																	
																	
																}
																
																
															}
															
															
															
														}
														
														
														
														
														
														
														
														
														
														
													}
													
														 
											 	}
											}
											else 
											if (iperson2 == 2)
											{
												if ( ipoints >= 300)
												{
													system ("COLOR 02" ) ;
													
								          			cout << "ssssirreee... i am here to help you ! \n " ;
								          			
								          			cout << " 1. Cloak or 2. Bomb \n " ;
													  
													 cin >> ininja2 ;  
								          			
								          			if (ininja2 == 1 )
													{
														ipoints = ipoints - 500 ;
														cout << " you are now dissguissed .\n" ; 
														
														delay () ;
														
														cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
														
														ipoints = ipoints +200 ; 
														ians9 = 3 ;
													}
													else
													{
														cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
														
														delay () ;
														
														cout << " Run!!\n "<<endl <<endl ;
														
														delay () ;
														
														ians9 = 3; 
														
														
														
														
													}
													
													cout << "  ENTERED ROOM 4. " <<endl  ;
	
														delay ();
													
														cout << " there is a camera AND a gaurd here\n "<<endl   ;
													
														delay ();
													
														cout << "whom do you want to call \n " <<endl  ;
													
														delay ();
															
														cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl   ;
													
														cin >> iperson3 ;
													
														delay ();
														if (iperson3 == 1)
															{
																if ( ipoints >= 800)
																{
																	ipoints = ipoints -800 ;
																	
																		system ("COLOR 05") ;
					
																cout << " ok the password for the camera is 66966 \n"<<endl ;
														
																delay () ;
														
																delay () ;
														
																if (system("CLS")) system("clear");
														
																cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
														
																delay (); 
														
																cout <<" Now!\n"<<endl;
														
																cin>> icode;
																
																if (icode == 66966 ) 
																	{
																	cout<< 	"great job!\n "<<endl;
														
													   				 cout<<  "ok time to call Retro\n" <<endl;
													    
													 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n "<<endl ;
			
																		delay ();
																	
																	cout <<  " Who was torontos mayor in 2015\n "  ;
																
																	cout<< " 1.Rob Ford\n";
																
																	cout<< " 2. John Tory\n " ;
																
																	cout<< " 3. Eugene Choi\n ";
															
																	cin >> ians10 ;
																	
																	if (ians10 == 2 )
																		{
																		cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
														
																		delay ();
																
																		cout << " 1. Ottawa\n";
																
																
																
																		cout << " 2. Toronto\n";
																
															
																
																		cout << "3. Vancouver\n";
																
																		cin  >>  ians11 ;
																		
																		if (ians11 == 1)
																			{
															
																			cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																
																			//delay ();
																
																			 cout << " 1. Russia\n" ;
																
																			 cout << " 2. India\n" ;
																 
																			 cout << " 3. Canada\n" ;
																 
																			 cin >> ians13 ;
																			 
																			 
																
														    				}	
														    				else 
																			{
																		 	cout<< " you are on the wrong track buddy \n" <<endl ;
																		
																			delay () ;
																		
																	 		cout<< " I really cant reward you any recharge more recharge points\n " <<endl;
														 				
														 					delay () ;
														 				
															  				cout<< "you have "<<ipoints <<" points in your watch \n" <<endl;
															  				
															  				ians13 = 3;
																			}
																			
																			
																
																		}
																		else 
																		{
																		cout<< " you are on the wrong track buddy \n" <<endl ;
																		
																		delay () ;
																		
																	 	cout<< " I really cant reward you any recharge more recharge points\n "<<endl ;
														 				
														 				delay () ;
														 				
															  			cout<< "you have "<<ipoints <<" points in your watch \n"<<endl ;
															  			
															  			ians13 = 3 ;
													    
													    			
													    
																		}
																	
																	if (ians13 == 3 )
																		{
																		cout << "ENTERED ROOM 5 \n" <<endl;
		  
																		 cout<< " This is it...\n " <<endl;
																		  
																	   	 delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " <<endl;
																		 
																		 delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" <<endl;
																		
																				delay () ;
																		
																				delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....."<<endl ;
																		
																				delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n "<<endl;
																		
																	   				 cout<<  "ok time to call Cracker\n"<<endl; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" <<endl;
																			
																					delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl;
																			
																					delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n"<<endl ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n "<<endl ;
																			 		
																				 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " <<endl;
																				 
																				 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n "<<endl ;
																				 
																				 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n "<<endl ;
																				 
																				 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n"<<endl ;
																				 
																				 cout << "1.nothing or 2.poverty\n" <<endl ;  
																				 cin >> iriddle ;
																				 
																				 if ( iriddle == 1)
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n"<<endl ;
																				 		
																				   	 delay ();
																						
																						cout << " MINUTES LATER \n" <<endl;
																						
																				   	 delay ();
																						
																						cout << " VAULT CRACKED !!! \n"<<endl;
																						
																						delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n"<<endl ;
																						
																						delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																						delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n "<<endl ; 
																						
																						delay ();
																						
																						cout << " time to open the Vault\n "<<endl ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n"<<endl ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" <<endl;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n"<<endl ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n "<<endl; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n "<<endl ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " <<endl;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n"<<endl;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n "<<endl ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname<<endl ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" <<endl;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" <<endl;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n"<<endl;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " <<endl;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " <<endl;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n "<<endl ;
																							  
																							  cout << "Yes or no ?\n " <<endl;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n"<<endl;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n"<<endl ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n"<<endl ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " <<endl;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n"<<endl ; 
																							    		
																							    		istart = 4; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n"<<endl ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" <<endl;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " <<endl;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n"<<endl ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n"<<endl;
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n" <<endl ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING "<<endl ;
																										
																										delay ();
																										
																										cout << " Year 2060\n"<<endl;
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n"<<endl ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" <<endl;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n"<<endl ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge ....."<<endl;
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n "<<endl ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n"<<endl ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n"<<endl ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n"<<endl ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																					delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																					delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																					delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
																						
																					
																					
																				}
																				
																				
																			}	
																		}
																
																	}
																	else 
																	{
																	cout << "damn ! wrong code buddy ! \n" ;
																							
																	delay ();
																	
																	cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																	
																	delay ();
																	
																	cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																	
																	cout << " ru.... " ;
																	
																	istart = 5 ;	
																	
																	}
																	
																	
																}								
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
																							
															
															}
														else if (iperson3 == 2)
															{
															if (ipoints >= 100 )
														 		{
														 		
												  		 	   	 ipoints = ipoints - 100 ;
																
														 	 	 system ("COLOR 08") ;
															
															 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 	 delay () ;
												  			 
												  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 delay () ;
												  			 
												  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 
												  		 		 	if (ians13 == 3 )
																		{
																			cout << "ENTERED ROOM 5 \n" ;
		  
																		 cout<< " This is it...\n " ;
																		  
																	   	delay () ;
																	   	 
																	   	 system ("COLOR 02" ) ;
																			  
																		 cout << "The Vault \n " ;
																		 
																		 delay () ;
																		 
																			 
																		 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																		 
																		delay () ;
																		
																		cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																		
																		delay () ;
																		
																		cout << " time to call cracker \n "<<endl ; 
																		
																		delay () ;
																		
																		cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																		
																		delay () ;
																		
																		cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																		
																		delay () ;
																		
																		cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																		
																		delay () ;
																		
																		cin >> 	iperson5 ;
																		
																		delay () ;
																		
																		if (iperson5 == 1 )
																			{ if (ipoints >= 800)
																				{
																					ipoints = ipoints - 800 ;
																				
																				system ("COLOR 09") ;
																					
																				cout << " ok the password for the camera is 13579 \n" ;
																		
																				delay () ;
																		
																				delay () ;
																		
																				if (system("CLS")) system("clear");
																		
																				cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																		
																				delay (); 
																		
																				cout <<" Now!\n";
																		
																				cin>> icode;
																		
																				if (icode == 13579 ) 
																					{
																					cout<< 	"great job!\n ";
																		
																	   				 cout<<  "ok time to call Cracker\n" ;
																	    
																	 			    icode = icode + 1 ; 
																	 			    
																	 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	    
																	    			iperson5 = 2 ; 
																	    																		    			
																	    
																					}
																				else 
																				if (icode != 13579)
																					{
																					cout << "damn ! wrong code buddy ! \n" ;
																			
																					delay ();
																			
																					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																			
																					delay ();
																			
																					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																			
																					cout << " ru.... " ;
																																																										
																					// function called endgame over here ;
																					istart = 4; 
																	    			}	
																				}
																				else
																				{
																					cout << "youre outta points mate\n" ;
																					
																					istart = 4; 
																				}
																			
																				
																				
																			}
																			else if (iperson5 == 2)
																			{
																				if ( ipoints >= 1000)
																				{
																					ipoints = ipoints - 1000 ; 
			 		
																			 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			 		
																			 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																			 		
																				 delay ();
																				 
																				 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																				 
																				 delay ();
																				 
																				 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																				 
																				 delay ();
																				 
																				 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																				 
																				 delay ();
																				 
																				 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																				 
																				 cin >> sriddle ;
																				 
																				 if (sriddle.compare("nothing") )
																				 	{
																				 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																				 		
																						delay ();
																						
																						cout << " MINUTES LATER \n" ;
																						
																						delay ();
																						
																						cout << " VAULT CRACKED !!! \n";
																						
																						delay ();
																						
																						cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																						
																						delay ();
																						
																						cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																						
																						delay ();
																						
																						system ("COLOR 09") ;
																						
																						cout << "Pat: wow ," <<sname ; 
																						
																						cout<< " this is the first time Ive seen him so emotional, \n " ; 
																						
																						delay ();
																						
																						cout << " time to open the Vault\n " ;
																						
																						cout << "The diamond isnt here?\n"<<endl ;
																						
																						cout << " ENTERED ROOM 6 \n" ;
																						
																						delay () ;
																						
																						cout << "you currently have " <<ipoints << "points in your watch\n" ;
																						
																						delay ();
																						
																						cout << " The diamond id in this room ! I see it ! \n" ;
																						
																						delay ();
																						
																						cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																						
																						delay ();
																						
																						cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																						
																						delay ();
																						
																						cout << "do you know the answer ?\n " ;
																						
																						delay ();
																						
																						cin >> iridode ;
																						
																						delay ();
																						
																					 	if (iridode == 5 )
																							{
																								cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																								
																								// Ar2 colour still to decide.
	  
																							  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																							  
																							  delay ();
																							  
																							  cout << " We would like to but it from you \n " <<sname ;
																							  
																							  delay ();
																							  
																							  cout << "Name your price\n" ;  
																							  
																							  delay ();
																							  
																							  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																							  
																							  delay ();
																							  
																							  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																							  
																							  delay ();
																							  
																							  cout << "what do you want to do , escape? fat chance \n " ;
																							  
																							  delay ();
																							  
																							  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																							   
																							  delay ();
																							  
																							  cout << "unless you agree to my terms. \n " ;
																							  
																							  cout << "Yes or no ?\n " ;
																							  
																							  delay ();
																							  
																							  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																							  
																							  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																							  
																							  cin >> ideathwish ;
																							  
																							  if (ideathwish == 1)
																							 	{
																							 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																							 		
																							 		istart = 3; 
																							 	} 
																							  else
																							  	if (ideathwish == 2)
																							    	{
																							    		cout << " Thank you for trading the watch \n " ;
																							    		
																							    		cout << "AR2: Ali , come on\n " ;
																							    		
																							    		cout << "Please kill "  <<sname <<"for me \n" ; 
																							    		
																							    		istart = 3; 
																							    	}		
																								else 
																								if (ideathwish==3)
																									{
																										cout <<  "ok good choice\n" ;
																										
																										delay ();
																										
																										cout << "Now Run!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali and Ninja ,GO!!! " ;
																										
																										delay ();
																										
																										cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																										
																										delay ();
																										
																										cout << "Ali : Master, i see the exit.\n";
																										
																										delay ();
																										
																										cout << " Ninja: Me too Sssssire!\n"  ;
																										
																										delay ();
																										
																										cout << " ENEMY EXITED BUILDING " ;
																										
																										delay ();
																										
																										cout << " Year 2060\n";
																										
																										delay ();
																										
																										cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																										
																										delay ();
																										
																										cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																										
																										delay ();
																										
																										cout << "The country has since been protected manually by the NA- National Army \n" ;
																										
																										delay ();
																										
																										cout << "As for the winner of the challenge .....";
																										
																										delay ();
																										delay ();
																										
																										if (system("CLS")) system("clear");
																										
																										cout << "No one knows where he is .\n " ;
																										
																										delay () ; 
																										
																										cout << "And no one wants to know  .\n" ;
																										
																										delay () ;
																										
																										istart = 4 ; 	     
																										
																									}	  	 	        
																							}
																							else
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																							
																							delay ();
																							
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																							
																							delay ();
																							
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																							
																							cout << " ru.... " ;
																							
																							istart = 5 ;
																							} 
																					}
																					else
																					{
																				  	cout << " ok " <<sname ;
																				  		
																					delay ();
																				  		
																					cout << " the answer waz 'nothing' .\n" ;
																						  
																					delay ();
																						  
																					cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																						  
																					delay ();
																						 
																					 cout  << " im leaving . goodbye" ; 
																						 
																					 istart =5 ;  
																					 
																				  	}
															  		 		}
																		}
																		
																		}
																	else 
																	if (ipoints <= 100)
																	{
																		cout << "outta points buddy\n" ;
																		
																		gameover () ; 
																	}
							
																}
																else if (iperson == 2 )
																{
																if (ipoints >= 100 )
														 			{
														 		
												  		 	   		 ipoints = ipoints - 100 ;
																
														 	 		 system ("COLOR 08") ;
															
															 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
															
												  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
												  			 
												  		 	 		 //delay () ;
												  			 	
												  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
												  			 
												  		 		 	 //delay () ;
												  			 
												  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
												  		 		 	 
												  		 		 	 // more of the game here .
												  		 			}
												  		 			else 
												  		 			{
												  		 				cout << "your outta points buddy ! \n" ;
												  		 			
												  		 				gameover () ;
												  		 			}	
																}
																
															}
															else if (iperson == 3)
															{
																if ( ipoints >= 300)
																{
																	system ("COLOR 02" ) ;
																	
												          			cout << "ssssirreee... i am here to help you ! \n " ;
												          			
												          			cout << " 1. Cloak or 2. Bomb \n " ;
																	  
																	 cin >> ininja2 ;  
												          			
												          			if (ininja2 == 1 )
																	{
																		ipoints = ipoints - 500 ;
																		cout << " you are now dissguissed .\n" ; 
																		
																		delay () ;
																		
																		cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																		
																		ipoints = ipoints +200 ; 
																	}
																	else
																	{
																		cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																		
																		delay () ;
																		
																		cout << " Run!!\n "<<endl <<endl ;
																		
																		delay () ;
																		
																	}
																
																	
																	
																}
																
																
															}
															
															
															
														
													
												}
						  		 			}
							  		 		else 
							  		 		{
							  		 			cout << "your outta points buddy ! \n" ;
							  		 			
							  		 			gameover () ;
							  		 		}
							  		 		
						  		 		
							   	 		}
									else 
									if (iperson == 2)
									{
										if (ipoints >= 800)
										{
										system ("COLOR 09") ;
								        
								        ipoints - 800 ; 
						 	 
										cout << " ok the password for the camera is 84573 \n" <<endl <<endl;
								
										//delay () ;
								
										//delay () ;
								
										if (system("CLS")) system("clear");
								
										cout<< " ok, you have to enter the pass word into your watch . Enter ....." <<endl <<endl;
								
										delay ();
										
										delay () ;
										
										delay () ; 
								
										cout <<" Now!\n"<<endl <<endl;
								
										cin>> icode;
										
										if (icode == 84573 ) 
											{
							
											cout<< 	"great job!\n "<<endl <<endl;
							
								    		cout<<  "ok time to call Retro\n" <<endl <<endl;
								    		
								    		   system ("COLOR 05") ;
					
											cout << " ok my friend , you know the drill answer my following questions \n " ;
							
											//delay ();
								
											cout <<  " What was Goerges Vanier's Mascot in 2015 ? \n" ;
							
											cout<< " 1.Viking\n";
							
											cout<< " 2.Puma\n" ;
							
											cout<< " 3. Nathan Dong\n ";
							
											cin >> ians4 ;
							
											if (ians4 == 1 )
												{
													ipoints = ipoints + 200 ;
												cout<<  "Great Job ! Next Question : What year did  Air France Flight 358 bursts into flames while landing at Toronto Pearson International Airport?\n";
								
												//delay ();
								
												cout << " 1. 2005\n" ;
										
												cout << " 2. 2000\n" ;
										
												cout << " 3. 2010\n" ;
								
												cin  >>  ians5  ;
								
												if (ians5 == 1)
													{
														ipoints = ipoints + 200 ; 
									
													cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
								
													// delay ();
								 
													 cout << " 1. Russia\n" ;
								 
													 cout << " 2. India\n" ;
								 
													 cout << " 3. Canada\n" ;
								 
													 cin >> ians6 ;
													
								 
								
													}
													else
													   if(ians6 =! 3)
														{
							 							cout<< " you are on the wrong track buddy \n" ;
							 		
														 cout<< " I really cant reward you any recharge more recharge points\n " ;
									 
							 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl <<endl ;
														 
														 ians6 = 3 ; 
							 				 			  
														}
													else 
													{
													 cout<< " you are on the wrong track buddy \n"  ;
								 
							 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
							 	
								  					//delay () ;
								  					
								  					cout<< "you have "<<ipoints <<" points in your watch \n" ;
								  					
								  					ians6 = 3 ;
								  					
													}
							
								
												}
												else 
												{
												 cout<< " you are on the wrong track buddy \n"  ;
							 
												 cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
													
												cout<< "you have "<<ipoints <<" points in your watch \n" ;		 
							 
							  					//delay () ;
							  					
							  					ians6 = 3 ;
												}
												
												if (ians6 == 3 )
												{
												cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n "  ;
											
												 //delay () ; 
										
												 cout << "call me whenever you want , but i got to go now . see you later, \n"  ;
														
												 //delay () ;
														
												 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
												 
												 cout << "  ENTERED ROOM 3 " <<endl <<endl;
												
												//delay ();
												
												cout << " there is a camera AND a gaurd here/n "<<endl <<endl ;
												
												//delay ();
												
												cout << "whom do you want to call \n " <<endl <<endl ;
												
												//delay ();
												
												cout << "1. Pat  or 2. Ninja \n " <<endl <<endl ;
												
												cin >> iperson2 ;
												
												if  (iperson2 == 1)
													{
														if (ipoints >= 800)
														{
														system ("COLOR 09") ;
												        
												        ipoints - 800 ; 
										 	 
														cout << " ok the password for the camera is 40976 \n" <<endl <<endl;
														
														//delay () ;
								
														//delay () ;
												
														if (system("CLS")) system("clear");
												
														cout<< " ok, you have to enter the pass word into your watch . Enter ....." <<endl <<endl;
												
														//delay ();
														
														//delay () ;
														
														//delay () ; 
												
														cout <<" Now!\n"<<endl <<endl;
												
														cin>> icode;
														
														 if (icode == 40976 ) 
															{
															cout<< 	"great job!\n ";
													
												    		cout<<  "ok time to call Retro\n" ;
		    
														
															cout << " ok my friend , you know the drill answer my following questions \n " ;
			
															//delay ();
													
															cout <<  " When did Canada get their official flag? \n" ;
												
															cout<< " 1. Year : 1989\n";
												
															cout<< " 2.Year : 1965 \n" ;
												
															cout<< " 3. Year : 1898\n ";
												
															cin >> ians7 ;
															
															if (ians7 == 2 )
																{
																	ipoints = ipoints +200 ;
																cout<<  "Great Job ! Next Question : Official Language Of Pakistan \n";
														
																//delay ();
													
																cout << " 1. Urdu\n";
																	
																cout << " 2. Arabic\n";
															
																cout << "3. Persian\n";
													
																cin  >>  ians8 ;
													
																if (ians8 == 1)
																	{
																	
																	ipoints = ipoints + 200 ; 
																	
																	cout << " another one answered! Ok, Last Question : What the largest amount of money in coins without being able to make change for a dollar.\n" ;
													
																	 //delay ();
													 
																	 cout << " 1.  5 quarters, 4 dimes, and 2 pennies\n" ;
													 
													 				cout << " 2.  6 quarters, 0 dimes, and 8 pennies\n" ;
													 
																	 cout << " 3.  3 quarters, 4 dimes, and 4 pennies\n" ;
													 
													 				cin >> ians9 ;
													 				
																	   if(ians9 =! 3)
																		{
											 							cout<< " you are on the wrong track buddy \n" ;
											 		
																		 cout<< " I really cant reward you any recharge more recharge points\n " ;
													 
											 							cout<< "you have "<<ipoints <<" points in your watch \n"<<endl <<endl ;
																		 
																		 ians9 = 3 ; 
											 				 			  
																		}
																		else 
																		{
																		 cout<< " you are on the wrong track buddy \n"  ;
													 
												 						cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
												 	
													  					//delay () ;
													  					
													  					cout<< "you have "<<ipoints <<" points in your watch \n" ;
													  					
													  					ians9 = 3 ;
													  					
																		}
												
													
																	}
																	else 
																	{
																	 cout<< " you are on the wrong track buddy \n"  ;
												 
																	 cout<< " I really cant reward you any recharge more recharge points\n "<<endl <<endl ;
																		
																	cout<< "you have "<<ipoints <<" points in your watch \n" ;		 
												 
												  					//delay () ;
												  					
												  					ians6 = 3 ;
																	}
																							
																}
																if (ians9 == 3)
																{
																cout << " good job buddy , you have done it . If you answered correctly you then have a total of 600 recharge points!\n "  ;
															
																 //delay () ; 
														
																 cout << "call me whenever you want , but i got to go now . see you later, \n"  ;
																		
																 //delay () ;
																		
																 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
																 
																cout << "  ENTERED ROOM 4. " <<endl <<endl;
			
																//delay ();
															
																cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
															
																//delay ();
															
																cout << "whom do you want to call \n " <<endl <<endl ;
															
																//delay ();
																	
																cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
															
																cin >> iperson3 ;
															
																//delay ();
																if (iperson3 == 1)
																	{
																		if ( ipoints >= 800)
																		{
																			ipoints = ipoints -800 ;
																			
																				system ("COLOR 05") ;
							
																		cout << " ok the password for the camera is 66966 \n" ;
																
																		//delay () ;
																
																		//delay () ;
																
																		if (system("CLS")) system("clear");
																
																		cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																
																		//delay (); 
																
																		cout <<" Now!\n";
																
																		cin>> icode;
																		
																		if (icode == 66966 ) 
																			{
																			cout<< 	"great job!\n ";
																
															   				 cout<<  "ok time to call Retro\n" ;
															    
															 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n " ;
					
																			//	delay ();
																			
																			cout <<  " Who was torontos mayor in 2015\n " ;
																		
																			cout<< " 1.Rob Ford\n";
																		
																			cout<< " 2. John Tory\n " ;
																		
																			cout<< " 3. Eugene Choi\n ";
																	
																			cin >> ians10 ;
																			
																			if (ians10 == 2 )
																				{
																				cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
																
																			//	delay ();
																		
																				cout << " 1. Ottawa\n";
																		
																		
																		
																				cout << " 2. Toronto\n";
																		
																	
																		
																				cout << "3. Vancouver\n";
																		
																				cin  >>  ians11 ;
																				
																				if (ians11 == 1)
																					{
																	
																					cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																		
																					//delay ();
																		
																					 cout << " 1. Russia\n" ;
																		
																					 cout << " 2. India\n" ;
																		 
																					 cout << " 3. Canada\n" ;
																		 
																					 cin >> ians13 ;
																					 
																					 
																		
																    				}	
																    				else 
																					{
																				 	cout<< " you are on the wrong track buddy \n"  ;
																				
																					//delay () ;
																				
																			 		cout<< " I really cant reward you any recharge more recharge points\n " ;
																 				
																 					//delay () ;
																 				
																	  				cout<< "you have "<<ipoints <<" points in your watch \n" ;
																	  				
																	  				ians13 = 3;
																					}
																					
																					
																		
																				}
																				else 
																				{
																				cout<< " you are on the wrong track buddy \n"  ;
																				
																				//delay () ;
																				
																			 	cout<< " I really cant reward you any recharge more recharge points\n " ;
																 				
																 				//delay () ;
																 				
																	  			cout<< "you have "<<ipoints <<" points in your watch \n" ;
																	  			
																	  			ians13 = 3 ;
															    
															    			
															    
																				}
																			
																			if (ians13 == 3 )
																				{
																					cout << "ENTERED ROOM 5 \n" ;
				  
																				 cout<< " This is it...\n " ;
																				  
																			   	// delay () ;
																			   	 
																			   	 system ("COLOR 02" ) ;
																					  
																				 cout << "The Vault \n " ;
																				 
																				 ///delay () ;
																				 
																					 
																				 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																				 
																				///delay () ;
																				
																				cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																				
																				//delay () ;
																				
																				cout << " time to call cracker \n "<<endl ; 
																				
																				//delay () ;
																				
																				cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																				
																				//delay () ;
																				
																				cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																				
																				//delay () ;
																				
																				cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																				
																				//delay () ;
																				
																				cin >> 	iperson5 ;
																				
																				//delay () ;
																				
																				if (iperson5 == 1 )
																					{ if (ipoints >= 800)
																						{
																							ipoints = ipoints - 800 ;
																						
																						system ("COLOR 09") ;
																							
																						cout << " ok the password for the camera is 13579 \n" ;
																				
																						//delay () ;
																				
																						//delay () ;
																				
																						if (system("CLS")) system("clear");
																				
																						cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																				
																						//delay (); 
																				
																						cout <<" Now!\n";
																				
																						cin>> icode;
																				
																						if (icode == 13579 ) 
																							{
																							cout<< 	"great job!\n ";
																				
																			   				 cout<<  "ok time to call Cracker\n" ;
																			    
																			 			    icode = icode + 1 ; 
																			 			    
																			 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			    
																			    			iperson5 = 2 ; 
																			    																		    			
																			    
																							}
																						else 
																						if (icode != 13579)
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																					
																						//	delay ();
																					
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																					
																						//	delay ();
																					
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																					
																							cout << " ru.... " ;
																																																												
																							// function called endgame over here ;
																							istart = 4; 
																			    			}	
																						}
																						else
																						{
																							cout << "youre outta points mate\n" ;
																							
																							istart = 4; 
																						}
																					
																						
																						
																					}
																					else if (iperson5 == 2)
																					{
																						if ( ipoints >= 1000)
																						{
																							ipoints = ipoints - 1000 ; 
					 		
																					 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																					 		
																					 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																					 		
																					//	 delay ();
																						 
																						 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																						 
																					//	 delay ();
																						 
																						 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																						 
																					//	 delay ();
																						 
																						 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																						 
																					//	 delay ();
																						 
																						 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																						 
																						 cin >> sriddle ;
																						 
																						 if (sriddle.compare("nothing") )
																						 	{
																						 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																						 		
																						//		delay ();
																								
																								cout << " MINUTES LATER \n" ;
																								
																						///		delay ();
																								
																								cout << " VAULT CRACKED !!! \n";
																								
																						//		delay ();
																								
																								cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																								
																						//		delay ();
																								
																								cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																								
																						//		delay ();
																								
																								system ("COLOR 09") ;
																								
																								cout << "Pat: wow ," <<sname ; 
																								
																								cout<< " this is the first time Ive seen him so emotional, \n " ; 
																								
																						//		delay ();
																								
																								cout << " time to open the Vault\n " ;
																								
																								cout << "The diamond isnt here?\n"<<endl ;
																								
																								cout << " ENTERED ROOM 6 \n" ;
																								
																								//delay () ;
																								
																								cout << "you currently have " <<ipoints << "points in your watch\n" ;
																								
																								///delay ();
																								
																								cout << " The diamond id in this room ! I see it ! \n" ;
																								
																								//delay ();
																								
																								cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																								
																								//delay ();
																								
																								cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																								
																								//delay ();
																								
																								cout << "do you know the answer ?\n " ;
																								
																								//d/elay ();
																								
																								cin >> iridode ;
																								
																								//delay ();
																								
																							 	if (iridode == 5 )
																									{
																										cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																										
																										// Ar2 colour still to decide.
			  
																									  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																									  
																									  //delay ();
																									  
																									  cout << " We would like to but it from you \n " <<sname ;
																									  
																									  //delay ();
																									  
																									  cout << "Name your price\n" ;  
																									  
																									  //elay ();
																									  
																									  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																									  
																									  //delay ();
																									  
																									  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																									  
																									  //delay ();
																									  
																									  cout << "what do you want to do , escape? fat chance \n " ;
																									  
																									  //delay ();
																									  
																									  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																									   
																									  //delay ();
																									  
																									  cout << "unless you agree to my terms. \n " ;
																									  
																									  cout << "Yes or no ?\n " ;
																									  
																									  //delay ();
																									  
																									  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																									  
																									  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																									  
																									  cin >> ideathwish ;
																									  
																									  if (ideathwish == 1)
																									 	{
																									 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																									 		
																									 		istart = 3; 
																									 	} 
																									  else
																									  	if (ideathwish == 2)
																									    	{
																									    		cout << " Thank you for trading the watch \n " ;
																									    		
																									    		cout << "AR2: Ali , come on\n " ;
																									    		
																									    		cout << "Please kill "  <<sname <<"for me \n" ; 
																									    		
																									    		istart = 3; 
																									    	}		
																										else 
																										if (ideathwish==3)
																											{
																												cout <<  "ok good choice\n" ;
																												
																												//delay ();
																												
																												cout << "Now Run!! \n" ;
																												
																												//delay ();
																												
																												cout << "Ali and Ninja ,GO!!! " ;
																												
																												//delay ();
																												
																												cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																												
																												//delay ();
																												
																												cout << "Ali : Master, i see the exit.\n";
																												
																												//delay ();
																												
																												cout << " Ninja: Me too Sssssire!\n"  ;
																												
																												delay ();
																												
																												cout << " ENEMY EXITED BUILDING " ;
																												
																												delay ();
																												
																												cout << " Year 2060\n";
																												
																												delay ();
																												
																												cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																												
																												delay ();
																												
																												cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																												
																												delay ();
																												
																												cout << "The country has since been protected manually by the NA- National Army \n" ;
																												
																												delay ();
																												
																												cout << "As for the winner of the challenge .....";
																												
																												delay ();
																												delay ();
																												
																												if (system("CLS")) system("clear");
																												
																												cout << "No one knows where he is .\n " ;
																												
																												delay () ; 
																												
																												cout << "And no one wants to know  .\n" ;
																												
																												delay () ;
																												
																												istart = 4 ; 	     
																												
																											}	  	 	        
																									}
																									else
																									{
																									cout << "damn ! wrong code buddy ! \n" ;
																									
																									delay ();
																									
																									cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																									
																									delay ();
																									
																									cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																									
																									cout << " ru.... " ;
																									
																									istart = 5 ;
																									} 
																							}
																							else
																							{
																						  	cout << " ok " <<sname ;
																						  		
																						//	delay ();
																						  		
																							cout << " the answer waz 'nothing' .\n" ;
																								  
																						//	delay ();
																								  
																							cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																								  
																						//	delay ();
																								 
																							 cout  << " im leaving . goodbye" ; 
																								 
																							 istart =5 ;  
																							 
																						  	}
																								
																							
																							
																						}
																						
																						
																					}	
																				}
																		
																			}
																			
																			
																			
																		}								
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																	
																	}
																else if (iperson3 == 2)
																	{
																	if (ipoints >= 100 )
																 		{
																 		
														  		 	   	 ipoints = ipoints - 100 ;
																		
																 	 	 system ("COLOR 08") ;
																	
																	 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	
														  		  		 cout <<" Hmm ill break the camera in no time \n" ;
														  			 
														  		 	 	 //delay () ;
														  			 
														  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
														  			 
														  		 		 //delay () ;
														  			 
														  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
														  		 		 
														  		 		 	if (ians13 == 3 )
																				{
																					cout << "ENTERED ROOM 5 \n" ;
				  
																				 cout<< " This is it...\n " ;
																				  
																			   	// delay () ;
																			   	 
																			   	 system ("COLOR 02" ) ;
																					  
																				 cout << "The Vault \n " ;
																				 
																				 ///delay () ;
																				 
																					 
																				 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																				 
																				///delay () ;
																				
																				cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																				
																				//delay () ;
																				
																				cout << " time to call cracker \n "<<endl ; 
																				
																				//delay () ;
																				
																				cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																				
																				//delay () ;
																				
																				cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																				
																				//delay () ;
																				
																				cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																				
																				//delay () ;
																				
																				cin >> 	iperson5 ;
																				
																				//delay () ;
																				
																				if (iperson5 == 1 )
																					{ if (ipoints >= 800)
																						{
																							ipoints = ipoints - 800 ;
																						
																						system ("COLOR 09") ;
																							
																						cout << " ok the password for the camera is 13579 \n" ;
																				
																						//delay () ;
																				
																						//delay () ;
																				
																						if (system("CLS")) system("clear");
																				
																						cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																				
																						//delay (); 
																				
																						cout <<" Now!\n";
																				
																						cin>> icode;
																				
																						if (icode == 13579 ) 
																							{
																							cout<< 	"great job!\n ";
																				
																			   				 cout<<  "ok time to call Cracker\n" ;
																			    
																			 			    icode = icode + 1 ; 
																			 			    
																			 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																			    
																			    			iperson5 = 2 ; 
																			    																		    			
																			    
																							}
																						else 
																						if (icode != 13579)
																							{
																							cout << "damn ! wrong code buddy ! \n" ;
																					
																						//	delay ();
																					
																							cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																					
																						//	delay ();
																					
																							cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																					
																							cout << " ru.... " ;
																																																												
																							// function called endgame over here ;
																							istart = 4; 
																			    			}	
																						}
																						else
																						{
																							cout << "youre outta points mate\n" ;
																							
																							istart = 4; 
																						}
																					
																						
																						
																					}
																					else if (iperson5 == 2)
																					{
																						if ( ipoints >= 1000)
																						{
																							ipoints = ipoints - 1000 ; 
					 		
																					 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																					 		
																					 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																					 		
																					//	 delay ();
																						 
																						 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																						 
																					//	 delay ();
																						 
																						 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																						 
																					//	 delay ();
																						 
																						 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																						 
																					//	 delay ();
																						 
																						 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																						 
																						 cin >> sriddle ;
																						 
																						 if (sriddle.compare("nothing") )
																						 	{
																						 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																						 		
																						//		delay ();
																								
																								cout << " MINUTES LATER \n" ;
																								
																						///		delay ();
																								
																								cout << " VAULT CRACKED !!! \n";
																								
																						//		delay ();
																								
																								cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																								
																						//		delay ();
																								
																								cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																								
																						//		delay ();
																								
																								system ("COLOR 09") ;
																								
																								cout << "Pat: wow ," <<sname ; 
																								
																								cout<< " this is the first time Ive seen him so emotional, \n " ; 
																								
																						//		delay ();
																								
																								cout << " time to open the Vault\n " ;
																								
																								cout << "The diamond isnt here?\n"<<endl ;
																								
																								cout << " ENTERED ROOM 6 \n" ;
																								
																								delay () ;
																								
																								cout << "you currently have " <<ipoints << "points in your watch\n" ;
																								
																								delay ();
																								
																								cout << " The diamond id in this room ! I see it ! \n" ;
																								
																								delay ();
																								
																								cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																								
																								delay ();
																								
																								cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																								
																								delay ();
																								
																								cout << "do you know the answer ?\n " ;
																								
																								delay ();
																								
																								cin >> iridode ;
																								
																								delay ();
																								
																							 	if (iridode == 5 )
																									{
																										cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																										
																										// Ar2 colour still to decide.
			  
																									  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																									  
																									  delay ();
																									  
																									  cout << " We would like to but it from you \n " <<sname ;
																									  
																									  delay ();
																									  
																									  cout << "Name your price\n" ;  
																									  
																									  delay ();
																									  
																									  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																									  
																									  delay ();
																									  
																									  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																									  
																									  delay ();
																									  
																									  cout << "what do you want to do , escape? fat chance \n " ;
																									  
																									  delay ();
																									  
																									  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																									   
																									  delay ();
																									  
																									  cout << "unless you agree to my terms. \n " ;
																									  
																									  cout << "Yes or no ?\n " ;
																									  
																									  delay ();
																									  
																									  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																									  
																									  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																									  
																									  cin >> ideathwish ;
																									  
																									  if (ideathwish == 1)
																									 	{
																									 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																									 		
																									 		istart = 3; 
																									 	} 
																									  else
																									  	if (ideathwish == 2)
																									    	{
																									    		cout << " Thank you for trading the watch \n " ;
																									    		
																									    		cout << "AR2: Ali , come on\n " ;
																									    		
																									    		cout << "Please kill "  <<sname <<"for me \n" ; 
																									    		
																									    		istart = 3; 
																									    	}		
																										else 
																										if (ideathwish==3)
																											{
																												cout <<  "ok good choice\n" ;
																												
																												delay ();
																												
																												cout << "Now Run!! \n" ;
																												
																												delay ();
																												
																												cout << "Ali and Ninja ,GO!!! " ;
																												
																												delay ();
																												
																												cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																												
																												delay ();
																												
																												cout << "Ali : Master, i see the exit.\n";
																												
																												delay ();
																												
																												cout << " Ninja: Me too Sssssire!\n"  ;
																												
																												delay ();
																												
																												cout << " ENEMY EXITED BUILDING " ;
																												
																												delay ();
																												
																												cout << " Year 2060\n";
																												
																												delay ();
																												
																												cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																												
																												delay ();
																												
																												cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																												
																												delay ();
																												
																												cout << "The country has since been protected manually by the NA- National Army \n" ;
																												
																												delay ();
																												
																												cout << "As for the winner of the challenge .....";
																												
																												delay ();
																												delay ();
																												
																												if (system("CLS")) system("clear");
																												
																												cout << "No one knows where he is .\n " ;
																												
																												delay () ; 
																												
																												cout << "And no one wants to know  .\n" ;
																												
																												delay () ;
																												
																												istart = 4 ; 	     
																												
																											}	  	 	        
																									}
																									else
																									{
																									cout << "damn ! wrong code buddy ! \n" ;
																									
																									delay ();
																									
																									cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																									
																									delay ();
																									
																									cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																									
																									cout << " ru.... " ;
																									
																									istart = 5 ;
																									} 
																							}
																							else
																							{
																						  	cout << " ok " <<sname ;
																						  		
																						//	delay ();
																						  		
																							cout << " the answer waz 'nothing' .\n" ;
																								  
																						//	delay ();
																								  
																							cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																								  
																						//	delay ();
																								 
																							 cout  << " im leaving . goodbye" ; 
																								 
																							 istart =5 ;  
																							 
																						  	}
																	  		 		}
																				}
																				else
																				{
																						
																				}
																				}
																			else 
																			if (ipoints <= 100)
																			{
																				cout << "outta points buddy\n" ;
																				
																			gameover () ; ;
																			}
									
																		}
																		else if (iperson == 2 )
																		{
																		if (ipoints >= 100 )
																 			{
																 		
														  		 	   		 ipoints = ipoints - 100 ;
																		
																 	 		 system ("COLOR 08") ;
																	
																	 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	
														  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
														  			 
														  		 	 		 //delay () ;
														  			 	
														  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
														  			 
														  		 		 	 //delay () ;
														  			 
														  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
														  		 		 	 
														  		 		 	 // more of the game here .
														  		 			}
														  		 			else 
														  		 			{
														  		 				cout << "your outta points buddy ! \n" ;
														  		 			
														  		 				gameover () ; 
														  		 			}	
																		}
																		
																	}
																	else if (iperson == 3)
																	{
																		if ( ipoints >= 300)
																		{
																			system ("COLOR 02" ) ;
																			
														          			cout << "ssssirreee... i am here to help you ! \n " ;
														          			
														          			cout << " 1. Cloak or 2. Bomb \n " ;
																			  
																			 cin >> ininja2 ;  
														          			
														          			if (ininja2 == 1 )
																			{
																				ipoints = ipoints - 500 ;
																				cout << " you are now dissguissed .\n" ; 
																				
																				delay () ;
																				
																				cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																				
																				ipoints = ipoints +200 ; 
																			}
																			else
																			{
																				cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																				
																				delay () ;
																				
																				cout << " Run!!\n "<<endl <<endl ;
																				
																				delay () ;
																				
																			}
																		
																			
																			
																		}
																		
																		
																	}
																	
																	
																	
																}
																
																
																
																
																
																
																
																
																
																
															}
															
																 
													 	}
													}
													else if (iperson2 == 2)
													{
														if (ipoints >= 100 )
														{
															ipoints= ipoints - 100 ;
					
														system ("COLOR 08") ;
														
														cout << "you currently have " <<ipoints << "points in your watch\n" ;
														
											  			 cout <<" Hmm ill break the camera in no time \n" ;
											  			 
											  			 delay () ;
											  			 
											  			 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
											  			 
											  			 delay () ;
											  			 
											  			 cout << " Please , no time to call retro , we gotta move quick \n " ;
											  			 
											  			 cout << "  ENTERED ROOM 4. " <<endl <<endl;
		
															//delay ();
														
															cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
														
															//delay ();
														
															cout << "whom do you want to call \n " <<endl <<endl ;
														
															//delay ();
																
															cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
														
															cin >> iperson3 ;
														
															//delay ();
															if (iperson3 == 1)
																{
																	if ( ipoints >= 800)
																	{
																		ipoints = ipoints -800 ;
																		
																			system ("COLOR 05") ;
						
																	cout << " ok the password for the camera is 66966 \n" ;
															
																	//delay () ;
															
																	//delay () ;
															
																	if (system("CLS")) system("clear");
															
																	cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
															
																	//delay (); 
															
																	cout <<" Now!\n";
															
																	cin>> icode;
																	
																	if (icode == 66966 ) 
																		{
																		cout<< 	"great job!\n ";
															
														   				 cout<<  "ok time to call Retro\n" ;
														    
														 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n " ;
				
																		//	delay ();
																		
																		cout <<  " Who was torontos mayor in 2015\n " ;
																	
																		cout<< " 1.Rob Ford\n";
																	
																		cout<< " 2. John Tory\n " ;
																	
																		cout<< " 3. Eugene Choi\n ";
																
																		cin >> ians10 ;
																		
																		if (ians10 == 2 )
																			{
																			cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
															
																		//	delay ();
																	
																			cout << " 1. Ottawa\n";
																	
																	
																	
																			cout << " 2. Toronto\n";
																	
																
																	
																			cout << "3. Vancouver\n";
																	
																			cin  >>  ians11 ;
																			
																			if (ians11 == 1)
																				{
																
																				cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																	
																				//delay ();
																	
																				 cout << " 1. Russia\n" ;
																	
																				 cout << " 2. India\n" ;
																	 
																				 cout << " 3. Canada\n" ;
																	 
																				 cin >> ians13 ;
																				 
																				 
																	
															    				}	
															    				else 
																				{
																			 	cout<< " you are on the wrong track buddy \n"  ;
																			
																				//delay () ;
																			
																		 		cout<< " I really cant reward you any recharge more recharge points\n " ;
															 				
															 					//delay () ;
															 				
																  				cout<< "you have "<<ipoints <<" points in your watch \n" ;
																  				
																  				ians13 = 3;
																				}
																				
																				
																	
																			}
																			else 
																			{
																			cout<< " you are on the wrong track buddy \n"  ;
																			
																			//delay () ;
																			
																		 	cout<< " I really cant reward you any recharge more recharge points\n " ;
															 				
															 				//delay () ;
															 				
																  			cout<< "you have "<<ipoints <<" points in your watch \n" ;
																  			
																  			ians13 = 3 ;
														    
														    			
														    
																			}
																		
																		if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							//delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							///delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							//delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							//delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							//delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							//d/elay ();
																							
																							cin >> iridode ;
																							
																							//delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  //delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  //delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  //elay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  //delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  //delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  //delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  //delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  //delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											//delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											//delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											//delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											//delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											//delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											gameover () ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																							
																						
																						
																					}
																					
																					
																				}	
																			}
																	
																		}
																		
																		
																		
																	}								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																
																}
															else if (iperson3 == 2)
																{
																if (ipoints >= 100 )
															 		{
															 		
													  		 	   	 ipoints = ipoints - 100 ;
																	
															 	 	 system ("COLOR 08") ;
																
																 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																
													  		  		 cout <<" Hmm ill break the camera in no time \n" ;
													  			 
													  		 	 	 //delay () ;
													  			 
													  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
													  			 
													  		 		 //delay () ;
													  			 
													  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
													  		 		 
													  		 		 	if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							delay ();
																							
																							cin >> iridode ;
																							
																							delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  delay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											istart = 4 ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																  		 		}
																			}
																			else
																			{
																					
																			}
																		}
																		else 
																		if (ipoints <= 100)
																		{
																			cout << "outta points buddy\n" ;
																			
																			gameover () ;
																		}
								
																	}
																	else if (iperson == 2 )
																	{
																	if (ipoints >= 100 )
															 			{
															 		
													  		 	   		 ipoints = ipoints - 100 ;
																	
															 	 		 system ("COLOR 08") ;
																
																 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																
													  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
													  			 
													  		 	 		 //delay () ;
													  			 	
													  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
													  			 
													  		 		 	 //delay () ;
													  			 
													  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
													  		 		 	 
													  		 		 	 // more of the game here .
													  		 			}
													  		 			else 
													  		 				{
													  		 				cout << "your outta points buddy ! \n" ;
													  		 			
													  		 					gameover () ;
												  		 					}	
																	}
																
																}
																else 
																{
																	cout <<" sssiiirrrreeee, what do you prefer? 1.Dissguisse or 2.Bomb\n" ;
																	
																	cin >> ininja ;
						
																	if (ininja == 1 )
																	{
																		ipoints = ipoints - 500 ;
																		cout << " you are now dissguissed .\n" ; 
																		
																		delay () ;
																		
																		cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																		
																		ipoints = ipoints +200 ;
																		
																		ians13 = 3 ; 
																	} 
																	else 
																	  if ( ininja == 2)
																	{
																		cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																		
																		delay () ;
																		
																		cout << " Run!!\n "<<endl <<endl ;
																		
																		ians13 = 3 ; 
																		
																		
																	}
																	
																	if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )																		
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							delay ();
																							
																							cin >> iridode ;
																							
																							delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  delay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											istart = 4 ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																  		 		}
																			}
																		
																}
															
															
															
														}
														
														
														
														
														
														
														
														
														
														
													}//room 3
													else if (iperson2 == 3 )
													{
														cout << " Ninja activated\n " ; 
														
														if (ipoints >= 500)
														{
														ipoints = ipoints - 500 ;
															
															system ("COLOR 02" ) ;
																
									          			cout << "ssssirreee... i am here to help you ! \n " ;
									          			
									          			delay () ;
									          			
									          			cout << "Mysssself ninja\n . Masssster of disssguises ssssiirreee\n" ;
														  
													    delay () ;
														  
														cout << " I help you in ssstealth by disssguisssing you \n " ;
														
														delay () ;  
									          			
									          			cout << "i alssso sssabatoge the camera! \n " ;
									          			
									          			delay () ;
									          			
									          			cout << " but thessse thingsss cossst ssseperately. the cloak cossstsss 500 per use. the sssabatoging ,300.\n" ;
														  
														delay () ; 
														  
														cout << " what you want ? 1. Cloak or  2.bomb ?\n" ;
														
														cin >> ininja ;
														
														if (ininja == 1 )
															{
																ipoints = ipoints - 500 ;
																cout << " you are now dissguissed .\n" ; 
																
																delay () ;
																
																cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																
																ipoints = ipoints +200 ; 
															} 
															else 
															  if ( ininja == 2)
															{
																cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																
																delay () ;
																
																cout << " Run!!\n "<<endl <<endl ;
															}
														cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
																 
														cout << "  ENTERED ROOM 4. " <<endl <<endl;
		
														//delay ();
													
														cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
													
														//delay ();
													
														cout << "whom do you want to call \n " <<endl <<endl ;
													
														//delay ();
															
														cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
													
														cin >> iperson3 ;
														
														if (iperson3 == 1)
															{
																																
																 cout<< "you have "<<ipoints <<" points in your watch \n" <<endl <<endl;
																 
																cout << "  ENTERED ROOM 4. " <<endl <<endl;
			
																//delay ();
															
																cout << " there is a camera AND a gaurd here\n "<<endl <<endl ;
															
																//delay ();
															
																cout << "whom do you want to call \n " <<endl <<endl ;
															
																//delay ();
																	
																cout << "1.Pat or 2.Ali 3. Ninja\n " <<endl <<endl ;
															
																cin >> iperson3 ;
															
																//delay ();
																if (iperson3 == 1)
																{
																	if ( ipoints >= 800)
																	{
																		ipoints = ipoints -800 ;
																		
																			system ("COLOR 05") ;
						
																	cout << " ok the password for the camera is 66966 \n" ;
															
																	//delay () ;
															
																	//delay () ;
															
																	if (system("CLS")) system("clear");
															
																	cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
															
																	//delay (); 
															
																	cout <<" Now!\n";
															
																	cin>> icode;
																	
																	if (icode == 66966 ) 
																		{
																		cout<< 	"great job!\n ";
															
														   				 cout<<  "ok time to call Retro\n" ;
														    
														 			    cout << " ok my friend , im in a hurry to pursuit more knowledge, so please answer my following questions \n " ;
				
																		//	delay ();
																		
																		cout <<  " Who was torontos mayor in 2015\n " ;
																	
																		cout<< " 1.Rob Ford\n";
																	
																		cout<< " 2. John Tory\n " ;
																	
																		cout<< " 3. Eugene Choi\n ";
																
																		cin >> ians10 ;
																		
																		if (ians10 == 2 )
																			{
																			cout<<  "Great Job ! Next Question : What is the capital of Canada?\n";
															
																		//	delay ();
																	
																			cout << " 1. Ottawa\n";
																	
																	
																	
																			cout << " 2. Toronto\n";
																	
																
																	
																			cout << "3. Vancouver\n";
																	
																			cin  >>  ians11 ;
																			
																			if (ians11 == 1)
																				{
																
																				cout << " another one answered! Ok, Last Question : Which is the second largest country in the world?\n" ;
																	
																				//delay ();
																	
																				 cout << " 1. Russia\n" ;
																	
																				 cout << " 2. India\n" ;
																	 
																				 cout << " 3. Canada\n" ;
																	 
																				 cin >> ians13 ;
																				 
																				 
																	
															    				}	
															    				else 
																				{
																			 	cout<< " you are on the wrong track buddy \n"  ;
																			
																				//delay () ;
																			
																		 		cout<< " I really cant reward you any recharge more recharge points\n " ;
															 				
															 					//delay () ;
															 				
																  				cout<< "you have "<<ipoints <<" points in your watch \n" ;
																  				
																  				ians13 = 3;
																				}
																				
																				
																	
																			}
																			else 
																			{
																			cout<< " you are on the wrong track buddy \n"  ;
																			
																			//delay () ;
																			
																		 	cout<< " I really cant reward you any recharge more recharge points\n " ;
															 				
															 				//delay () ;
															 				
																  			cout<< "you have "<<ipoints <<" points in your watch \n" ;
																  			
																  			ians13 = 3 ;
														    
														    			
														    
																			}
																		
																		if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )
																			
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							//delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							///delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							//delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							//delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							//delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							//d/elay ();
																							
																							cin >> iridode ;
																							
																							//delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  //delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  //delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  //elay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  //delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  //delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  //delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  //delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  //delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											//delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											//delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											//delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											//delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											//delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											istart = 4 ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																							
																						
																						
																					}
																					
																					
																				}	
																			}
																	
																		}
																		
																		
																		
																	}								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																								
																
																}
															else if (iperson3 == 2)
																{
																if (ipoints >= 100 )
															 		{
															 		
													  		 	   	 ipoints = ipoints - 100 ;
																	
															 	 	 system ("COLOR 08") ;
																
																 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																
													  		  		 cout <<" Hmm ill break the camera in no time \n" ;
													  			 
													  		 	 	 //delay () ;
													  			 
													  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
													  			 
													  		 		 //delay () ;
													  			 
													  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
													  		 		 
													  		 		 	if (ians13 == 3 )
																			{
																				cout << "ENTERED ROOM 5 \n" ;
			  
																			 cout<< " This is it...\n " ;
																			  
																		   	// delay () ;
																		   	 
																		   	 system ("COLOR 02" ) ;
																				  
																			 cout << "The Vault \n " ;
																			 
																			 ///delay () ;
																			 
																				 
																			 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																			 
																			///delay () ;
																			
																			cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																			
																			//delay () ;
																			
																			cout << " time to call cracker \n "<<endl ; 
																			
																			//delay () ;
																			
																			cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																			
																			//delay () ;
																			
																			cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																			
																			//delay () ;
																			
																			cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																			
																			//delay () ;
																			
																			cin >> 	iperson5 ;
																			
																			//delay () ;
																			
																			if (iperson5 == 1 )
																				{ if (ipoints >= 800)
																					{
																						ipoints = ipoints - 800 ;
																					
																					system ("COLOR 09") ;
																						
																					cout << " ok the password for the camera is 13579 \n" ;
																			
																					//delay () ;
																			
																					//delay () ;
																			
																					if (system("CLS")) system("clear");
																			
																					cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																			
																					//delay (); 
																			
																					cout <<" Now!\n";
																			
																					cin>> icode;
																			
																					if (icode == 13579 ) 
																						{
																						cout<< 	"great job!\n ";
																			
																		   				 cout<<  "ok time to call Cracker\n" ;
																		    
																		 			    icode = icode + 1 ; 
																		 			    
																		 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		    
																		    			iperson5 = 2 ; 
																		    																		    			
																		    
																						}
																					else 
																					if (icode != 13579)
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																				
																					//	delay ();
																				
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																					//	delay ();
																				
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																						cout << " ru.... " ;
																																																											
																						// function called endgame over here ;
																						istart = 4; 
																		    			}	
																					}
																					else
																					{
																						cout << "youre outta points mate\n" ;
																						
																						istart = 4; 
																					}
																				
																					
																					
																				}
																				else if (iperson5 == 2)
																				{
																					if ( ipoints >= 1000)
																					{
																						ipoints = ipoints - 1000 ; 
				 		
																				 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				 		
																				 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																				 		
																				//	 delay ();
																					 
																					 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																					 
																				//	 delay ();
																					 
																					 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																					 
																				//	 delay ();
																					 
																					 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																					 
																					 cin >> sriddle ;
																					 
																					 if (sriddle.compare("nothing") )
																					 	{
																					 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																					 		
																					//		delay ();
																							
																							cout << " MINUTES LATER \n" ;
																							
																					///		delay ();
																							
																							cout << " VAULT CRACKED !!! \n";
																							
																					//		delay ();
																							
																							cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																							
																					//		delay ();
																							
																							cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																							
																					//		delay ();
																							
																							system ("COLOR 09") ;
																							
																							cout << "Pat: wow ," <<sname ; 
																							
																							cout<< " this is the first time Ive seen him so emotional, \n " ; 
																							
																					//		delay ();
																							
																							cout << " time to open the Vault\n " ;
																							
																							cout << "The diamond isnt here?\n"<<endl ;
																							
																							cout << " ENTERED ROOM 6 \n" ;
																							
																							delay () ;
																							
																							cout << "you currently have " <<ipoints << "points in your watch\n" ;
																							
																							delay ();
																							
																							cout << " The diamond id in this room ! I see it ! \n" ;
																							
																							delay ();
																							
																							cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																							
																							delay ();
																							
																							cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																							
																							delay ();
																							
																							cout << "do you know the answer ?\n " ;
																							
																							delay ();
																							
																							cin >> iridode ;
																							
																							delay ();
																							
																						 	if (iridode == 5 )
																								{
																									cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																									
																									// Ar2 colour still to decide.
		  
																								  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																								  
																								  delay ();
																								  
																								  cout << " We would like to but it from you \n " <<sname ;
																								  
																								  delay ();
																								  
																								  cout << "Name your price\n" ;  
																								  
																								  delay ();
																								  
																								  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																								  
																								  delay ();
																								  
																								  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																								  
																								  delay ();
																								  
																								  cout << "what do you want to do , escape? fat chance \n " ;
																								  
																								  delay ();
																								  
																								  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																								   
																								  delay ();
																								  
																								  cout << "unless you agree to my terms. \n " ;
																								  
																								  cout << "Yes or no ?\n " ;
																								  
																								  delay ();
																								  
																								  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																								  
																								  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																								  
																								  cin >> ideathwish ;
																								  
																								  if (ideathwish == 1)
																								 	{
																								 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																								 		
																								 		istart = 3; 
																								 	} 
																								  else
																								  	if (ideathwish == 2)
																								    	{
																								    		cout << " Thank you for trading the watch \n " ;
																								    		
																								    		cout << "AR2: Ali , come on\n " ;
																								    		
																								    		cout << "Please kill "  <<sname <<"for me \n" ; 
																								    		
																								    		istart = 3; 
																								    	}		
																									else 
																									if (ideathwish==3)
																										{
																											cout <<  "ok good choice\n" ;
																											
																											delay ();
																											
																											cout << "Now Run!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali and Ninja ,GO!!! " ;
																											
																											delay ();
																											
																											cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																											
																											delay ();
																											
																											cout << "Ali : Master, i see the exit.\n";
																											
																											delay ();
																											
																											cout << " Ninja: Me too Sssssire!\n"  ;
																											
																											delay ();
																											
																											cout << " ENEMY EXITED BUILDING " ;
																											
																											delay ();
																											
																											cout << " Year 2060\n";
																											
																											delay ();
																											
																											cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																											
																											delay ();
																											
																											cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																											
																											delay ();
																											
																											cout << "The country has since been protected manually by the NA- National Army \n" ;
																											
																											delay ();
																											
																											cout << "As for the winner of the challenge .....";
																											
																											delay ();
																											delay ();
																											
																											if (system("CLS")) system("clear");
																											
																											cout << "No one knows where he is .\n " ;
																											
																											delay () ; 
																											
																											cout << "And no one wants to know  .\n" ;
																											
																											delay () ;
																											
																											istart = 4 ; 	     
																											
																										}	  	 	        
																								}
																								else
																								{
																								cout << "damn ! wrong code buddy ! \n" ;
																								
																								delay ();
																								
																								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																								
																								delay ();
																								
																								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																								
																								cout << " ru.... " ;
																								
																								istart = 5 ;
																								} 
																						}
																						else
																						{
																					  	cout << " ok " <<sname ;
																					  		
																					//	delay ();
																					  		
																						cout << " the answer waz 'nothing' .\n" ;
																							  
																					//	delay ();
																							  
																						cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																							  
																					//	delay ();
																							 
																						 cout  << " im leaving . goodbye" ; 
																							 
																						 istart =5 ;  
																						 
																					  	}
																  		 			}
																				}
																		
																			}
																			else 
																			if (ipoints <= 100)
																			{
																				cout << "outta points buddy\n" ;
																				
																				gameover () ; 
																			}
								
																	}
																	else if (iperson == 2 )
																	{
																	if (ipoints >= 100 )
															 			{
															 		
													  		 	   		 ipoints = ipoints - 100 ;
																	
															 	 		 system ("COLOR 08") ;
																
																 	   	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																
													  		  		 	 cout <<" Hmm ill break the camera in no time \n" ;
													  			 
													  		 	 		 //delay () ;
													  			 	
													  		 		 	 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
													  			 
													  		 		 	 //delay () ;
													  			 
													  		 		 	 cout << " Please , no time to call retro , we gotta move quick \n " ;
													  		 		 	 
													  		 		 	 // more of the game here .
													  		 			}
													  		 			else 
													  		 			{
													  		 				cout << "your outta points buddy ! \n" ;
													  		 			
													  		 				gameover () ;
													  		 			}
																		   	
																	}
																	
																	
																}
																else if (iperson3 == 3 )
																{
																	if (ipoints >= 500)
																	
																	system ("COLOR 02" ) ;
																		
												          			cout << "ssssirreee... i am here to help you ! \n " ;
												          			
												          			cout << " 1. Cloak or 2. Bomb \n " ;
																	  
																	 cin >> ininja2 ; 
																	 
																	 cout << "you now have" << ipoints << "points in your watch \n" ; 
												          			
												          			if (ininja2 == 1 )
																	{
																		ipoints = ipoints - 500 ;
																		cout << " you are now dissguissed .\n" ; 
																		
																		delay () ;
																		
																		cout << " great job ! ooh look , for dissguissing , your watch has given you 200 points extra!\n " ;
																		
																		ipoints = ipoints +200 ; 
																	}
																	else
																	{
																		cout << " you have ssabatoged the camera. but the gaurd sssaw you ! \n" ;
																		
																		delay () ;
																		
																		cout << " Run!!\n "<<endl <<endl ;
																		
																		delay () ;
																	}
																
																	if (ians13 == 3 )
																	{
																		cout << "ENTERED ROOM 5 \n" ;
		
																	 cout<< " This is it...\n " ;
																	  
																   	// delay () ;
																   	 
																   	 system ("COLOR 02" ) ;
																		  
																	 cout << "The Vault \n " ;
																	 
																	 ///delay () ;
																	 
																		 
																	 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																	 
																	///delay () ;
																	
																	cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																	
																	//delay () ;
																	
																	cout << " time to call cracker \n "<<endl ; 
																	
																	//delay () ;
																	
																	cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																	
																	//delay () ;
																	
																	cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																	
																	//delay () ;
																	
																	cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																	
																	//delay () ;
																	
																	cin >> 	iperson5 ;
																	
																	//delay () ;
																	
																	if (iperson5 == 1 )
																	
																		{ if (ipoints >= 800)
																			{
																				ipoints = ipoints - 800 ;
																			
																			system ("COLOR 09") ;
																				
																			cout << " ok the password for the camera is 13579 \n" ;
																	
																			//delay () ;
																	
																			//delay () ;
																	
																			if (system("CLS")) system("clear");
																	
																			cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																	
																			//delay (); 
																	
																			cout <<" Now!\n";
																	
																			cin>> icode;
																	
																			if (icode == 13579 ) 
																				{
																				cout<< 	"great job!\n ";
																	
																   				 cout<<  "ok time to call Cracker\n" ;
																    
																 			    icode = icode + 1 ; 
																 			    
																 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
																    
																    			iperson5 = 2 ; 
																    																		    			
																    
																				}
																			else 
																			if (icode != 13579)
																				{
																				cout << "damn ! wrong code buddy ! \n" ;
																		
																			//	delay ();
																		
																				cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																		
																			//	delay ();
																		
																				cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																		
																				cout << " ru.... " ;
																																																									
																				// function called endgame over here ;
																				istart = 4; 
																    			}	
																			}
																			else
																			{
																				cout << "youre outta points mate\n" ;
																				
																				istart = 4; 
																			}
																		
																			
																			
																		}
																		else if (iperson5 == 2)
																		{
																			if ( ipoints >= 1000)
																			{
																				ipoints = ipoints - 1000 ; 
		 		
																		 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																		 		
																		 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																		 		
																		//	 delay ();
																			 
																			 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																			 
																		//	 delay ();
																			 
																			 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																			 
																		//	 delay ();
																			 
																			 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																			 
																		//	 delay ();
																			 
																			 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																			 
																			 cin >> sriddle ;
																			 
																			 if (sriddle.compare("nothing") )
																			 	{
																			 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																			 		
																			//		delay ();
																					
																					cout << " MINUTES LATER \n" ;
																					
																			///		delay ();
																					
																					cout << " VAULT CRACKED !!! \n";
																					
																			//		delay ();
																					
																					cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																					
																			//		delay ();
																					
																					cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																					
																			//		delay ();
																					
																					system ("COLOR 09") ;
																					
																					cout << "Pat: wow ," <<sname ; 
																					
																					cout<< " this is the first time Ive seen him so emotional, \n " ; 
																					
																			//		delay ();
																					
																					cout << " time to open the Vault\n " ;
																					
																					cout << "The diamond isnt here?\n"<<endl ;
																					
																					cout << " ENTERED ROOM 6 \n" ;
																					
																					//delay () ;
																					
																					cout << "you currently have " <<ipoints << "points in your watch\n" ;
																					
																					///delay ();
																					
																					cout << " The diamond id in this room ! I see it ! \n" ;
																					
																					//delay ();
																					
																					cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																					
																					//delay ();
																					
																					cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																					
																					//delay ();
																					
																					cout << "do you know the answer ?\n " ;
																					
																					//d/elay ();
																					
																					cin >> iridode ;
																					
																					//delay ();
																					
																				 	if (iridode == 5 )
																						{
																							cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																							
																							// Ar2 colour still to decide.
		
																						  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																						  
																						  //delay ();
																						  
																						  cout << " We would like to but it from you \n " <<sname ;
																						  
																						  //delay ();
																						  
																						  cout << "Name your price\n" ;  
																						  
																						  //elay ();
																						  
																						  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																						  
																						  //delay ();
																						  
																						  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																						  
																						  //delay ();
																						  
																						  cout << "what do you want to do , escape? fat chance \n " ;
																						  
																						  //delay ();
																						  
																						  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																						   
																						  //delay ();
																						  
																						  cout << "unless you agree to my terms. \n " ;
																						  
																						  cout << "Yes or no ?\n " ;
																						  
																						  //delay ();
																						  
																						  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																						  
																						  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																						  
																						  cin >> ideathwish ;
																						  
																						  if (ideathwish == 1)
																						 	{
																						 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																						 		
																						 		istart = 3; 
																						 	} 
																						  else
																						  	if (ideathwish == 2)
																						    	{
																						    		cout << " Thank you for trading the watch \n " ;
																						    		
																						    		cout << "AR2: Ali , come on\n " ;
																						    		
																						    		cout << "Please kill "  <<sname <<"for me \n" ; 
																						    		
																						    		istart = 3; 
																						    	}		
																							else 
																							if (ideathwish==3)
																								{
																									cout <<  "ok good choice\n" ;
																									
																									//delay ();
																									
																									cout << "Now Run!! \n" ;
																									
																									//delay ();
																									
																									cout << "Ali and Ninja ,GO!!! " ;
																									
																									//delay ();
																									
																									cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																									
																									//delay ();
																									
																									cout << "Ali : Master, i see the exit.\n";
																									
																									//delay ();
																									
																									cout << " Ninja: Me too Sssssire!\n"  ;
																									
																									delay ();
																									
																									cout << " ENEMY EXITED BUILDING " ;
																									
																									delay ();
																									
																									cout << " Year 2060\n";
																									
																									delay ();
																									
																									cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																									
																									delay ();
																									
																									cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																									
																									delay ();
																									
																									cout << "The country has since been protected manually by the NA- National Army \n" ;
																									
																									delay ();
																									
																									cout << "As for the winner of the challenge .....";
																									
																									delay ();
																									delay ();
																									
																									if (system("CLS")) system("clear");
																									
																									cout << "No one knows where he is .\n " ;
																									
																									delay () ; 
																									
																									cout << "And no one wants to know  .\n" ;
																									
																									delay () ;
																									
																									istart = 4 ; 	     
																									
																								}	  	 	        
																						}
																						else
																						{
																						cout << "damn ! wrong code buddy ! \n" ;
																						
																						delay ();
																						
																						cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																						
																						delay ();
																						
																						cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																						
																						cout << " ru.... " ;
																						
																						istart = 5 ;
																						} 
																				}
																				else
																				{
																			  	cout << " ok " <<sname ;
																			  		
																			//	delay ();
																			  		
																				cout << " the answer waz 'nothing' .\n" ;
																					  
																			//	delay ();
																					  
																				cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																					  
																			//	delay ();
																					 
																				 cout  << " im leaving . goodbye" ; 
																					 
																				 istart =5 ;  
																				 
																			  	}
																					
																				
																				
																			}
																			
																			
																		}	
																	}
																	
																}
																			
																			
																			
															}								
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																									
																	
														}
													else if (iperson3 == 2)
														{
														if (ipoints >= 100 )
													 		{
													 		
											  		 	   	 ipoints = ipoints - 100 ;
															
													 	 	 system ("COLOR 08") ;
														
														 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
														
											  		  		 cout <<" Hmm ill break the camera in no time \n" ;
											  			 
											  		 	 	 //delay () ;
											  			 
											  		 		 cout << " ooh no, the gaurds are here, we have to move quick\n " ;
											  			 
											  		 		 //delay () ;
											  			 
											  		 		 cout << " Please , no time to call retro , we gotta move quick \n " ;
											  		 		 
											  		 		 	if (ians13 == 3 )
																{
																	cout << "ENTERED ROOM 5 \n" ;
		
																 cout<< " This is it...\n " ;
																  
															   	// delay () ;
															   	 
															   	 system ("COLOR 02" ) ;
																	  
																 cout << "The Vault \n " ;
																 
																 ///delay () ;
																 
																	 
																 cout << " Pat:We made it ! Now lets open it \n "<<endl ;
																 
																///delay () ;
																
																cout << " Pat : this is not right ... this vault has 2 locks ! We need to crack it using 2 People... \n "<<endl ;
																
																//delay () ;
																
																cout << " time to call cracker \n "<<endl ; 
																
																//delay () ;
																
																cout << " This man is very wise ! He is the only known person to actually crack the vault! \n  "<<endl ;
																
																//delay () ;
																
																cout << " Really great man, but arrogant. You can only call this man only once .\n " <<endl;
																
																//delay () ;
																
																cout << " So 1. Pat or 2.Cracker\n "  <<endl; 
																
																//delay () ;
																
																cin >> 	iperson5 ;
																
																//delay () ;
																
																if (iperson5 == 1 )
																	{ if (ipoints >= 800)
																		{
																			ipoints = ipoints - 800 ;
																		
																		system ("COLOR 09") ;
																			
																		cout << " ok the password for the camera is 13579 \n" ;
																
																		//delay () ;
																
																		//delay () ;
																
																		if (system("CLS")) system("clear");
																
																		cout<< " ok, you have to enter the pass word into your watch . Enter ....." ;
																
																		//delay (); 
																
																		cout <<" Now!\n";
																
																		cin>> icode;
																
																		if (icode == 13579 ) 
																			{
																			cout<< 	"great job!\n ";
																
															   				 cout<<  "ok time to call Cracker\n" ;
															    
															 			    icode = icode + 1 ; 
															 			    
															 			    cout << "you currently have " <<ipoints << "points in your watch\n" ;
															    
															    			iperson5 = 2 ; 
															    																		    			
															    
																			}
																		else 
																		if (icode != 13579)
																			{
																			cout << "damn ! wrong code buddy ! \n" ;
																	
																		//	delay ();
																	
																			cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																	
																		//	delay ();
																	
																			cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																	
																			cout << " ru.... " ;
																																																								
																			// function called endgame over here ;
																			istart = 4; 
															    			}	
																		}
																		else
																		{
																			cout << "youre outta points mate\n" ;
																			
																			istart = 4; 
																		}
																	
																		
																		
																	}
																	else if (iperson5 == 2)
																	{
																		if ( ipoints >= 1000)
																		{
																			ipoints = ipoints - 1000 ; 
			
																	 	 cout << "you currently have " <<ipoints << "points in your watch\n" ;
																	 		
																	 	 cout << "I am Ze Cracker. I am here to help you ! \n " ;
																	 		
																	//	 delay ();
																		 
																		 cout << "I will Crack ze vault for thou so you shalt be able to break into za Vault. \n " ;
																		 
																	//	 delay ();
																		 
																		 cout << " Zhis is a very crucial assignment ! You haz to do as I say! \n " ;
																		 
																	//	 delay ();
																		 
																		 cout << " Answer this question for me so I will crack za vault for you !\n " ;
																		 
																	//	 delay ();
																		 
																		 cout << "Poor people have it. Rich people need it. If you eat it you die. What iz it? \n" ;
																		 
																		 cin >> sriddle ;
																		 
																		 if (sriddle.compare("nothing") )
																		 	{
																		 		cout << "great job! you are a worthy candidate to crack ze vault for . i will be pleased to do so \n" ;
																		 		
																		//		delay ();
																				
																				cout << " MINUTES LATER \n" ;
																				
																		///		delay ();
																				
																				cout << " VAULT CRACKED !!! \n";
																				
																		//		delay ();
																				
																				cout << " there you go, son. now zhis iz za last time i will ever meet you. so az a parting gift...\n" ;
																				
																		//		delay ();
																				
																				cout<< "I present thou with 1000 recharge points! Farewell " <<sname <<endl  ;
																				
																		//		delay ();
																				
																				system ("COLOR 09") ;
																				
																				cout << "Pat: wow ," <<sname ; 
																				
																				cout<< " this is the first time Ive seen him so emotional, \n " ; 
																				
																		//		delay ();
																				
																				cout << " time to open the Vault\n " ;
																				
																				cout << "The diamond isnt here?\n"<<endl ;
																				
																				cout << " ENTERED ROOM 6 \n" ;
																				
																				delay () ;
																				
																				cout << "you currently have " <<ipoints << "points in your watch\n" ;
																				
																				delay ();
																				
																				cout << " The diamond id in this room ! I see it ! \n" ;
																				
																				delay ();
																				
																				cout << " Pat: there is a security pass on this thing \n " ; 	 	 	
																				
																				delay ();
																				
																				cout << " it says the password is the square root of squares of 3 and 4 \n " ;
																				
																				delay ();
																				
																				cout << "do you know the answer ?\n " ;
																				
																				delay ();
																				
																				cin >> iridode ;
																				
																				delay ();
																				
																			 	if (iridode == 5 )
																				{
																					cout << "yes!!! we got the diamond!!! The security has been breached!!! \n" ;
																					
																					// Ar2 colour still to decide.
		
																				  cout << "AR2: i am AR2, the annual robbery testing unit . I am very interesting in your watch. \n " ;
																				  
																				  delay ();
																				  
																				  cout << " We would like to but it from you \n " <<sname ;
																				  
																				  delay ();
																				  
																				  cout << "Name your price\n" ;  
																				  
																				  delay ();
																				  
																				  cout <<" Also if you dont listen to our requests, you will thereby be terminated. \n" ;
																				  
																				  delay ();
																				  
																				  cout << "you may also notice, this room has only one exit which is the only place you can escape \n" ;
																				  
																				  delay ();
																				  
																				  cout << "what do you want to do , escape? fat chance \n " ;
																				  
																				  delay ();
																				  
																				  cout << " the exit is covered by my officers and they will be coming for you.\n " ;
																				   
																				  delay ();
																				  
																				  cout << "unless you agree to my terms. \n " ;
																				  
																				  cout << "Yes or no ?\n " ;
																				  
																				  delay ();
																				  
																				  cout << "Pat: I have an idea " <<sname <<" just do as i say \n" ;
																				  
																				  cout << "1. Die , 2. Watch-handover or 3.Deathwish \n" ; 
																				  
																				  cin >> ideathwish ;
																				  
																				if (ideathwish == 1)
																			 	{
																			 		cout << "Very well , " <<sname <<", you will have what you wished for .\n" ;
																			 		
																			 		istart = 3; 
																			 	} 
																			  	else
																			  	if (ideathwish == 2)
																			    	{
																			    		cout << " Thank you for trading the watch \n " ;
																			    		
																			    		cout << "AR2: Ali , come on\n " ;
																			    		
																			    		cout << "Please kill "  <<sname <<"for me \n" ; 
																			    		
																			    		istart = 3; 
																			    	}		
																				else 
																				if (ideathwish==3)
																					{
																						cout <<  "ok good choice\n" ;
																						
																						delay ();
																						
																						cout << "Now Run!! \n" ;
																						
																						delay ();
																						
																						cout << "Ali and Ninja ,GO!!! " ;
																						
																						delay ();
																						
																						cout << " EMEMY HAS TAKEN AR2 DOWN !! I REPEAT, EMEMY IS OVERPOWERING US !!! \n" ;
																						
																						delay ();
																						
																						cout << "Ali : Master, i see the exit.\n";
																						
																						delay ();
																						
																						cout << " Ninja: Me too Sssssire!\n"  ;
																						
																						delay ();
																						
																						cout << " ENEMY EXITED BUILDING " ;
																						
																						delay ();
																						
																						cout << " Year 2060\n";
																						
																						delay ();
																						
																						cout << " 7  years had passed after the faithful events of the annual diamond challenge\n" ;
																						
																						delay ();
																						
																						cout << " AR2 had been disabled due to its failure in the upcoming years \n" ;
																						
																						delay ();
																						
																						cout << "The country has since been protected manually by the NA- National Army \n" ;
																						
																						delay ();
																						
																						cout << "As for the winner of the challenge .....";
																						
																						delay ();
																						delay ();
																						
																						if (system("CLS")) system("clear");
																						
																						cout << "No one knows where he is .\n " ;
																						
																						delay () ; 
																						
																						cout << "And no one wants to know  .\n" ;
																						
																						delay () ;
																						
																						istart = 4 ; 	     
																						
																					}	  	 	        
																				}
																				else
																				{
																				cout << "damn ! wrong code buddy ! \n" ;
																				
																				delay ();
																				
																				cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
																				
																				delay ();
																				
																				cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
																				
																				cout << " ru.... " ;
																				
																				istart = 5 ;
																				} 
																			}
																			else
																			{
																		  	cout << " ok " <<sname ;
																		  		
																		//	delay ();
																		  		
																			cout << " the answer waz 'nothing' .\n" ;
																				  
																		//	delay ();
																				  
																			cout << " well , I AM not cracking za Vault for Thee ! Thou ARE NOT WORTHY OF IT \n" ;
																				  
																		//	delay ();
																				 
																			 cout  << " im leaving . goodbye" ; 
																				 
																			 istart =5 ;  
																			 
																		  	}
														
																		}
																		
																		
																	}
																												
															
															
																}
															
												
															 
												 			}
														}
											  			 
																									
														}
										
										
													}
							
													
												 	
													
															
												}
											
													
											}
									
											
										}
						
							
									}
							
							
									}
									else
									{
										gameover() ;
									}
								}
								else  
								{
								cout << "damn ! You're out of points mate ! \n" <<endl;
									
								delay ();
					
								cout << " Oh no there are gaurds on the radar . they've found the ......\n" <<endl ;
						
								delay ();
					
								cout << "  Oh no ,you are trapped due to no points. waiting for inevitable death is all you can do now  " <<sname <<endl ;
									
								delay () ;
						
								cout << "Here come the gaurds. It was nice knowing you "<<sname <<endl  ;
														
								istart = 4 ;
														
								gameover () ;
				
								}
								
													
												
							
							}
								
								
						
					
						}
						 
						if ( icode != 27456)
							{
								cout << "damn ! wrong code buddy ! \n" ;
											
								delay ();
						
								cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
							
								delay ();
						
								cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
										
								delay () ;
							
								cout << " ru....\n " ;
															
								gameover () ; 
							}	
						
						
						
						
						
						
						
						
						
						
	
					}
					else if (icode != 27456) 
					{
					cout << "damn ! wrong code buddy ! \n" ;
							
			//		delay ();
		
					cout << " Oh no there are gaurds on the radar . they've found the ......\n" ;
			
			//		delay ();
		
					cout << " GERROFF ME ! .... AAH ... Run for your li... \n" <<sname ;
						
			//		delay () ;
			
					cout << " ru....\n " ;
											
					gameover () ;
				
									
								
			
					}
				
				
			
				}
				
		}
			
		
	}
	while (istart == 4 == 0 );
	{
	cout << " YOU ARE SURROUNDED! HAND OVER YOUR WEAPONS NOW !!!" ;
	
	delay () ;
	
	cout<< " GAURDS SHOOT!!\n ";
	
	delay () ;
	
	cout <<" ENEMY DOWN! \n";
	
	delay () ;
	
	cout << "GAME OVER \n";
				
	delay () ;
		
	system ("COLOR 01") ;
		
	}

// write program here

// Ouput the following lines to show that this program has found a solution.
// Remember the user friendliness...
cout<< "Thank You For Using My Program" ;
// DO NOT DELETE THE LINES BELOW
    return 0;
}

