/***************************************************************************//**
 * @file displayfont16x20.h
 * @brief 16x20 font with only number characters and the colon':' and
 *        space ' ' signs.
 * @version 4.1.0
 *******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 *
 ******************************************************************************/




/** @cond DO_NOT_INCLUDE_WITH_DOXYGEN */

#define NUMBERS_FONT_16x20_WIDTH  (16)
#define NUMBERS_FONT_16x20_HEIGHT (20)

typedef uint16_t FontBits_t;

static const FontBits_t numbers_16x20_bits[] =
{ /* 0       1       2       3       4       5       6       7       8       9       :     ' ' */
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x03c0, 0x0300, 0x07c0, 0x03e0, 0x0f00, 0x1ff8, 0x1f00, 0x1ffc, 0x07e0, 0x03e0, 0x0000, 0x0000,
  0x0ff0, 0x03e0, 0x0fe0, 0x0ff0, 0x0f80, 0x1ff8, 0x3fc0, 0x1ffc, 0x0ff8, 0x07f0, 0x0000, 0x0000,
  0x1e78, 0x03fc, 0x1c70, 0x0e38, 0x0f80, 0x0038, 0x31e0, 0x1c0c, 0x1c38, 0x0e38, 0x0180, 0x0000,
  0x1c38, 0x03bc, 0x3838, 0x1c18, 0x0fc0, 0x0038, 0x0070, 0x1c0c, 0x381c, 0x1c1c, 0x03c0, 0x0000,
  0x381c, 0x0380, 0x3838, 0x1c00, 0x0ee0, 0x0038, 0x0038, 0x0e00, 0x381c, 0x181c, 0x03c0, 0x0000,
  0x381c, 0x0380, 0x3838, 0x1c00, 0x0ee0, 0x07b8, 0x0038, 0x0e00, 0x381c, 0x381c, 0x0180, 0x0000,
  0x381c, 0x0380, 0x3c00, 0x0e00, 0x0e70, 0x0ff8, 0x07dc, 0x0e00, 0x1c38, 0x381c, 0x0000, 0x0000,
  0x381c, 0x0380, 0x1c00, 0x07c0, 0x0e70, 0x1c38, 0x0ffc, 0x0700, 0x0ff0, 0x3c1c, 0x0000, 0x0000,
  0x381c, 0x0380, 0x0e00, 0x07c0, 0x0e38, 0x3818, 0x1c7c, 0x0700, 0x0ff0, 0x3e38, 0x0000, 0x0000,
  0x381c, 0x0380, 0x0700, 0x1e00, 0x0e1c, 0x3800, 0x3c3c, 0x0700, 0x1c38, 0x3ff0, 0x0000, 0x0000,
  0x381c, 0x0380, 0x0380, 0x3c00, 0x3ffc, 0x3800, 0x383c, 0x0780, 0x381c, 0x3be0, 0x0180, 0x0000,
  0x381c, 0x0380, 0x01c0, 0x3800, 0x3ffc, 0x3800, 0x381c, 0x0380, 0x381c, 0x3c00, 0x03c0, 0x0000,
  0x381c, 0x0380, 0x00e0, 0x3800, 0x0e00, 0x3800, 0x381c, 0x0380, 0x381c, 0x1c00, 0x03c0, 0x0000,
  0x1c38, 0x0380, 0x0070, 0x3800, 0x0e00, 0x3800, 0x3838, 0x0380, 0x381c, 0x0e00, 0x0180, 0x0000,
  0x1e78, 0x0380, 0x0038, 0x1c0c, 0x0e00, 0x1c0c, 0x1c38, 0x01c0, 0x1c38, 0x0f8c, 0x0000, 0x0000,
  0x0ff0, 0x7ffc, 0x3ffc, 0x1ffc, 0x3fc0, 0x0ffc, 0x1ff0, 0x01c0, 0x1ff8, 0x03fc, 0x0000, 0x0000,
  0x03c0, 0x7ffc, 0x3ffc, 0x07f0, 0x3fc0, 0x07f0, 0x07c0, 0x01c0, 0x07e0, 0x00f8, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
};

/** @endcond */
