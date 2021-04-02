#include "../../inc/MarlinConfig.h"

#if ENABLED(CREALITY_DWIN_EXTUI)

#include "../gcode.h"
#include "../../lcd/marlinui.h"

/**
 * M251: Set the LCD brightness
 */
void GcodeSuite::M251() {
  if (parser.seen('B')) ui.set_brightness(parser.value_int());
}

#endif // ENABLED(CREALITY_DWIN_EXTUI)