/*
 * File:   main.c
 * Author: Aditya Raj Nayak
 *
 * Created on July 1, 2018, 10:59 PM
 */


#include <xc.h>
#include "../config.h"
#include "../TaskScheduler/TaskSceduler.h"


void main(void) {
    ConfigureOscillator();
    while(1)
    {
      TaskScheduler(); 
    }
    return;
}
