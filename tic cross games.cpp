
#include<iostream>
using namespace std;

char name[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};


//%%%%%%%%%%%%%%%%%%%%%%%%//
int choise,row,colom;        //   integer 
//%%%%%%%%%%%%%%%%%%%%%%%%//


//%%%%%%%%%%%%%%%%%//
char turn='x';//                 charecter 
//%%%%%%%%%%%%%%%%%%%//


//&&&&&&&&&&&&&&&&&&&&&&&&//
bool draw;                   //  bool 
//&&&&&&&&&&&&&&&&&&&&&&&&&//


//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
bool game_over(void);
void disp (void);//                       function prototypes 
void xplayer(void);
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//


void disp (void)

{
	system("cls");
	cout<<endl;
	cout<<"\t     (TICK) >AND< (CROSS)\n\n ";
	cout<<"\t   __________games__________\n\n\n\n\n";
	cout<<"Player[x]\n\n";
	cout<<"Player[y]\n\n";

	cout<<"\t          |       |             \n";
	cout<<"\t          |       |             \n";
	cout<<"\t      "<<name[0][0]<<"   |  "<<name[0][1]<<"    |  "<<name[0][2]<<endl;
	cout<<"\t    ______|_______|_______      \n";
	cout<<"\t          |       |             \n";
	cout<<"\t          |       |             \n";
	cout<<"\t      "<<name[1][0]<<"   |  "<<name[1][1]<<"    |  "<<name[1][2]<<endl; 
	cout<<"\t    ______|_______|_______      \n";
	cout<<"\t          |       |             \n";
	cout<<"\t          |       |             \n";
	cout<<"\t      "<<name[2][0]<<"   |  "<<name[2][1]<<"    |  "<<name[2][2]<<endl;
	cout<<"\t          |       |             \n\n\n\n";
}
//                                DISPLAY  FUNCTION END 
// ****************************************************************************************//

bool game_over(void)
{
   for (int i=0;i<3;i++)
   {
   if (name[i][0]==name[i][1]&&name[i][0]==name[i][2] or name[0][i]==name[1][i]&&name[0][i]==name[2][i])
   return 0;	
   }
 
 if (name[0][0]==name[1][1]&& name[0][0]==name[2][2] || name[0][2]==name[1][1] && name[0][2]==name[2][0])
 return 0;
 for (int i=0;i<3;i++)
 for (int j=0;j<3;j++)
 
 if (name[i][j]!='x'&&name[i][j]!='y')
 return 1;
 draw=true;
 return false;
 
}
//                                   GAME OVER FUNCTION END 
//*********************************************************************************************************
void xplayer(void)
{
	if(turn=='x')
	cout<<"\t    Player x turn :  ";
	if (turn=='y')
	cout<<"\t    Player y turn :   ";
	cin>>choise;
	switch (choise)
	{
	case 1: row=0;colom=0;break;
	case 2: row=0;colom=1;break;
	case 3: row=0;colom=2;break;
	case 4: row=1;colom=0;break;
	case 5: row=1;colom=1;break;
	case 6: row=1;colom=2;break;
	case 7: row=2;colom=0;break;
	case 8: row=2;colom=1;break;
	case 9: row=2;colom=2;break;
	default :
    {
		cout<<"inviled option \n\n";
		break;
	}
	}
	if (turn=='x'& name[row][colom]!='x'& name[row][colom]!='y')
	{
		name[row][colom]='x';
		turn='y';
	}
	else if (turn=='y'&& name[row][colom]!='x'&& name[row][colom]!='y')
	{
		name[row][colom]='y';
		turn='x';
	}
	else 
	{
		cout<<"\n\n";
		cout<<"\t box is already filled\n\t Please try again \n\n\n";
		xplayer();	
	}
	
	
	disp();  //   call  display  function 
	
	
	
}//                               player function end      
//******************************************************************************//



int main() //    main function //
{

	while (game_over()) //  while loop  and pass game ouer function //
	{
	
	disp();
	xplayer();
	game_over();
    }
    
//*****************************************************************************//
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%?//  


//  when our game is over then after display  // 
  
    if (turn=='x'&& draw==false)
    {
    	system("cls");
    	
	cout<<"   *********************************\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *    PLAYER  [y]   WIN !!!      *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *      ! CONRAtuLATION !        *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *********************************\n\n\n\n";
	char b;
	cout<<" Press [b] to exit   :  ";
	cin>>b;
	if (b=='b' or b=='B')
	{
	   system("cls");
		cout<<"\n\n\n\n  THANKS YOU FOR PLAYING TIK CROSS GAME\n\n\n";
	}
    	
    
	}
    	
	else if (turn=='y'&&draw==false)
    {
    	system("cls");
    
	cout<<"   *********************************\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *    PLAYER  [X]   WIN !!!      *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *      ! CONRAtuLATION !        *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *********************************\n\n\n\n";
	char b;
	cout<<" Press [b] to exit   :  ";
	cin>>b;
		if (b=='b' or b=='B')
	{
	   system("cls");
		cout<<"\n\n\n\n  THANKS YOU FOR PLAYING TIK CROSS GAME\n\n\n";
	}
	
		
	}
	else 
	{
		system("cls");
	cout<<"   *********************************\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *      !!! GAME  OUER !!!       *\n";
	cout<<"   *                               *\n";	
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *                               *\n";
	cout<<"   *********************************\n";
		
	}
}
