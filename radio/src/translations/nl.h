/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   opentx - https://github.com/opentx/opentx
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

// NL translations author: Jean-Pierre van Melis (Fraternl)

/*
 * Formatting octal codes available in TR_ strings:
 *  \037\x           -sets LCD x-coord (x value in octal)
 *  \036             -newline
 *  \035             -horizontal tab (ARM only)
 *  \001 to \034     -extended spacing (value * FW/2)
 *  \0               -ends current string
 */

#define TR_MIN_PLURAL2  2
#define TR_MAX_PLURAL2  2
// For this number of minute in the last decimal place singular form is used in
// plural
#define TR_USE_SINGULAR_IN_PLURAL 1
#define TR_USE_PLURAL2_SPECIAL_CASE 0
// If the number of minutes is above this value PLURAL2 is used
#define TR_USE_PLURAL2 INT_MAX

#define TR_MINUTE_SINGULAR     "minute"
#define TR_MINUTE_PLURAL1      "minutes"
#define TR_MINUTE_PLURAL2      "minutes"

#define TR_OFFON               "UIT","AAN"
#define TR_MMMINV              "---","INV"
#define TR_VBEEPMODE           "Stil","Alarm","NoKey","Alles"
#define TR_VBLMODE             "UIT",TR("Keys","Toetsen"),TR("Stick","Sticks"),"Beide","AAN"
#define TR_TRNMODE             "UIT","Add","Replace"
#define TR_TRNCHN              "CH1","CH2","CH3","CH4"

#define TR_AUX_SERIAL_MODES    "UIT","Telem Mirror","Telemetry In","SBUS Leerling","LUA","CLI","GPS","Debug","SpaceMouse","External module"
#define TR_SWTYPES             "Geen","Wissel","2POS","3POS"
#define TR_POTTYPES            "Geen",TR("Pot w. det","Pot met Klik"),TR("Multipos","Standenschakelaar"),TR("Pot", "Pot zonder Klik")
#define TR_SLIDERTYPES         "Geen","Schuif"
#define TR_VPERSISTENT         "UIT","Vliegtijd","Handmatige Reset"
#define TR_COUNTRY_CODES       TR("US","Amerika"),TR("JP","Japan"),TR("EU","Europa")
#define TR_USBMODES            "Ask",TR("Joyst","Joystick"),TR("SDCard","Storage"),"Serial"
#define TR_JACK_MODES          "Ask","Audio","Trainer"
#define TR_TELEMETRY_PROTOCOLS "FrSky S.PORT","FrSky D","FrSky D (cable)","TBS Crossfire","Spektrum","AFHDS2A IBUS","Multi Telemetry"

#define TR_SBUS_INVERSION_VALUES       "normal","not inverted"
#define TR_MULTI_TELEMETRY_MODE        "Off","On","Off+Aux","On+Aux"
#define TR_MULTI_CUSTOM        "Custom"
#define TR_VTRIMINC            TR("Expo","Exponentieel"),TR("ExFijn","Extra Fijn"),"Fijn","Medium","Grof"
#define TR_VDISPLAYTRIMS       "Nee","Kort","Ja"
#define TR_VBEEPCOUNTDOWN      "Stilte","Beeps","Spraak","Tril",TR2_2("B & T","Beeps & Tril"),TR2_2("Spr & Tr","Spraak & Tril")
#define TR_COUNTDOWNVALUES     "5s","10s","20s","30s"
#define TR_VVARIOCENTER        "Tonen","Stilte"
#define TR_CURVE_TYPES         "Standaard","Custom"
#define TR_ADCFILTERVALUES     "Globale","Off","On"

#if defined(PCBX10)
  #define TR_RETA123           "R","E","T","A","1","3","2","4","5","6","7","L","R"
#elif defined(PCBHORUS)
  #define TR_RETA123           "R","E","T","A","1","3","2","4","5","L","R"
#elif defined(PCBX9E)
  #define TR_RETA123           "R","E","T","A","1","2","3","4","L","R","L","R"
#elif defined(PCBTARANIS)
  #define TR_RETA123           "R","E","T","A","1","2","3","L","R"
#else
  #define TR_RETA123           "R","E","T","A","1","2","3"
#endif

#define TR_VCURVEFUNC          "---","x>0","x<0","|x|","f>0","f<0","|f|"
#define TR_VMLTPX              "Add","Multiply","Replace"
#define TR_VMLTPX2             "+=","*=",":="

#if defined(PCBHORUS)
  #define TR_VMIXTRIMS         "OFF","ON","Rud","Ele","Thr","Ail","T5","T6"
#else
  #define TR_VMIXTRIMS         "OFF","ON","Rud","Ele","Thr","Ail"
#endif

#if LCD_W >= 212
  #define TR_CSWTIMER          "Timer"
  #define TR_CSWSTICKY         "Stcky"
  #define TR_CSWRANGE          "Range"
  #define TR_CSWSTAY           "Edge"
#else
  #define TR_CSWTIMER          "Tim"
  #define TR_CSWSTICKY         "Glue"
  #define TR_CSWRANGE          "Rnge"
  #define TR_CSWSTAY           "Edge"
#endif

#define TR_CSWEQUAL            "a=x"
#define TR_VCSWFUNC            "---",TR_CSWEQUAL,"a" STR_CHAR_TILDE "x","a>x","a<x",TR_CSWRANGE,"|a|>x","|a|<x","AND","OR","XOR",TR_CSWSTAY,"a=b","a>b","a<b",STR_CHAR_DELTA "≥x","|" STR_CHAR_DELTA "|≥x",TR_CSWTIMER,TR_CSWSTICKY

#if defined(VARIO)
  #define TR_VVARIO            "Vario"
#else
  #define TR_VVARIO            "[Vario]"
#endif

#if defined(AUDIO)
  #define TR_SOUND             "Geluid"
#else
  #define TR_SOUND             "Beep"
#endif

#if defined(HAPTIC)
  #define TR_HAPTIC            "Haptic"
#else
  #define TR_HAPTIC            "[Haptic]"
#endif

#if defined(VOICE)
  #define TR_PLAY_TRACK        "Play Track"
  #define TR_PLAY_VALUE        TR("Play Val", "Play Value")
#else
  #define TR_PLAY_TRACK        "[Play Trk]"
  #define TR_PLAY_VALUE        "[Play Val]"
#endif

#define TR_SF_BG_MUSIC         "BgMusic","BgMusic ||"

#if defined(SDCARD)
  #define TR_SDCLOGS           "SD Logs"
#else
  #define TR_SDCLOGS           "[SD Logs]"
#endif

#if defined(GVARS)
  #define TR_ADJUST_GVAR       "Wijzig"
#else
  #define TR_ADJUST_GVAR       "[WijzigGV]"
#endif

#if defined(LUA)
  #define TR_SF_PLAY_SCRIPT   "Lua Script"
#else
  #define TR_SF_PLAY_SCRIPT   "[Lua]"
#endif

#if defined(DEBUG)
  #define TR_SF_TEST          ,"Test"
#else
  #define TR_SF_TEST
#endif

#if defined(OVERRIDE_CHANNEL_FUNCTION) && LCD_W >= 212
  #define TR_SF_SAFETY        "Override"
#elif defined(OVERRIDE_CHANNEL_FUNCTION)
  #define TR_SF_SAFETY        "Overr."
#else
  #define TR_SF_SAFETY        "---"
#endif

#define TR_SF_SCREENSHOT      "Schermafdr"
#define TR_SF_RACING_MODE     "RacingMode"
#define TR_SF_DISABLE_TOUCH   "No Touch"
#define TR_SF_SET_SCREEN      "Set Main Screen"
#define TR_SF_RESERVE         "[reserve]"

#define TR_VFSWFUNC           TR_SF_SAFETY,"Trainer","Inst. Trim","Reset","Set",TR_ADJUST_GVAR,"Volume","SetFailsafe","RangeCheck","ModuleBind",TR_SOUND,TR_PLAY_TRACK,TR_PLAY_VALUE,TR_SF_RESERVE,TR_SF_PLAY_SCRIPT,TR_SF_RESERVE,TR_SF_BG_MUSIC,TR_VVARIO,TR_HAPTIC,TR_SDCLOGS,"Backlight",TR_SF_SCREENSHOT,TR_SF_RACING_MODE,TR_SF_DISABLE_TOUCH,TR_SF_SET_SCREEN TR_SF_TEST

#define TR_FSW_RESET_TELEM    TR("Telm", "Telemetrie")

#if LCD_W >= 212
  #define TR_FSW_RESET_TIMERS "Timer 1","Timer 2","Timer 3"
#else
  #define TR_FSW_RESET_TIMERS "Tmr1","Tmr2","Tmr3"
#endif

#define TR_VFSWRESET           TR_FSW_RESET_TIMERS,TR("All","Vliegdata"),TR_FSW_RESET_TELEM

#define TR_FUNCSOUNDS          TR("Bp1","Beep1"),TR("Bp2","Beep2"),TR("Bp3","Beep3"),TR("Wrn1","Warn1"),TR("Wrn2","Warn2"),TR("Chee","Cheep"),TR("Rata","Ratata"),"Tick",TR("Sirn","Siren"),"Ring",TR("SciF","SciFi"),TR("Robt","Robot"),TR("Chrp","Chirp"),"Tada",TR("Crck","Crickt"),TR("Alrm","AlmClk")

#define LENGTH_UNIT_IMP        "ft"
#define SPEED_UNIT_IMP         "mph"
#define LENGTH_UNIT_METR       "m"
#define SPEED_UNIT_METR        "kmh"

