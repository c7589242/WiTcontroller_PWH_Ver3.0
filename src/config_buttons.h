// ********************************************************************************************
//
// Any line in this file that starts with a // is a comment
// Comments are ignored
//
// To enable any of the #define lines below,
// first remove the // at the start of the line,
// then, if needed, change the value to suit your needs.
//
// ********************************************************************************************
// Encoder Direction and Actions

// Define the rotation diection for the rotary encoder to increase speed.
//   false = Counter clockwise
//   true = clockwise
// The default value is false (counter clockwise)

#define ENCODER_ROTATION_CLOCKWISE_IS_INCREASE_SPEED                     true

// Choose if you want to invert the rotary encoder rotation when the direction is reversed
// i.e. If the direction of the current loco is 'Rev', turning the encoder clockwise will decrease the speed instead of increase
// (or the opposite direction if ENCODER_ROTATION_CLOCKWISE_IS_INCREASE_SPEED is true)
// Uncomment the following line to enable this feature
// #define ENCODER_INVERT_ROTATION_WHEN_REVERSED true

// Define what the rotary encoder button does.   (Pushing down on the knob)
// By default it will stop the loco if moving, then a second push will change the direction.
// Uncomment and change the action if you wish it to do something else.
// See static.h or README.md for details on the allowed functions.

// #define ENCODER_BUTTON_ACTION SPEED_STOP_THEN_TOGGLE_DIRECTION 

// Define what the rotary encoder button does when the loco is stationary.   (Pushing down on the knob)
//   true = if the locos(s) are stationary, clicking the encoder button will toggle the direction
//   false = does nothing
// this only takes effect if the ENCODER_BUTTON_ACTION (above) is set to SPEED_STOP_THEN_TOGGLE_DIRECTION
// The default value is true

// #define TOGGLE_DIRECTION_ON_ENCODER_BUTTON_PRESSED_WHEN_STATIONAY         true

// Encoder debounce (Not the encoder button)
// If you find that moving the encoder a single click sends more than one speed command, try adjusting this value

#define ROTARY_ENCODER_STEPS 2 //depending on your encoder - try 1,2,3 or 4 to get expected behaviour  Default is 2

// Rotary Encoder Debounce Time
// increase if you find the encoder button bounces (activate twice) or you get speed changes when you press the encoder button

// #define ROTARY_ENCODER_DEBOUNCE_TIME     200

// If using a bare Rotary Encoder instead of a KY040 encoder module
// Internal GPIO pullups required if the hardware build utilises a bare EC11 rotary encoder in place of a
// KY040 encoder module. (The encoder module has physical pullups fitted)
//   true = bare EC11 used for hardware build WITHOUT any physical pullups, GPIO pullups will ne enabled in main
//   false = KY040 module used in hardware build OR bare EC11 used but with physical pullup resistors 
// The default is false

#define EC11_PULLUPS_REQUIRED         true

// *******************************************************************************************************************
// Keypad Definitions / Actions
//
// MY (PWH) MENU MAPPING...
//
// Define what each button will do as direct press (not in a menu)   * and # cannot be remapped
// See actions.h or README.md for details on the allowed functions

#define CHOSEN_KEYPAD_0_FUNCTION     FUNCTION_0
#define CHOSEN_KEYPAD_1_FUNCTION     FUNCTION_1
#define CHOSEN_KEYPAD_2_FUNCTION     FUNCTION_2
#define CHOSEN_KEYPAD_3_FUNCTION     FUNCTION_3
#define CHOSEN_KEYPAD_4_FUNCTION     FUNCTION_4
#define CHOSEN_KEYPAD_5_FUNCTION     NEXT_THROTTLE
#define CHOSEN_KEYPAD_6_FUNCTION     FUNCTION_6
// #define CHOSEN_KEYPAD_6_FUNCTION     SPEED_MULTIPLIER
#define CHOSEN_KEYPAD_7_FUNCTION     FUNCTION_7
// #define CHOSEN_KEYPAD_7_FUNCTION     DIRECTION_REVERSE
#define CHOSEN_KEYPAD_8_FUNCTION     E_STOP
#define CHOSEN_KEYPAD_9_FUNCTION     FUNCTION_9
// #define CHOSEN_KEYPAD_9_FUNCTION     DIRECTION_FORWARD
// #define CHOSEN_KEYPAD_A_FUNCTION     CUSTOM_1
// #define CHOSEN_KEYPAD_B_FUNCTION     CUSTOM_2
// #define CHOSEN_KEYPAD_C_FUNCTION     CUSTOM_3
// #define CHOSEN_KEYPAD_D_FUNCTION     CUSTOM_4

// text that will appear when you press #
// if you rearrange the items above, modify this text to suit    * and # cannot be remapped here

