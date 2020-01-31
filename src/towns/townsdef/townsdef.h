#ifndef TOWNSDEF_IS_INCLUDED
#define TOWNSDEF_IS_INCLUDED
/* { */


const int PER_SECOND=1000000000;  // Unit: Nano Seconds
const int TOWNS_RENDERING_FREQUENCY=PER_SECOND/60;


enum
{
	TOWNSTYPE_1_2F, // 1F,2F
	TOWNSTYPE_2_MX, // MA,ME,Fresh
};

// When adding an IO port, make sure to register in FMTowns::FMTowns()
enum
{
	TOWNSIO_PIC_PRIMARY_ICW1=          0x00,
	TOWNSIO_PIC_PRIMARY_ICW2_3_4_OCW=  0x02,
	TOWNSIO_PIC_SECONDARY_ICW1=        0x10,
	TOWNSIO_PIC_SECONDARY_ICW2_3_4_OCW=0x12,

	TOWNSIO_RESET_REASON=      0x20,

	TOWNSIO_FREERUN_TIMER     =0x26,
	TOWNSIO_FREERUN_TIMER_LOW =0x26,
	TOWNSIO_FREERUN_TIMER_HIGH=0x27,

	TOWNSIO_MACHINE_ID_LOW=         0x30,
	TOWNSIO_MACHINE_ID_HIGH=        0x31,

	TOWNSIO_FDC_STATUS_COMMAND=       0x200, // [2] pp.253
	TOWNSIO_FDC_TRACK=                0x202, // [2] pp.253
	TOWNSIO_FDC_SECTOR=               0x204, // [2] pp.253
	TOWNSIO_FDC_DATA=                 0x205, // [2] pp.253
	TOWNSIO_FDC_DRIVE_STATUS_CONTROL= 0x208, // [2] pp.253
	TOWNSIO_FDC_DRIVE_SELECT=         0x20C, // [2] pp.253
	TOWNSIO_FDC_DRIVE_SWITCH=         0x20E, // [2] pp.253

	TOWNSIO_FMR_VRAM_OR_MAINRAM=      0x404, // [2] pp.91

	TOWNSIO_VRAMACCESSCTRL_ADDR=      0x458, // [2] pp.17,pp.112
	TOWNSIO_VRAMACCESSCTRL_DATA_LOW=  0x45A, // [2] pp.17,pp.112
	TOWNSIO_VRAMACCESSCTRL_DATA_HIGH= 0x45B, // [2] pp.17,pp.112

	TOWNSIO_MX_HIRES=            0x470,
	TOWNSIO_MX_VRAMSIZE=         0x471,
	TOWNSIO_MX_IMGOUT_ADDR_LOW=  0x472,
	TOWNSIO_MX_IMGOUT_ADDR_HIGH= 0x473,
	TOWNSIO_MX_IMGOUT_ADDR_D0=   0x474,
	TOWNSIO_MX_IMGOUT_ADDR_D1=   0x475,
	TOWNSIO_MX_IMGOUT_ADDR_D2=   0x476,
	TOWNSIO_MX_IMGOUT_ADDR_D3=   0x477,

	TOWNSIO_CDROM_MASTER_CTRL_STATUS=0x4C0, // [2] pp.224
	TOWNSIO_CDROM_COMMAND_STATUS=    0x4C2, // [2] pp.224
	TOWNSIO_CDROM_PARAMETER_DATA=    0x4C4, // [2] pp.224
	TOWNSIO_CDROM_TRANSFER_CTRL=     0x4C6, // [2] pp.227
	TOWNSIO_CDROM_SUBCODE_STATUS=    0x4CC,
	TOWNSIO_CDROM_SUBCODE_DATA=      0x4CD,

	TOWNSIO_SYSROM_DICROM=            0x480, // [2] pp.91

	TOWNSIO_MEMSIZE=                  0x5E8, // [2] pp.827

	TOWNSIO_KEYBOARD_DATA=       0x600, // [2] pp.234
	TOWNSIO_KEYBOARD_STATUS_CMD= 0x602, // [2] pp.231
	TOWNSIO_KEYBOARD_IRQ=        0x604, // [2] pp.236

	TOWNSIO_FMR_DIGITALPALETTE0= 0xFD98,
	TOWNSIO_FMR_DIGITALPALETTE1= 0xFD91,
	TOWNSIO_FMR_DIGITALPALETTE2= 0xFD92,
	TOWNSIO_FMR_DIGITALPALETTE3= 0xFD93,
	TOWNSIO_FMR_DIGITALPALETTE4= 0xFD94,
	TOWNSIO_FMR_DIGITALPALETTE5= 0xFD95,
	TOWNSIO_FMR_DIGITALPALETTE6= 0xFD96,
	TOWNSIO_FMR_DIGITALPALETTE7= 0xFD97,

	TOWNSIO_FMR_VRAMMASK=        0xFF81, 
	// Not official.  But 2MX BIOS is obviously writing it.
	// It apparently works same ax memory-mapped I/O 000CFF81H.
	TOWNSIO_FMR_VRAMDISPLAYMODE= 0xFF82, 
	// Not official.  But, since FMR_VRAMMASK is also mapped to I/O FF81H, FF82H may be too.
	TOWNSIO_FMR_VRAMPAGESEL=     0xFF83, 
	// Not official.  But, since FMR_VRAMMASK is also mapped to I/O FF81H, FF83H may be too.
};

enum
{
	TOWNSMEMIO_MIX=                0x000CFF80, // Called Dummy [2] pp.22, pp.158
	TOWNSMEMIO_FMR_GVRAMMASK=      0x000CFF81, // [2] pp.22,pp.159
	TOWNSMEMIO_FMR_GVRAMDISPMODE=  0x000CFF82, // [2] pp.22,pp.158
	TOWNSMEMIO_FMR_GVRAMPAGESEL=   0x000CFF83, // [2] pp.22,pp.159
	TOWNSMEMIO_FIRQ=               0x000CFF84, // [2] pp.22,pp.95 Always zero in FM TOWNS
	TOWNSMEMIO_FMR_HSYNC_VSYNC=    0x000CFF86, // [2] pp.22,pp.160

	TOWNSMEMIO_KANJI_JISCODE_HIGH= 0x000CFF94,
	TOWNSMEMIO_KANJI_JISCODE_LOW=  0x000CFF95,
	TOWNSMEMIO_KANJI_PTN_HIGH=     0x000CFF96,
	TOWNSMEMIO_KANJI_PTN_LOW=      0x000CFF97,
};

enum
{
	TOWNS_MEMIO_1_LOW=    0x0000FD90,
	TOWNS_MEMIO_1_HIGH=   0x0000FDA0,
	TOWNS_MEMIO_2_LOW=    0x000CFF80,
	TOWNS_MEMIO_2_HIGH=   0x000CFFBB,
};

/* } */
#endif