#define TR_VUNITSSYSTEM        TR("Mtrsch","Metrisch"),"Engels"
#define TR_VTELEMUNIT          "-","V","A","mA","kts","m/s","f/s","kmh","mph","m","ft","°C","°F","%","mAh","W","mW","dB","rpm","g","°","rad","ml","fOz","mlm","Hz","mS","uS","km","dBm"

#define STR_V                  (STR_VTELEMUNIT[1])
#define STR_A                  (STR_VTELEMUNIT[2])

#define TR_VTELEMSCREENTYPE    "Geen","Nums","Balken","Script"
#define TR_GPSFORMAT           "DMS","NMEA"


#define TR_VSWASHTYPE                  "---","120","120X","140","90"

#define TR_STICKS_VSRCRAW              STR_CHAR_STICK "Rud", STR_CHAR_STICK "Ele", STR_CHAR_STICK "Thr", STR_CHAR_STICK "Ail"

#if defined(PCBHORUS)
  #define TR_TRIMS_VSRCRAW             STR_CHAR_TRIM "Rud", STR_CHAR_TRIM "Ele", STR_CHAR_TRIM "Thr", STR_CHAR_TRIM "Ail", STR_CHAR_TRIM "T5", STR_CHAR_TRIM "T6"
#else
  #define TR_TRIMS_VSRCRAW             STR_CHAR_TRIM "Rud", STR_CHAR_TRIM "Ele", STR_CHAR_TRIM "Thr", STR_CHAR_TRIM "Ail"
#endif

#if defined(PCBHORUS)
  #define TR_TRIMS_SWITCHES            STR_CHAR_TRIM "Rl", STR_CHAR_TRIM "Rr", STR_CHAR_TRIM "Ed", STR_CHAR_TRIM "Eu", STR_CHAR_TRIM "Td", STR_CHAR_TRIM "Tu", STR_CHAR_TRIM "Al", STR_CHAR_TRIM "Ar", STR_CHAR_TRIM "5d", STR_CHAR_TRIM "5u", STR_CHAR_TRIM "6d", STR_CHAR_TRIM "6u"
#else
  #define TRIM_SWITCH_CHAR             TR("t",STR_CHAR_TRIM)
  #define TR_TRIMS_SWITCHES            TRIM_SWITCH_CHAR "Rl", TRIM_SWITCH_CHAR "Rr", TRIM_SWITCH_CHAR "Ed", TRIM_SWITCH_CHAR "Eu", TRIM_SWITCH_CHAR "Td", TRIM_SWITCH_CHAR "Tu", TRIM_SWITCH_CHAR "Al", TRIM_SWITCH_CHAR "Ar"
#endif

#if defined(PCBHORUS) || defined(PCBNV14)
  #define TR_VKEYS                     "PGUP","PGDN","ENTER","MDL","RTN","TELE","SYS"
#elif defined(PCBXLITE)
  #define TR_VKEYS                     "Shift","Exit","Enter","Down","Up","Right","Left"
#elif defined(RADIO_FAMILY_JUMPER_T12)
  #define TR_VKEYS                     "Exit","Enter","Down","Up","Right","Left"
#elif defined(RADIO_TX12) || defined(RADIO_TX12MK2)
  #define TR_VKEYS                     "Exit","Enter","PGUP","PGDN","SYS","MDL","TELE"
#elif defined(RADIO_T8) || defined(RADIO_COMMANDO8)
  #define TR_VKEYS                     "RTN","ENTER","PGUP","PGDN","SYS","MDL","UP","DOWN"
#elif defined(RADIO_ZORRO)
  #define TR_VKEYS                     "RTN","ENTER","PGUP","PGDN","SYS","MDL","TELE"
#elif defined(PCBTARANIS)
  #define TR_VKEYS                     "Menu","Exit","Enter","Page","Plus","Minus"
#else
  #define TR_VKEYS                     "Menu","Exit","Down","Up","Right","Left"
#endif

#if defined(PCBNV14)
#define  TR_RFPOWER_AFHDS2             "Default","High"
#endif

#define TR_ROTARY_ENCODERS
#define TR_ROTENC_SWITCHES

#define TR_ON_ONE_SWITCHES     "ON","One"

#if defined(COLORLCD)
  #define TR_ROTARY_ENC_OPT         "Normal","Inverted"
#else
  #define TR_ROTARY_ENC_OPT         "Normal","Inverted","V-I H-N","V-I H-A"
#endif

#if defined(IMU)
  #define TR_IMU_VSRCRAW       "TltX","TltY",
#else
  #define TR_IMU_VSRCRAW
#endif

#if defined(HELI)
  #define TR_CYC_VSRCRAW       "CYC1","CYC2","CYC3"
#else
  #define TR_CYC_VSRCRAW       "[C1]","[C2]","[C3]"
#endif

#define TR_RESERVE_VSRCRAW   "[--]"
#define TR_EXTRA_VSRCRAW     "Batt","Time","GPS",TR_RESERVE_VSRCRAW,TR_RESERVE_VSRCRAW,TR_RESERVE_VSRCRAW,TR_RESERVE_VSRCRAW,"Tmr1","Tmr2","Tmr3"

#define TR_VTMRMODES         "UIT","AAN","Strt","THs","TH%","THt"

#define TR_VTRAINER_MASTER_OFF         "OFF"
#define TR_VTRAINER_MASTER_JACK        "Master/Jack"
#define TR_VTRAINER_SLAVE_JACK         "Slave/Jack"
#define TR_VTRAINER_MASTER_SBUS_MODULE "Master/SBUS Module"
#define TR_VTRAINER_MASTER_CPPM_MODULE "Master/CPPM Module"
#define TR_VTRAINER_MASTER_BATTERY     "Master/Serial"
#define TR_VTRAINER_BLUETOOTH          "Master/" TR("BT","Bluetooth"), "Slave/" TR("BT","Bluetooth")
#define TR_VTRAINER_MULTI              "Master/Multi"
#define TR_VFAILSAFE                   "Niet Gezet","Vasthouden","Custom","Geen Pulsen","Ontvanger"
#define TR_VSENSORTYPES                "Custom","Berekend"
#define TR_VFORMULAS                   "Optellen","Gemiddeld","Min","Max","Vermenigvuld","Totaal","Cellen","Verbruik","Afstand"
#define TR_VPREC                       "0.--","0.0 ","0.00"
#define TR_VCELLINDEX                  "Laagste","1e Cel","2e Cel","3e Cel","4e Cel","5e Cel","6e Cel","7e Cel","8e Cel","Hoogste","Delta"
#define TR_TEXT_SIZE                   "Standard","Tiny","Small","Mid","Double"
#define TR_SUBTRIMMODES                STR_CHAR_DELTA " (center only)","= (symetrical)"
#define TR_TIMER_DIR                   TR("Remain", "Show Remain"), TR("Elaps.", "Show Elapsed")

#if defined(COLORLCD)
#if defined(BOLD)
#define TR_FONT_SIZES                  "STD"
#else
#define TR_FONT_SIZES                  "STD","BOLD","XXS","XS","L","XL","XXL"
#endif
#endif

#if defined(PCBFRSKY)
  #define TR_ENTER             "[ENTER]"
#elif defined(PCBNV14)
  #define TR_ENTER             "[NEXT]"
#else
  #define TR_ENTER             "[MENU]"
#endif

#if defined(PCBHORUS)
  #define TR_EXIT                      "RTN"
  #define TR_OK                        TR_ENTER
#else
  #define TR_EXIT                      "EXIT"
  #define TR_OK                        TR("\010" "\010" "\010" "[OK]", "\010" "\010" "\010" "\010" "\010" "[OK]")
#endif

#if defined(PCBTARANIS)
  #define TR_POPUPS_ENTER_EXIT         TR(TR_EXIT "\010" TR_ENTER, TR_EXIT "\010" "\010" "\010" "\010" TR_ENTER)
#else
  #define TR_POPUPS_ENTER_EXIT         TR_ENTER "\010" TR_EXIT
#endif

#define TR_FREE                "vrij"
#define TR_YES                 "Yes"
#define TR_NO                  "No"
#define TR_DELETEMODEL         "WIS MODEL"
#define TR_COPYINGMODEL        "Kopieer Model"
#define TR_MOVINGMODEL         "Verplaats Model"
#define TR_LOADINGMODEL        "Laad Model..."
#define TR_UNLABELEDMODEL              "Unlabeled"
#define TR_NAME                "Naam"
#define TR_MODELNAME           "Modelnaam"
#define TR_PHASENAME           "Modus"
#define TR_MIXNAME             "Mix Naam"
#define TR_INPUTNAME           "Input Naam"
#define TR_EXPONAME            "Lijn Naam"
#define TR_BITMAP              "Modelafbeelding"
#define TR_NO_PICTURE                  "No Picture"
#define TR_TIMER               TR("Timer", "Timer ")
#define TR_START               "Start"
#define TR_ELIMITS             TR("E.Limits", "Extended Limits")
#define TR_ETRIMS              TR("E.Trims", "Extended Trims")
#define TR_TRIMINC             "Trim Step"
#define TR_DISPLAY_TRIMS       "Toon Trims"
#define TR_TTRACE              TR("T-Source", INDENT "Source")
#define TR_TTRIM               TR("T-Trim", INDENT "Trim Idle Only")
#define TR_TTRIM_SW            TR("T-Trim-Sw", INDENT "Trim switch")
#define TR_BEEPCTR             TR("Ctr Beep", "Center Beep")
#define TR_USE_GLOBAL_FUNCS    TR("Glob.Funcs", "Globale Functies")
#define TR_PROTOCOL            TR("Proto", "Protocol")
#define TR_PPMFRAME            INDENT "PPM frame"
#define TR_REFRESHRATE         TR(INDENT "Refresh", INDENT "Refresh rate")
#define STR_WARN_BATTVOLTAGE   TR(INDENT "Output is VBAT: ", INDENT "Warning: output level is VBAT: ")
#define TR_WARN_5VOLTS         "Warning: output level is 5 volts"
#define TR_MS                  "ms"
#define TR_SWITCH              TR("Schak.", "Schakelaar")
#define TR_SF_SWITCH           "Trigger"
#define TR_TRIMS               "Trims"
#define TR_FADEIN              "Fade in"
#define TR_FADEOUT             "Fade out"
#define TR_DEFAULT             "(default)"
#if defined(COLORLCD)
  #define TR_CHECKTRIMS        "Check FM Trims"