#define CHOSEN_KEYPAD_0_DISPLAY_NAME     "0 Dim H/L"            // 0.0 Direct Menu     -so menu 0, item 0 = Dim Headlight
#define CHOSEN_KEYPAD_1_DISPLAY_NAME     "1 S/Horn"             // 0.1                          0, item 1 = Short Horn
#define CHOSEN_KEYPAD_2_DISPLAY_NAME     "2 Horn"               // 0.2                          0, item 2 = Horn
#define CHOSEN_KEYPAD_3_DISPLAY_NAME     "3 F3"                 // 0.3                          0, item 3 = F3 
#define CHOSEN_KEYPAD_4_DISPLAY_NAME     "4 F4"                 // 0.4                          0, item 4 = F4 (Dynamic Brake)
#define CHOSEN_KEYPAD_5_DISPLAY_NAME     "5 Nxt Ttl"            // 0.5                          0, item 5 = Next Throttle
#define CHOSEN_KEYPAD_6_DISPLAY_NAME     "6 F6"                 // 0.6                          0, item 6 = F6 (Brake)
// #define CHOSEN_KEYPAD_6_DISPLAY_NAME     "6 X Spd"             // 0.6
#define CHOSEN_KEYPAD_7_DISPLAY_NAME     "7 F7"                 // 0.7                          0, item 7 = F7
// #define CHOSEN_KEYPAD_7_DISPLAY_NAME     "7 Rev"               //0.7
#define CHOSEN_KEYPAD_8_DISPLAY_NAME     "8 Estop"              // 0.8                          0, item 8 = E-Stop
#define CHOSEN_KEYPAD_9_DISPLAY_NAME     "9 F9"                 // 0.9                          0, item 9 = F9
// #define CHOSEN_KEYPAD_9_DISPLAY_NAME     "9 Fwd"               // 0.9

// ***************************************************************************************************************************
// Default direct press key Labels

// #define CHOSEN_KEYPAD_0_DISPLAY_NAME     "0 Lights"
// #define CHOSEN_KEYPAD_1_DISPLAY_NAME     "1 Bell"
// #define CHOSEN_KEYPAD_2_DISPLAY_NAME     "2 Horn"
// #define CHOSEN_KEYPAD_3_DISPLAY_NAME     "3 F3"
// #define CHOSEN_KEYPAD_4_DISPLAY_NAME     "4 F4"
// #define CHOSEN_KEYPAD_5_DISPLAY_NAME     "5 Nxt Ttl"
// #define CHOSEN_KEYPAD_6_DISPLAY_NAME     "6 X Spd"
// #define CHOSEN_KEYPAD_7_DISPLAY_NAME     "7 Rev"
// #define CHOSEN_KEYPAD_8_DISPLAY_NAME     "8 Estop"
// #define CHOSEN_KEYPAD_9_DISPLAY_NAME     "9 Fwd"

// Chinese equivalent for the default keypad display names
// #define CHOSEN_KEYPAD_0_DISPLAY_NAME     "0 灯光"
// #define CHOSEN_KEYPAD_1_DISPLAY_NAME     "1 铃声"
// #define CHOSEN_KEYPAD_2_DISPLAY_NAME     "2 喇叭"
// #define CHOSEN_KEYPAD_3_DISPLAY_NAME     "3 F3"
// #define CHOSEN_KEYPAD_4_DISPLAY_NAME     "4 F4"
// #define CHOSEN_KEYPAD_5_DISPLAY_NAME     "5 下一个总计"
// #define CHOSEN_KEYPAD_6_DISPLAY_NAME     "6 X倍速度"
// #define CHOSEN_KEYPAD_7_DISPLAY_NAME     "7 倒车"
// #define CHOSEN_KEYPAD_8_DISPLAY_NAME     "8 急停"
// #define CHOSEN_KEYPAD_9_DISPLAY_NAME     "9 前进"

// '#" button action
// By default, # will show the list above. 
//   true = will take you to the Loco Function Labels screen directly
//   false = will take you to the Key Definitions
// The Defualt is false

#define HASH_SHOWS_FUNCTIONS_INSTEAD_OF_KEY_DEFS         true

