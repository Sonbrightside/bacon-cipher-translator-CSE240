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




const char* englishToBaconCode(const char* token);
char  baconCodeToEnglish(const char* token);


int main (int argc, char** argv){

 
  FILE* file;
  FILE* outfile; 
  char line[1530];
  char* token;
  //to check if the use put right number of argument in the command line.
  if(argc != 4){

    //printf("Error -- usage: <exe> <-b|-e> <input file> <output file>");
    printf("Error -- usage: ./assn2exe <-b|-e> <input file> <output file>\n");
  }

  //to do englishToBaconCode function
  else  if(strcmp(argv[1],"-b") == 0){
    file = fopen(argv[2],"r");
    outfile = fopen(argv[3],"w");
    // to get each line from the file using fgets function.
     while(fgets(line, 1350, file) != NULL ){
      if(strcmp(line, "\n") == 0){
        fprintf(outfile, "\n");
      }
      else{
       // to tokenize the string from the line according to " ".
       token = strtok(line," ");
      
      while(token != NULL){
        fprintf(outfile,"%s", englishToBaconCode(token));	
        token = strtok(NULL," ");	
       }
       fprintf(outfile, "\n");
      }
     }
     fclose(file);
     fclose(outfile);
  
  printf("Translateing %s to BaconCode\n", argv[2]);
  printf("%s file completed\n",argv[3]);
  }

  //to do baconCodeToEnglish function
  else if(strcmp(argv[1], "-e") == 0){
    file = fopen(argv[2],"r");
    outfile = fopen(argv[3],"w");
    // to get each line from the file using fgets function. 
    while(fgets(line, 1530, file) != NULL){
      // to tokenize the string from the line according to " ".
      if(strcmp(line, "\n") == 0){
        fprintf(outfile, "\n");
      }
      else{
      token = strtok(line,"|");

      while(token != NULL){
	      fprintf(outfile, "%c", baconCodeToEnglish(token));
	      token = strtok(NULL, "|");
      }
      
      fprintf(outfile, "%s", "\n");
      }
    }
      fclose(file);
      fclose(outfile);
      printf("Translateing %s to English\n", argv[2]);
      printf("%s file completed\n",argv[3]);
    
   }
   else{
     printf("Error -- usage: ./assn2exe <-b|-e> <input file> <output file>\n");
   }
  return 0; 
}
//the function that convert english to bacon code 
