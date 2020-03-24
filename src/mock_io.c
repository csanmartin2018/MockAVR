// #include "avr/io.h"
// #include "util/parity.h"

#include <stdint.h>

volatile uint8_t virtualDDRA;
volatile uint8_t virtualPORTA;
volatile uint8_t virtualPINA;
volatile uint8_t virtualDDRB;
volatile uint8_t virtualPORTB;
volatile uint8_t virtualPINB;
volatile uint8_t virtualDDRD;
volatile uint8_t virtualPORTD;
volatile uint8_t virtualPIND;
volatile uint8_t virtualUSIBR;
volatile uint8_t virtualUSICR;
volatile uint8_t virtualUSIDR;
volatile uint8_t virtualUSISR;
volatile uint8_t virtualGIFR;
volatile uint8_t virtualGIMSK;
volatile uint8_t virtualPCMSK;
volatile uint8_t virtualEIFR;
volatile uint8_t virtualEIMSK;
volatile uint8_t virtualEICRA;
volatile uint8_t virtualINT0;

// timer0
volatile uint8_t virtualGTCCR;
volatile uint8_t virtualTCCR0A;
volatile uint8_t virtualTCCR0B;
volatile uint8_t virtualOCR0A;
volatile uint8_t virtualOCR0B;
volatile uint8_t virtualTIMSK;
volatile uint8_t virtualTIFR;
volatile uint8_t virtualTIFR0;
volatile uint8_t virtualTCNT0;

// timer1
volatile uint8_t virtualTCCR1;
volatile uint8_t virtualOCR1A;
volatile uint8_t virtualOCR1B;
volatile uint8_t virtualOCR1C;
volatile uint8_t virtualTCNT1;

// timer2
volatile uint8_t virtualTCCR2A;
volatile uint8_t virtualTCCR2B;
volatile uint8_t virtualOCR2A;
volatile uint8_t virtualOCR2B;
volatile uint8_t virtualTIMSK2;
volatile uint8_t virtualTIFR2;
volatile uint8_t virtualTCNT2;

// uart0
volatile uint16_t virtualUBRR0;
volatile uint8_t virtualUCSR0A;
volatile uint8_t virtualUCSR0B;
volatile uint8_t virtualUDR0;

// twi
volatile uint8_t virtualTWBR;  // TWI Bit Rate Register
volatile uint8_t virtualTWCR;  // TWI Control Register
volatile uint8_t virtualTWSR;  // TWI Status Register
volatile uint8_t virtualTWDR;  // TWI Data Register
volatile uint8_t virtualTWAR;  // TWI (Slave) Address Register
volatile uint8_t virtualTWAMR; // TWI (Slave) Address Mask Register

// prr
volatile uint8_t virtualPRR;

uint8_t parity_even_bit(const uint8_t v) {
    uint8_t ret = v;
    
    ret ^= ret >> 4;
    ret ^= ret >> 2;
    ret ^= ret >> 1;
    ret &= 0x01;
    
    return ret;
}