// *******************************************************************************************************************
// My (PWH) Re-Mapped Menus
#define USER_DEFINED_MENUS true

   #define MENU_ITEM_EXTRAS                 '0'                // 1.0         -menu 1, item 0 = Extras Menu (Goto menu 2)
   #define MENU_ITEM_ADD_LOCO               '1'                // 1.1         -menu 1, item 1 = Add Loco 
   #define MENU_ITEM_DROP_LOCO              '2'                // 1.2         -menu 1, item 2 = Drop Loco
   #define MENU_ITEM_EDIT_CONSIST           '3'                // 1.3         -menu 1, item 3 = Edit Consist
   #define MENU_ITEM_THROW_POINT            '4'                // 1.4         -menu 1, item 4 = Throw Point
   #define MENU_ITEM_CLOSE_POINT            '5'                // 1.5         -menu 1, item 5 = Close Point
   #define MENU_ITEM_ROUTE                  '6'                // 1.6         -menu 1, item 6 = Route Menu
   #define MENU_ITEM_INCREASE_MAX_THROTTLES '7'                // 1.7         -menu 1, item 7 = Increase Max Throttles
   #define MENU_ITEM_TRACK_POWER            '8'                // 1.8         -menu 1, item 8 = Track Power Menu (On/Off Toggle)
   #define MENU_ITEM_DECREASE_MAX_THROTTLES '9'                // 1.9         -menu 1, item 9 = Decrease Max Throttles

   #define MENU_ITEM_OFF_SLEEP              'A'                // 2.0        -menu 2, item 0 = Off / Sleep 
   #define MENU_ITEM_FUNCTION               'B'                // 2.1        -menu 2, item 1 = Function Menu
   #define MENU_ITEM_FUNCTION_KEY_TOGGLE    'C'                // 2.2        -menu 2, item 2 = Function Key Toggle
   #define MENU_ITEM_HEARTBEAT_TOGGLE       'D'                // 2.3        -menu 2, item 3 = Heartbeat Toggle
   #define MENU_ITEM_TOGGLE_DIRECTION       'E'                // 2.4        -menu 2, item 4 = Toggle Direction
   #define MENU_ITEM_SPEED_STEP_MULTIPLIER  'F'                // 2.5        -menu 2, item 5 = Speed Step Multiplier
   #define MENU_ITEM_DISCONNECT             'G'                // 2.6        -menu 2, item 6 = Disconnect
   //#define MENU_ITEM_TBA                    'H'              // 2.7        -menu 2, item 7 = TBA
   //#define MENU_ITEM_TBA                    'I'              // 2.8        -menu 2, item 8 = TBA
   //#define MENU_ITEM_TBA                    'J'              // 2.9        -menu 2, item 9 = TBA

   // menu item labels, menu to appear at the bottom of the screen
   
   #define MENU_STRUCTURE {\
   {MENU_ITEM_TEXT_TITLE_EXTRAS,                MENU_ITEM_TEXT_MENU_EXTRAS},\
   {MENU_ITEM_TEXT_TITLE_ADD_LOCO,              MENU_ITEM_TEXT_MENU_ADD_LOCO},\
   {MENU_ITEM_TEXT_TITLE_DROP_LOCO,             MENU_ITEM_TEXT_MENU_DROP_LOCO},\
   {EXTRA_MENU_TEXT_CHAR_EDIT_CONSIST,          MENU_ITEM_TEXT_MENU_EDIT_CONSIST},\
   {MENU_ITEM_TEXT_TITLE_THROW_POINT,           MENU_ITEM_TEXT_MENU_THROW_POINT},\
   {MENU_ITEM_TEXT_TITLE_CLOSE_POINT,           MENU_ITEM_TEXT_MENU_CLOSE_POINT},\
   {MENU_ITEM_TEXT_TITLE_ROUTE,                 MENU_ITEM_TEXT_MENU_ROUTE},\
   {EXTRA_MENU_TEXT_CHAR_INCREASE_MAX_THROTTLES,MENU_ITEM_TEXT_MENU_NA},\
   {MENU_ITEM_TEXT_TITLE_TRACK_POWER,           MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_DECREASE_MAX_THROTTLES,MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_OFF_SLEEP,             MENU_ITEM_TEXT_MENU_NA},\
   {MENU_ITEM_TEXT_TITLE_FUNCTION,              MENU_ITEM_TEXT_MENU_FUNCTION},\
   {EXTRA_MENU_TEXT_CHAR_FUNCTION_KEY_TOGGLE,   MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_HEARTBEAT_TOGGLE,      MENU_ITEM_TEXT_MENU_NA},\
   {MENU_ITEM_TEXT_TITLE_TOGGLE_DIRECTION,      MENU_ITEM_TEXT_MENU_NA},\
   {MENU_ITEM_TEXT_TITLE_SPEED_STEP_MULTIPLIER, MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_DISCONNECT,            MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_TBA,                   MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_TBA,                   MENU_ITEM_TEXT_MENU_NA},\
   {EXTRA_MENU_TEXT_CHAR_TBA,                   MENU_ITEM_TEXT_MENU_NA}\
   }


   // 0=none effectively a direct command / 1=one used for sub menus / 2=one or more
   #define MENU_CHARS_REQUIRED {\
   MENU_ITEM_TYPE_SUB_MENU,\
   MENU_ITEM_TYPE_ONE_OR_MORE_CHARS,\
   MENU_ITEM_TYPE_ONE_OR_MORE_CHARS,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_ONE_OR_MORE_CHARS,\
   MENU_ITEM_TYPE_ONE_OR_MORE_CHARS,\
   MENU_ITEM_TYPE_ONE_OR_MORE_CHARS,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_ONE_OR_MORE_CHARS,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND,\
   MENU_ITEM_TYPE_DIRECT_COMMAND\
   }

// *******************************************************************************************************************
// *******************************************************************************************************************
// Maximum number of throttles

// Define the number of throttles that you want.
// To use multiple throttles, one of the keys or buttons will need to be defined as 
// NEXT_THROTTLE.  (keypad 5 is by default)
// Maximum supported by the WiTcontroller is 6

