#include <stdio.h>
#include <stdlib.h>


/*STAGE 1:


-READS THE INPUT STREAM AND BUILDS A 2D ARRAY OF STRINGS
-AT MOST 1000 INPUT LINES AND EACH LINE HAS 30 COLUMNS WITH ATMOST 50 CHARACTERS
-FOR THE OUTPUT 
mac: ./ass1-soln < test0.tsv
    Stage 1 Output
    input tsv data has 6 rows and 4 columns
row 6 is:
   1: Event     Cycling
   2: Gender	Womens
   3: Country	New Zealand
   4: Medal		third: bronze
   
INPUT IS GONNA BE LIKE:

	Event\tGender\tCountry\tMedal\n
    Swimming\tWomens\tNew Zealand\tfirst: gold\n
    Swimming\tWomens\tChina\tsecond: silver\n
    Swimming\tWomens\tIndonesia\tthird: bronze\n
    Cycling\tWomens\tChina\tfirst: gold\n
    Cycling\tWomens\tNew Zealand\tsecond: silver\n
    Cycling\tWomens\tNew Zealand\tthird: bronze\n
    EOF
*/

