#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t img_debug_log_image_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xc6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x38,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0xc6,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0x38,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xba,0xd6,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xba,0xd6,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xcf,0x7b,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xcf,0x7b,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xba,0xd6,0x5d,0xef,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x5d,0xef,0xba,0xd6,0x00,0x00,0x00,0x00,
    0x00,0x00,0xdb,0xde,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0x00,0x00,
    0x00,0x00,0x3c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x3c,0xe7,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,
    0x00,0x00,0x3c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x3c,0xe7,0x00,0x00,
    0x00,0x00,0xdb,0xde,0x3c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x3c,0xe7,0xdb,0xde,0x00,0x00,
    0x00,0x00,0x00,0x00,0xba,0xd6,0x5d,0xef,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x5d,0xef,0xba,0xd6,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x1c,0xe7,0x3c,0xe7,0xdb,0xde,0xba,0xd6,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xba,0xd6,0xdb,0xde,0x3c,0xe7,0x1c,0xe7,0xfb,0xde,0xfb,0xde,0xfb,0xde,0xfb,0xde,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xdb,0xde,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0xfb,0xde,0x1c,0xe7,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x17,0x17,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x8c,0xd8,0xd8,0x8c,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x8c,0xff,0xf2,0xf2,0xff,0x8c,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0xd8,0xf7,0x6f,0x6f,0xf7,0xd8,0x17,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xe3,0xff,0xe3,0xe3,0xff,0xe3,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x21,0x6d,0x24,0x00,0x00,0x0d,0xa7,0xe1,0xe0,0xe0,0xe1,0xa7,0x0d,0x00,0x00,0x24,0x6d,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x6d,0xff,0xc3,0x26,0x00,0x16,0x2d,0x3e,0x3e,0x3e,0x3e,0x2d,0x16,0x00,0x26,0xc3,0xff,0x6d,0x00,0x00,0x00,
    0x00,0x00,0x00,0x24,0xc3,0xff,0xc4,0x97,0xd6,0xe1,0xe0,0xe0,0xe0,0xe0,0xe1,0xd6,0x97,0xc4,0xff,0xc3,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0xc2,0xff,0xff,0xf4,0xe2,0xe2,0xe2,0xe2,0xe2,0xe2,0xf4,0xff,0xff,0xc2,0x26,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x33,0xe9,0xf2,0x56,0x1d,0x1f,0x1f,0x1f,0x1f,0x1d,0x56,0xf2,0xe9,0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0xe1,0xe3,0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x1d,0xe3,0xe1,0x1b,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x0e,0x1d,0x3a,0xe6,0xe2,0x1f,0x00,0x00,0x0e,0x0e,0x00,0x00,0x1f,0xe2,0xe6,0x3a,0x1d,0x0e,0x00,0x00,0x00,0x00,0x00,0x0e,0xac,0xe4,0xe6,0xfe,0xe0,0x1f,0x00,0x0e,0xac,0xac,0x0e,0x00,0x1f,0xe0,0xfe,0xe6,0xe4,0xac,0x0e,0x00,0x00,
    0x00,0x00,0x0e,0xac,0xe4,0xe4,0xfc,0xe7,0x25,0x00,0x1f,0xe4,0xe4,0x1f,0x00,0x25,0xe7,0xfc,0xe4,0xe4,0xac,0x0e,0x00,0x00,0x00,0x00,0x00,0x0e,0x1e,0x26,0xc3,0xfe,0x58,0x00,0x1f,0xe2,0xe2,0x1f,0x00,0x58,0xfe,0xc3,0x26,0x1e,0x0e,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0xff,0xc8,0x20,0x1a,0xe2,0xe2,0x1a,0x20,0xc8,0xff,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0xc3,0xff,0xff,0xc6,0x71,0xe8,0xe8,0x71,0xc6,0xff,0xff,0xc3,0x26,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x26,0xc3,0xff,0xca,0xc5,0xff,0xff,0xff,0xff,0xff,0xff,0xc5,0xca,0xff,0xc3,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0xc3,0xff,0xc3,0x26,0x16,0x73,0xbf,0xdc,0xdc,0xbf,0x73,0x16,0x26,0xc3,0xff,0xc3,0x24,0x00,0x00,0x00,
    0x00,0x00,0x00,0x6d,0xff,0xc3,0x26,0x00,0x00,0x00,0x0a,0x1b,0x1b,0x0a,0x00,0x00,0x00,0x26,0xc3,0xff,0x6d,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x6d,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x6d,0x21,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t img_debug_log_image = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 24,
  .header.h = 24,
  .header.stride = 48,
  .data_size = 1728,
  .data = img_debug_log_image_map,
};