// uncomment and increase the number if you always need more that two throttles
// #define MAX_THROTTLES                 2 

// *******************************************************************************************************************
// speed increase for each click of the encoder 

// How much each click of the encoder increases or decreases the speed
// The default is 4
#define SPEED_STEP                       1

// The default is 3
#define SPEED_STEP_MULTIPLIER            3          // for 'fast' speed steps

// Additional multiplier.  If the multiplier is enabled from the menu, each rotation of 
// the encoder becomes the speedStep * the AdditionalMultiplier
// The default is 2
#define SPEED_STEP_ADDITIONAL_MULTIPLIER 2

// by default, the speed will be displayed as the the DCC speed (0-126)
// IMPORTANT: only one should be enabled.  If DISPLAY_SPEED_AS_PERCENT is enabled it 
// will take presidence over DISPLAY_SPEED_AS_0_TO_28
// Note: there will be rounding errors!

// Uncomment this line to display the speeds a percentage.
#define DISPLAY_SPEED_AS_PERCENT         true
// Uncomment this line to display the speeds as 0-28.
// #define DISPLAY_SPEED_AS_0_TO_28         true

// *******************************************************************************************************************
// DCC functions in consists

// If specified, must be either   CONSIST_ALL_LOCOS  or  CONSIST_LEAD_LOCO
// Default for functions above F2 is CONSIST_LEAD_LOCO

#define CONSIST_FUNCTION_FOLLOW_F0                  CONSIST_LEAD_LOCO            // Dim Headlight, lead Loco only.
#define CONSIST_FUNCTION_FOLLOW_F1                  CONSIST_LEAD_LOCO            // Short Horn, lead Loco only.
#define CONSIST_FUNCTION_FOLLOW_F2                  CONSIST_LEAD_LOCO            // Horn, all Locos.
#define CONSIST_FUNCTION_FOLLOW_F3                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F4                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F5                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F6                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F7                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F8                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F9                  CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F10                 CONSIST_LEAD_LOCO            // Front Headlight, lead Loco only.
#define CONSIST_FUNCTION_FOLLOW_F11                 CONSIST_LEAD_LOCO            // Rear Headlight, lead Loco only.  
#define CONSIST_FUNCTION_FOLLOW_F12                 CONSIST_LEAD_LOCO            // Front Number Boards, lead Loco only.
#define CONSIST_FUNCTION_FOLLOW_F13                 CONSIST_LEAD_LOCO            // Rear Number Boards, lead Loco only.
#define CONSIST_FUNCTION_FOLLOW_F14                 CONSIST_LEAD_LOCO
#define CONSIST_FUNCTION_FOLLOW_F15                 CONSIST_LEAD_LOCO

#define CONSIST_FUNCTION_FOLLOW_F20                 CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_F21                 CONSIST_ALL_LOCOS
#define CONSIST_FUNCTION_FOLLOW_OTHER_FUNCTIONS     CONSIST_LEAD_LOCO

// Defines can optionally be created for CONSIST_FUNCTION_FOLLOW_F3 to CONSIST_FUNCTION_FOLLOW_F31 
// as well.
// If they are not individually specified the CONSIST_FUNCTION_FOLLOW_OTHER_FUNCTIONS option 
// will be used for them.

// *******************************************************************************************************************
// Additional/Optional User Defined Commands

// These can be any legitimate WiThrottle protocol command encosed in quotes or double quotes
// refer to https://www.jmri.org/help/en/package/jmri/jmrit/withrottle/Protocol.shtml

// alert message
// #define CUSTOM_COMMAND_1 "HMHello World"
// set route R500  (DCCEX system route prefix is 'R')
// #define CUSTOM_COMMAND_2 "PRA2R500"
// #define CUSTOM_COMMAND_3 ""
// #define CUSTOM_COMMAND_4 ""
// #define CUSTOM_COMMAND_5 ""
// #define CUSTOM_COMMAND_6 ""
// #define CUSTOM_COMMAND_7 ""

// ********************************************************************************************
// oLED definition

// Uncomment and/or correct one (only) of the #define lines below if you need to override.
// The default .9 inch oLED display settings 
//
// Please select a constructor line for below depending on your display

// U8g2 Constructor List (Frame Buffer)
// The complete list is available here: https://github.com/olikraus/u8g2/wiki/u8g2setupcpp
// Please update the pin numbers according to your setup. Use U8X8_PIN_NONE if the reset pin is not connected

// This is one of the common .9 inch OLED displays and is included by default
// #define OLED_TYPE U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ 22, /* data=*/ 23);

// This TFT color-display build does not use U8g2 OLED constructors.
#define OLED_TYPE
//
// 1.5 inch OLED Display SH1107 driver
// 
// #define OLED_TYPE U8G2_SH1107_128X128_1_SW_I2C u8g2(U8G2_R2,  /* reset=*/ U8X8_PIN_NONE, /* clock=*/ 22, /* data=*/ 23);
// #define OLED_TYPE U8G2_SH1107_128X128_F_HW_I2C u8g2(U8G2_R2,  /* reset=*/ U8X8_PIN_NONE, /* clock=*/ 22, /* data=*/ 23);

