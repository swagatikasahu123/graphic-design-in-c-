
#include<graphics.h>
 main(){
 	//use to create window for graphic
	initwindow(1000,1000);
/*	setcolor(RED);
	//creating circle
	circle(250,250,100);
//	setfillstyle(SOLID_FILL,BLUE);
	setfillstyle(HATCH_FILL,BLUE);
	floodfill(250,250,RED);
//	floodfill(400,400,RED);
*/

/*  //creating line
     setcolor(RED);
    line(200,220,400,420);
     setcolor(BLUE);
     line(200,420,440,220);
  */
  
  /*      
     //creating arc
     //arc(int x,int y,int stangle,int endangle,int radius
     arc(150,150,0,90,50);
       */
	   
  /*	    
      //creating rectangle
     //rectangle(int left,int top,int right,int bottom)
      setcolor(BLUE);
      setfillstyle(SOLID_FILL,YELLOW);
      //floodfill(100,150,BLUE);
     rectangle(100,150,500,500);
     floodfill(101,151,BLUE);
      */
      
    /* 
    //creating ellipse
     //ellipse(int x,int y,int stangle,int endangle,x-radius,y-radius)
      setcolor(BLUE);
      setfillstyle(HATCH_FILL,RED);
     ellipse(300,350,0,360,100,50);
       floodfill(300,350,BLUE);
         */
         
    /*     
       //creating yellow circle for emoji
       setcolor(YELLOW);
       setfillstyle(SOLID_FILL,YELLOW);
       circle(150,150,80);
       floodfill(150,150,YELLOW);
       //creating rectangle for smile
       setcolor(WHITE);
       setfillstyle(SOLID_FILL,WHITE);
       rectangle(120,180,180,190);
       floodfill(121,181,WHITE);
       //creating white circle for both eyes
       setcolor(WHITE);
       setfillstyle(SOLID_FILL,WHITE);
       circle(110,130,20);
       floodfill(110,130,WHITE);
       
       setcolor(WHITE);
       setfillstyle(SOLID_FILL,WHITE);
       circle(190,130,20);
       floodfill(190,130,WHITE);
       //creating left black eye ball
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(110,140,10);
       floodfill(110,140,BLACK);
       //creating right black eye ball
       setcolor(BLACK);
       setfillstyle(SOLID_FILL,BLACK);
       circle(190,140,10);
       floodfill(190,140,BLACK);
       */
       
    /*   
       //animation
       for(int i=0;i<900;i++){
       	//circle
       circle(100+i,250,50);
       delay(10);
       cleardevice();
	   }
	   */
	   
    /* 
     //write text
     settextstyle(4,4,1);
     setcolor(BLUE);
     setbkcolor(YELLOW);
	 outtextxy(400,400,"Swagatika Sahu"); 
	    */
	    
	/*    
	 //TRAFFIC LIGHT DESIGN
	 rectangle(250,50,350,350);
	 circle(300,100,50);
	 circle(300,200,50);
	 circle(300,300,50);
	 //creating animation
	 for(int i=0;i<10;i++){
	  setfillstyle(SOLID_FILL,RED);
	  floodfill(300,100,WHITE);
	  outtextxy(280,100,"STOP");
	  delay(1000);
	  setfillstyle(SOLID_FILL,BLACK);
	  floodfill(300,100,WHITE);
	  
	  setfillstyle(SOLID_FILL,YELLOW);
	  floodfill(300,200,WHITE);
	  outtextxy(280,200,"HOLD");
	  delay(1000);
	  setfillstyle(SOLID_FILL,BLACK);
	  floodfill(300,200,WHITE);
	  
	  setfillstyle(SOLID_FILL,GREEN);
	  floodfill(300,300,WHITE);
	  outtextxy(280,300,"GO");
	  delay(1000);
	  setfillstyle(SOLID_FILL,BLACK);
	  floodfill(300,300,WHITE);
	  
	  
	 }
	 */
	 
	 
	 
	 //rectangle animation
	 for(int i=1;i<800;i++){
	 	// rectangle(150+i,150,450+i,450);
	     // rectangle(150,150+i,450,450+i);
	 	 rectangle(150+i,150+i,450+i,450+i);
	 	 delay(10);
	 	 cleardevice();
	 }

	 
	  //to hold the output
	   	getch();
}
