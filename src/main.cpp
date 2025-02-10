// #include <lvgl.h>
// #include <demos/lv_demos.h>
// // #include "demos/benchmark/lv_demo_benchmark.h"
// // uncomment a library for display driver
// #define USE_TFT_ESPI_LIBRARY
// // #define USE_ARDUINO_GFX_LIBRARY
// // #define LV_USE_DEMO_BENCHMARK
// #define TOUCH_CS D2 // AKA GPIO 4
// #include "../lib/lv_xiao_round_screen.h"
// void setup()
// {
//     Serial.begin( 115200 );  //prepare for possible serial debug 
//     Serial.println( "XIAO round screen - LVGL_Arduino" );

//     lv_init();

//     #if LVGL_VERSION_MAJOR == 9
//     lv_tick_set_cb(millis);
//     #endif

//     lv_xiao_disp_init();
//     lv_xiao_touch_init();

//     // lv_demo_widgets();
//     lv_demo_benchmark();
//     // lv_demo_keypad_encoder();
//     // lv_demo_music();
//     // lv_demo_printer();
//     // lv_demo_stress();
//         scene_act = 0;

//     lv_obj_t * scr = lv_screen_active();
//     lv_obj_remove_style_all(scr);
//     lv_obj_set_style_bg_opa(scr, LV_OPA_COVER, 0);
//     lv_obj_set_style_text_color(scr, lv_color_black(), 0);
//     lv_obj_set_style_bg_color(scr, lv_palette_lighten(LV_PALETTE_GREY, 4), 0);
//     lv_obj_set_style_pad_all(lv_screen_active(), 8, 0);
//     lv_obj_set_style_pad_top(lv_screen_active(), 48, 0);
//     lv_obj_set_style_pad_gap(lv_screen_active(), 8, 0);

//     lv_obj_t * title = lv_label_create(lv_layer_top());
//     lv_obj_set_style_bg_opa(title, LV_OPA_COVER, 0);
//     lv_obj_set_style_bg_color(title, lv_color_white(), 0);
//     lv_obj_set_style_text_color(title, lv_color_black(), 0);
//     lv_obj_set_width(title, lv_pct(100));

//     load_scene(scene_act);

//     lv_timer_create(next_scene_timer_cb, scenes[0].scene_time, NULL);
//     lv_label_set_text(title, "LV_USE_PERF_MONITOR is not enabled");
// }

// void loop()
// {
//     lv_timer_handler();  //let the GUI do its work 
//     delay( 5 );
// }










#include <lvgl.h>

// uncomment a library for display driver
#define USE_TFT_ESPI_LIBRARY
// #define USE_ARDUINO_GFX_LIBRARY

#include "../lib/lv_xiao_round_screen.h"
#include "../lv_hardware_test.h"

void setup()
{
    Serial.begin( 115200 );  //prepare for possible serial debug 
    Serial.println( "XIAO round screen - LVGL_Arduino" );

    lv_init();
    #if LVGL_VERSION_MAJOR == 9
    lv_tick_set_cb(millis);
    #endif
    
    lv_xiao_disp_init();
    lv_xiao_touch_init();

    lv_hardware_test();
}

void loop()
{
    lv_timer_handler();  //let the GUI do its work 
}