// *******************************************************************************************************************
// Debugging

// WiTcontroller console debug messages are ENABLED by default
// to disable to console messages, uncomment and set the following to  1    (i.e. 0 = on  1 = off)
#define WITCONTROLLER_DEBUG    0

// WiThrottle Protocol console debug messages are DISABLED by default
// to enable to console messages, uncomment and set the following to  0    (i.e. 0 = on  1 = off)
#define WITHROTTLE_PROTOCOL_DEBUG    0

// console debug messages are enabled with the defines above
// the default level is 1
// 0 = errors only 1 = default level 2 = verbose 3 = extreme
// #define DEBUG_LEVEL    1

// *******************************************************************************************************************
// Default function labels

// uncomment any of these lines if you wish to change the labels
//#define F0_LABEL "Light"
//#define F1_LABEL "Bell"
//#define F2_LABEL "Horn"
#define F0_LABEL "Dim H/Light"
#define F1_LABEL "S/Horn"
#define F2_LABEL "Horn"

// *******************************************************************************************************************
// Encoder - Hardware pin mappings

// Uncomment and change as needed
// defaults are for the Small ESP32

// Large EPS32
// #define ROTARY_ENCODER_A_PIN 33
// #define ROTARY_ENCODER_B_PIN 32
// #define ROTARY_ENCODER_BUTTON_PIN 27

// Small ESP32
// #define ROTARY_ENCODER_A_PIN 12
// #define ROTARY_ENCODER_B_PIN 14
// #define ROTARY_ENCODER_BUTTON_PIN 13

// PWH WiTcontroller Ver. 2 & 3 prototypes, ESP32
#define ROTARY_ENCODER_A_PIN 13
#define ROTARY_ENCODER_B_PIN 2
#define ROTARY_ENCODER_BUTTON_PIN 15

// #define ROTARY_ENCODER_VCC_PIN -1 /* 27 put -1 of Rotary encoder Vcc is connected 
// directly to 3,3V; else you can use declared output pin for powering rotary encoder */

// *******************************************************************************************************************
// Keypad - Hardware pin mappings

// Uncomment and change as needed
// Defaults are for the Small 4x3 keypad

// 4x3 keypad - PWH WiTcontroller Ver. 2 & 3 prototypes, ESP32
#define ROW_NUM     4
#define COLUMN_NUM  3
#define KEYPAD_KEYS  {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}, {'*', '0', '#'}
#define KEYPAD_ROW_PINS    {14, 32, 33, 26}
#define KEYPAD_COLUMN_PINS { 27, 12, 25}

// 4x3 keypad - default
// #define ROW_NUM     4
// #define COLUMN_NUM  3
// #define KEYPAD_KEYS  {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}, {'*', '0', '#'}
// #define KEYPAD_ROW_PINS    {19, 18, 17, 16}
// #define KEYPAD_COLUMN_PINS { 4, 0, 2}

// 4x4 keypad
// #define ROW_NUM     4
// #define COLUMN_NUM  4
// #define KEYPAD_KEYS {'1', '2', '3', 'A'},  {'4', '5', '6', 'B'},  {'7', '8', '9', 'C'},  {'*', '0', '#', 'D'}
// #define KEYPAD_ROW_PINS    {19, 18, 17, 16}
// #define KEYPAD_COLUMN_PINS {4, 0, 2, 33}

// Keypad configuration
// Play with these values if you see the keys bounce (activate twice on a single press)
// Times are in miliseconds

// #define KEYPAD_DEBOUNCE_TIME 10
// #define KEYPAD_HOLD_TIME 200

// *******************************************************************************************************************
// Additional / optional buttons - Hardware pin mappings

// This format for the additional buttons is now depriated
// Use the *New Additional / optional buttons* section instead

// For the 4x3 Keypad 7 buttons can be used
// For the 4x4 keypad, only 6 buttons can be used with the 'normal' pins and the last pin MUST be set to -1, 
//                     or one of pins 34,35,36,39 can be used with additional hardware (see below)

// if you are using the 4x3 keypad - default
// To use the additional buttons, adjust the functions assigned to them in config_buttons.h
// #define ADDITIONAL_BUTTONS_PINS      {5,15,25,26,27,32,33}
// #define ADDITIONAL_BUTTONS_TYPE      {INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP}

// if you are using the 4x4 keypad, pin 33 is not available
// To use the additional buttons, adjust the functions assigned to them in config_buttons.h
// #define ADDITIONAL_BUTTONS_PINS      {5,15,25,26,27,32,-1}  // last pin must be set to -1
// #define ADDITIONAL_BUTTONS_TYPE      {INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP,INPUT_PULLUP}

