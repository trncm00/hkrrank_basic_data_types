#include <iostream>
#include <cstdio>
using namespace std;

int main() {

/*
 *
 * keep in mind this wont work in your ide,
 *
 * Not quite used to how hacker rank wants people to think about c++
 * I won't deny looking at the comments of other users after my first few tries
 * so far I have been pretty close in my initial submissions
 * and the comments reveal criticisms and stylistic differences, that's pretty
 * important. It's funny, people don't want to deal with C stuff in their C++
 * seems silly, but these people don't like wasting time or doing tons of research,
 * time is money right?
 *
 *          I am sort of weirded out by not having to initialize my variables,
 *            I was trained to think that would avoid potential problems,
 *            but I guess that is for when there are several functions
 *             and programs running at once,
 *             from different users,
 *             and you do not want to risk
 *             weird junk values interfering with another junk value
 *             in memory.
 *
 *  I see why an online compiler for self-teaching wouldn't require such styling,
 *  after all, it's not like the JSON (pretty sure i found json stuff in the console)
     would allow my submission to interfere with another submission from another user.
     My networking know-how is fuzzy, they end loaded the networking stuff at Bridge to Tandon, which is
     one major complaint about the course, I sort of wish they had woven that stuff into each module
     rather than hitting us with networking all at once at the end. Hey, I am not a professor, taking
     a four year program and distilling it into six months is not easy, nor should it be perfect.
 * */

        int a;
        long b;
        char c;
        float d;
        double e;

        scanf("%d %ld %c %f %lf ", &a, &b, &c, &d, &e);
        printf("%d\n%ld\n%c\n%.3f\n%.9lf \n", a, b, c, d, e);


//char ch = 'd';
//double d = 234.432;
//printf("%c %lf", ch, d);



        /* //this would work in the IDE

          int t = 3;
          long l = 12345678912345;
          char c ='a';
          float f = 334.23;
          double d=14049.30493;

          //printf("%d \n %ld \n %c \n %f \n %lf \n", t,l,c,f,d);



            printf("%d \n", t);
          printf("%ld \n", l);
          printf("%c \n", c);
          printf("%.3f \n", f);
          printf("%.9lf \n", d);

        */



//char ch = 'd';
//double d = 234.432;
//printf("%c %lf", ch, d);





/*
    int t = 3;
    long l = 12345678912345;
    char c ='a';
    float f = 334.23;
    double d=14049.30493;



    printf("%d \n", t);
    printf("%ld \n", l);
    printf("%c \n", c);
    printf("%f \n", f);
    printf("%lf \n", d);
*/






    // Complete the code.
    return 0;
}