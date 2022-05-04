static int topbar = 1;               
static const char *fonts[]          = { "JetBrains Mono Medium:style=Medium,Regular:size=10:antialias=true:autohint=true",
					"Symbols Nerd Font Mono:style=2048-em:pixelsize=14:antialias=true:autohint=true",
					"Material Design Icons:style=Regular:pixelsize=15:antialias=true:autohint=true",
					"JoyPixels:style=Regular:size=10:antialias=true:autohint=true", 
					"Takaoゴシック:style=Regular:size=12:antialias=true:autohint=true" };

static const char *prompt      = NULL;

/* colorscheme */
#include "themes/catppuccin.h"

static unsigned int lines      = 0;
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 8;

static const char worddelimiters[] = " ";
