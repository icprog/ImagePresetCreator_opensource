#include "dxfDefinedColor.h"

const QColor DXF_DEFINED_COLOR::IndexOf[] = {

    QColor(  0,   0,   0),
    QColor(255,   0,   0),
    QColor(255, 255,   0),
    QColor(  0, 255,   0),
    QColor(  0, 255, 255),
    QColor(  0,   0, 255),
    QColor(255,   0, 255),
    QColor(255, 255, 255),
    QColor( 65,  65,  65),
    QColor(128, 128, 128),
    QColor(255,   0,   0),
    QColor(255, 170, 170),
    QColor(189,   0,   0),
    QColor(189, 126, 126),
    QColor(129,   0,   0),
    QColor(129,  86,  86),
    QColor(104,   0,   0),
    QColor(104,  69,  69),
    QColor( 79,   0,   0),
    QColor( 79,  53,  53),
    QColor(255,  63,   0),
    QColor(255, 191, 170),
    QColor(189,  46,   0),
    QColor(189, 141, 126),
    QColor(129,  31,   0),
    QColor(129,  96,  86),
    QColor(104,  25,   0),
    QColor(104,  78,  69),
    QColor( 79,  19,   0),
    QColor( 79,  59,  53),
    QColor(255, 127,   0),
    QColor(255, 212, 170),
    QColor(189,  94,   0),
    QColor(189, 157, 126),
    QColor(129,  64,   0),
    QColor(129, 107,  86),
    QColor(104,  52,   0),
    QColor(104,  86,  69),
    QColor( 79,  39,   0),
    QColor( 79,  66,  53),
    QColor(255, 191,   0),
    QColor(255, 234, 170),
    QColor(189, 141,   0),
    QColor(189, 173, 126),
    QColor(129,  96,   0),
    QColor(129, 118,  86),
    QColor(104,  78,   0),
    QColor(104,  95,  69),
    QColor( 79,  59,   0),
    QColor( 79,  73,  53),
    QColor(255, 255,   0),
    QColor(255, 255, 170),
    QColor(189, 189,   0),
    QColor(189, 189, 126),
    QColor(129, 129,   0),
    QColor(129, 129,  86),
    QColor(104, 104,   0),
    QColor(104, 104,  69),
    QColor( 79,  79,   0),
    QColor( 79,  79,  53),
    QColor(191, 255,   0),
    QColor(234, 255, 170),
    QColor(141, 189,   0),
    QColor(173, 189, 126),
    QColor( 96, 129,   0),
    QColor(118, 129,  86),
    QColor( 78, 104,   0),
    QColor( 95, 104,  69),
    QColor( 59,  79,   0),
    QColor( 73,  79,  53),
    QColor(127, 255,   0),
    QColor(212, 255, 170),
    QColor( 94, 189,   0),
    QColor(157, 189, 126),
    QColor( 64, 129,   0),
    QColor(107, 129,  86),
    QColor( 52, 104,   0),
    QColor( 86, 104,  69),
    QColor( 39,  79,   0),
    QColor( 66,  79,  53),
    QColor( 63, 255,   0),
    QColor(191, 255, 170),
    QColor( 46, 189,   0),
    QColor(141, 189, 126),
    QColor( 31, 129,   0),
    QColor( 96, 129,  86),
    QColor( 25, 104,   0),
    QColor( 78, 104,  69),
    QColor( 19,  79,   0),
    QColor( 59,  79,  53),
    QColor(  0, 255,   0),
    QColor(170, 255, 170),
    QColor(  0, 189,   0),
    QColor(126, 189, 126),
    QColor(  0, 129,   0),
    QColor( 86, 129,  86),
    QColor(  0, 104,   0),
    QColor( 69, 104,  69),
    QColor(  0,  79,   0),
    QColor( 53,  79,  53),
    QColor(  0, 255,  63),
    QColor(170, 255, 191),
    QColor(  0, 189,  46),
    QColor(126, 189, 141),
    QColor(  0, 129,  31),
    QColor( 86, 129,  96),
    QColor(  0, 104,  25),
    QColor( 69, 104,  78),
    QColor(  0,  79,  19),
    QColor( 53,  79,  59),
    QColor(  0, 255, 127),
    QColor(170, 255, 212),
    QColor(  0, 189,  94),
    QColor(126, 189, 157),
    QColor(  0, 129,  64),
    QColor( 86, 129, 107),
    QColor(  0, 104,  52),
    QColor( 69, 104,  86),
    QColor(  0,  79,  39),
    QColor( 53,  79,  66),
    QColor(  0, 255, 191),
    QColor(170, 255, 234),
    QColor(  0, 189, 141),
    QColor(126, 189, 173),
    QColor(  0, 129,  96),
    QColor( 86, 129, 118),
    QColor(  0, 104,  78),
    QColor( 69, 104,  95),
    QColor(  0,  79,  59),
    QColor( 53,  79,  73),
    QColor(  0, 255, 255),
    QColor(170, 255, 255),
    QColor(  0, 189, 189),
    QColor(126, 189, 189),
    QColor(  0, 129, 129),
    QColor( 86, 129, 129),
    QColor(  0, 104, 104),
    QColor( 69, 104, 104),
    QColor(  0,  79,  79),
    QColor( 53,  79,  79),
    QColor(  0, 191, 255),
    QColor(170, 234, 255),
    QColor(  0, 141, 189),
    QColor(126, 173, 189),
    QColor(  0,  96, 129),
    QColor( 86, 118, 129),
    QColor(  0,  78, 104),
    QColor( 69,  95, 104),
    QColor(  0,  59,  79),
    QColor( 53,  73,  79),
    QColor(  0, 127, 255),
    QColor(170, 212, 255),
    QColor(  0,  94, 189),
    QColor(126, 157, 189),
    QColor(  0,  64, 129),
    QColor( 86, 107, 129),
    QColor(  0,  52, 104),
    QColor( 69,  86, 104),
    QColor(  0,  39,  79),
    QColor( 53,  66,  79),
    QColor(  0,  63, 255),
    QColor(170, 191, 255),
    QColor(  0,  46, 189),
    QColor(126, 141, 189),
    QColor(  0,  31, 129),
    QColor( 86,  96, 129),
    QColor(  0,  25, 104),
    QColor( 69,  78, 104),
    QColor(  0,  19,  79),
    QColor( 53,  59,  79),
    QColor(  0,   0, 255),
    QColor(170, 170, 255),
    QColor(  0,   0, 189),
    QColor(126, 126, 189),
    QColor(  0,   0, 129),
    QColor( 86,  86, 129),
    QColor(  0,   0, 104),
    QColor( 69,  69, 104),
    QColor(  0,   0,  79),
    QColor( 53,  53,  79),
    QColor( 63,   0, 255),
    QColor(191, 170, 255),
    QColor( 46,   0, 189),
    QColor(141, 126, 189),
    QColor( 31,   0, 129),
    QColor( 96,  86, 129),
    QColor( 25,   0, 104),
    QColor( 78,  69, 104),
    QColor( 19,   0,  79),
    QColor( 59,  53,  79),
    QColor(127,   0, 255),
    QColor(212, 170, 255),
    QColor( 94,   0, 189),
    QColor(157, 126, 189),
    QColor( 64,   0, 129),
    QColor(107,  86, 129),
    QColor( 52,   0, 104),
    QColor( 86,  69, 104),
    QColor( 39,   0,  79),
    QColor( 66,  53,  79),
    QColor(191,   0, 255),
    QColor(234, 170, 255),
    QColor(141,   0, 189),
    QColor(173, 126, 189),
    QColor( 96,   0, 129),
    QColor(118,  86, 129),
    QColor( 78,   0, 104),
    QColor( 95,  69, 104),
    QColor( 59,   0,  79),
    QColor( 73,  53,  79),
    QColor(255,   0, 255),
    QColor(255, 170, 255),
    QColor(189,   0, 189),
    QColor(189, 126, 189),
    QColor(129,   0, 129),
    QColor(129,  86, 129),
    QColor(104,   0, 104),
    QColor(104,  69, 104),
    QColor( 79,   0,  79),
    QColor( 79,  53,  79),
    QColor(255,   0, 191),
    QColor(255, 170, 234),
    QColor(189,   0, 141),
    QColor(189, 126, 173),
    QColor(129,   0,  96),
    QColor(129,  86, 118),
    QColor(104,   0,  78),
    QColor(104,  69,  95),
    QColor( 79,   0,  59),
    QColor( 79,  53,  73),
    QColor(255,   0, 127),
    QColor(255, 170, 212),
    QColor(189,   0,  94),
    QColor(189, 126, 157),
    QColor(129,   0,  64),
    QColor(129,  86, 107),
    QColor(104,   0,  52),
    QColor(104,  69,  86),
    QColor( 79,   0,  39),
    QColor( 79,  53,  66),
    QColor(255,   0,  63),
    QColor(255, 170, 191),
    QColor(189,   0,  46),
    QColor(189, 126, 141),
    QColor(129,   0,  31),
    QColor(129,  86,  96),
    QColor(104,   0,  25),
    QColor(104,  69,  78),
    QColor( 79,   0,  19),
    QColor( 79,  53,  59),
    QColor( 51,  51,  51),
    QColor( 80,  80,  80),
    QColor(105, 105, 105),
    QColor(130, 130, 130),
    QColor(190, 190, 190),
    QColor(255, 255, 255)
};
