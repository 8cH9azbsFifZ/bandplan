<?xml version="1.0"?>

// Bands configuration
typedef struct
{   
  char *name; // name of the band
  long low;   // lower frequency
  long high;  // upper frequency
  byte mode;  // main mode for this band
} t_band;

// Single channels
typedef struct 
{
  char *name; // channel name
  long freq;  // frequency
  byte mode;  // mode
} t_channel;

const t_band bands[] = {
		{"",14400000,14600000, NULL },

};
int nbands = sizeof(bands)/sizeof(bands[0]);
		