#else
  #define TR_CHECKTRIMS        CENTER "\006Check\012Trims"
#endif
#define OFS_CHECKTRIMS         CENTER_OFS+(9*FW)
#define TR_SWASHTYPE           "Swash Type"
#define TR_COLLECTIVE          TR("Collective", "Coll. pitch source")
#define TR_AILERON             TR("Lateral cyc.", "Lateral cyc. source")
#define TR_ELEVATOR            TR("Long. cyc.", "Long. cyc. source")
#define TR_SWASHRING           "Swash Ring"
#define TR_MODE                "Mode"
#if LCD_W > LCD_H
  #define TR_LEFT_STICK        "Linkerkant"
#else
  #define TR_LEFT_STICK        "Li"
#endif
#define TR_SUBTYPE             INDENT "Subtype"
#define TR_NOFREEEXPO          "Geen vrije expo!"
#define TR_NOFREEMIXER         "Geen vrije mixer!"
#define TR_SOURCE               "Source"
#define TR_WEIGHT              "Gewicht"
#define TR_SIDE                "Side"
#define TR_OFFSET               "Offset"
#define TR_TRIM                "Trim"
#define TR_DREX                "DRex"
#define DREX_CHBOX_OFFSET      30
#define TR_CURVE               "Curve"
#define TR_FLMODE              TR("Mode", "Modes")
#define TR_MIXWARNING          "Melding"
#define TR_OFF                 "UIT"
#define TR_ANTENNA             "Antenna"
#define TR_NO_INFORMATION      TR("No info", "No information")
#define TR_MULTPX              "Multpx"
#define TR_DELAYDOWN           "Vertr.Dn"
#define TR_DELAYUP             "Vertr.Up"
#define TR_SLOWDOWN            "Langz.Dn"
#define TR_SLOWUP              "Langz.Up"
#define TR_MIXES               "MIXER"
#define TR_CV                  "CV"
#if defined(PCBNV14)
#define TR_GV                  "GV"
#else
#define TR_GV                  TR("G", "GV")
#endif
#define TR_RANGE               INDENT "Bereik"
#define TR_CENTER              INDENT "Centreer"
#define TR_ALARM               "Alarm"
#define TR_BLADES              "Bladen"

#define TR_SCREEN              "Scherm\001"
#define TR_SOUND_LABEL         "Geluid-"
#define TR_LENGTH              "Duur"
#define TR_BEEP_LENGTH         "Piep-Lengte"
#define TR_BEEP_PITCH           "Piep-Freq. +/-"
#define TR_HAPTIC_LABEL        "Haptic"
#define TR_STRENGTH            "Sterkte"
#define TR_IMU_LABEL           "IMU"
#define TR_IMU_OFFSET          "Offset"
#define TR_IMU_MAX             "Max"
#define TR_CONTRAST            "LCD-Kontrast"
#define TR_ALARMS_LABEL        "Alarm"
#define TR_BATTERY_RANGE       TR("Accu Bereik", "Accu Spngs-Bereik") // Symbol Akku Ladezustand
#define TR_BATTERYCHARGING     "Charging..."
#define TR_BATTERYFULL         "Battery full"
#define TR_BATTERYNONE         "None!"
#define TR_BATTERYWARNING      "Accu laag"
#define TR_INACTIVITYALARM     TR("Inactiviteit", "Inactiviteit na")
#define TR_MEMORYWARNING       "Geheugen laag"
#define TR_ALARMWARNING        TR("Al Geluid uit?", "Al het geluid uit?")
#define TR_RSSI_SHUTDOWN_ALARM TR("Rssi Shutdown", "Check Rssi on Shutdown")
#define TR_MODEL_STILL_POWERED "Model still powered"
#define TR_USB_STILL_CONNECTED "USB still connected"
#define TR_MODEL_SHUTDOWN      "Shutdown ?"
#define TR_PRESS_ENTER_TO_CONFIRM "Press enter to confirm"
#define TR_THROTTLE_LABEL      "Gas"
#define TR_THROTTLE_START      "Gas Start"
#define TR_THROTTLEREVERSE     TR("Reverse", INDENT "Omgekeerd")
#define TR_MINUTEBEEP          TR("Min-Alarm", "Minuten-Alarm")
#define TR_BEEPCOUNTDOWN       INDENT "Countdown"
#define TR_PERSISTENT          TR(INDENT "Vasth.", INDENT "Vasthouden")
#define TR_BACKLIGHT_LABEL     "LCD-Verlichting"
#define TR_GHOST_MENU_LABEL    "GHOST MENU"
#define TR_STATUS              "Status"
#define TR_BLDELAY             INDENT "Duur"
#define TR_BLONBRIGHTNESS      INDENT "Aan-Helderheid"
#define TR_BLOFFBRIGHTNESS     INDENT "Uit-Helderheid"
#define TR_KEYS_BACKLIGHT      "Keys backlight"
#define TR_BLCOLOR             "Kleur"
#define TR_SPLASHSCREEN        "Startscherm Aan"
#define TR_PWR_ON_DELAY        "Pwr On delay"
#define TR_PWR_OFF_DELAY       "Pwr Off delay"
#define TR_THROTTLE_WARNING    TR(INDENT "T-Warning", INDENT "Throttle Status")
#define TR_CUSTOM_THROTTLE_WARNING     TR(INDENT INDENT INDENT INDENT "Cust-Pos", INDENT INDENT INDENT INDENT "Custom position?")
#define TR_CUSTOM_THROTTLE_WARNING_VAL TR("Pos. %", "Position %")
#define TR_SWITCHWARNING       TR(INDENT "S-Warning", INDENT "Switch Posities")
#define TR_POTWARNINGSTATE     TR(INDENT "Pot&Slid.", INDENT "Pots & sliders")
#define TR_SLIDERWARNING       TR(INDENT "Slid. pos.", INDENT "Slider positions")
#define TR_POTWARNING          TR(INDENT "Pot Warn.", INDENT "Pot Posities")
#define TR_TIMEZONE            TR("Tijdzone", "GPS-Tijdzone +/-Std")
#define TR_ADJUST_RTC          TR("Klok instellen", "Klok middels GPS instellen")
#define TR_GPS                 "GPS"
#define TR_RXCHANNELORD        TR("Kan.Volgorde", "Kanaalvolgorde")
#define TR_STICKS              "Sticks"
#define TR_POTS                "Pots"
#define TR_SWITCHES            TR("Switches","Schakelaars")
#define TR_SWITCHES_DELAY      "Vertraging"
#define TR_SLAVE               CENTER "Leerling"
#define TR_MODESRC             "Mode\006% Source"
#define TR_MULTIPLIER          "Multiplier"
#define TR_CAL                 "Cal"
#define TR_CALIBRATION         "Calibration"
#define TR_VTRIM               "Trim - +"
#define TR_CALIB_DONE          "Calibration completed"
#if defined(PCBHORUS)
  #define TR_MENUTOSTART       "Geef [Enter] om te starten"
  #define TR_SETMIDPOINT       "Centreer sticks/pots/schuiven en geef [Enter]"
  #define TR_MOVESTICKSPOTS    "Beweeg sticks/pots/schuiven en geef [Enter]"
#elif defined(COLORLCD)
  #define TR_MENUTOSTART       TR_ENTER " VOOR START"
  #define TR_SETMIDPOINT       "CENTREER STICKS/SLIDERS"
  #define TR_MOVESTICKSPOTS    "BEWEEG STICKS/POTS"
  #define TR_MENUWHENDONE      CENTER "\006" TR_ENTER " BIJ GEREED"
#else
  #define TR_MENUTOSTART       CENTER "\010" TR_ENTER " VOOR START"
  #define TR_SETMIDPOINT       TR(CENTER "\004ZET STICKS NAAR HET MIDDEN", CENTER "\004CENTREER STICKS/SLIDERS")
  #define TR_MOVESTICKSPOTS    CENTER "\006BEWEEG STICKS/POTS"
  #define TR_MENUWHENDONE      CENTER "\006" TR_ENTER " BIJ GEREED"
