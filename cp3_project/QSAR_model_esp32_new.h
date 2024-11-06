#ifndef QSAR_MODEL_ESP32_NEW_H
#define QSAR_MODEL_ESP32_NEW_H

/*
 Author: Mouli Sankaran 
 CAUTION: This is an auto generated file.
 DO NOT EDIT OR MAKE ANY CHANGES TO IT.
 This model data was generated on Wed Nov  6 00:20:26 2024

 Tools used:
 Python:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Numpy:1.19.5
 TensorFlow:3.7.16 (default, Jan 17 2023, 16:06:28) [MSC v.1916 64 bit (AMD64)]
 Keras: 2.7.0

 Model details are:
 NUM_OF_EPOCHS  = 5
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
0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,
0x66,0xfd,0xff,0xff,0x04,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0x5c,0xd1,0x11,0xa4,0xb9,0xcf,0x24,0x9e,0x1e,0xab,0x06,0x68,
0x41,0x49,0x48,0x7f,0xe6,0xee,0x4b,0x60,0x0c,0xa1,0xa2,0x09,
0xcc,0x34,0xac,0x37,0xba,0x11,0x0b,0xb6,0x27,0xc0,0x16,0xf8,
0xbe,0xb4,0x1e,0x50,0xf4,0xf9,0xf5,0xf9,0xfe,0x1b,0x44,0xa6,
0xfd,0x26,0x2d,0x09,0xf8,0xac,0x5d,0xa2,0x50,0xd3,0x7a,0x32,
0xe9,0xe8,0x2c,0x05,0xd7,0x4c,0xf4,0xf6,0x9d,0x30,0x27,0x61,
0xa3,0x08,0xe3,0xea,0x4c,0x47,0xd0,0xc9,0xb2,0x19,0xf3,0x52,
0x4f,0x21,0xba,0xb7,0xfe,0x11,0xd8,0x15,0x25,0x09,0xff,0xcd,
0x50,0xcc,0x30,0x01,0xe7,0xcf,0x50,0x52,0x42,0x24,0xd8,0x37,
0x09,0xf7,0x47,0xe7,0xf6,0xd9,0xf6,0xdf,0x28,0xb4,0xda,0xcc,
0xba,0xfb,0xda,0x4b,0x3a,0x32,0x0c,0x01,0xf2,0xfd,0xff,0xff,
0x04,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x00,
0xfc,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfd,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xfa,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,
0xfb,0xff,0xff,0xff,0x0c,0x00,0x00,0x00,0x0a,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
0xf6,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0x01,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
0xfe,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0xfa,0xff,0xff,0xff,
0x0d,0x00,0x00,0x00,0xfb,0xff,0xff,0xff,0x03,0x00,0x00,0x00,
0xfb,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xfb,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0xfb,0xff,0xff,0xff,
0x04,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,0xf9,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0x0c,0x00,0x00,0x00,
0xf9,0xff,0xff,0xff,0xfb,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,
0xfe,0xff,0xff,0xff,0xf7,0xff,0xff,0xff,0x0e,0x00,0x00,0x00,
0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfa,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xfb,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,
0xfc,0xff,0xff,0xff,0x0c,0x00,0x00,0x00,0xfd,0xff,0xff,0xff,
0x0c,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
0xfb,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xfc,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
0xfd,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xf7,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x01,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,
0x00,0x00,0x00,0x00,0xfb,0xff,0xff,0xff,0x03,0x00,0x00,0x00,
0xfd,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0xfc,0xff,0xff,0xff,0xfa,0xff,0xff,0xff,
0xf8,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0xf6,0xff,0xff,0xff,
0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,
0xf7,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,
0xfd,0xff,0xff,0xff,0x03,0x00,0x00,0x00,0xf9,0xff,0xff,0xff,
0xfd,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0x0c,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xf7,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf9,0xff,0xff,0xff,
0xfd,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0xf6,0xff,0xff,0xff,
0xfb,0xff,0xff,0xff,0xfb,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
0xfa,0xff,0xff,0xff,0xf6,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
0xff,0xff,0xff,0xff,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,
0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
0x17,0xf8,0xf3,0xf4,0x48,0xd6,0xb4,0xc3,0xba,0x46,0xc1,0xbc,
0x47,0x26,0x09,0x37,0xd9,0x3f,0xc5,0x52,0xaf,0xc7,0xdb,0x49,
0xe6,0xc2,0xda,0x0c,0xc4,0xda,0x4a,0xa4,0x55,0xbb,0xfc,0xb3,
0x50,0xba,0x1f,0xaf,0xa8,0xcd,0x20,0xb3,0xca,0xec,0x56,0x10,
0x43,0xf7,0x29,0x36,0xaf,0xf8,0xcb,0xb5,0x57,0x3b,0x48,0x44,
0x16,0x2d,0x36,0xe4,0xdf,0xd7,0x50,0x74,0x7f,0x27,0x18,0x2d,
0x3d,0xe9,0x30,0xc5,0xaf,0x19,0x1f,0x2f,0xcb,0xeb,0x0b,0x14,
0x2a,0xc1,0xe8,0xef,0xae,0xe2,0xc4,0x42,0xde,0x05,0x32,0xf6,
0x17,0xbf,0x0d,0x03,0x49,0xf6,0x00,0x07,0x4b,0xdd,0x26,0x4f,
0xf8,0x35,0x01,0x28,0x42,0x00,0x26,0xb2,0xff,0x4d,0xe4,0x53,
0x0d,0x00,0x32,0x7d,0x1f,0x30,0xfa,0x25,0xea,0xbe,0xd9,0x06,
0x07,0x06,0x0b,0xd4,0xfe,0x4a,0xd7,0xd2,0x1c,0x9f,0x58,0xda,
0x4c,0x0e,0x9d,0xe6,0xd0,0xc8,0x48,0xa2,0xd3,0xd7,0x20,0x4b,
0x48,0x37,0xf3,0xba,0xf7,0x02,0xce,0x06,0x9f,0xf0,0xbd,0xe1,
0x1d,0x05,0x5e,0xfd,0x42,0xd2,0x5a,0xeb,0x19,0xfa,0xc3,0xb2,
0x42,0xe0,0xae,0xb0,0x17,0x17,0xd5,0x00,0xfc,0xff,0xd3,0xac,
0xd5,0x21,0x4f,0x0b,0x1e,0xfe,0x44,0xd8,0xe8,0xef,0x06,0x72,
0x27,0x3d,0x33,0x1d,0xd0,0x5a,0x5f,0x25,0xb6,0xcf,0xd7,0x34,
0xd4,0x4c,0xc8,0x2a,0xf7,0x1c,0xe4,0xab,0x3a,0xdb,0x27,0x04,
0x4b,0x49,0xb4,0xf1,0xd5,0xbe,0xe9,0xbe,0xee,0x29,0xca,0xaa,
0xb8,0xbf,0x36,0xce,0xbd,0x09,0x50,0x12,0x01,0x36,0xc9,0xfe,
0x21,0xe7,0xd8,0x60,0x28,0xaf,0x3e,0xdf,0xb8,0xe9,0xd2,0xa0,
0x5b,0xd7,0xde,0x48,0xa9,0x0a,0x0a,0xcc,0xc7,0x38,0x37,0x62,
0x2f,0x62,0xe2,0xed,0x59,0xcb,0x12,0xe4,0xef,0xea,0xd4,0xf9,
0x45,0xb6,0x3c,0x0e,0x3c,0x04,0xe5,0x1c,0xc0,0x16,0x5b,0xb6,
0xe9,0x28,0xa6,0x16,0xb0,0x26,0x44,0xae,0x1d,0xa4,0xd8,0xf2,
0xe6,0xf4,0xe8,0x17,0x13,0x5b,0xaf,0x57,0xe6,0xc7,0x54,0x35,
0xb4,0xa7,0xd7,0x1f,0x5e,0x56,0x5e,0x4a,0x3b,0x24,0x19,0x43,
0x4e,0x59,0x5a,0xb1,0x44,0xa0,0x1d,0x4b,0xae,0xa5,0xd4,0xa2,
0x30,0x52,0x0b,0x3b,0xf8,0x4b,0xa3,0xe8,0x2c,0x13,0xce,0x5a,
0xda,0xe6,0x40,0x59,0x3e,0xd9,0x3c,0xec,0xd6,0x37,0xba,0x17,
0x54,0x25,0x32,0x20,0xe2,0xb3,0x45,0x1c,0xba,0xb1,0x00,0x2e,
0xe9,0x14,0x48,0x02,0xc4,0x97,0xc6,0x03,0xd8,0xe8,0xca,0xfe,
0x0b,0xcc,0xb8,0x58,0x4d,0xae,0x14,0xb9,0x02,0xdb,0xc5,0xfa,
0x33,0x35,0xc0,0x0c,0xc1,0xa7,0x1b,0x1e,0xc2,0xe6,0xfc,0xd7,
0xd1,0x35,0xfa,0xea,0xbf,0xa8,0x57,0x09,0xf6,0xb7,0xba,0xdd,
0xda,0x21,0xb7,0x5f,0x61,0x65,0x3e,0xee,0x52,0x11,0x3a,0xd7,
0xbc,0xb0,0xc5,0x0b,0x04,0xff,0x4f,0xf5,0x0a,0x52,0x2f,0x5c,
0x2f,0xe7,0x54,0xa2,0x50,0x36,0x5e,0xf7,0xaf,0xe1,0x57,0xfb,
0x0d,0x69,0xb8,0xe0,0x04,0x2c,0x4a,0x3c,0x00,0xeb,0x0b,0x54,
0x1c,0x2f,0x58,0x13,0xba,0x04,0xcd,0xab,0x14,0xe5,0x09,0x1b,
0x9c,0x44,0xab,0x38,0x13,0x2f,0xb7,0xd0,0x22,0xd0,0xbe,0x51,
0x05,0x0f,0x08,0x6a,0x45,0xb7,0x9e,0xfe,0x3b,0xeb,0x48,0x1a,
0x52,0x2a,0xc8,0xd4,0x49,0xf8,0x10,0x43,0xf2,0x13,0x4c,0x29,
0x41,0xef,0xbc,0x2e,0xd4,0xa1,0xf8,0xe5,0xf2,0x51,0x02,0xe0,
0xaf,0x39,0x5e,0xfa,0xe0,0xb3,0xf6,0xb4,0x31,0xa4,0x10,0xe3,
0x4d,0x0d,0xd0,0x31,0x4e,0x36,0x26,0x43,0x43,0x4a,0x03,0x53,
0x35,0x5c,0x1b,0x0d,0x54,0xbd,0xa3,0x60,0x23,0x13,0x02,0xe5,
0xfb,0x15,0xdc,0xc0,0x01,0x47,0x50,0x06,0x48,0xcc,0xb0,0xc1,
0xd0,0xfc,0x52,0x4d,0xb9,0x54,0x3a,0xab,0xcf,0xf0,0xa5,0xfa,
0xa4,0x0a,0x5c,0x24,0x23,0xa8,0xdb,0x53,0xdf,0x0e,0xf2,0xd9,
0x0c,0xe1,0xce,0xd4,0x34,0x10,0xc3,0xd0,0xcf,0x0f,0x33,0xb4,
0xb8,0x49,0x3d,0xef,0x0e,0xf2,0xbc,0x43,0xfa,0xf4,0x51,0xd9,
0xef,0xd2,0xf0,0x14,0x18,0x1c,0x45,0x44,0x39,0xf8,0xfc,0xb2,
0xf9,0x51,0xd2,0x5c,0x42,0x17,0xf0,0xf7,0x00,0x29,0xb0,0xe6,
0xe1,0x17,0x04,0x46,0x46,0x08,0x4d,0xc6,0xd7,0x02,0x40,0xd1,
0x37,0x2b,0xac,0xbb,0xc0,0xaf,0xe1,0xfc,0x48,0xe8,0x42,0x21,
0xba,0xd8,0xd5,0xaf,0xc2,0xb1,0x24,0xe8,0xe7,0x35,0x27,0x4f,
0x20,0x3d,0xa6,0x2a,0x3d,0x00,0x58,0xac,0xe1,0x18,0x1b,0x14,
0xd2,0x44,0xc3,0xda,0xfe,0xa7,0x05,0xc9,0x29,0x04,0xfa,0xc2,
0xd0,0xcf,0x18,0x35,0xe8,0xa0,0x53,0x34,0xbf,0x26,0xc3,0xf7,
0x43,0xf3,0xc5,0xfe,0x34,0x1c,0xb4,0x59,0xdb,0xef,0x46,0xc9,
0x23,0xb4,0xea,0x24,0x46,0x55,0xc1,0xe7,0x3a,0xf4,0xe0,0x1c,
0x1d,0xb0,0x0a,0xb1,0xcb,0xc8,0x0c,0xd7,0xbf,0x15,0xda,0xf0,
0x47,0x26,0x48,0x4d,0x3d,0x09,0x11,0x48,0x50,0x3c,0xab,0xb9,
0xa3,0xa5,0x43,0xb4,0x03,0x52,0x9f,0x30,0xd6,0xf0,0xec,0xac,
0xc2,0x28,0xa2,0x35,0x1d,0x47,0xba,0x36,0x5a,0x24,0xac,0x98,
0x32,0x02,0xf4,0xec,0x00,0x2f,0xb4,0x32,0xb2,0xcc,0x05,0x43,
0x2d,0xd8,0xdd,0xc8,0x24,0x1a,0xc9,0xc9,0xd5,0xff,0x30,0x4a,
0x6d,0x5d,0xcb,0x5c,0x31,0x0d,0x01,0x30,0x22,0xce,0x0b,0x57,
0xdd,0xd0,0xf8,0x46,0x38,0x47,0xcc,0xf6,0xae,0xad,0xa7,0xfd,
0xb4,0xc5,0x14,0xe0,0x2c,0x0a,0x32,0xef,0xaa,0xc8,0x4e,0xce,
0x35,0x53,0x12,0xbd,0x23,0x19,0xc4,0xb3,0x0a,0xc0,0x37,0x40,
0xdd,0xa3,0x5b,0x2f,0xe1,0x19,0x07,0x66,0xd1,0x44,0xb1,0x04,
0xb1,0xec,0x2b,0xb8,0xf6,0x05,0x02,0x24,0xb3,0xd7,0xaa,0xbb,
0x1b,0xb1,0xf9,0x3b,0xe0,0xf8,0xb6,0x0b,0xe8,0xe3,0x50,0x37,
0x25,0xc0,0x3b,0x3c,0x98,0x00,0xbe,0xdf,0x55,0x29,0x48,0xd7,
0xf3,0xc2,0xe1,0xcf,0xab,0x3e,0xa3,0x08,0x23,0x2f,0x43,0x39,
0x9d,0xa8,0xfd,0x3c,0x46,0x21,0xae,0x37,0xea,0xaa,0xb1,0xd7,
0x46,0xe4,0x28,0x0d,0x09,0x5d,0xc2,0xf0,0x41,0x45,0x48,0x28,
0xa4,0xff,0x0d,0x11,0xde,0xc5,0xaa,0x43,0x3f,0x22,0x0e,0x12,
0x31,0x0b,0xdf,0x58,0xa3,0x26,0xfa,0xfd,0x19,0xe8,0x2a,0x3d,
0x29,0x37,0xd4,0xd3,0xc3,0xa3,0x02,0x1b,0x35,0x11,0x55,0xfb,
0xa8,0xf1,0x2b,0xc8,0xeb,0x45,0x49,0x54,0x47,0xd7,0xaa,0x31,
0x3b,0x37,0x25,0x4d,0xd6,0xbd,0x54,0xb8,0xd2,0x51,0xe3,0xda,
0xd9,0x08,0x30,0xd1,0xd0,0xfa,0xff,0xff,0xd4,0xfa,0xff,0xff,
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
0xee,0x1e,0xae,0x3d,0x1a,0x00,0x00,0x00,0x53,0x74,0x61,0x74,
0x65,0x66,0x75,0x6c,0x50,0x61,0x72,0x74,0x69,0x74,0x69,0x6f,
0x6e,0x65,0x64,0x43,0x61,0x6c,0x6c,0x3a,0x30,0x31,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x5c,0xff,0xff,0xff,0x18,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x80,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
0x80,0x00,0x00,0x00,0xcc,0xfd,0xff,0xff,0x08,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0xca,0xa0,0x3b,0x3f,0x46,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
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
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xc6,0x04,0xcf,0x3a,
0x0c,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,0x65,0x5f,0x31,0x2f,
0x62,0x69,0x61,0x73,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x42,0xff,0xff,0xff,0x14,0x00,0x00,0x00,
0x34,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x48,0x00,0x00,0x00,0x34,0xff,0xff,0xff,0x08,0x00,0x00,0x00,
0x14,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
0x6f,0x3a,0x0d,0x3b,0x19,0x00,0x00,0x00,0x73,0x65,0x71,0x75,
0x65,0x6e,0x74,0x69,0x61,0x6c,0x2f,0x64,0x65,0x6e,0x73,0x65,
0x5f,0x31,0x2f,0x4d,0x61,0x74,0x4d,0x75,0x6c,0x00,0x00,0x00,
0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0xaa,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x34,0x00,0x00,0x00,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x38,0x00,0x00,0x00,
0x9c,0xff,0xff,0xff,0x08,0x00,0x00,0x00,0x14,0x00,0x00,0x00,
0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xe1,0x09,0xa7,0x3b,
0x0a,0x00,0x00,0x00,0x64,0x65,0x6e,0x73,0x65,0x2f,0x62,0x69,
0x61,0x73,0x00,0x00,0x01,0x00,0x00,0x00,0x80,0x00,0x00,0x00,
0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,
0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
0x3c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x09,
0x4c,0x00,0x00,0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,
0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x1b,0x49,0x13,0x3b,
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