// set TYPE to either INPUT_PULLUP or INPUT.  If INPUT, the pin will need an external pullup resister (e.g. 10k)
// Note: pins 34,35,36,39 can be used but don't have an internal pullup, 
//       so need additional hardware (resister) if you wish to use one of them

// Additional / optional buttons - Debounce 
// Uncomment and increase this value if you find the buttons bounce. i.e. activate twice on a single press
// Times are in miliseconds
// default = 50
// #define ADDITIONAL_BUTTON_DEBOUNCE_DELAY        50    

// *******************************************************************************************************************
// This IS NOW DEPRECATED
// *******************************************************************************************************************
// Additional buttons

// This format for the additional buttons IS NOW DEPRECATED
// Use the *New Additional / optional buttons* section instead

// Define what each of the optional additional buttons will do.
// See static.h or README.md for details on the allowed functions.
// Set the ones you don't need to FUNCTION_NULL. (They will default to FUNCTION_NULL in any case.)
// The button numbers relate to the GPIO pins 5,15,25,26,27,32,33

// #define CHOSEN_ADDITIONAL_BUTTON_0_FUNCTION     FUNCTION_NULL   // GPIO 5
// #define CHOSEN_ADDITIONAL_BUTTON_1_FUNCTION     FUNCTION_NULL   // GPIO 15
// #define CHOSEN_ADDITIONAL_BUTTON_2_FUNCTION     FUNCTION_NULL   // GPIO 25
// #define CHOSEN_ADDITIONAL_BUTTON_3_FUNCTION     FUNCTION_NULL   // GPIO 26
// #define CHOSEN_ADDITIONAL_BUTTON_4_FUNCTION     FUNCTION_NULL   // GPIO 27
// #define CHOSEN_ADDITIONAL_BUTTON_5_FUNCTION     FUNCTION_NULL   // GPIO 32
// #define CHOSEN_ADDITIONAL_BUTTON_6_FUNCTION     FUNCTION_NULL   // GPIO 33

// The following are either 'true' = LATCHING or 'false' = NOT LATCHING
// Only relevant for the buttons that are set to FUNCTION_00 to FUNCTION_32
//
// #define ADDITIONAL_BUTTON_OVERRIDE_DEFAULT_LATCHING true
//
// #define ADDITIONAL_BUTTON_0_LATCHING true
// #define ADDITIONAL_BUTTON_1_LATCHING true
// #define ADDITIONAL_BUTTON_2_LATCHING false
// #define ADDITIONAL_BUTTON_3_LATCHING false
// #define ADDITIONAL_BUTTON_4_LATCHING true
// #define ADDITIONAL_BUTTON_5_LATCHING true
// #define ADDITIONAL_BUTTON_6_LATCHING true
//
// ********************************************************************************************
// ******  THIS IS THE MAPPING FOR THE EXTRA BUTTONS IN MY FIRST PROTOTYPE WiTcontroller.  ***** 
// PWH Version 1.00    
// define what each of the optional additional buttons will do
// see static.h or README.md for details on the allowed functions
// all must be included, just set the ones you don't need to FUNCTION_NULL
// the button numbers relate to the GPIO pins 5,15,25,26,27,32,33

// #define CHOSEN_ADDITIONAL_BUTTON_0_FUNCTION     FUNCTION_4   	  // GPIO 5		{ to be Mapped to Button #2 - Dynamic Brake
// #define CHOSEN_ADDITIONAL_BUTTON_1_FUNCTION     FUNCTION_6    	  // GPIO 15	{ to be Mapped to Button #3 - Brake
// #define CHOSEN_ADDITIONAL_BUTTON_2_FUNCTION     FUNCTION_1    	  // GPIO 25	{ to be Mapped to Button #4 - Short Horn
// #define CHOSEN_ADDITIONAL_BUTTON_3_FUNCTION     FUNCTION_2 	      // GPIO 26	{ to be Mapped to Button #5 - Horn
// #define CHOSEN_ADDITIONAL_BUTTON_4_FUNCTION     FUNCTION_7    	  // GPIO 27	{ to be Mapped to Button #6 - ESU FT - Coast
// #define CHOSEN_ADDITIONAL_BUTTON_5_FUNCTION     FUNCTION_8    	  // GPIO 32	{ to be Mapped to Button #7 - ESU FT - Run 8
// #define CHOSEN_ADDITIONAL_BUTTON_6_FUNCTION     FUNCTION_9    	  // GPIO 33	{ to be Mapped to Button #8 - ESU FT - Drive Hold
// #define CHOSEN_ADDITIONAL_BUTTON_7_FUNCTION     FUNCTION_0   	  // GPIO 35	{ to be Mapped to Button #1 - Dim Headlight
// #define CHOSEN_ADDITIONAL_BUTTON_8_FUNCTION     FUNCTION_NULL 	  // GPIO 36
// #define CHOSEN_ADDITIONAL_BUTTON_9_FUNCTION     FUNCTION_NULL 	  // GPIO 39

// Note: pins 35,36,39 can be used but don't have an internal pullup, 
//       so need additional hardware (resister) if you wish to use one of them

