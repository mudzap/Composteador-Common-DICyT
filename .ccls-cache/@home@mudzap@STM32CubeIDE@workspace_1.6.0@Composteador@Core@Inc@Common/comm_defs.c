/**
 * @file        comm_defs.c
 * @brief	File for common definitions
 *
 *  Created on: Jun 16, 2021
 *      Author: Iván Guillermo Peña Flores
 */

#include "comm_defs.h"

const Comm_Pack PACK_STOP_TX = {
  .id = ID_STOP_TX,
  .rtr = 1
};

const Comm_Pack PACK_START_TX = {
  .id = ID_START_TX,
  .rtr = 1
};

const Comm_Pack PACK_CALIBRATE = {
  .id = ID_CALIBRATE,
  .rtr = 1
};

const Comm_Pack PACK_SAMPLE_RATE = {
  .id = ID_SAMPLE_RATE,
  .rtr = 0
};

const Comm_Pack PACK_SENSOR_1 = {
  .id = ID_SENSOR_1,
  .rtr = 0
};

const Comm_Pack PACK_SENSOR_2 = {
  .id = ID_SENSOR_2,
  .rtr = 0
};
