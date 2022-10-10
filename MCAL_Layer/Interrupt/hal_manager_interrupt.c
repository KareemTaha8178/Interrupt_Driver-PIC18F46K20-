/* 
 * File:   hal_manager_interrupt.c
 * Author: Kareem Taha
 *
 * Created on October 10, 2022, 1:47 PM
 */

/* Section : Includes */
#include "hal_manager_interrupt.h"
 /* Section : Macros Definition */

 /* Section : Macros Functions Declaration */
#if Interrupt_Priority_Levels_Enable == Interrupt_Feature_Enable

void __interrupt() InterruptManagerHigh(void){
    
}

void __interrupt(low_priority) InterruptManagerLow(void){
    
}

#else

void __interrupt() InterruptManager(void){
    if((INTCONbits.INT0IE == Interrupt_Enable) && (INTCONbits.INT0IF == Interrupt_Occur)) INT0_ISR();
    if((INTCON3bits.INT1IE == Interrupt_Enable) && (INTCON3bits.INT1IF == Interrupt_Occur)) INT1_ISR();
    if((INTCON3bits.INT2IE == Interrupt_Enable) && (INTCON3bits.INT2IF == Interrupt_Occur)) INT2_ISR();
}

#endif


 /* Section : Data Types Declaration */

 /* Section : Function Declaration */

