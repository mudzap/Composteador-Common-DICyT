/**
 * @file        comm_defs.h
 * @brief	File for common defines and enums
 *
 *  Created on: Jun 16, 2021
 *      Author: Iván Guillermo Peña Flores
 */

#ifndef COMM_DEFS
#define COMM_DEFS

typedef enum Comm_Ids {
  ID_STOP_TX     = 0x00,
  ID_START_TX    = 0x01,
  ID_CALIBRATE   = 0x02,
  ID_SAMPLE_RATE = 0x03,
  ID_SENSOR_1    = 0x08,
  ID_SENSOR_2    = 0x09,
} Comm_Ids;

typedef struct Comm_Pack {
  int id;
  int rtr;
} Comm_Pack;

extern const Comm_Pack PACK_STOP_TX;
extern const Comm_Pack PACK_START_TX;
extern const Comm_Pack PACK_CALIBRATE;
extern const Comm_Pack PACK_SAMPLE_RATE;
extern const Comm_Pack PACK_SENSOR_1;
extern const Comm_Pack PACK_SENSOR_2;

#endif