#endif
#define TR_TXnRX               "Tx:\0Rx:"
#define OFS_RX                 4
#define TR_NODATA              CENTER"Geen Data"
#define TR_US                         "us"
#define TR_HZ                         "Hz"
#define TR_TMIXMAXMS                  "Tmix max"
#define TR_FREE_STACK                 "Free stack"
#define TR_INT_GPS_LABEL               "Internal GPS"
#define TR_HEARTBEAT_LABEL             "Heartbeat"
#define TR_LUA_SCRIPTS_LABEL          "Lua scripts"
#define TR_FREE_MEM_LABEL             "Free mem"
#define TR_TIMER_LABEL                "Timer"
#define TR_THROTTLE_PERCENT_LABEL     "Throttle %"
#define TR_BATT_LABEL                 "Battery"
#define TR_SESSION                    "Session"
#define TR_MENUTORESET         TR_ENTER" voor Reset"
#define TR_PPM_TRAINER         "TR"
#define TR_CH                  "CH"
#define TR_MODEL               "MODEL"
#define TR_FM                  "FM"
#define TR_EEPROMLOWMEM        "EEPROM weinig geheugen"
#define TR_PRESS_ANY_KEY_TO_SKIP   "Druk een toets.."
#define TR_THROTTLE_NOT_IDLE     "Gas niet Dicht!"
#define TR_ALARMSDISABLED      "Alarm uitgeschakeld"
#define TR_PRESSANYKEY         TR("\010Druk een Toets", "Druk een Toets")
#define TR_BADEEPROMDATA       "EEPROM Ongeldig"
#define TR_BAD_RADIO_DATA      "Bad Radio Data"
#define TR_RADIO_DATA_RECOVERED        TR3("Using backup radio data","Using backup radio settings","Radio settings recovered from backup")
#define TR_RADIO_DATA_UNRECOVERABLE    TR3("Radio settings invalid","Radio settings not valid", "Unable to read valid radio settings")
#define TR_EEPROMFORMATTING    "EEPROM Initialiseren"
#define TR_STORAGE_FORMAT      "Storage Preparation"
#define TR_EEPROMOVERFLOW      "EEPROM Overflow"
#define TR_RADIO_SETUP      TR("ZENDER-INSTELLEN", "ZENDER-BASISINSTELLINGEN")


#define TR_MENUTRAINER         "LERAAR/LEERLING"
#define TR_MENUSPECIALFUNCS    "GLOBALE FUNKTIES"
#define TR_MENUVERSION         "VERSIE"
#define TR_MENU_RADIO_SWITCHES            TR("Schak.", "Schakelaar-Test")
#define TR_MENU_RADIO_ANALOGS             "Analoog-Test"
#define TR_MENU_RADIO_ANALOGS_CALIB       "CALIBRATED ANALOGS"
#define TR_MENU_RADIO_ANALOGS_RAWLOWFPS   "RAW ANALOGS (5 Hz)"
#define TR_MENUCALIBRATION     TR("CALIB. ANALOOG", "CALIBRERING Sticks+Pots")

#if defined(COLORLCD)
  #define TR_TRIMS2OFFSETS     "Trims => Subtrims"
#else
  #define TR_TRIMS2OFFSETS     "\006Trims => Subtrims"
#endif
#define TR_CHANNELS2FAILSAFE   "Channels=>Failsafe"
#define TR_CHANNEL2FAILSAFE    "Channel=>Failsafe"
#define TR_MENUMODELSEL        TR("MODELLEN", "MODEL KIEZEN")
#define TR_MENU_MODEL_SETUP    TR("MODEL-INSTELLING", "MODEL-INSTELLINGEN")
#define TR_MENUFLIGHTMODES     "VLIEGFASES"
#define TR_MENUFLIGHTMODE      "VLIEGFASE"
#define TR_MENUHELISETUP       "HELI TS-Mixer"

  #define TR_MENUINPUTS        "INPUTS"
  #define TR_MENULIMITS        "OUTPUTS"

