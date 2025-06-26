  /*
Author: Hongju Son
Date: Jun/16/2023
Description: a program that convert English character into baconcode
Usage: C and C++
*/ 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "son_baconCode.h"
 
 
 const char*  englishToBaconCode(const char* token){

  char *conversion;
  conversion = (char *) malloc(1350);

  // for statment to compare each characters in token and convert it to bacon code
   int i;
   for(i = 0; i< strlen(token); i++){

      switch(token[i]){
      case 'A' :
      case 'a' :
 	      strcat(conversion,"xxxxx"); 
	      break;
      case 'B' :
      case 'b' :
	      strcat(conversion,"xxxxo");
	      break;
      case 'C' :
      case 'c' :	
        strcat(conversion,"xxxox");
        break;
      case 'D' :
      case 'd' :
        strcat(conversion,"xxxoo");
        break;
      case 'E' :
      case 'e' :
        strcat(conversion,"xxoxx");
        break;
      case 'F' :
      case 'f' :
        strcat(conversion,"xxoxo");
        break;
      case 'G' :
      case 'g' :
        strcat(conversion,"xxoox");
        break;
      case 'H' :
      case 'h' :
        strcat(conversion,"xxooo");
        break;
      case 'I' :
      case 'i' :
        strcat(conversion,"xoxxx");
        break;
      case 'J' :
      case 'j' :
        strcat(conversion,"xoxxo");
        break;
      case 'K' :
      case 'k' :
        strcat(conversion,"xoxox");
        break;
      case 'L' :
      case 'l' :
        strcat(conversion,"xoxoo");
        break;
      case 'M' :
      case 'm' :
        strcat(conversion,"xooxx");
        break;
      case 'N' :
      case 'n' :
        strcat(conversion,"xooxo");
        break;
      case 'O' :
      case 'o' :
        strcat(conversion,"xooox");
        break;
      case 'P' :
      case 'p' :
        strcat(conversion,"xoooo");
        break;
      case 'Q' :
      case 'q' :
        strcat(conversion,"oxxxx");
        break;
      case 'R' :
      case 'r' :
        strcat(conversion,"oxxxo");
        break;
      case 'S' :
      case 's' :
        strcat(conversion,"oxxox");
        break;
      case 'T' :
      case 't' :
        strcat(conversion,"oxxoo");
        break;
      case 'U' :
      case 'u' :
        strcat(conversion,"oxoxx");
        break;
      case 'V' :
      case 'v' :
        strcat(conversion,"oxoxo");
        break;
      case 'W' :
      case 'w' :
        strcat(conversion,"oxoox");
        break;
      case 'X' :
      case 'x' :
        strcat(conversion,"oxooo");
        break;
      case 'Y' :
      case 'y' :
        strcat(conversion,"ooxxx");
        break;
      case 'Z' :
      case 'z' :
        strcat(conversion,"ooxxo");
        break;
      case '#':
	      strcat(conversion, "!!!!!");
	      break;
      case '\0':
      case '\n':
	      strcat(conversion, "\0");
	      break;
      default:
	      strcat(conversion, "!!!!!");
      	break;
       }
      //the statement for "|","|/|" at the end of the token
  if(token[i+1] != '\0'){
       
	  if(token[i+1] == '\n'){
      //strcat(conversion, "\n");
	    continue;
	  }
	  else{
	    strcat(conversion, "|");
	  }
 }
       
  else{
	  if(token[i] == '\n'){
    
	  continue;
	}
	else{
	  strcat(conversion, "|/|");
    
	 }
        }
     }
   //strcat(conversion, "\n");
       return conversion;
        free(conversion);
 
 }

//the function to convert bacon code to english charater.
char baconCodeToEnglish(const char* token2){
  //to remove the newline from the line at the end of line
   char *pos;
  if ((pos=strchr(token2, '\n')) != NULL)
   *pos = '\0';
  // to compare each code and convert it to english
  
      if(strcmp(token2, "xxxxx") == 0){
	      return 'A';
      }      
      else if(strcmp(token2, "xxxxo")== 0){
	      return 'B';
      } 
      else if(strcmp(token2, "xxxox")== 0){
        return 'C';
      }
      else if(strcmp(token2, "xxxoo")== 0){
        return 'D';
      }
      else if(strcmp(token2, "xxoxx")== 0){
        return 'E';
      }
      else if(strcmp(token2, "xxoxo")== 0){
        return 'F';
      }
      else if(strcmp(token2, "xxoox")== 0){
        return 'G';
      }
      else if(strcmp(token2, "xxooo")== 0){
	      return 'H';
      }
      else if(strcmp(token2, "xoxxx")== 0){
        return 'I';
      }
      else if(strcmp(token2, "xoxxo")== 0){
        return 'J';
      }
      else if(strcmp(token2, "xoxox")== 0){
        return 'K';
      }
      else if(strcmp(token2, "xoxoo")== 0){
        return 'L';
      }
      else if(strcmp(token2, "xooxx")== 0){
	      return 'M';
      }
      else if(strcmp(token2, "xooxo")== 0){
        return 'N';
      }
      else if(strcmp(token2, "xooox")== 0){
        return 'O';
      }
      else if(strcmp(token2, "xoooo")== 0){
        return 'P';
      }
      else if(strcmp(token2, "oxxxx")== 0){
        return 'Q';
      }
      else if(strcmp(token2, "oxxxo")== 0){
        return 'R';
      }
      else if(strcmp(token2, "oxxox")== 0){
        return 'S';
      }
      else if(strcmp(token2, "oxxoo")== 0){
        return 'T';
      }
      else if(strcmp(token2, "oxoxx")== 0){
        return 'U';
      }
      else if(strcmp(token2, "oxoxo")== 0){
        return 'V';
      }
      else if(strcmp(token2, "oxoox")== 0){
        return 'W';
      }
      else if(strcmp(token2, "oxooo")== 0){
        return 'X';
      }
      else if(strcmp(token2, "ooxxx")== 0){
        return 'Y';
      }
      else if(strcmp(token2, "ooxxo")== 0){
        return 'Z';
      }
      else if(strcmp(token2, "/") == 0){
	      return ' ';
      }
      else if(strcmp(token2, "!!!!!") == 0){
	      return '#';
      }
      else{
	      return '%' ;
      } 
  
 }