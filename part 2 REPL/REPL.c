#include "hardware/pio.h"                                                               //Standard RP2040 library
#include "pico/stdlib.h"                                                                //Standard C library
#include <stdio.h>                                                                      //Standard C library
#include "stdlib.h"                                                                     //Standard C library
#include "hardware/gpio.h"                                                              //Standard RP2040 library
#include "hardware/structs/sio.h"                                                       //Standard RP2040 library
#include "registers.h"                                                              //Custom Register Read library


int main(){
    stdio_init_all();                                                                   //Standard Library Initialization
    VALUE a;                                                                            //Read Register Variable Declaration
    long int command;                                                                   //Command Variable Declaration
    long int value;                                                                     //Value Variable Declaration
    char operation;                                                                     //REPL operatoin Variable Declaration                                                      //5sec recording of BOOT button storage Variable Declaration
                            
    while (!stdio_usb_connected()) {
      printf(".");
      sleep_ms(500);
    }
    printf("\nNow let's read and write freely\n");
    while(true){
        printf("\nPlease Select Mode(r:read/w:write)\n");
        sleep_ms(10);
        scanf(" %c",&operation);                                                        //Reading Character from Terminal, to perform the particular Action
        switch(operation){                                                              //Switch Case for execution of requested operation
            case 'r':                                                                   //Read Mode Case
                printf("\nRead Mode, Please Enter Address:");
                sleep_ms(10);
                scanf(" %x",&command);                                                  //Reading Address from terminal                                                
                a = register_read((ADDRESS)command);                                    //Reading the value from the requested Register
                printf("\n%x\n",a);                                                     //Printing the value of the register
                break;                                                                  //you should always put a break, statement after each case, otherwise, the code moves on to other case statements too
            case 'w':                                                                   //Write Mode Case
                printf("\nWrite Mode, Enter Address:");
                sleep_ms(10);                                                           
                scanf(" %x",&command);                                                  //Reading address from the terminal
                printf("\nPlease Type in the Value:");                 
                sleep_ms(10);                                                   
                scanf(" %x",&value);                                                    //Reading value to be set in the register from terminal
                register_write((ADDRESS)command,(VALUE)value);                          //Writing the value to the register address
                break;
            default:
                printf("Invalid Commmand\n");
                break;
        
        }
        sleep_ms(10);

    }
    return 0;
}