#define TR_MENUCURVES          "CURVEN"
#define TR_MENUCURVE           "CURVE"
#define TR_MENULOGICALSWITCH   "LOGISCHE SCHAK."
#define TR_MENULOGICALSWITCHES "LOGISCHE SCHAKELRS"
#define TR_MENUCUSTOMFUNC      TR("SPEC.-FUNKTIES", "SPECIALE-FUNKTIES")
#define TR_MENUCUSTOMSCRIPTS   "LUA-SCRIPTS"
#define TR_MENUTELEMETRY       "TELEMETRIE"
#define TR_MENUSTAT            "STAT"
#define TR_MENUDEBUG           "DEBUG"
#define TR_MONITOR_CHANNELS1   "CHANNELS MONITOR 1-8"
#define TR_MONITOR_CHANNELS2   "CHANNELS MONITOR 9-16"
#define TR_MONITOR_CHANNELS3   "CHANNELS MONITOR 17-24"
#define TR_MONITOR_CHANNELS4   "CHANNELS MONITOR 25-32"
#define TR_MONITOR_SWITCHES    "LOGISCHE SCHAKELAARS MONITOR"
#define TR_MONITOR_OUTPUT_DESC "Outputs"
#define TR_MONITOR_MIXER_DESC  "Mixers"
#define TR_RECEIVER_NUM        TR("RxNum", "Receiver Nr.")
#define TR_RECEIVER            "Receiver"
#define TR_MULTI_RFTUNE        TR("Freq tune", "RF Freq. fine tune")
#define TR_MULTI_RFPOWER       "RF power"
#define TR_MULTI_WBUS          "Output"
#define TR_MULTI_TELEMETRY     "Telemetry"
#define TR_MULTI_VIDFREQ       TR("Vid. freq.", "Video frequency")
#define TR_RF_POWER            "RF Power"
#define TR_MULTI_FIXEDID       TR("FixedID", "Fixed ID")
#define TR_MULTI_OPTION        TR("Option", "Option value")
#define TR_MULTI_AUTOBIND      TR(INDENT "Bind Ch.",INDENT "Bind on channel")
#define TR_DISABLE_CH_MAP      TR("No Ch. map", "Disable Ch. map")
#define TR_DISABLE_TELEM       TR("No Telem", "Disable Telemetry")
#define TR_MULTI_DSM_AUTODTECT TR(INDENT "Autodetect", INDENT "Autodetect format")
#define TR_MULTI_LOWPOWER      TR(INDENT "Low power", INDENT "Low power mode")
#define TR_MULTI_LNA_DISABLE   INDENT "LNA disable"
#define TR_MODULE_TELEMETRY    TR(INDENT "S.Port", INDENT "S.Port link")
#define TR_MODULE_TELEM_ON     TR("ON", "Enabled")
#define TR_DISABLE_INTERNAL    TR("Disable int. RF", "Disable internal RF")
#define TR_MODULE_NO_SERIAL_MODE TR("!serial mode", "Not in serial mode")
#define TR_MODULE_NO_INPUT     TR("No input", "No serial input")
#define TR_MODULE_NO_TELEMETRY TR3( "No telmetry", "No MULTI_TELEMETRY", "No telemetry (enable MULTI_TELEMETRY)")
#define TR_MODULE_WAITFORBIND  "Bind to load protocol"
#define TR_MODULE_BINDING      "Binding"
#define TR_MODULE_UPGRADE_ALERT TR3("Upg. needed", "Module upgrade required", "Module\nUpgrade required")
#define TR_MODULE_UPGRADE      TR("Upg. advised", "Module update recommended")
#define TR_REBIND              "Rebinding required"
#define TR_REG_OK              "Registration ok"
#define TR_BIND_OK             "Bind successful"
#define TR_BINDING_CH1_8_TELEM_ON   "Ch1-8 Telem ON"
#define TR_BINDING_CH1_8_TELEM_OFF  "Ch1-8 Telem OFF"
#define TR_BINDING_CH9_16_TELEM_ON  "Ch9-16 Telem ON"
#define TR_BINDING_CH9_16_TELEM_OFF "Ch9-16 Telem OFF"
#define TR_PROTOCOL_INVALID    TR("Prot. invalid", "Protocol invalid")
#define TR_MODULE_STATUS       TR(INDENT "Status", INDENT "Module Status")
#define TR_MODULE_SYNC         TR(INDENT "Sync", INDENT "Proto Sync Status")
#define TR_MULTI_SERVOFREQ     TR("Servo rate", "Servo update rate")
#define TR_MULTI_MAX_THROW     TR("Max. Throw", "Enable max. throw")
#define TR_MULTI_RFCHAN        TR("RF Channel", "Select RF channel")
#define TR_FLYSKY_TELEMETRY    TR("FlySky RSSI #", "Use FlySky RSSI value without rescalling")
#define TR_GPS_COORDS_FORMAT   TR("GPS-coord.", "GPS-coordinaten format")
#define TR_VARIO               "Variometer"
#define TR_PITCH_AT_ZERO       "Laagste Toon"
#define TR_PITCH_AT_MAX        "Hoogste Toon"
#define TR_REPEAT_AT_ZERO      "Herhalen bij 0"
#define TR_BATT_CALIB          "Accu Calib"
#define TR_CURRENT_CALIB       "Stroom Calib"
#define TR_VOLTAGE             TR(INDENT "Spg", INDENT "Spanningsbron")  //9XR-Pro
#define TR_SELECT_MODEL        "Kies Model"
#define TR_MODELS              "Models"
#define TR_SELECT_MODE         "Select mode"
#define TR_CREATE_MODEL        "Nieuw Model"
#define TR_FAVORITE_LABEL      "Favorites"
#define TR_MODELS_MOVED        "Unused models moved to"
#define TR_NEW_MODEL           "New Model"
#define TR_INVALID_MODEL       "Invalid Model"
#define TR_EDIT_LABELS         "Edit Labels"
#define TR_MOVE_UP             "Move Up"
#define TR_MOVE_DOWN           "Move Down"
#define TR_ENTER_LABEL         "Enter Label"
#define TR_LABEL               "Label"
#define TR_LABELS              "Labels"
#define TR_CURRENT_MODEL       "Current"
#define TR_NEW                 "New"
#define TR_NEW_LABEL           "New Label"
#define TR_RENAME_LABEL        "Rename Label"
#define TR_DELETE_LABEL        "Delete Label"
#define TR_DUPLICATE_MODEL     "Dupliceer Model"
#define TR_COPY_MODEL          "Kopieer Model"
#define TR_MOVE_MODEL          "Verplaats Model"
#define TR_BACKUP_MODEL        "Backup Model"
#define TR_DELETE_MODEL        "Wis Model"
#define TR_RESTORE_MODEL       "Model Terugzetten"
#define TR_DELETE_ERROR        "Fout bij verwijderen"
#define TR_SDCARD_ERROR        "SD-Kaart fout"
#define TR_SDCARD              "SD Card"
#define TR_NO_FILES_ON_SD      "No files on SD!"
#define TR_NO_SDCARD           "Geen SD-Kaart"
#define TR_WAITING_FOR_RX      "Waiting for RX..."
#define TR_WAITING_FOR_TX      "Waiting for TX..."
#define TR_WAITING_FOR_MODULE  TR("Waiting module", "Waiting for module...")
#define TR_NO_TOOLS            "No tools available"
#define TR_NORMAL              "Normal"
#define TR_NOT_INVERTED        "Not inv"
#define TR_NOT_CONNECTED       "!Connected"
#define TR_CONNECTED           "Connected"
#define TR_FLEX_915            "Flex 915MHz"
#define TR_FLEX_868            "Flex 868MHz"
#define TR_16CH_WITHOUT_TELEMETRY TR("16CH without telem.", "16CH without telemetry")
#define TR_16CH_WITH_TELEMETRY    TR("16CH with telem.", "16CH with telemetry")
#define TR_8CH_WITH_TELEMETRY     TR("8CH with telem.", "8CH with telemetry")
#define TR_EXT_ANTENNA         "Ext. antenna"
#define TR_PIN                 "Pin"
#define TR_UPDATE_RX_OPTIONS           "Update RX options?"
#define TR_UPDATE_TX_OPTIONS           "Update TX options?"
#define TR_MODULES_RX_VERSION          "Modules / RX version"
#define TR_SHOW_MIXER_MONITORS         "Show mixer monitors"
#define TR_MENU_MODULES_RX_VERSION     "MODULES / RX VERSION"
#define TR_MENU_FIRM_OPTIONS           "FIRMWARE OPTIONS"
#define TR_IMU                        "IMU"
#define TR_STICKS_POTS_SLIDERS         "Sticks/Pots/Sliders"
#define TR_PWM_STICKS_POTS_SLIDERS     "PWM Sticks/Pots/Sliders"
#define TR_RF_PROTOCOL                 "RF Protocol"
#define TR_MODULE_OPTIONS              "Module options"
#define TR_POWER                       "Power"
#define TR_NO_TX_OPTIONS               "No TX options"
#define TR_RTC_BATT                    "RTC Batt"
#define TR_POWER_METER_EXT             "Power Meter (EXT)"
#define TR_POWER_METER_INT             "Power Meter (INT)"
#define TR_SPECTRUM_ANALYSER_EXT       "Spectrum (EXT)"
#define TR_SPECTRUM_ANALYSER_INT       "Spectrum (INT)"
#define TR_SDCARD_FULL                 "SD-Kaart vol"
#define TR_NEEDS_FILE                  "NEEDS FILE"
#define TR_EXT_MULTI_SPEC              "opentx-inv"
#define TR_INT_MULTI_SPEC              "stm-opentx-noinv"
#define TR_INCOMPATIBLE        "Niet compatibel"
#define TR_WARNING             "MELDING"
#define TR_EEPROMWARN          "EEPROM"
#define TR_STORAGE_WARNING     "STORAGE"
#define TR_EEPROM_CONVERTING   "EEPROM Converteren"
#define TR_SDCARD_CONVERSION_REQUIRE   "SD card conversion required"
#define TR_CONVERTING                  "Converting: "
#define TR_THROTTLE_UPPERCASE  "GAS"
#define TR_ALARMSWARN          "ALARM"
#define TR_SWITCHWARN          "SCHAKELAAR"
#define TR_FAILSAFEWARN        "FAILSAFE"
#define TR_TEST_WARNING        TR("TESTING", "TEST BUILD")
#define TR_TEST_NOTSAFE        "Use for tests only"
#define TR_WRONG_SDCARDVERSION TR("Verwachte ver: ","Verwachte versie: ")
#define TR_WARN_RTC_BATTERY_LOW        "RTC Battery low"
#define TR_WARN_MULTI_LOWPOWER         "Low power mode"
#define TR_BATTERY                     "BATTERY"
#define TR_WRONG_PCBREV        "Verkeerde PCB gedetecteerd"
#define TR_EMERGENCY_MODE      "EMERGENCY MODE"
#define TR_NO_FAILSAFE         TR("Failsafe niet ing.", "Failsafe niet ingesteld")
#define TR_KEYSTUCK            "Toets klemt"
#define TR_VOLUME              "Volume"
#define TR_LCD                 "LCD"
#define TR_BRIGHTNESS          "Helderheid"
#define TR_CPU_TEMP            "CPU-Temp.\016>"
#define TR_CPU_CURRENT         "Stroom\022>"
#define TR_CPU_MAH             "Verbruik"
#define TR_COPROC              "CoProc."
#define TR_COPROC_TEMP         "MB Temp. \016>"
#define TR_CAPAWARNING         INDENT "Capaciteit laag" // wg 9XR-Pro
#define TR_TEMPWARNING         INDENT "Overhitting"  //wg 9XR-Pro
#define TR_TTL_WARNING         "Warning: use 3.3V logic levels"
#define TR_FUNC                "Funktie"
#define TR_V1                  "V1"
#define TR_V2                  "V2"
#define TR_DURATION            "Duur"
#define TR_DELAY               "Vertrag."
#define TR_SD_CARD             "SD-Card"
#define TR_SDHC_CARD           "SD-HC CARD"
#define TR_NO_SOUNDS_ON_SD     "Geen Geluiden op SD"
#define TR_NO_MODELS_ON_SD     "Geen Modellen op SD"
#define TR_NO_BITMAPS_ON_SD    "Geen Bitmaps op SD"
#define TR_NO_SCRIPTS_ON_SD    "Geen Scripts op SD"
#define TR_SCRIPT_SYNTAX_ERROR TR("Syntax error", "Script syntax error")
#define TR_SCRIPT_PANIC        "Script panic"
#define TR_SCRIPT_KILLED       "Script killed"
#define TR_SCRIPT_ERROR        "Unknown error"
#define TR_PLAY_FILE           "Speel af"
#define TR_DELETE_FILE         "Verwijderen"
#define TR_COPY_FILE           "Kopieer"
#define TR_RENAME_FILE         "Hernoemen"
#define TR_ASSIGN_BITMAP       "Bitmap toekennen"
#define TR_ASSIGN_SPLASH       "Splash screen"
#define TR_EXECUTE_FILE        "Uitvoeren"
#define TR_REMOVED             " verwijderd"
#define TR_SD_INFO             "Informatie"
#define TR_SD_FORMAT           "Format"
#define TR_NA                  "N/A"
#define TR_HARDWARE            "HARDWARE"
#define TR_FORMATTING          "Formatteren..."
#define TR_TEMP_CALIB          "Temp.  Calib."
#define TR_TIME                "Tijd:"
#define TR_MAXBAUDRATE         "Max bauds"
#define TR_BAUDRATE            "Baudrate"
#define TR_SAMPLE_MODE         "Sample Mode"
#define TR_SAMPLE_MODES        "Normal""OneBit"
#define TR_LOADING                     "Loading..."
#define TR_DELETE_THEME                "Delete Theme?"
#define TR_SAVE_THEME                  "Save Theme?"
#define TR_EDIT_COLOR                  "Edit Color"

#if defined(COLORLCD)
  #define TR_MODEL_QUICK_SELECT        "Model quick select"
#endif

#define TR_SELECT_TEMPLATE_FOLDER "Select a template folder"
#define TR_SELECT_TEMPLATE     "SELECT A MODEL TEMPLATE:"
#define TR_NO_TEMPLATES        "No model templates were found in this folder"
#define TR_SAVE_TEMPLATE       "Save as template"
#define TR_BLANK_MODEL                 "Blank Model"
#define TR_BLANK_MODEL_INFO            "Create a blank model"
#define TR_FILE_EXISTS         "FILE ALREADY EXISTS"
#define TR_ASK_OVERWRITE       "Do you want to overwrite?"

