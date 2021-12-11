/* 
 * File:   ADS.h
 * Author: 佐々木翔
 *
 * Created on 2021/06/30, 11:21
 * Discription 姿勢決定系のヘッダファイル
 */

#ifndef ADS_H
#define	ADS_H

/*---ADS CAN Message---*/
/* SIDH */
#define SIDH_READ   0b10100000
#define SIDH_MODE   0b10100001
#define SIDH_DATA1  0b10100101
#define SIDH_DATA2  0b10100110
#define SIDH_DATA3  0b10100111
#define SIDH_DATA4  0b10101000
#define SIDH_DATA5  0b10101001
#define SIDH_DATA6  0b10101010

/* SIDL */
#define SIDL_W      0b00001001                                                  //Wの時のID
#define SIDL_R      0b00001000                                                  //Rの時のID

/* EID8 */
#define EID8_MODE   0b00000000
#define EID8_DATA1  0b00000000
#define EID8_DATA2  0b00000000
#define EID8_DATA3  0b00000000
#define EID8_DATA4  0b00000000
#define EID8_DATA5  0b00000000
#define EID8_DATA6  0b00000000


/* EID0 */
#define EID0_MODE   0b00000100
#define EID0_DATA1  0b00001010
#define EID0_DATA2  0b00001011
#define EID0_DATA3  0b00001100
#define EID0_DATA4  0b00001101
#define EID0_DATA5  0b00001110
#define EID0_DATA6  0b00001111


/* Filter */
#define Sub_Filt    0b10100000


/*---Modebit---*/
#define _ChargeMode                          0b00000001
#define _COMMMode                            0b00000010
#define _StanbyMode                          0b00000011
#define _MissionMode                         0b00000100
#define _SafetyMode                          0b00000101

#endif


