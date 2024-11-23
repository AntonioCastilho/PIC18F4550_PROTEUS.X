 /*File:   main.c
 * Author: Antonio Castilho
 * Description: Tests an initial simulation setup in Proteus (ISI), 
 * for PIC18F4550 with 16X2 Display.
 * MPLAB X IDE v6.20 - XC8 Compiler v2.5 - Proteus 8.0
 * Created on 23 de Novembro de 2024, 16:23
 */


#include <xc.h>
#include "main.h"

void main(void)
{
    lcd_ini();
    TRISBbits.RB1 = 0;
    while(1)
    {
        lcd_prtStr(2,0,"                ");
        lcd_prtStr(0,0,"1234567890123456");
        
        PORTBbits.RB1 = ON;
        us_time(10000);
        PORTBbits.RB1 = OFF;
        lcd_prtStr(0,0,"                ");
        lcd_prtStr(2,0,"6543210987654321");
        us_time(10000);
                
        
    }
    
}
