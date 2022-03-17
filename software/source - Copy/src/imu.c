/*
 * imu.c
 *
 *  Created on: Feb 23, 2022
 *      Author: rajat
 */


#include "i2c.h"
#include "imu.h"


#define SENSOR_IMU_ADDRESS 0x28 // IMU sensor adrress 0010 1001
#define INCLUDE_LOG_DEBUG 1
#include "src/log.h"

void init_imu()
{

//  i2c_write(SENSOR_IMU_ADDRESS, CMD_CHIP_ID);

  i2c_write_write(SENSOR_IMU_ADDRESS, CMD_OPR_MODE, 0x01);
  //i2c_read(SENSOR_IMU_ADDRESS, &data_buffer);
  //read_data_from_imu = i2c_write_read(SENSOR_IMU_ADDRESS, ACC_DATA_X_LSB, &read_data_from_imu);
//  read_data_from_imu = i2c_write_read(SENSOR_IMU_ADDRESS, 0x0E, &read_data_from_imu);
}

void imu_read_angle()
{
  uint8_t read_data_from_imu;
  //read_data_from_imu = i2c_write_read(SENSOR_IMU_ADDRESS, EUL_DATA_Z_LSB, &read_data_from_imu);
//  read_data_from_imu = i2c_write_read(SENSOR_IMU_ADDRESS, ACC_DATA_X_LSB, &read_data_from_imu);
//  LOG_INFO("imu data: %d\n\r", read_data_from_imu);
  LOG_INFO("imu data: %d\n\r");


}
