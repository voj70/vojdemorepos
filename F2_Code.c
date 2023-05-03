#include <stdio.h> 
#include <stdlib.h> 

int main( void ) 
{ 
  FILE      *ptrFile = fopen( "index.html", "w"); 
  int        i; 

  fprintf( ptrFile, "<HTML>\n "); 
  fprintf( ptrFile, "<HEAD> <TITLE> The Geek Stuff </TITLE> </HEAD>\n" ); 
  fprintf( ptrFile, "<BODY BGCOLOR=\"#110022\" TEXT=\"#FFBBAA\"> \n"); 
  fprintf( ptrFile, "<p>Example 1: This file was created from a C program</p>\n"); 
 
  for( i = 0; i< 5; i++) 
  { 
    fprintf( ptrFile, "<p>%d. line</p>\n", i); 
  } 

  fprintf( ptrFile, "</BODY>\n"); 
  fprintf( ptrFile, "</HTML>"); 
  fclose( ptrFile ); 
  
  return EXIT_SUCCESS; 
}