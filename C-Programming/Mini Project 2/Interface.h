#ifndef _INTERFACE_H_
#define _INTERFACE_H_
/*-------------- File Guard ------------------*/
/* Include */
#include <stdio.h>
#include "./Libraries/Macros.h"
#include "./Libraries/Standard_Types.h"
/*Variables*/
typedef struct Data_Base{u8 studentName[20];u8 grade;}Data_Base;
typedef enum Program_Error{Invalid_Input,Done,Sort_Error}Program_Error;
u8 Total_Students=0;
u16 Total_Average=0;
Data_Base studentData[21];
/* Functions */
Program_Error AppStart(void);
Program_Error Below_Average(void);
Program_Error Highest_Grade(void);
Program_Error Sort_Students(void);
Program_Error Input_Students(void);
Program_Error Average_Calculate(void);
Program_Error Error_Control(u8 flag);
/*-------------- File Guard ------------------*/
#endif
/*_INTERFACE_H_*/
