/*--------------------------------- Include ---------------------------------*/
#include"./Interface.h"
/*---------------------------------- Main -----------------------------------*/
int main()
{
     AppStart();
}
/*-------------------------------- Functions --------------------------------*/

/*-------------- App Start ---------------*/
Program_Error AppStart(void)
{
     if(Error_Control(Input_Students()))
     {
          Sort_Students();
          Average_Calculate();
          Below_Average();
          Highest_Grade();
     }
}

/*-------------- Highest Grade ---------------*/
Program_Error Highest_Grade(void)
{
     printf("--------------- Highest Grade ---------------\n");
     printf("- Student Name : %s\n- Student Grade : %d\n",studentData[ZERO].studentName,studentData[ZERO].grade);
     printf("---------------------------------------------\n");
}

/*-------------- Below Average ---------------*/
Program_Error Below_Average(void)
{
     printf("--------------- Below Average ---------------\n");
     for(u8 i=(Total_Students-ONE);i>=ZERO;i--)
     {
          if(studentData[i].grade<Total_Average)
          {
               printf("- Student Name : %s\n",studentData[i].studentName);
          }
          else {break;}
     }
     printf("---------------------------------------------\n");
     return Done;
}

/*-------------- Average Calculate ---------------*/
Program_Error Average_Calculate(void)
{
     printf("--------------- Total Average ---------------\n");
     for(u8 i=0;i<Total_Students;i++)
     {
          Total_Average+=studentData[i].grade;
     }
     Total_Average/=Total_Students;
     printf("- Total Average = %d\n",Total_Average);
     printf("---------------------------------------------\n");
     return Done;
}

/*-------------- Error Control ---------------*/
Program_Error Error_Control(u8 flag)
{
     switch(flag)
     {
          case(Invalid_Input):printf("Please Enter Valid Input\n");break;
          case(Done):break;
          default:printf("ERROR\n");break;
     }
     return flag;
}

/*-------------- Sort Students ---------------*/
Program_Error Sort_Students(void)
{
     u8 flag;
     for(u8 pass=(Total_Students-ONE) ; pass>=ZERO ; pass--)
     {
          flag=TRUE;
          for(int iteration=ZERO;iteration<pass;iteration++)
          {
               if(studentData[iteration].grade<studentData[iteration+ONE].grade)
               {
                    studentData[21]=studentData[iteration];
                    studentData[iteration]=studentData[iteration+1];
                    studentData[iteration+1]=studentData[21];
                    flag=FALSE;
               }
          }
          if(flag) break;
     }
     return Done;
}

/*-------------- Enter Students ---------------*/
Program_Error Input_Students(void)
{
     u8 flag=Done;
     printf("- Please Enter Total Number Of Students : ");
     scanf("%d",&Total_Students);
     flag=(Total_Students>20) ? Invalid_Input : Done;
     if(flag==Done)
     {
          for(u8 i=0;i<Total_Students;i++)
          {
               printf("(%d) - Student Name :",(i+1));fflush(stdin);
               scanf("%[^\n]s",studentData[i].studentName);
               printf("      Student Grade :");
               scanf("%d",&studentData[i].grade);
          }
     }
     printf("---------------------------------------------\n");
     return flag;
}