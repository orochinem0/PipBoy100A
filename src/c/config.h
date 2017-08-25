#ifndef config_h_
#define config_h_
#endif

#include <pebble.h>

// VARIABLES
static int s_battery_level;
static int s_xp_level;
static int s_next_level;
static int s_head_level;
static int s_headmax_level;

static bool s_charging;
static bool s_connected;

static bool crippledAL = false;
static bool crippledAR = false;
static bool crippledLL = false;
static bool crippledLR = false;
static bool crippledH1 = false;
static bool crippledH2 = false;
static bool dead = false;

static Window *s_main_window;

static TextLayer *s_time_layer;
static TextLayer *s_battery_layer;
static TextLayer *s_date_layer;
static TextLayer *s_xp_layer;
static TextLayer *s_nextLvl_layer;
static TextLayer *s_lvl_layer;

static BitmapLayer *s_background_layer;
static BitmapLayer *s_vaultBoy_layer;
static BitmapLayer *s_crippledAL_layer;
static BitmapLayer *s_crippledAR_layer;
static BitmapLayer *s_crippledLL_layer;
static BitmapLayer *s_crippledLR_layer;
static BitmapLayer *s_crippledH1_layer;
static BitmapLayer *s_crippledH2_layer;
static BitmapLayer *s_dead_layer;

static GBitmap *s_background_bitmap;
static GBitmap *s_vaultBoy_bitmap;
static GBitmap *s_crippledAL_bitmap;
static GBitmap *s_crippledAR_bitmap;
static GBitmap *s_crippledLL_bitmap;
static GBitmap *s_crippledLR_bitmap;
static GBitmap *s_crippledH1_bitmap;
static GBitmap *s_crippledH2_bitmap;
static GBitmap *s_dead_bitmap;