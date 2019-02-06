/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

float begin;
float end;

void start_stopwatch()
{
  begin = clock();
}

float elapsed_time()
{
  if (end < begin)
  {
    return clock() - begin;
  }
  else
  {
    return end - begin;
  }
}

void stop_stopwatch()
{
  end = clock();
}

static void long_taking_function()
{

}