#define TR_BLUETOOTH            "Bluetooth"
#define TR_BLUETOOTH_DISC       "Discover"
#define TR_BLUETOOTH_INIT       "Init"
#define TR_BLUETOOTH_DIST_ADDR  "Dist addr"
#define TR_BLUETOOTH_LOCAL_ADDR "Local addr"
#define TR_BLUETOOTH_PIN_CODE   "PIN code"
#define TR_BLUETOOTH_NODEVICES  "No Devices Found"
#define TR_BLUETOOTH_SCANNING   "Scanning..."
#define TR_BLUETOOTH_BAUDRATE   "BT Baudrate"
#if defined(PCBX9E)
#define TR_BLUETOOTH_MODES      "---","Enabled"
#else
#define TR_BLUETOOTH_MODES      "---","Telemetry","Trainer"
#endif
#define TR_SD_INFO_TITLE       "SD-INFO"
#define TR_SD_TYPE             "Type:"
#define TR_SD_SPEED            "Snelheid:"
#define TR_SD_SECTORS          "Sectoren:"
#define TR_SD_SIZE             "Grootte:"
#define TR_TYPE                INDENT "Type"
#define TR_GLOBAL_VARS         "Globale Variabelen"
#define TR_GVARS               "GLOBALE V."
#define TR_GLOBAL_VAR          "Globale Variabele"
#define TR_MENU_GLOBAL_VARS    "GLOBALE VARIABELEN"
#define TR_OWN                 "Eigen"
#define TR_DATE                "Datum:"
#define TR_MONTHS              { "Jan", "Feb", "Mar", "Apr", "Mei", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dec" }
#define TR_ROTARY_ENCODER      "Draaischakelaar"
#define TR_ROTARY_ENC_MODE     TR("RotEnc Mode","Rotary Encoder Mode")
#define TR_CHANNELS_MONITOR    "Kanaal-Monitor==>"
#define TR_MIXERS_MONITOR      "==>MIXERS MONitor"
#define TR_PATH_TOO_LONG       "Pad te Lang"
#define TR_VIEW_TEXT           "Lees Tekst"
#define TR_FLASH_BOOTLOADER      "Flash bootloader"
#define TR_FLASH_DEVICE                TR("Flash device","Flash device")
#define TR_FLASH_EXTERNAL_DEVICE "Flash extern Apparaat"
#define TR_FLASH_RECEIVER_OTA          "Flash receiver OTA"
#define TR_FLASH_RECEIVER_BY_EXTERNAL_MODULE_OTA "Flash RX by ext. OTA"
#define TR_FLASH_RECEIVER_BY_INTERNAL_MODULE_OTA "Flash RX by int. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_EXTERNAL_MODULE_OTA "Flash FC by ext. OTA"
#define TR_FLASH_FLIGHT_CONTROLLER_BY_INTERNAL_MODULE_OTA "Flash FC by int. OTA"
#define TR_FLASH_BLUETOOTH_MODULE      TR("Flash BT module", "Flash Bluetooth module")
#define TR_FLASH_POWER_MANAGEMENT_UNIT          "Flash pwr mngt unit"
#define TR_DEVICE_NO_RESPONSE          TR("Device not responding", "Device not responding")
#define TR_DEVICE_FILE_ERROR           TR("Device file prob.", "Device file prob.")
#define TR_DEVICE_DATA_REFUSED         TR("Device data refused", "Device data refused")
#define TR_DEVICE_WRONG_REQUEST        TR("Device access problem", "Device access problem")
#define TR_DEVICE_FILE_REJECTED        TR("Device file refused", "Device file refused")
#define TR_DEVICE_FILE_WRONG_SIG       TR("Device file sig.", "Device file sig.")
#define TR_CURRENT_VERSION             TR("Current vers. ", "Current version: ")
#define TR_FLASH_INTERNAL_MODULE "Flash interne XJT-Module"
#define TR_FLASH_INTERNAL_MULTI        TR("Flash Int. Multi", "Flash Internal Multi")
#define TR_FLASH_EXTERNAL_MODULE       "Flash external module"
#define TR_FLASH_EXTERNAL_MULTI        TR("Flash Ext. Multi", "Flash External Multi")
#define TR_FLASH_EXTERNAL_ELRS         TR("Flash Ext. ELRS", "Flash External ELRS")
#define TR_FIRMWARE_UPDATE_ERROR TR("FW update Error","Firmware update error")
#define TR_FIRMWARE_UPDATE_SUCCESS     "Flash successful"
#define TR_WRITING                     "Schrijven..."
#define TR_CONFIRM_FORMAT              "Formatteren bevestigen?"
#define TR_INTERNALRF                  "Interne RF"
#define TR_INTERNAL_MODULE             TR("Int. module","Internal module")
#define TR_EXTERNAL_MODULE             TR("Ext. module","External module")
#define TR_OPENTX_UPGRADE_REQUIRED     "OpenTX upgrade required"
#define TR_TELEMETRY_DISABLED          "Telem. disabled"
#define TR_MORE_OPTIONS_AVAILABLE      "More options available"
#define TR_NO_MODULE_INFORMATION       "No module information"
#define TR_EXTERNALRF          "Externe RF"
#define TR_FAILSAFE            TR(INDENT "Failsafe", INDENT "Failsafe Modus")
#define TR_FAILSAFESET         "Failsafe instellen"
#define TR_REG_ID                      "Reg. ID"
#define TR_OWNER_ID                    "Owner ID"
#define TR_HOLD                "Hold"
#define TR_HOLD_UPPERCASE              "HOLD"
#define TR_NONE                "None"
#define TR_NONE_UPPERCASE              "NONE"
#define TR_MENUSENSOR          "SENSOR"
#define TR_POWERMETER_PEAK             "Peak"
#define TR_POWERMETER_POWER            "Power"
#define TR_POWERMETER_ATTN             "Attn"
#define TR_POWERMETER_FREQ             "Freq."
#define TR_MENUTOOLS                   "TOOLS"
#define TR_TURN_OFF_RECEIVER           "Turn off receiver"
#define TR_STOPPING                    "Stopping..."
#define TR_MENU_SPECTRUM_ANALYSER      "SPECTRUM ANALYSER"
#define TR_MENU_POWER_METER            "POWER METER"
#define TR_SENSOR              "SENSOR"
#define TR_COUNTRY_CODE         "Landcode"
#define TR_USBMODE             "USB Mode"
#define TR_JACK_MODE                    "Jack Mode"
#define TR_VOICE_LANGUAGE           "Taal"
#define TR_UNITS_SYSTEM         "Eenheden"
#define TR_EDIT                "Wijzigen"
#define TR_INSERT_BEFORE       "Invoegen ervoor"
#define TR_INSERT_AFTER        "Invoegen erna"
#define TR_COPY                "Kopieren"
#define TR_MOVE                "Verplaatsen"
#define TR_PASTE               "Plakken"
#define TR_PASTE_AFTER                 "Paste After"
#define TR_PASTE_BEFORE                "Paste Before"
#define TR_DELETE              "Verwijderen"
#define TR_INSERT              "Invoegen"
#define TR_RESET_FLIGHT        "Reset Vliegdata"
#define TR_RESET_TIMER1        "Reset Timer1"
#define TR_RESET_TIMER2        "Reset Timer2"
#define TR_RESET_TIMER3        "Reset Timer3"
#define TR_RESET_TELEMETRY     "Reset Telemetrie"
#define TR_STATISTICS          "Statistieken"
#define TR_ABOUT_US            "De Programmeurs"
#define TR_USB_JOYSTICK        "USB Joystick (HID)"
#define TR_USB_MASS_STORAGE    "USB Storage (SD)"
#define TR_USB_SERIAL          "USB Serial (VCP)"
#define TR_SETUP_SCREENS       "Setup screens"
#define TR_MONITOR_SCREENS     "Monitors"
#define TR_AND_SWITCH          "AND Switch"
#define TR_SF                  "SF"
#define TR_GF                  "GF"
#define TR_ANADIAGS_CALIB      "Calibrated analogs"
#define TR_ANADIAGS_FILTRAWDEV "Filtered raw analogs with deviation"
#define TR_ANADIAGS_UNFILTRAW  "Unfiltered raw analogs"
#define TR_ANADIAGS_MINMAX     "Min., max. and range"
#define TR_ANADIAGS_MOVE       "Move analogs to their extremes!"
#define TR_SPEAKER             INDENT "Speaker"
#define TR_BUZZER              INDENT "Zoemer"
#define TR_BYTES               "bytes"
#define TR_MODULE_BIND         TR("[Bnd]", "[Bind]")
#define TR_POWERMETER_ATTN_NEEDED      "Attenuator needed"
#define TR_PXX2_SELECT_RX              "Select RX"
#define TR_PXX2_DEFAULT                "<default>"
#define TR_BT_SELECT_DEVICE            "Select device"
#define TR_DISCOVER             "Discover"
#define TR_BUTTON_INIT                 BUTTON("Init")
#define TR_WAITING                     "Waiting..."
#define TR_RECEIVER_DELETE             "Delete receiver?"
#define TR_RECEIVER_RESET              "Reset receiver?"
#define TR_SHARE                       "Share"
#define TR_BIND                        "Bind"
#define TR_REGISTER             TR("Reg", "Register")
#define TR_MODULE_RANGE        TR("[Rng]", "[Range]")
#define TR_RECEIVER_OPTIONS            TR("REC. OPTIONS", "RECEIVER OPTIONS")
#define TR_RESET_BTN           "[Reset]"
#define TR_DEBUG                       "Debug"
#define TR_KEYS_BTN                BUTTON(TR("SW","Switches"))
#define TR_ANALOGS_BTN                 BUTTON(TR("Analog","Analogs"))
#define TR_TOUCH_NOTFOUND              "Touch hardware not found"
#define TR_TOUCH_EXIT                  "Touch screen to exit"
#define TR_SET                 "[Set]"
#define TR_TRAINER             "Trainer Poort"
#define TR_CHANS                       "Chans"
#define TR_ANTENNAPROBLEM      CENTER "TX-Antenneprobleem!"
#define TR_MODELIDUSED         TR("ID al gebruikt", "Model-ID al gebruikt")
#define TR_MODELIDUNIQUE             "ID is unique"
#define TR_MODULE              "Module-Type"
#define TR_RX_NAME                     "Rx Name"
#define TR_TELEMETRY_TYPE      TR("Type", "Telemetrietype")
#define TR_TELEMETRY_SENSORS   "Sensoren"
#define TR_VALUE               "Waarde"
#define TR_PERIOD              "Period"
#define TR_INTERVAL            "Interval"
#define TR_REPEAT                      "Repeat"
#define TR_ENABLE                      "Enable"
#define TR_DISABLE                     "Disable"
#define TR_TOPLCDTIMER         "Top LCD Timer"
#define TR_UNIT                "Eenheid"
#define TR_TELEMETRY_NEWSENSOR INDENT "Sensor toevoegen ..."
#define TR_CHANNELRANGE        TR(INDENT "Kanalen", INDENT "Uitgangs Kanalen")  //wg 9XR-Pro
#define TR_AFHDS3_RX_FREQ              TR("RX freq.", "RX frequency")
#define TR_AFHDS3_ONE_TO_ONE_TELEMETRY TR("Unicast/Tel.", "Unicast/Telemetry")
#define TR_AFHDS3_ONE_TO_MANY          "Multicast"
#define TR_AFHDS3_ACTUAL_POWER         TR("Act. pow", "Actual power")
#define TR_AFHDS3_POWER_SOURCE         TR("Power src.", "Power source")
#define TR_ANTENNACONFIRM1     "Antennes wisselen?"
#if defined(PCBX12S)
#define TR_ANTENNA_MODES       "Internal","Ask","Per model","Internal + External"
#else
#define TR_ANTENNA_MODES       "Internal","Ask","Per model","External"
#endif
#define TR_USE_INTERNAL_ANTENNA        TR("Use int. antenna", "Use internal antenna")
#define TR_USE_EXTERNAL_ANTENNA        TR("Use ext. antenna", "Use external antenna")
#define TR_ANTENNACONFIRM2     TR("Check antenna", "Is er zeker een antenne geplaatst!")
#define TR_MODULE_PROTOCOL_FLEX_WARN_LINE1                "Requires non"
#define TR_MODULE_PROTOCOL_FCC_WARN_LINE1         "Requires FCC"
#define TR_MODULE_PROTOCOL_EU_WARN_LINE1          "Requires EU"
#define TR_MODULE_PROTOCOL_WARN_LINE2                "certified firmware"
#define TR_LOWALARM            INDENT "Waarschuwing"
#define TR_CRITICALALARM       INDENT "Kritiek Alarm"
#define TR_RSSIALARM_WARN             TR("RSSI","TELEMETRY RSSI")
#define TR_NO_RSSIALARM                TR(INDENT "Alarms disabled", INDENT "Telemetry alarms disabled")
#define TR_DISABLE_ALARM               TR(INDENT "Disable alarms", INDENT "Disable telemetry alarms")
#define TR_POPUP               "Popup"
#define TR_MIN                 "Min"
#define TR_MAX                 "Max"
#define TR_CURVE_PRESET        "Preset..."
#define TR_PRESET              "Preset"
#define TR_MIRROR              "Spiegelen"
#define TR_CLEAR               "Wissen"
#define TR_RESET               "Reset Servowaardes"
#define TR_RESET_SUBMENU       "Reset..."
#define TR_COUNT               "Punten"
#define TR_PT                  "Pt"
#define TR_PTS                 "Ptn"
#define TR_SMOOTH              "Zacht"
#define TR_COPY_STICKS_TO_OFS  TR("Cpy stick->subtrim", "Kopieer Sticks naar Subtrim")
#define TR_COPY_MIN_MAX_TO_OUTPUTS     TR("Cpy min/max to all",  "Copy min/max/center to all outputs")
#define TR_COPY_TRIMS_TO_OFS   TR("Cpy trim->subtrim", "Kopieer Trim naar Subtrim")
#define TR_INCDEC              "Inc/Decrement"
#define TR_GLOBALVAR           "Globale Var"
#define TR_MIXSOURCE           "Mixer Bron"
#define TR_CONSTANT            "Constant"
#define TR_PREFLIGHT           "Preflight Checks"
#define TR_CHECKLIST           TR(INDENT "Checklist", INDENT "Toon Checklist")
#define TR_AUX_SERIAL_MODE     "Seriele poort"
#define TR_AUX2_SERIAL_MODE    "Seriele poort 2"
#define TR_AUX_SERIAL_PORT_POWER       "Port power"
#define TR_SCRIPT              "Script"
#define TR_INPUTS              "Inputs"
#define TR_OUTPUTS             "Outputs"
#if defined(COLORLCD)
#define STR_EEBACKUP            "EEPROM backup"
#define STR_FACTORYRESET        "Factory reset"
#else
#define STR_EEBACKUP            TR("Backup", "EEPROM backup => SD")
#define STR_FACTORYRESET        TR("Fact. reset", "Factory reset")

