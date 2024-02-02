/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB4 aliases
#define SW_TRIS                 TRISBbits.TRISB4
#define SW_LAT                  LATBbits.LATB4
#define SW_PORT                 PORTBbits.RB4
#define SW_WPU                  WPUBbits.WPUB4
#define SW_OD                   ODCONBbits.ODCB4
#define SW_ANS                  ANSELBbits.ANSELB4
#define SW_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SW_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SW_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SW_GetValue()           PORTBbits.RB4
#define SW_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SW_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SW_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SW_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SW_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SW_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SW_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SW_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSELC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSELC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSELC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RD0 aliases
#define LE_TRIS                 TRISDbits.TRISD0
#define LE_LAT                  LATDbits.LATD0
#define LE_PORT                 PORTDbits.RD0
#define LE_WPU                  WPUDbits.WPUD0
#define LE_OD                   ODCONDbits.ODCD0
#define LE_ANS                  ANSELDbits.ANSELD0
#define LE_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LE_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LE_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LE_GetValue()           PORTDbits.RD0
#define LE_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LE_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LE_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define LE_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define LE_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define LE_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define LE_SetAnalogMode()      do { ANSELDbits.ANSELD0 = 1; } while(0)
#define LE_SetDigitalMode()     do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RD1 aliases
#define OE1_TRIS                 TRISDbits.TRISD1
#define OE1_LAT                  LATDbits.LATD1
#define OE1_PORT                 PORTDbits.RD1
#define OE1_WPU                  WPUDbits.WPUD1
#define OE1_OD                   ODCONDbits.ODCD1
#define OE1_ANS                  ANSELDbits.ANSELD1
#define OE1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define OE1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define OE1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define OE1_GetValue()           PORTDbits.RD1
#define OE1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define OE1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define OE1_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define OE1_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define OE1_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define OE1_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define OE1_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define OE1_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set RD2 aliases
#define OE2_TRIS                 TRISDbits.TRISD2
#define OE2_LAT                  LATDbits.LATD2
#define OE2_PORT                 PORTDbits.RD2
#define OE2_WPU                  WPUDbits.WPUD2
#define OE2_OD                   ODCONDbits.ODCD2
#define OE2_ANS                  ANSELDbits.ANSELD2
#define OE2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define OE2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define OE2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define OE2_GetValue()           PORTDbits.RD2
#define OE2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define OE2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define OE2_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define OE2_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define OE2_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define OE2_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define OE2_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define OE2_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/