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
{"",14400000,14418000, NULL },
{"",14418000,14436000, NULL },
{"",14436000,14439900, NULL },
{"",14440000,14450000, NULL },
{"",14450000,14479400, NULL },
{"",14480000,14499000, NULL },
{"",14499000,14519400, NULL },
{"",14519400,14520600, NULL },
{"",14520600,14559350, NULL },
{"",14559350,14579400, NULL },
{"",14579400,14580600, NULL },
{"",14580600,14600000, NULL },

};
int nbands = sizeof(bands)/sizeof(bands[0]);
		