#endif
#define TR_CONFIRMRESET        TR("Wis Alles?", "Wis ALLE modellen en instellingen?")
#define TR_TOO_MANY_LUA_SCRIPTS "Te veel Lua scripts!"
#define TR_SPORT_UPDATE_POWER_MODE     "SP Power"
#define TR_SPORT_UPDATE_POWER_MODES    "AUTO""ON\0 "
#define TR_NO_TELEMETRY_SCREENS        "No Telemetry Screens"
#define TR_TOUCH_PANEL                 "Touch panel:"
#define TR_FILE_SIZE                   "File size"
#define TR_FILE_OPEN                   "Open anyway?"
#define TR_TIMER_MODES                 {TR_OFFON,TR_START,TR_THROTTLE_LABEL,TR_THROTTLE_PERCENT_LABEL,TR_THROTTLE_START}

// Horus and Taranis column headers
#define TR_PHASES_HEADERS_NAME         "Name"
#define TR_PHASES_HEADERS_SW           "Switch"
#define TR_PHASES_HEADERS_RUD_TRIM     "Rudder Trim"
#define TR_PHASES_HEADERS_ELE_TRIM     "Elevator Trim"
#define TR_PHASES_HEADERS_THT_TRIM     "Throttle Trim"
#define TR_PHASES_HEADERS_AIL_TRIM     "Aileron Trim"
#define TR_PHASES_HEADERS_CH5_TRIM     "Trim 5"
#define TR_PHASES_HEADERS_CH6_TRIM     "Trim 6"
#define TR_PHASES_HEADERS_FAD_IN       "Fade In"
#define TR_PHASES_HEADERS_FAD_OUT      "Fade Out"

#define TR_LIMITS_HEADERS_NAME         "Name"
#define TR_LIMITS_HEADERS_SUBTRIM      "Subtrim"
#define TR_LIMITS_HEADERS_MIN          "Min"
#define TR_LIMITS_HEADERS_MAX          "Max"
#define TR_LIMITS_HEADERS_DIRECTION    "Richting"
#define TR_LIMITS_HEADERS_CURVE        "Curve"
#define TR_LIMITS_HEADERS_PPMCENTER    "PPM-Midden"
#define TR_LIMITS_HEADERS_SUBTRIMMODE  "Subtrim mode"
#define TR_INVERTED                    "Inverted"


#define TR_LSW_DESCRIPTIONS            { "Vergelijking of Functie", "1e variabele", "2e variabele of constante", "2e variabele of constante", "Additionele conditie", "Minimale AAN duur van de logische schakelaar", "Minimale WAAR duur om AAN te gaan" }

#if defined(COLORLCD)
  // Horus layouts and widgets
  #define TR_FIRST_CHANNEL             "First channel"
  #define TR_FILL_BACKGROUND           "Fill background?"
  #define TR_BG_COLOR                  "BG Color"
  #define TR_SLIDERS_TRIMS             "Sliders+Trims"
  #define TR_SLIDERS                   "Sliders"
  #define TR_FLIGHT_MODE               "Flight mode"
  #define TR_INVALID_FILE              "Invalid File"
  #define TR_TIMER_SOURCE              "Timer source"
  #define TR_SIZE                      "Size"
  #define TR_SHADOW                    "Shadow"
  #define TR_ALIGN_LABEL               "Label uitlijnen"
  #define TR_ALIGN_VALUE               "Waarde uitlijnen"
  #define TR_ALIGN_OPTS                { "Links", "Midden", "Rechts" }
  #define TR_TEXT                      "Text"
  #define TR_COLOR                     "Color"
  #define TR_MAIN_VIEW_X               "Main view X"
  #define TR_PANEL1_BACKGROUND         "Panel1 background"
  #define TR_PANEL2_BACKGROUND         "Panel2 background"
  #define TR_WIDGET_GAUGE              "Gauge"
  #define TR_WIDGET_MODELBMP           "Models"
  #define TR_WIDGET_OUTPUTS            "Outputs"
  #define TR_WIDGET_TEXT               "Text"
  #define TR_WIDGET_TIMER              "Timer"
  #define TR_WIDGET_VALUE              "Value"
#endif

// Bootloader common - Ascii only
#define TR_BL_USB_CONNECT_BOOT        CENTER "\011USB Connected"
#define TR_BL_USB_CONNECTED           "USB Connected"
#define TR_BL_USB_PLUGIN              "Or plug in a USB cable"
#define TR_BL_USB_MASS_STORE          "for mass storage"
#define TR_BL_USB_PLUGIN_MASS_STORE   "Or plug in a USB cable for mass storage"
#define TR_BL_WRITE_FW                "Write Firmware"
#define TR_BL_FORK                    "Fork:"
#define TR_BL_VERSION                 "Version:"
#define TR_BL_RADIO                   "Radio:"
#define TR_BL_EXIT                    "Exit"
#define TR_BL_DIR_MISSING             " Directory is missing"
#define TR_BL_DIR_EMPTY               " Directory is empty"

#if LCD_W >= 480
  #define TR_BL_INVALID_FIRMWARE       "Not a valid firmware file"
#elif LCD_W >= 212
  #define TR_BL_OR_PLUGIN_USB_CABLE    TR_BL_USB_PLUGIN_MASS_STORE
  #define TR_BL_HOLD_ENTER_TO_START    "\012Hold [ENT] to start writing"
  #define TR_BL_INVALID_FIRMWARE       "\011Not a valid firmware file!        "
  #define TR_BL_INVALID_EEPROM         "\011Not a valid EEPROM file!          "
#else
  #define TR_BL_OR_PLUGIN_USB_CABLE    TR_BL_USB_PLUGIN
  #define TR_BL_HOLD_ENTER_TO_START    "\006Hold [ENT] to start"
  #define TR_BL_INVALID_FIRMWARE       "\004Not a valid firmware!        "
  #define TR_BL_INVALID_EEPROM         "\004Not a valid EEPROM!          "
#endif

