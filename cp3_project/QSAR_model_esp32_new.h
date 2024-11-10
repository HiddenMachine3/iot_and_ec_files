#ifndef QSAR_MODEL_ESP32_NEW_H
#define QSAR_MODEL_ESP32_NEW_H

/*
 Author: Mouli Sankaran 
 CAUTION: This is an auto generated file.
 DO NOT EDIT OR MAKE ANY CHANGES TO IT.
 This model data was generated on Sun Nov 10 23:06:59 2024

 Tools used:
 Python:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Numpy:1.19.5
 TensorFlow:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Keras: 2.7.0

 Model details are:
 NUM_OF_EPOCHS  = 100
*/
const int DENSE1_SIZE = 128;

alignas(8) const unsigned int QSAR_model_esp32_new_len = 3496;
const unsigned char QSAR_model_esp32_new[] = {
0x1c,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x14,0x00,0x20,0x00,
0x1c,0x00,0x18,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x00,0x00,
0x08,0x00,0x04,0x00,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x80,0x00,0x00,0x00,0xb0,0x00,0x00,0x00,0xcc,0x07,0x00,0x00,
0xdc,0x07,0x00,0x00,0x20,0x0d,0x00,0x00,0x03,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xe6,0xf7,0xff,0xff,
0x0c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x38,0x00,0x00,0x00,
0x0f,0x00,0x00,0x00,0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,
0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x00,0x01,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0xc4,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x31,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xb2,0xfc,0xff,0xff,0x04,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0x69,0x6e,0x70,0x75,0x74,0x5f,0x31,0x00,0x01,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x08,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,
0x08,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x13,0x00,0x00,0x00,0x6d,0x69,0x6e,0x5f,0x72,0x75,0x6e,0x74,
0x69,0x6d,0x65,0x5f,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x00,
0x0b,0x00,0x00,0x00,0x18,0x07,0x00,0x00,0x10,0x07,0x00,0x00,
0x00,0x03,0x00,0x00,0xe8,0x00,0x00,0x00,0x58,0x00,0x00,0x00,
0x44,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x2c,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x2a,0xfd,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x31,0x2e,0x31,0x34,0x2e,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x04,0xf4,0xff,0xff,0x08,0xf4,0xff,0xff,
0x0c,0xf4,0xff,0xff,0x10,0xf4,0xff,0xff,0x56,0xfd,0xff,0xff,
0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xa8,0x00,0x00,0x00,
0x66,0xfd,0xff,0xff,0x04,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0xc8,0x06,0x1c,0xf7,0xdf,0xcd,0x30,0xfd,0x45,0x07,0xb4,0xf9,
0xc0,0x32,0x0a,0x1e,0x35,0xf0,0x41,0xff,0xcb,0x00,0x01,0xd3,
0x15,0xde,0x6c,0xd1,0x3b,0x15,0xe8,0xd3,0xa2,0x62,0xef,0x3a,
0xeb,0x28,0x37,0x1a,0x40,0x09,0x0a,0x44,0x41,0xf9,0x0a,0x04,
0x55,0xf8,0xb3,0xc2,0x3a,0x30,0xfb,0xf8,0x20,0xd0,0xd5,0xdc,
0x32,0xac,0x2b,0xf5,0xd1,0xfd,0x3b,0x19,0xc1,0x13,0xb9,0x16,
0x1e,0x0e,0x1f,0xd1,0x2f,0xd3,0x33,0xd4,0x7f,0xf5,0xd5,0x07,
0xdd,0x1e,0xff,0x54,0x00,0x37,0x07,0xa5,0xe2,0x10,0x41,0x50,
0x07,0x50,0x20,0x15,0x45,0x29,0x1f,0xe8,0xc8,0x25,0x12,0xf3,
0x0f,0x49,0xbe,0x09,0xad,0x26,0x68,0xc6,0x2d,0x24,0xf4,0xb9,
0x28,0x11,0xf1,0x2a,0xed,0xec,0x11,0xbc,0xf2,0xfd,0xff,0xff,
0x04,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0xf4,0xff,0xff,0xff,
0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf7,0xff,0xff,0xff,
0xf1,0xff,0xff,0xff,0xe8,0xff,0xff,0xff,0x02,0x00,0x00,0x00,
0xed,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,
0xfb,0xff,0xff,0xff,0xf0,0xff,0xff,0xff,0xec,0xff,0xff,0xff,
0x06,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
0x0a,0x00,0x00,0x00,0xf6,0xff,0xff,0xff,0x09,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xea,0xff,0xff,0xff,0xf0,0xff,0xff,0xff,
0xf5,0xff,0xff,0xff,0xee,0xff,0xff,0xff,0x0a,0x00,0x00,0x00,
0xfd,0xff,0xff,0xff,0x1c,0x00,0x00,0x00,0xf3,0xff,0xff,0xff,
0x09,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xec,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,
0xf4,0xff,0xff,0xff,0x0b,0x00,0x00,0x00,0xec,0xff,0xff,0xff,
0x0f,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,
0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
0x1e,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0xed,0xff,0xff,0xff,
0x19,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xf3,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xe9,0xff,0xff,0xff,
0x16,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xee,0xff,0xff,0xff,
0xf0,0xff,0xff,0xff,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xea,0xff,0xff,0xff,0xea,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0xf5,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0xf9,0xff,0xff,0xff,
0xfc,0xff,0xff,0xff,0xf2,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf5,0xff,0xff,0xff,0x11,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfa,0xff,0xff,0xff,
0x0b,0x00,0x00,0x00,0xf4,0xff,0xff,0xff,0x0a,0x00,0x00,0x00,
0xf4,0xff,0xff,0xff,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xf6,0xff,0xff,0xff,0x13,0x00,0x00,0x00,0xe9,0xff,0xff,0xff,
0x03,0x00,0x00,0x00,0xe9,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0xf2,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x17,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf5,0xff,0xff,0xff,0x16,0x00,0x00,0x00,
0xfe,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,
0x18,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,
0x0b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf5,0xff,0xff,0xff,0x06,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf1,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x17,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0xee,0xff,0xff,0xff,0x1f,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
0xee,0xff,0xff,0xff,0xfb,0xff,0xff,0xff,0x05,0x00,0x00,0x00,
0x06,0x00,0x00,0x00,0xf6,0xff,0xff,0xff,0x0b,0x00,0x00,0x00,
0xec,0xff,0xff,0xff,0xed,0xff,0xff,0xff,0x0a,0x00,0x00,0x00,
0xfa,0xff,0xff,0xff,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,
0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
0x18,0xd9,0xdb,0xeb,0xe1,0xc6,0x20,0x0a,0x23,0xd8,0x14,0x03,
0xe8,0x02,0x12,0x24,0xe7,0xe2,0x29,0xd4,0x15,0xd9,0xfa,0xe2,
0x13,0xf3,0x20,0xf6,0xee,0xc5,0xe8,0x27,0xd3,0x23,0xe5,0xfe,
0xe6,0xe4,0x08,0x04,0x0e,0xfc,0xdd,0xcb,0xf4,0xca,0x06,0x0e,
0x10,0xfa,0x17,0x1f,0xe8,0xf6,0xdb,0xde,0x10,0x06,0xe5,0xcc,
0xff,0xbf,0xed,0xee,0xec,0xf1,0xf4,0xd8,0xd9,0x18,0xf3,0xd9,
0x0d,0x06,0xdb,0x05,0xe8,0x2f,0xdb,0x08,0xd3,0x0b,0x02,0xfd,
0x0c,0xdd,0xd0,0xe5,0x05,0x11,0x05,0xc3,0xee,0xee,0xfe,0xfd,
0x0d,0xfa,0xd1,0xda,0xe9,0xeb,0xd6,0x08,0x19,0xf3,0xe5,0x0e,
0xdb,0xe2,0xfe,0xf1,0x0f,0x13,0xcc,0x30,0x1a,0x01,0xee,0xf9,
0x04,0x00,0x11,0x36,0xe7,0x2e,0xe7,0xfe,0x15,0xec,0xe4,0x27,
0x10,0x21,0x14,0x1e,0x25,0xd7,0x18,0xda,0xfa,0xe4,0x36,0xd3,
0x15,0xf1,0xd4,0x24,0x20,0xf7,0xd0,0x0a,0x06,0xd2,0x06,0xf9,
0xed,0xe5,0xfb,0x1e,0x18,0xf1,0xd2,0xf9,0xd6,0xd1,0xd5,0xd6,
0x12,0x1f,0xe6,0xbc,0xea,0xd2,0xcf,0xe2,0x10,0x19,0xed,0xe8,
0x08,0xf2,0xdf,0xd9,0xef,0x10,0x0f,0xe5,0xc3,0x0e,0x01,0x14,
0xea,0x1a,0x04,0x0a,0xf0,0x2f,0x0b,0xe7,0xd5,0x13,0xd6,0x11,
0x14,0x0a,0xf1,0xfc,0xf5,0x06,0x36,0x42,0x17,0xf5,0x37,0xdd,
0xdf,0x17,0x1b,0xf7,0xed,0x17,0xfe,0xd6,0x17,0xef,0x22,0xfc,
0x11,0xf3,0x0e,0xe4,0x0e,0xd4,0x33,0xd1,0xd3,0x0e,0xce,0x03,
0xf5,0x12,0xd4,0xd8,0x02,0xd4,0x01,0x0e,0xde,0xdf,0xef,0x0f,
0xde,0xde,0x1a,0x29,0xda,0xf1,0xe3,0x02,0x04,0x47,0x0d,0xde,
0xe5,0x0d,0x1a,0x34,0x3d,0xed,0xf0,0x2b,0x1c,0xcf,0xca,0xb2,
0x15,0xcd,0x1f,0xc2,0x03,0xe5,0x7f,0xe7,0xe7,0x1c,0xd6,0xf4,
0xdd,0x23,0x1a,0xbf,0xfb,0x00,0xcf,0xf1,0xdb,0x18,0x2e,0x43,
0xf7,0xf7,0xfa,0xdd,0xf9,0x07,0xe5,0x34,0xf9,0x07,0x08,0xf9,
0xd5,0xff,0x24,0xd5,0xef,0x0c,0x05,0x22,0x0b,0xf9,0xe9,0x1e,
0xfb,0x24,0x05,0xdb,0xf6,0xd6,0xd6,0xdb,0xde,0xf3,0x0d,0xd7,
0x1f,0xdd,0xe5,0xe7,0x06,0x23,0x19,0xf6,0xfa,0xfb,0x78,0x4d,
0x3f,0x2a,0xf9,0xd8,0xf0,0x0d,0x01,0x18,0x20,0xe8,0x09,0x09,
0x0d,0x1d,0x09,0xc8,0xdf,0xf9,0x1f,0x07,0x1d,0xf1,0x16,0x2c,
0x04,0x1b,0xcd,0xf6,0x18,0x24,0xee,0x23,0xe4,0x07,0x19,0xd2,
0xd8,0xd0,0xdc,0x04,0x2e,0xe2,0x03,0x11,0x1d,0xea,0xef,0x11,
0xea,0xdb,0x20,0xf2,0x01,0xe5,0xda,0xd3,0xd0,0x04,0xec,0x10,
0x02,0x04,0xfe,0xc0,0xc9,0xb7,0xe8,0xeb,0x00,0xfe,0x1a,0x38,
0x2a,0x2f,0x15,0x00,0xd1,0xed,0xf1,0x2c,0xdc,0x1e,0xd6,0xdd,
0xd7,0x27,0x0c,0xbc,0xfd,0xfc,0x0a,0x19,0x12,0xf6,0xea,0xfe,
0xf7,0xf0,0xfc,0x26,0xf2,0x14,0x17,0xe4,0xce,0x16,0x08,0xef,
0xeb,0xf7,0x28,0xdf,0xd4,0x2c,0xeb,0xd6,0x0e,0xfe,0xcd,0xe0,
0xbd,0xe3,0xe0,0x0f,0xfa,0x0e,0xe6,0xb4,0xce,0xed,0xc9,0x1a,
0x0e,0xff,0xe3,0xe6,0xe8,0x09,0xbe,0x03,0xf4,0x0b,0x0a,0x0d,
0xd3,0xd7,0xfd,0xf7,0xdd,0xe5,0xf0,0xe3,0xe8,0x10,0xf7,0xd9,
0xe6,0x0e,0x11,0xf2,0xf9,0x04,0xd1,0x2b,0x0f,0xeb,0x1b,0xd6,
0xe3,0xf4,0x05,0xcc,0xeb,0x20,0xf4,0xd1,0xf4,0x01,0xf5,0xe4,
0xec,0x0f,0x01,0x04,0xe3,0x14,0xd5,0x1d,0xef,0xdc,0xd6,0xf5,
0xec,0x12,0xfa,0x03,0xd6,0x1e,0xfb,0x03,0xe9,0xe1,0x0d,0x2a,
0x1f,0xe5,0xd4,0x2f,0x38,0x1a,0xf7,0x3f,0xe5,0xe8,0xfc,0x03,
0xfd,0x57,0xe2,0x1d,0xfb,0xe3,0x27,0x0e,0xd4,0xe0,0xe7,0x0f,
0xe6,0x1c,0x18,0xf3,0xe3,0x10,0xe2,0xf4,0x24,0xe0,0xc6,0x16,
0x10,0x01,0xe0,0x00,0xd4,0xdc,0x0f,0xfd,0xd5,0xea,0x13,0xfe,
0xee,0xe8,0x29,0x04,0x01,0x1e,0x0b,0xdc,0xf0,0x0d,0x0b,0x2f,
0x17,0xf5,0xd7,0xfd,0xf6,0x0b,0xe3,0xe1,0xdd,0xce,0x07,0xdc,
0xf1,0x0d,0xea,0x1c,0xe4,0x2e,0xeb,0xd5,0x18,0xd1,0x26,0x0e,
0xcb,0xc0,0xf9,0xeb,0xfb,0xfe,0x69,0x15,0x36,0x22,0x04,0xe3,
0xe9,0xfe,0x0b,0xde,0xec,0xdb,0x00,0xf0,0xde,0x17,0x22,0xfc,
0x00,0x15,0x1b,0x07,0x1c,0xef,0x03,0x43,0x16,0x2e,0x01,0x05,
0xfb,0x10,0xcd,0xbe,0xb6,0xcf,0xf0,0xc6,0x16,0xfd,0xe4,0xee,
0x15,0xd1,0x09,0xce,0x19,0x11,0x27,0xd0,0xe8,0xf0,0xec,0xd7,
0xe1,0xfd,0x19,0x15,0x1f,0xd0,0x11,0xff,0x1e,0x24,0x04,0xf4,
0x03,0xf0,0x1e,0xdd,0xcf,0xd8,0xfc,0x12,0x04,0x09,0x25,0x26,
0x22,0xe9,0x0b,0x1c,0x19,0x42,0x17,0x21,0xf3,0xf9,0xe0,0xe2,
0x1f,0x02,0x1b,0x20,0xd5,0x1b,0x28,0xfb,0x1b,0x1c,0xfd,0xd8,
0x11,0xf4,0x1f,0x3c,0xf3,0x1d,0x25,0xd6,0xe8,0xff,0x18,0xee,
0xdc,0x27,0x1f,0xf5,0xff,0xff,0x26,0x14,0x34,0x39,0xe3,0xfd,
0xea,0xeb,0x17,0x17,0xeb,0x13,0x17,0x27,0xfd,0x02,0xfc,0x22,
0x4b,0x1f,0xe3,0x27,0x20,0xd6,0xe9,0x08,0x30,0x02,0x05,0xed,
0x18,0xe7,0xf3,0x1f,0x10,0x3d,0xe9,0x1e,0xf1,0x0c,0x08,0x14,
0x1d,0xf1,0xd2,0x16,0xda,0xe7,0x04,0xe8,0x06,0x03,0x0a,0x02,
0x1a,0xed,0xd4,0x32,0x23,0x4a,0xf0,0xfe,0xec,0xff,0xe7,0xfd,
0xd9,0x17,0x12,0xdf,0xf6,0xef,0x14,0x10,0x1c,0xfb,0xfb,0xe8,
0xd3,0x1f,0x17,0xec,0xde,0xde,0xd7,0x19,0xef,0xd9,0x0c,0xea,
0xec,0x1b,0x05,0x00,0x12,0xe1,0xd5,0x07,0xd3,0xde,0x1e,0xca,
0xfe,0x19,0xd0,0xf8,0xff,0xfb,0xed,0xf6,0xea,0xd4,0xe3,0xfe,
0xe3,0xf7,0x2b,0xf7,0x05,0xfa,0x2b,0xfe,0x08,0xcf,0x2c,0xf9,
0x0c,0x0c,0x14,0x02,0x1e,0x02,0xca,0xec,0xf9,0xda,0xfa,0xe3,
0x0b,0x11,0x16,0x07,0xfb,0x05,0xd4,0x58,0x21,0x28,0x13,0x12,
0xff,0xe3,0x6f,0x1f,0xf4,0x11,0x11,0xf1,0x1a,0xe9,0x0f,0x08,
0xee,0xb6,0xd1,0x12,0xfd,0x01,0x02,0x30,0x59,0xf6,0x2b,0x27,
0xdf,0x02,0xfd,0xe9,0xda,0xd8,0x15,0x16,0x03,0x09,0x2a,0xc5,
0xe8,0x09,0xfe,0x0b,0xfa,0xed,0xee,0x13,0xd2,0x22,0xfe,0x07,
0xf8,0x0f,0x14,0x34,0x06,0xe2,0xeb,0xee,0x24,0xdb,0xed,0xe9,
0xdb,0x1b,0xd3,0x1f,0xf7,0x0b,0xe4,0xc5,0xd8,0xf5,0xf5,0xfb,
0x09,0xff,0xd8,0x34,0xe9,0x07,0xcc,0xf6,0x1c,0xfa,0xea,0xd9,
0xbf,0xda,0xe2,0x1c,0x09,0x03,0xea,0xe0,0xf0,0xc9,0xfa,0xf8,
0xed,0x1f,0xde,0x35,0x2e,0x19,0x21,0x16,0x0b,0xed,0x02,0xd8,
0xee,0xd1,0x55,0xf8,0xd0,0xfa,0xff,0xff,0xd4,0xfa,0xff,0xff,
0x0f,0x00,0x00,0x00,0x4d,0x4c,0x49,0x52,0x20,0x43,0x6f,0x6e,
0x76,0x65,0x72,0x74,0x65,0x64,0x2e,0x00,0x01,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,
0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x04,0x01,0x00,0x00,
0x08,0x01,0x00,0x00,0x0c,0x01,0x00,0x00,0x04,0x00,0x00,0x00,
0x6d,0x61,0x69,0x6e,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xcc,0x00,0x00,0x00,0x7c,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x10,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x0a,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0xca,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x08,
0x10,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x80,0xfb,0xff,0xff,0x01,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x1a,0x00,0x14,0x00,
0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x1c,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x06,0x00,
0x08,0x00,0x07,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x01,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x05,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x00,0x00,0x0a,0x00,0x0c,0x00,0x00,0x00,0x08,0x00,0x04,0x00,
0x0a,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
0xb4,0x03,0x00,0x00,0x30,0x03,0x00,0x00,0xc8,0x02,0x00,0x00,
0x5c,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x94,0x01,0x00,0x00,
0xd8,0x00,0x00,0x00,0x5c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x84,0xfc,0xff,0xff,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x70,0xfc,0xff,0xff,0x19,0x00,0x00,0x00,0x53,0x74,0x61,0x74,
0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,
0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xe4,0xfe,0xff,0xff,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x54,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x01,0x00,0x00,0x00,0x54,0xfd,0xff,0xff,0x08,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x87,0x06,0x06,0x3d,0x1a,0x00,0x00,0x00,0x53,0x74,0x61,0x74,
0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,
0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x31,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x5c,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x80,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x80,0x00,0x00,0x00,0xcc,0xfd,0xff,0xff,0x08,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x51,0xdf,0x14,0x3f,0x46,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,
0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,
0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,0x71,0x75,0x65,0x6e,
0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x42,
0x69,0x61,0x73,0x41,0x64,0x64,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x14,0x00,0x1c,0x00,
0x18,0x00,0x17,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,
0x00,0x00,0x04,0x00,0x14,0x00,0x00,0x00,0x18,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x3c,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
0x00,0x00,0x00,0x09,0x44,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x08,0x00,0x00,0x00,0x84,0xfe,0xff,0xff,
0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x83,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0xa4,0x2a,0x11,0x40,0x0c,0x00,0x00,0x00,0x74,0x66,0x6c,0x2e,
0x71,0x75,0x61,0x6e,0x74,0x69,0x7a,0x65,0x00,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0xea,0xfe,0xff,0xff,0x14,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x3c,0x00,0x00,0x00,
0xdc,0xfe,0xff,0xff,0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x4b,0x03,0xaf,0x3a,
0x0c,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,
0x62,0x69,0x61,0x73,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x42,0xff,0xff,0xff,0x14,0x00,0x00,0x00,
0x34,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x48,0x00,0x00,0x00,0x34,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xbe,0x79,0x16,0x3b,0x19,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,
0x5f,0x31,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0xaa,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x38,0x00,0x00,0x00,
0x9c,0xff,0xff,0xff,0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xd3,0xfc,0x2e,0x3c,
0x0a,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,0x65,0x2f,0x62,0x69,
0x61,0x73,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x3c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x4c,0x00,0x00,0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,
0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x69,0x4b,0x9a,0x3b,
0x17,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,0x2f,0x4d,0x61,0x74,
0x4d,0x75,0x6c,0x00,0x02,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x14,0x00,0x18,0x00,0x14,0x00,0x00,0x00,
0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
0x14,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x38,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x19,0x00,0x00,0x00,
0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,0x64,0x65,0x66,0x61,
0x75,0x6c,0x74,0x5f,0x69,0x6e,0x70,0x75,0x74,0x5f,0x31,0x3a,
0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x08,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x44,0x00,0x00,0x00,
0x24,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,
0x06,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x06,
0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,
0x0c,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x00,0x00,0x00,0x09,0x0c,0x00,0x0c,0x00,0x0b,0x00,0x00,0x00,
0x00,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x72,0x00,0x00,0x00,
0x00,0x00,0x00,0x72
};

#endif //QSAR_MODEL_ESP32_NEW_H