#ifndef QSAR_MODEL_ESP32_NEW_H
#define QSAR_MODEL_ESP32_NEW_H

/*
 Author: Mouli Sankaran 
 CAUTION: This is an auto generated file.
 DO NOT EDIT OR MAKE ANY CHANGES TO IT.
 This model data was generated on Sun Nov 10 22:48:39 2024

 Tools used:
 Python:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Numpy:1.19.5
 TensorFlow:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Keras: 2.7.0

 Model details are:
 NUM_OF_EPOCHS  = 100
*/
const int DENSE1_SIZE = 128;

alignas(8) const unsigned int QSAR_model_esp32_new_len = 3512;
const unsigned char QSAR_model_esp32_new[] = {
0x1c,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x14,0x00,0x20,0x00,
0x1c,0x00,0x18,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x00,0x00,
0x08,0x00,0x04,0x00,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x80,0x00,0x00,0x00,0xb0,0x00,0x00,0x00,0xcc,0x07,0x00,0x00,
0xdc,0x07,0x00,0x00,0x30,0x0d,0x00,0x00,0x03,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xe6,0xf7,0xff,0xff,
0x0c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x38,0x00,0x00,0x00,
0x0f,0x00,0x00,0x00,0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,
0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x00,0x01,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0xc4,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x33,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xb2,0xfc,0xff,0xff,0x04,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
0x69,0x6e,0x70,0x75,0x74,0x5f,0x32,0x00,0x01,0x00,0x00,0x00,
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
0x00,0x00,0x00,0x00,0xf4,0xf3,0xff,0xff,0xf8,0xf3,0xff,0xff,
0xfc,0xf3,0xff,0xff,0x00,0xf4,0xff,0xff,0x56,0xfd,0xff,0xff,
0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xc6,0x00,0x00,0x00,
0x66,0xfd,0xff,0xff,0x04,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0xf7,0x58,0x01,0xe0,0x02,0x28,0x1a,0x5a,0xc0,0x2f,0x64,0x08,
0x2f,0x4b,0x0e,0x0b,0xac,0x37,0x2a,0xf9,0x10,0xf9,0xd8,0x47,
0xff,0x35,0xfa,0xb4,0x24,0x05,0xf9,0x14,0xd8,0x66,0x0f,0xd2,
0x3c,0x4f,0xf7,0x06,0x09,0xe0,0x4c,0x05,0xf6,0xec,0xe6,0x07,
0xd4,0x2e,0xfa,0xec,0x9c,0x5c,0xb4,0x47,0x09,0xc3,0x5d,0xe2,
0xb9,0x54,0xe4,0x61,0xfc,0x42,0x55,0xe5,0xe9,0xfa,0xbf,0x00,
0xfb,0xee,0xd0,0xf1,0xd2,0x4f,0xde,0x56,0xf3,0x22,0x2a,0xd4,
0xc4,0xb0,0x0c,0x07,0xca,0x0e,0x67,0xc2,0x1b,0xd4,0xc5,0xda,
0x32,0xb9,0x44,0x34,0x3b,0xc7,0xb1,0xd9,0x35,0x12,0xb9,0xe9,
0x43,0xb8,0x27,0x0a,0x25,0xc2,0x28,0x7f,0xfa,0xdd,0xf9,0x48,
0x3b,0x47,0xeb,0xe6,0x06,0x3b,0xba,0x54,0xf2,0xfd,0xff,0xff,
0x04,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0xef,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xee,0xff,0xff,0xff,
0x0b,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
0x0e,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,0x14,0x00,0x00,0x00,
0x0e,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
0x0b,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0xf7,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0xef,0xff,0xff,0xff,0x09,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,
0xfc,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0xe6,0xff,0xff,0xff,
0x1c,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,
0x1d,0x00,0x00,0x00,0xea,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x07,0x00,0x00,0x00,0xed,0xff,0xff,0xff,0x1c,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0xf9,0xff,0xff,0xff,0x0e,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0xf3,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x0b,0x00,0x00,0x00,0xf7,0xff,0xff,0xff,0xf0,0xff,0xff,0xff,
0xf7,0xff,0xff,0xff,0x08,0x00,0x00,0x00,0xf6,0xff,0xff,0xff,
0x06,0x00,0x00,0x00,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0xf5,0xff,0xff,0xff,
0x10,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0xed,0xff,0xff,0xff,
0x0d,0x00,0x00,0x00,0xf4,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0x03,0x00,0x00,0x00,
0xf2,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0xfb,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xf2,0xff,0xff,0xff,
0xec,0xff,0xff,0xff,0xf1,0xff,0xff,0xff,0xf1,0xff,0xff,0xff,
0xfa,0xff,0xff,0xff,0xeb,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,
0xeb,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0xee,0xff,0xff,0xff,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,
0x0b,0x00,0x00,0x00,0xed,0xff,0xff,0xff,0xec,0xff,0xff,0xff,
0xfd,0xff,0xff,0xff,0x1a,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,
0xfe,0xff,0xff,0xff,0x0c,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0xee,0xff,0xff,0xff,
0xf7,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,0x0b,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
0x05,0x00,0x00,0x00,0xfb,0xff,0xff,0xff,0xfb,0xff,0xff,0xff,
0xf6,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
0xf6,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0xf5,0xff,0xff,0xff,0x0e,0x00,0x00,0x00,0x16,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0xf0,0xff,0xff,0xff,0x07,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xf1,0xff,0xff,0xff,0xf6,0xff,0xff,0xff,
0xef,0xff,0xff,0xff,0x1a,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x17,0x00,0x00,0x00,0xec,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x0d,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xf8,0xff,0xff,0xff,
0x04,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,
0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
0xe9,0x13,0x1e,0xdf,0x09,0x04,0xfc,0xec,0xce,0xc3,0xdc,0x2c,
0xf9,0xe2,0xc5,0x07,0xed,0x1c,0xd1,0xd1,0x17,0x07,0x0c,0xdd,
0xed,0x17,0x1b,0xb8,0xc6,0xcd,0xf6,0x19,0x05,0x0e,0x1b,0x38,
0xf0,0xea,0x25,0x1a,0xbe,0xcd,0x21,0x2d,0xf6,0xf8,0xcc,0x01,
0x13,0x0f,0xcf,0x1b,0xc6,0xd0,0x00,0xef,0x04,0xfd,0xe6,0x34,
0x06,0x09,0x05,0xdd,0xf9,0x02,0x16,0x0b,0xfa,0x16,0xfd,0xe2,
0x1d,0xec,0x07,0xf7,0x16,0x08,0x11,0xdf,0x03,0xcf,0x59,0xdc,
0x35,0x29,0x2e,0x25,0x10,0xf2,0xef,0x1d,0x2c,0xd7,0x22,0x09,
0x05,0x02,0xde,0x28,0x0c,0xee,0xc1,0xd8,0xee,0x0e,0x29,0x06,
0x1a,0x1f,0xfc,0xfc,0x2d,0xe5,0x02,0x13,0x14,0xf0,0x0a,0xe5,
0xe7,0x0e,0x0c,0xfd,0x12,0xee,0xff,0x29,0xdc,0x17,0x01,0xdc,
0x1b,0x01,0xe1,0xea,0xe6,0x01,0xfb,0xe8,0xec,0x11,0x2d,0x14,
0xd0,0xf5,0xd9,0x19,0x08,0xb5,0x16,0xd5,0x0d,0x14,0x20,0x08,
0xf3,0xd1,0xf7,0x20,0xe4,0x27,0xef,0x37,0xe2,0x0d,0xd2,0xca,
0xe6,0xf7,0x2d,0xf9,0x14,0xff,0x09,0x11,0xdd,0xfa,0x0d,0xf2,
0x20,0x2f,0xf4,0xfa,0xdf,0x11,0xf3,0x44,0xf5,0x19,0x24,0xe5,
0x06,0x19,0x14,0xa1,0xe9,0xfb,0x0b,0xdf,0x09,0xf7,0x22,0x47,
0x4a,0x06,0xe3,0xfd,0x1d,0x0d,0x02,0xf9,0x0d,0xef,0x23,0x03,
0x08,0xce,0x8e,0xd5,0xf9,0xe4,0xf7,0xda,0xfa,0x17,0xe6,0x03,
0xd7,0xe1,0xdb,0xe9,0x09,0x11,0xd4,0xfb,0x13,0xe9,0xef,0x25,
0xda,0x26,0xdb,0xc0,0xc3,0xf9,0xed,0xdf,0xe2,0x17,0xe6,0x33,
0x26,0x3a,0xed,0x1a,0xf1,0x16,0xea,0xac,0x05,0xf3,0x0d,0x09,
0xc3,0xde,0xfc,0x06,0x1d,0xf7,0xcb,0x1c,0x1f,0x00,0xc9,0xf6,
0xdc,0x32,0xfb,0xfe,0xea,0x19,0xd7,0xfb,0xcd,0xd3,0xc6,0xdb,
0xf2,0x06,0x23,0x5b,0x38,0x2a,0xe9,0xfd,0xcf,0xff,0xfa,0xf3,
0x2c,0xe6,0x08,0xdf,0x00,0xf3,0x17,0xce,0x19,0x15,0x0c,0x09,
0x28,0x01,0xd3,0x32,0x36,0xf8,0xe3,0x09,0x28,0xfb,0xcd,0x04,
0x27,0x32,0xf8,0x0c,0xfb,0x06,0x27,0xfc,0xc2,0xff,0x24,0xfa,
0xd2,0x1b,0x22,0x11,0xdd,0xf6,0x10,0xd1,0xf5,0x27,0xfa,0x01,
0x1c,0x1c,0xdf,0xd0,0x0d,0xe3,0x21,0x0c,0xe6,0xd9,0x04,0x0c,
0x03,0x02,0xee,0x08,0xc1,0xc1,0x30,0x22,0x17,0xec,0xe9,0x0b,
0xd4,0xe8,0x07,0xfc,0x01,0x1e,0x23,0xfe,0xef,0xfb,0x13,0xcf,
0x0e,0xe3,0xed,0x16,0xd7,0xc7,0xdd,0xee,0xea,0x15,0x15,0x2d,
0xee,0xdc,0x16,0xf9,0xe6,0x22,0x21,0xc8,0xee,0xc4,0x2e,0xea,
0xf2,0xe9,0xea,0xe5,0x17,0x07,0x20,0x04,0xd2,0x11,0xda,0xd2,
0xd5,0x35,0xeb,0xd5,0x01,0xdd,0x42,0x04,0x29,0x03,0xf0,0x29,
0x00,0x05,0xd3,0xf8,0xca,0xd6,0x15,0xd5,0x04,0xfb,0x0b,0x3d,
0x3d,0x05,0x14,0x04,0x18,0x17,0x1c,0x1b,0xdc,0xde,0xf3,0x10,
0x1a,0xee,0xdc,0xcc,0x09,0x03,0x0c,0xc7,0x01,0xcf,0x7f,0x12,
0x03,0xfc,0xf1,0x0f,0xd7,0x1e,0x13,0x0f,0xd3,0xf0,0x13,0x0c,
0x00,0xd8,0xf6,0xe3,0xf6,0xd6,0xf0,0x1e,0xe9,0xf9,0xfd,0xe8,
0xd3,0xdb,0x05,0xf1,0xff,0x07,0xdd,0xe9,0xba,0x0d,0xff,0xf6,
0xcc,0x00,0xfb,0x0d,0x12,0xb8,0xd3,0xe0,0xff,0x08,0xd2,0x0c,
0xf2,0xc4,0x1e,0xd2,0x04,0xff,0x1e,0x15,0x11,0x33,0x09,0x0e,
0xe4,0x03,0xed,0xe4,0xe0,0xcf,0xee,0xd9,0x05,0xf6,0xe2,0x0f,
0xd5,0xf5,0x1d,0xe8,0xe1,0x21,0x15,0xb7,0xda,0xd9,0xfa,0x09,
0x23,0xfe,0xee,0x06,0xe2,0xc5,0xd8,0x10,0xf5,0x0d,0xf8,0xbd,
0xdb,0xed,0xfd,0xf0,0x10,0x24,0xfe,0xc6,0xff,0x01,0x11,0x19,
0x0b,0x1c,0x0c,0xb8,0xe0,0xdd,0xf9,0xf6,0xf4,0xfe,0x21,0x0c,
0xf1,0xd9,0xf1,0xdd,0xfa,0x0f,0xed,0xc1,0xf3,0xa9,0xe4,0xdb,
0x00,0xfd,0x07,0xdc,0xe3,0x24,0x0e,0xf3,0x14,0xfc,0xe1,0xbc,
0xbb,0xc7,0x10,0xcf,0xe5,0x0e,0x1c,0x51,0x0e,0x2d,0xf3,0xe7,
0xf5,0x0e,0x21,0xe2,0xe2,0xfe,0xef,0x15,0xe7,0xca,0xde,0x23,
0xdd,0x1c,0xd7,0x0a,0xd8,0xfc,0xe8,0xd9,0xe2,0x2a,0xde,0x21,
0xff,0x07,0xf0,0x12,0x25,0xfd,0x13,0x02,0xe6,0x19,0xd2,0x0d,
0x23,0xd7,0x26,0xd7,0x12,0xf5,0x21,0x03,0xfb,0xc4,0xe5,0x03,
0xfd,0x07,0xd0,0xf5,0xde,0x06,0x18,0xee,0xee,0xf7,0x0f,0xe5,
0x1e,0x06,0x28,0xe2,0x1a,0xef,0xe3,0x19,0x22,0x4d,0x07,0xc3,
0x02,0x15,0xd0,0xf7,0xf8,0x24,0xd4,0x08,0xde,0xd4,0xf4,0x0b,
0xce,0x10,0x19,0x1b,0x27,0xf3,0xd8,0x10,0x05,0x25,0xee,0xf6,
0x09,0xf6,0x13,0x2f,0x25,0x1f,0xd8,0xe6,0xec,0xe6,0xe6,0xd3,
0x1b,0xd1,0xed,0xd6,0xdf,0x21,0x1b,0x2a,0x04,0x2c,0x0c,0xff,
0x1a,0xf1,0x04,0xb6,0xdf,0xc1,0x15,0x04,0x0f,0xe3,0xbb,0x14,
0xc8,0xc2,0xe8,0xef,0xf7,0x08,0xf4,0xe0,0x01,0xee,0x12,0xf2,
0x12,0xec,0xd7,0xf0,0x19,0xf7,0x0b,0xd9,0xdc,0xe6,0xdd,0xe7,
0x1a,0xd2,0x2d,0x24,0xd5,0x1d,0xfa,0x0e,0xf3,0xf3,0x1f,0xc7,
0xd2,0x1f,0xef,0x01,0xe9,0xf8,0x13,0xdf,0xfd,0x07,0x06,0x09,
0x15,0x03,0xf7,0xe3,0xf1,0x04,0x19,0x1a,0x08,0xe8,0xe2,0xed,
0xdc,0xfd,0x2c,0x0c,0xe5,0x02,0x0e,0xdd,0x1d,0xe4,0x29,0x11,
0xc2,0x0e,0xf3,0xea,0x01,0x00,0x01,0x4b,0x1d,0xfa,0xdd,0x18,
0x04,0x12,0xd5,0xfa,0x18,0x21,0xed,0x19,0xf1,0x09,0xee,0xfe,
0xf7,0xfd,0xf5,0xe8,0xe0,0xfb,0xfa,0xfc,0x07,0xe7,0xf6,0xd3,
0x0b,0xd9,0x2d,0x21,0xec,0x3a,0xc4,0xee,0xe6,0x12,0x00,0xd7,
0xda,0xf1,0x08,0x13,0xf6,0x08,0xed,0x08,0x2b,0x18,0x09,0xf7,
0x1e,0xf0,0x00,0x3d,0xf9,0x37,0xd7,0x0b,0xcc,0xd6,0xd3,0x1a,
0x0c,0xf7,0xe1,0xfe,0xde,0x1a,0xed,0x06,0xb6,0xc2,0xf2,0xca,
0x1a,0xf5,0x18,0xfd,0x2b,0xd9,0xd4,0xf7,0xca,0xd1,0x1a,0x14,
0x08,0xce,0xe9,0x09,0xce,0x26,0xdf,0xb4,0x14,0x15,0xfc,0x1c,
0x11,0xde,0xf5,0xcd,0x04,0xea,0x27,0xe8,0x04,0x20,0xe5,0xfa,
0xf4,0xd3,0xdc,0x23,0x07,0xf6,0xf9,0x39,0x4d,0x35,0x07,0xfe,
0xff,0x03,0x09,0x1f,0xee,0x2b,0x05,0x1a,0x10,0xf1,0x1a,0x40,
0x38,0x1b,0x0c,0xec,0x0c,0x06,0xfd,0x07,0xf1,0xe4,0x11,0xd6,
0xf7,0xf5,0xe6,0xe2,0x03,0x28,0xfb,0x00,0x0d,0x0b,0x05,0x02,
0xf4,0xfd,0xe9,0xd4,0xda,0xce,0xf2,0x37,0xda,0xbf,0xd7,0xf6,
0x02,0xde,0xd0,0xd3,0xeb,0x0c,0x2b,0xc1,0xde,0xcb,0xf1,0x20,
0xdd,0x13,0x17,0x16,0xc0,0xfa,0xff,0xff,0xc4,0xfa,0xff,0xff,
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
0x70,0xfb,0xff,0xff,0x01,0x00,0x00,0x00,0x07,0x00,0x00,0x00,
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
0xc4,0x03,0x00,0x00,0x38,0x03,0x00,0x00,0xd0,0x02,0x00,0x00,
0x64,0x02,0x00,0x00,0x08,0x02,0x00,0x00,0x9c,0x01,0x00,0x00,
0xd8,0x00,0x00,0x00,0x5c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0x74,0xfc,0xff,0xff,0x14,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,
0x1c,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x60,0xfc,0xff,0xff,0x19,0x00,0x00,0x00,0x53,0x74,0x61,0x74,
0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,
0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xdc,0xfe,0xff,0xff,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x54,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x01,0x00,0x00,0x00,0x4c,0xfd,0xff,0xff,0x08,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xc2,0xeb,0x0e,0x3d,0x1a,0x00,0x00,0x00,0x53,0x74,0x61,0x74,
0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,
0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x31,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x54,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x3c,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x88,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x80,0x00,0x00,0x00,0xc4,0xfd,0xff,0xff,0x08,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0xfd,0x7a,0xec,0x3e,
0x52,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,
0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x3b,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x2f,0x64,0x65,0x6e,
0x73,0x65,0x5f,0x32,0x2f,0x52,0x65,0x6c,0x75,0x3b,0x73,0x65,
0x71,0x75,0x65,0x6e,0x74,0x69,0x61,0x6c,0x5f,0x31,0x2f,0x64,
0x65,0x6e,0x73,0x65,0x5f,0x32,0x2f,0x42,0x69,0x61,0x73,0x41,
0x64,0x64,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x80,0x00,0x00,0x00,0x14,0x00,0x1c,0x00,0x18,0x00,0x17,0x00,
0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
0x14,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x3c,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x44,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x08,0x00,0x00,0x00,0x84,0xfe,0xff,0xff,0x08,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x83,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0xa4,0x2a,0x11,0x40,
0x0c,0x00,0x00,0x00,0x74,0x66,0x6c,0x2e,0x71,0x75,0x61,0x6e,
0x74,0x69,0x7a,0x65,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0xea,0xfe,0xff,0xff,
0x14,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x05,0x00,0x00,0x00,
0x00,0x00,0x00,0x02,0x3c,0x00,0x00,0x00,0xdc,0xfe,0xff,0xff,
0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x6a,0x19,0x85,0x3a,0x0c,0x00,0x00,0x00,
0x64,0x65,0x6e,0x73,0x65,0x5f,0x33,0x2f,0x62,0x69,0x61,0x73,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x42,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x48,0x00,0x00,0x00,
0x34,0xff,0xff,0xff,0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xe7,0x15,0x10,0x3b,
0x1b,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x33,
0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0xaa,0xff,0xff,0xff,
0x14,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x02,0x38,0x00,0x00,0x00,0x9c,0xff,0xff,0xff,
0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x5e,0xeb,0x23,0x3c,0x0c,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,
0x65,0x5f,0x32,0x2f,0x62,0x69,0x61,0x73,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,
0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,
0x0e,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x40,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x54,0x00,0x00,0x00,
0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x04,0x00,
0x0c,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x05,0x89,0x90,0x3b,
0x1b,0x00,0x00,0x00,0x73,0x65,0x71,0x75,0x65,0x6e,0x74,0x69,
0x61,0x6c,0x5f,0x31,0x2f,0x64,0x65,0x6e,0x73,0x65,0x5f,0x32,
0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x00,0x02,0x00,0x00,0x00,
0x80,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x14,0x00,0x18,0x00,
0x14,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,
0x00,0x00,0x04,0x00,0x14,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x20,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x38,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x08,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,
0x19,0x00,0x00,0x00,0x73,0x65,0x72,0x76,0x69,0x6e,0x67,0x5f,
0x64,0x65,0x66,0x61,0x75,0x6c,0x74,0x5f,0x69,0x6e,0x70,0x75,
0x74,0x5f,0x32,0x3a,0x30,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x44,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
0xf0,0xff,0xff,0xff,0x06,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0x00,0x00,0x00,0x06,0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,
0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x09,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x0c,0x00,0x0c,0x00,
0x0b,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,
0x72,0x00,0x00,0x00,0x00,0x00,0x00,0x72
};

#endif //QSAR_MODEL_ESP32_NEW_H