#if defined(PCBTARANIS)
   // Bootloader Taranis specific - Ascii only
  #define TR_BL_RESTORE_EEPROM        "Restore EEPROM"
  #define TR_BL_WRITING_FW            CENTER "\015Writing..."
  #define TR_BL_WRITING_COMPL         CENTER "\007Writing complete"
  #if defined(RADIO_COMMANDO8)
    #define TR_BL_POWER_KEY           "Press the power button."
    #define TR_BL_FLASH_EXIT          "Exit the flashing mode."
  #endif
#elif defined(PCBHORUS)
   // Bootloader Horus specific - Ascii only
  #define TR_BL_WRITING_FW            "Writing Firmware ..."
  #define TR_BL_WRITING_COMPL         "Writing Completed"
  #define TR_BL_SELECT_KEY            "[ENT] to select file"
  #define TR_BL_FLASH_KEY             "Hold [ENT] long to flash"
  #define TR_BL_EXIT_KEY              "[RTN] to exit"
#elif defined(PCBNV14)
   // Bootloader NV14 specific - Ascii only
  #define TR_BL_WRITING_FW            "Writing Firmware ..."
  #define TR_BL_WRITING_COMPL         "Writing Completed"
  #define TR_BL_RF_USB_ACCESS         "RF USB access"
  #define TR_BL_CURRENT_FW            "Current Firmware:"
  #define TR_BL_SELECT_KEY            "[R TRIM] to select file"
  #define TR_BL_FLASH_KEY             "Hold [R TRIM] long to flash"
  #define TR_BL_EXIT_KEY              " [L TRIM] to exit"
  #define TR_BL_ENABLE                "Enable"
  #define TR_BL_DISABLE               "Disable"
#endif

// About screen
#define TR_ABOUTUS             TR(" ABOUT ", "ABOUT")

#define TR_CHR_HOUR   'h'
#define TR_CHR_INPUT  'I' // Values between A-I will work

#define TR_BEEP_VOLUME         "Beep-Volume"
#define TR_WAV_VOLUME          "Wav-Volume"
#define TR_BG_VOLUME           "Achtergr-Volume"

#define TR_TOP_BAR             "Info"
#define TR_FLASH_ERASE                 "Flash erase..."
#define TR_FLASH_WRITE                 "Flash write..."
#define TR_OTA_UPDATE                  "OTA update..."
#define TR_MODULE_RESET                "Module reset..."
#define TR_UNKNOWN_RX                  "Unknown RX"
#define TR_UNSUPPORTED_RX              "Unsupported RX"
#define TR_OTA_UPDATE_ERROR            "OTA update error"
#define TR_DEVICE_RESET                "Device reset..."
#define TR_ALTITUDE            INDENT "Hoogte"
#define TR_SCALE               "Schaal"
#define TR_VIEW_CHANNELS       "Toon Kanalen"
#define TR_VIEW_NOTES          "Toon Notities"
#define TR_MODEL_SELECT        "Model Select"
#define TR_ID                  "ID"
#define TR_PRECISION           "Precisie"
#define TR_RATIO               "Ratio"
#define TR_FORMULA             "Formule"
#define TR_CELLINDEX           "Cel index"
#define TR_LOGS                "Log Data"
#define TR_OPTIONS             "Opties"
#define TR_FIRMWARE_OPTIONS    "Firmware options"

#define TR_ALTSENSOR           "Hoogte Sensor"
#define TR_CELLSENSOR          "Cellen Sensor"
#define TR_GPSSENSOR           "GPS Sensor"
#define TR_CURRENTSENSOR       "Stroomsensor"
#define TR_AUTOOFFSET          "Auto Offset"
#define TR_ONLYPOSITIVE        "Enkel positief"
#define TR_FILTER              "Filter aktief"
#define TR_TELEMETRYFULL       "Telemetrie slots vol!"
//TODO: translation
#define TR_INVERTED_SERIAL     INDENT "Invert"
#define TR_IGNORE_INSTANCE     TR(INDENT "Neg. ID ","Negeer ID's")
#define TR_DISCOVER_SENSORS    "Ontdek nieuwe sensors"
#define TR_STOP_DISCOVER_SENSORS "Stop ontdekking"
#define TR_DELETE_ALL_SENSORS  "Wis alle sensors"
#define TR_CONFIRMDELETE       "Echt alles wissen?"
#define TR_SELECT_WIDGET       "Widget kiezen"
#define TR_WIDGET_FULLSCREEN           "Full screen"
#define TR_REMOVE_WIDGET       "Widget wissen"
#define TR_WIDGET_SETTINGS     "Widget instellen"
#define TR_REMOVE_SCREEN       "Scherm wissen"
#define TR_SETUP_WIDGETS       "Setup widgets"
#define TR_USER_INTERFACE      "User interface"
#define TR_THEME               "Theme"
#define TR_SETUP               "Setup"
#define TR_LAYOUT              "Layout"
#define TR_ADD_MAIN_VIEW         "Add main view"
#define TR_BACKGROUND_COLOR    "Background color"
#define TR_MAIN_COLOR          "Main color"
#define TR_BAR2_COLOR                  "Secondary bar color"
#define TR_BAR1_COLOR                  "Main bar color"
#define TR_TEXT_COLOR                  "Text color"
#define TR_TEXT_VIEWER                 "Text Viewer"


#define TR_MENU_INPUTS          STR_CHAR_INPUT "Inputs"
#define TR_MENU_LUA             STR_CHAR_LUA "Lua Scripts"
#define TR_MENU_STICKS           STR_CHAR_STICK "Sticks"
#define TR_MENU_POTS            STR_CHAR_POT "Pots"
#define TR_MENU_MAX             STR_CHAR_FUNCTION "MAX"
#define TR_MENU_HELI            STR_CHAR_CYC "HeliCyclic"
#define TR_MENU_TRIMS            STR_CHAR_TRIM "Trims"
#define TR_MENU_SWITCHES        STR_CHAR_SWITCH "Schakelaars"
#define TR_MENU_LOGICAL_SWITCHES  STR_CHAR_SWITCH "Log. Schakelaars"
#define TR_MENU_TRAINER         STR_CHAR_TRAINER "Trainer"
#define TR_MENU_CHANNELS        STR_CHAR_CHANNEL "Kanalen"
#define TR_MENU_GVARS           STR_CHAR_SLIDER "GVars"
#define TR_MENU_TELEMETRY       STR_CHAR_TELEMETRY "Telemetrie"
#define TR_MENU_DISPLAY        "DISPLAY"
#define TR_MENU_OTHER          "Verdere"
#define TR_MENU_INVERT         "Inverteer"
#define TR_JITTER_FILTER       "ADC Filter"
#define TR_DEAD_ZONE           "Dead zone"
#define TR_RTC_CHECK           TR("Check RTC", "Check RTC voltage")
#define TR_AUTH_FAILURE                "Auth-failure"
#define TR_RACING_MODE                 "Racing mode"

// The following content is Untranslated)

#define TR_USE_THEME_COLOR              "Use theme color"

#define TR_ADD_ALL_TRIMS_TO_SUBTRIMS    "Add all Trims to Subtrims"
#if LCD_W > LCD_H
  #define TR_OPEN_CHANNEL_MONITORS        "Open Channel Monitor"
#else
  #define TR_OPEN_CHANNEL_MONITORS        "Open Channel Mon."
#endif
#define TR_DUPLICATE                    "Duplicate"
#define TR_ACTIVATE                     "Set Active"
#define TR_RED                          "Red"
#define TR_BLUE                         "Blue"
#define TR_GREEN                        "Green"
#define TR_COLOR_PICKER                 "Color Picker"
#define TR_EDIT_THEME_DETAILS           "Edit Theme Details"
#define TR_AUTHOR                       "Author"
#define TR_DESCRIPTION                  "Description"
#define TR_SAVE                         "Save"
#define TR_CANCEL                       "Cancel"
#define TR_EDIT_THEME                   "EDIT THEME"
#define TR_DETAILS                      "Details"
#define TR_THEME_EDITOR                 "THEMES"

// Main menu
#define TR_MAIN_MENU_SELECT_MODEL       "Select\nModel"
#define TR_MAIN_MENU_MODEL_NOTES        "Model\nNotes"
#define TR_MAIN_MENU_CHANNEL_MONITOR    "Channel\nMonitor"
#define TR_MAIN_MENU_MODEL_SETTINGS     "Model\nSettings"
#define TR_MAIN_MENU_RADIO_SETTINGS     "Radio\nSettings"
#define TR_MAIN_MENU_SCREEN_SETTINGS    "Screens\nSettings"
#define TR_MAIN_MENU_RESET_TELEMETRY    "Reset\nTelemetry"
#define TR_MAIN_MENU_STATISTICS         "Statistics"
#define TR_MAIN_MENU_ABOUT_EDGETX       "About\nEdgeTX"
// End Main menu

// Voice in native language
#define TR_VOICE_ENGLISH                "English"
#define TR_VOICE_CHINESE                "Chinese"
#define TR_VOICE_CZECH                  "Czech"
#define TR_VOICE_DANISH                 "Danish"
#define TR_VOICE_DEUTSCH                "Deutsch"
#define TR_VOICE_DUTCH                  "Dutch"
#define TR_VOICE_ESPANOL                "Espanol"
#define TR_VOICE_FRANCAIS               "Francais"
#define TR_VOICE_HUNGARIAN              "Hungarian"
#define TR_VOICE_ITALIANO               "Italiano"
#define TR_VOICE_POLISH                 "Polish"
#define TR_VOICE_PORTUGUES              "Portugues"
#define TR_VOICE_RUSSIAN                "Russian"
#define TR_VOICE_SLOVAK                 "Slovak"
#define TR_VOICE_SWEDISH                "Swedish"
#define TR_VOICE_TAIWANESE              "Taiwanese"
