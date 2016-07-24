/*
 * File:   main.c
 * Author: LUIS
 *
 * Created on 23 de junio de 2016, 9:31
 */


#include <xc.h>
//#include <plib.h>
#include <delays.h>
#include <stdio.h>
#define _XTAL_FREQ 19660800

// CONFIG1L
#pragma config WDTEN = OFF      // Watchdog Timer Enable bit (WDT disabled (control is placed on SWDTEN bit))
#pragma config PLLDIV = 1       // PLL Prescaler Selection bits (No prescale (4 MHz oscillator input drives PLL directly))
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable bit (Reset on stack overflow/underflow enabled)
#pragma config XINST = ON       // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode enabled)

// CONFIG1H
#pragma config CPUDIV = OSC1    // CPU System Clock Postscaler (No CPU system clock divide)
#pragma config CP0 = OFF        // Code Protection bit (Program memory is not code-protected)

// CONFIG2L
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator, HS used by USB)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)
#pragma config IESO = ON        // Two-Speed Start-up (Internal/External Oscillator Switchover) Control bit (Two-Speed Start-up enabled)

// CONFIG2H
#pragma config WDTPS = 2048     // Watchdog Timer Postscaler Select bits (1:2048)

// CONFIG3L

// CONFIG3H
#pragma config CCP2MX = DEFAULT // ECCP2 MUX bit (ECCP2/P2A is multiplexed with RC1)
#pragma config MSSPMSK = MSK7   // MSSP Address Masking Mode Select bit (7-Bit Address Masking mode enable)



void main(void) {
    
    TRISF = 0x00;
    
    while (1){
        LATFbits.LATF6 = 0;
        Delay1KTCYx(0);
        
        LATFbits.LATF6 = 1;
        Delay1KTCYx(0);
    
    }
    
    
    return;
}
