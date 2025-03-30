/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;
static int min_width = 500;
static const float menu_height_ratio = 4.0f;
static const unsigned int alpha = 90;
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"JetBrainsMono Nerd Font:size=12"};
static const char *prompt = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
			/*  fg         bg   */
    [SchemeNorm]	= {"#bbbbbb", "#000000"},
    [SchemeSel]		= {"#eeeeee", "#000000"},
    [SchemeSelHighlight] = {"#ffc978", "#376f99"},
    [SchemeNormHighlight] = {"#ffc978", "#000000"},
    [SchemeOut]		= {"#000000", "#00ffff"},
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = { OPAQUE, alpha },
    [SchemeSel] = { OPAQUE, alpha },
    [SchemeOut] = { OPAQUE, alpha },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 12;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