// *******************************************************************************************************************
// *******************************************************************************************************************
// ******  THIS IS THE MAPPING FOR THE EXTRA BUTTONS IN MY FIRST PROTOTYPE WiTcontroller.  ***** PWH
// Version 1.01   
// Define what each of the optional additional buttons will do.
// *******************************************************************************************************************
// New Additional / optional buttons
//
// The way to add additional buttons changed in version 1.83.
// ( The old way will continue to work. )
//
// This new format allows for up to 11 additional buttons
//
// To use the new format USE_NEW_ADDITIONAL_BUTTONS_FORMAT must be set to 'true'
// And NEW_MAX_ADDITIONAL_BUTTONS must be set to the number you want to use. 
// Then the following lists MUST have the same number of elements
//                          ˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉˉ 
// e.g. NEW_ADDITIONAL_BUTTON_ACTIONS{val0, val1, .. val10, up-to-val11}
// e.g. NEW_ADDITIONAL_BUTTON_LATCHING{val0, val1, .. val10, up-to-val11}
// e.g. NEW_ADDITIONAL_BUTTON_PIN{val0, val1, .. val10, up-to-val11}
// e.g. NEW_ADDITIONAL_BUTTON_TYPE{val0, val1, .. val10, up-to-val11}
// Make sure the last entry in each list does NOT have the comma (,)
//
// note: The '\' at the end of each line below makes it a multi-line command 
//       and is required for every line except the last for each array definition.
//       Alternately you can put the entire array on a single line without the '\'.


#define USE_NEW_ADDITIONAL_BUTTONS_FORMAT true

// Only relevant for the buttons that are set to FUNCTION_00 to FUNCTION_32
// Either 'true' = LATCHING or 'false' = NOT LATCHING
#define ADDITIONAL_BUTTON_OVERRIDE_DEFAULT_LATCHING true

// must be 1 or greater
#define NEW_MAX_ADDITIONAL_BUTTONS 6

#define NEW_ADDITIONAL_BUTTON_ACTIONS {\
                            FUNCTION_1,\
                            FUNCTION_2,\
                            FUNCTION_4,\
                            FUNCTION_6,\
                            FUNCTION_7,\
                            FUNCTION_8\
                          }
//                            FUNCTION_NULL,
//                            FUNCTION_NULL,
//                            FUNCTION_NULL,
//                            FUNCTION_NULL
//                            }

#define NEW_ADDITIONAL_BUTTON_LATCHING {\
                            false,\
                            false,\
                            true,\
                            true,\
                            true,\
                            true \
                           }
//                            true,
//                            true,
//                            true,
//                            true,
//                            true,
//                            true
//                            }

// Set the pin value to -1 to skip that value.
// For pins on the ESP32 use the number shown on the board/diagram
// If you are using pins on a I2C GPIO Expansion board, they will be numbered: 0-15
//
#define NEW_ADDITIONAL_BUTTON_PIN {\
                            0,\
                            4,\
                            16,\
                            34,\
                            39,\
                            36 \
                           }
//                            -1\,
//                            -1\,
//                            -1\,
//                            -1\,
//                            -1
//                            }

// Set to either INPUT_PULLUP or INPUT.  If INPUT, the pin will need an external pullup resister (e.g. 10k)
// Pins 34,35,36,39 can be used but don't have an internal pullup, so use INPUT for these
//
#define NEW_ADDITIONAL_BUTTON_TYPE {\
                            INPUT_PULLUP,\
                            INPUT_PULLUP,\
                            INPUT_PULLUP,\
                            INPUT,\
                            INPUT,\
                            INPUT \
                           }
//                            INPUT,
//                            INPUT,
//                            INPUT,
//                            INPUT,
//                            INPUT
//                            }

// *******************************************************************************************************************
// Throttle Pot

// To use a pot instead of the rotary encoder, uncomment the following lines
// Set the number of notches and the values of the pot at each notch.  
// Warning: Must be 8 values

// #define USE_ROTARY_ENCODER_FOR_THROTTLE false
// #define THROTTLE_POT_PIN 39
// #define THROTTLE_POT_USE_NOTCHES false  // if false, only THROTTLE_POT_NOTCH_VALUES 0 and 7 below (first and last) are use. 
// #define THROTTLE_POT_NOTCH_VALUES {1,585,1170,1755,2340,2925,3510,4094}
// #define THROTTLE_POT_NOTCH_SPEEDS {0,18,36,54,72,90,108,127}  // 0-127 These numbers will be the speed step for each of the 8 throttle notches.

// note: The example values above for THROTTLE_POT_NOTCH_VALUES are useble for a 10k ohm pot 
// but any value pot can be used by altering that values. Just adjust the numbers.
// Numbers can generated by Generate_Throttle__Brake__Reverser__Numbers program by Sumner Patterson

// *******************************************************************************************************************
// Battery Test

// To use a battery test you must add additional hardware. (see the README.md file)

