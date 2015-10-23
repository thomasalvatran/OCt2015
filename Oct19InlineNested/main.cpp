#include <sys/time.h>
#include <stdio.h>
#include <iostream>
inline void swapin(int &m, int &n) {
  int temp = m;
  m = n;
  n = temp;
}

void swap(int &m, int &n) {
  int temp = m;
  m = n;
  n = temp;
}
struct timeval stop, start;
int main() {
  int i = 1, j = 2;
  gettimeofday(&start, NULL);
  for (int x = 0; x < 10000000; x++)
    swapin(i, j);
  gettimeofday(&stop, NULL);
  printf("took %lu\n", stop.tv_usec - start.tv_usec);
}
////http://www.mkyong.com/c/calculate-program-execute-time-time-elapsed-in-c/
///*calculate program execute time */
//#include <stdio.h>
//#include <iostream>
//#include <time.h>

// inline void swapin(int &m, int &n)
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}

// void swap(int &m, int &n)
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}

// int main(int argc, char *argv[]) {
//   time_t start, stop;
//   clock_t ticks; long count;

//   time(&start);
//   // Do stuff
////   int i=0;

////   while(i<50000)
////   {
////    printf("Work work %d\n", i);
////        i++;
////        ticks = clock();

////   }
//   int i = 1, j = 2;
//   printf("i = %d, j = %d\n", i, j);
//   swap(i, j);
//   time(&stop);
//   printf("i = %d, j = %d\n", i, j);

////   printf("Used %0.2f seconds of CPU time. \n",
///(double)ticks/CLOCKS_PER_SEC);
//   printf("Finished in about %.0f seconds. \n", difftime(stop, start));
//   return 0;
//}
///* Program to demonstrate time taken by function fun() */
//#include <stdio.h>
//#include <time.h>

//// A function that terminates when enter key is pressed
// void fun()
//{
//    printf("fun() starts \n");
//    printf("Press enter to stop fun \n");
//    while(1)
//    {
//        if (getchar())
//            break;
//    }
//    printf("fun() ends \n");
//}

//// The main program calls fun() and measures time taken by fun()
// int main()
//{
//    // Calculate the time taken by fun()
//    clock_t t;
//    t = clock();
//    fun();
//    t = clock() - t;
//    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

//    printf("fun() took %f seconds to execute \n", time_taken);
//    return 0;
//}

//#include <time.h>
//#include <iostream>
//#include <stdio.h>
// using namespace std;

// void swap(int &m, int &n)
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}
// inline void swapin(int &m, int &n)
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}
// int main() {
//  int i = 1, j = 2;
//  clock_t start, end;
//  double cpu_time_used;
//  start = clock();
//  swap(i, j);
//  sleep(5);
//  end = clock();
//  cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
//  printf("%f\n", cpu_time_used);

//  start = clock();
//  swap(i, j);
//  sleep(1);
//  swapin(i, j);
//  end = clock();
//  cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
//  printf("%d\n", cpu_time_used);

//}

//  printf("Time elapsed: %d\n", double(clock() - startTime) /
//  (double)CLOCKS_PER_SEC);
//  printf("i = %d, j = %d\n", i, j);
//  startTime = clock();
//  swap(i, j);
////  sleep(2);
//  printf("Time elapsed: %d\n", double(clock() - startTime) /
//  (double)CLOCKS_PER_SEC);
//  printf("i = %d, j = %d\n", i, j);

//  time_t start1, end1;
//  double duration = 0;
//  time(&start1);
//      sleep(1);
//  time(&end1);
//  duration = difftime(end1, start1); // time in milliseconds
//  printf("Time ....%d\n", duration);

//  duration = 0;
//  time(&start1);
////  sleep(5);
//  time(&end1);
//  duration = difftime(end1, start1); // time in milliseconds
//  printf("Time ....%d\n", duration);
//  return 0;
//}

//#include <iostream>
//#include "microtimer.h"

// int main()
//{
//    // Create a microtimer object
//    microtimer microtime;

//    // A variable type big-enough to hold large microsecond values
//    microtimer::size_type start, end, avg;

//    // Time n iterations of code, and find the average time
//    int its = 1000000;

//    // Take a time snapshot
//    start = microtime();

//    // The code to time
//    for (int i = 0; i < its; ++i)
//    {
//        std::cout << 'a';
//    }

//    // Take another time snapshot
//    end  = microtime();

//    // Find the difference in the two time snapshots
//    // Divide by number of iterations for average execution time
//    avg = (end - start) / its;

//    std::cout << std::endl << avg << " micros on average." << std::endl;

//    return 0;
//}
//#include <iostream>
//#include <ctime>
//#include <stdio.h>

// using namespace std;
////static timestamp_t
////    get_timestamp ()
////    {
////      struct timeval now;
////      gettimeofday (&now, NULL);
////      return  now.tv_usec + (timestamp_t)now.tv_sec * 1000000;
////    }
/// https://en.wikipedia.org/wiki/Inline_function
// void swap(int &m, int &n)
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}
// int main(){
//    int i = 1;
//    int j = 2;
////    time_t start, end;
//    cout << i << " " << j << endl;
////    time(&start);
////    timestamp_t begin = get_timestamp();
//    clock_t begin = clock();
//    printf("begin = %d\n", begin);
//    swap (i, j);
//    sleep(5);
//    clock_t end = clock();
//    printf("end = %d\n", end);
////    time(&end);
//    int elapsed_sects = end - begin;
////    cout << difftime(end, start) << endl;
////    cout << end - begin << endl;
//    cout << i << " " << j << endl;
//}
