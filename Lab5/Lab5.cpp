#include <stdio.h>
#include <string.h>
int main() {
    int score;
    char grade [3] ;
    printf(" Grade calculation program from scores\n");
    printf( " Enter your score ( Max 100 )  : " );
    if(scanf( "%d" , &score) !=1 ) {
    printf("please enter number only.\n ");
    return 1;
}

if (score >= 80 )
strcpy (grade , "A");

else if (score >= 79 )
strcpy (grade , "B+");

else if (score >= 70 )
strcpy (grade , "B");

else if (score >= 65 )
strcpy (grade , "C+");

else if (score >= 60 )
strcpy (grade , "C");

else if (score >= 55 )
strcpy (grade , "D+");

else if (score >= 50 )
strcpy (grade , "D");

else
strcpy (grade , "F");
printf(" your grade :%s\n" , grade );

return 0;
}