//  USE_BATTERY_SLEEP_AT_PERCENT - will put the device to sleep if the battery falls below this level
//                               - set to 0 (zero) to disable
//
#define USE_BATTERY_TEST true
#define BATTERY_TEST_PIN 35
#define BATTERY_CONVERSION_FACTOR 1.78          // this is the factor to convert the raw reading to a percentage.  It will depend on the hardware used.  Adjust as needed.
#define USE_BATTERY_PERCENT_AS_WELL_AS_ICON true
#define USE_BATTERY_SLEEP_AT_PERCENT 3          // will put the device to sleep if the battery falls below this level

// *******************************************************************************************************************
// Heartbeat 

// If no response is received from the server in the specified period (milliseconds), shut down.
// default is 4 minutes = 240000

// #define MAX_HEARTBEAT_PERIOD 240000

// Heartbeat is enabled by default.  Can be turned on or off in the menus
// #define HEARTBEAT_ENABLED true 
// #define DEFAULT_HEARTBEAT_PERIOD 10  // in seconds default period if HEARTBEAT_ENABLED is true

// *******************************************************************************************************************
// Roster Sorting

//   0 = no sorting.  As it comes from the server
//   1 = sort by name (first 10 chars only)
//   2 = sort by DCC Address
// The default is 'sort by name'

#define ROSTER_SORT_SEQUENCE 2

// *******************************************************************************************************************
// Release Loco from Consist Options

// By default, to release a single loco from a consist/mu, you must enter the address of the loco
// Uncomment this line if you wish to release locos by just entering the index number (1-8) of 
// the loco in the consist
// #define DROP_LOCO_BY_INDEX true

// *******************************************************************************************************************
// Translations

// Uncomment the appropriate line to change the language displayed.
// If you wish to override any of the translations you can do so individually here,
// but, the define(s) must done before the #include of the base langauge file
//
//
// German - Deutsche
// #include "language_deutsch.h"
// Italian - Italiano
// #include "language_italiano.h"

// Note: to use Chinese characters a suitable font must also be selected below
// Chinese - 中文
// #include "language_chinese.h"

// *******************************************************************************************************************
// Primary Font override (not recommended other than for use of Chinese characters)

// Any 8 pixel high fonts from here can be used https://github.com/olikraus/u8g2/wiki/fntlist8#8-pixel-height
// Uncomment if and change to the appropriate font if required
//  #define FONT_DEFAULT u8g2_font_5x8_tf

// Chinese
// This font is required for Chinese characters
// Uncomment it if you wish to use the Chinese translations
// #define FONT_DEFAULT u8g2_font_boutique_bitmap_7x7_t_gb2312

// ******************

// Direction Indication Font override (not recommended other than for use of Chinese characters)
// Any font from here can be used https://github.com/olikraus/u8g2/wiki/fntlist8#8-pixel-height
// The default one is 29px high
// Uncomment if and change to the appropriate font if required
// #define FONT_DIRECTION u8g2_font_neuecraft_tr

// Chinese
// One (only) of these fonts is required for Chinese characters.  The first is recommended. The second is smaller is preferred.
// #define FONT_DIRECTION u8g2_font_boutique_bitmap_9x9_bold_t_gb2312
// #define FONT_DIRECTION u8g2_font_wqy13_t_gb2312a

// *******************************************************************************************************************
// Startup Commands

// The following commands will be executed, in order, after connection to the WiThrottle Server.
// Each must be ONLY ONE single valid command.  Either a direct action or a menu action.
//
// Note: Selecting from the roster/turnouts etc. is not possible as the commands 
// will execute before the roster loads.

// e.g. this command will automatically acquire loco with a DCC Address of 222  
// then set the speed multplier to *3
// #define STARTUP_COMMAND_1 "*1222#"
// #define STARTUP_COMMAND_2 "6"
// #define STARTUP_COMMAND_3 ""
// #define STARTUP_COMMAND_4 ""

// Enabling this option will automatically acquire the only roster entry after connection to the 
// WiThrottle Server, but only if there is only one roster entry 
// #define ACQUIRE_ROSTER_ENTRY_IF_ONLY_ONE true

// *******************************************************************************************************************
// Display Loco name

// Uncomment if you want to display the loco name instead of DCC address
// #define DISPLAY_LOCO_NAME

// if you want to change the space between two loco names/ dcc addresses
// #define CONSIST_SPACE_BETWEEN_LOCOS " "

// ***************************************************
// Loco Acquire

// If you never want on-the-fly consists/MUs then uncomment this line
// This can be altered on the fly in the Extras menu

// #define DROP_BEFORE_ACQUIRE true

// ***************************************************
// Restore previously acquired locos on connection

// If this option is enabled, and you have deliberately saved the current 
// locos ( # -> 9 -> 9), then the next time you connect the device it 
// will try to load the previously acquired locos.
//
// enabled by default

// #define RESTORE_ACQUIRED_LOCOS false

// *******************************************************************************************************************
// Custom App Name

// Uncomment and change if required
//
#define CUSTOM_APPNAME "WiTcontroller TFT"