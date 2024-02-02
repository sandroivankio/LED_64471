 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"
#include <math.h>


void sendData(uint8_t data, uint8_t time) {
    int index;

    for(index = 1; index <= 8; index++) {
        SPI1_Open(SPI1_DEFAULT);
        SPI1_ByteExchange(data);
        SPI1_Close();
        DELAY_milliseconds(5);
        LE_SetHigh();
        DELAY_milliseconds(20);
        LE_SetLow();
        DELAY_milliseconds(time);
    }
}


int main(void)
{
    SYSTEM_Initialize();
    
    SPI1_Initialize();

    uint8_t counter=0;
    
    SW_SetDigitalInput(); 
    bool buttonState = 0;
    OE1_SetHigh();
    OE2_SetHigh();
    LE_SetLow(); 
    
    sendData(0,20);
    
    
    while(1)
    {   
        
        if (SW_GetValue() == 0 && buttonState == 0) {
            // Button is pressed, execute your sequence of instructions
            
            OE1_SetHigh();
            OE2_SetHigh();
                       
            sendData(0,0);
               OE1_SetLow();
               OE2_SetLow();
            
            while (counter<=7){
               sendData(pow(2,counter),200);
               counter++;
               SPI1_Close();
             } 
               
               sendData(255,0);
               OE1_SetLow();
               OE2_SetLow();
               counter = 0;
        }     
            
            
        else if (SW_GetValue() == 1 && buttonState == 1) {
            // Button is released, reset button state
           
            buttonState = 0;
        }

    }
    
    return 0;
}