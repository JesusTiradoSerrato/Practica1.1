/*
 * File:   main.c
 * Authores: Jesus Tirado Serrato
 *           Heriberto Sandoval Perez
 *           Guillermo Javier Carbajal Gardu�o
 * Created on 30 de agosto de 2018, 02:08 PM
 */


// 1. Secci�n Directivas pre-proceso
// Incluir librer�as
#include <xc.h>  //Esta es la librer�a principal del compilador
//en ella se encuentran todas las definiciones para el microcontrolador utilizado
#include "config.h"
// Definiciones
#define _XTAL_FREQ 32000000   //es para retardos
// Macros


// 2. Secci�n de declaraciones
//   Variables Globales


//   Prototipos de funciones



// 3. Secci�n de subrutinas
// MAIN: obligatorio para un programa en C
void main(void) {
    //Configuraci�n del Oscilador
    //OSCCON1bits.NOSC=0b110;
    // OSCCON1bits.NDIV=0b000;
    //OSCFRQbits.HFFRQ=0b110; //Selecciona la frecuencia de 32MHz del INTOSC
    //Configuraci�n de puertos
  //  PORTA=0;    //Limpia el puerto A
    PORTC=0;    //Limpia puerto 
  //  ANSELA =0;    //Declaro como 
    ANSELC=0;
   // TRISA=1;    //Puerto A como entrada
    TRISC=0;    //Puerto B como salidas
   // WPUA0=1;
 
//4. Inicia ciclo infinito
    while(1){
        LATCbits.LATC1=~LATCbits.LATC1 +1;  //Toggle bits RB0
        __delay_ms(500);                //Espera 1 segundo 
    }
    return;
}
//for(;;){
//}
// Subrutinas
