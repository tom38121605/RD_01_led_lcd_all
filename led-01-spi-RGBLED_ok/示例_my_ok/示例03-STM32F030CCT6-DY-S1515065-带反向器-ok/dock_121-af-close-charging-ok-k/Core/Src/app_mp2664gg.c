
#include "app_mp2664gg.h"

#define MP2664GG_INPUTSOURCE_CONTROL_REG        0x00
#define MP2664GG_POWERON_CONFIG_REG             0x01
#define MP2664GG_CHARGECURRENT_CONTROL_REG      0x02
#define MP2664GG_DISCHARGECURRENT_REG           0x03
#define MP2664GG_CHARGEVOLTAGE_CONTROL_REG      0x04
#define MP2664GG_CHARGETIME_CONTROL_REG         0x05
#define MP2664GG_MPSOPERATION_CONTROL_REG       0x06
#define MP2664GG_SYSTEMVOLTAGE_REGULATION_REG   0x07
#define MP2664GG_SYSTEMSTATUS_REG               0x08
#define MP2664GG_FAULT_REG                      0x09


uint8_t mp2664gg_getreg(uint8_t ireg)
{
   uint8_t itempval=0;
   
   itempval=i2c_readreg( DEVICEADDR_MP2664GG, ireg);   
   
   return itempval;   
}

void mp2664gg_setreg( uint8_t ireg, uint8_t ival)
{  
   i2c_writereg( DEVICEADDR_MP2664GG, ireg, ival);        
} 








