/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef ACTIONMAP_COMMON_
#define ACTIONMAP_COMMON_H

/* TV44 standard keymap definition macro
 */
#define ACTIONMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
    K30, K31, K32, K33,           K37, K38,      K39,      K3B  \
) { \
    { AC_##K00, AC_##K01, AC_##K02, AC_##K03, AC_##K04, AC_##K05, AC_##K06, AC_##K07, AC_##K08, AC_##K09, AC_##K0A, AC_##K0B }, \
    { AC_##K10, AC_##K11, AC_##K12, AC_##K13, AC_##K14, AC_##K15, AC_##K16, AC_##K17, AC_##K18, AC_##K19, AC_##K1A, AC_##K1B }, \
    { AC_##K20, AC_##K21, AC_##K22, AC_##K23, AC_##K24, AC_##K25, AC_##K26, AC_##K27, AC_##K28, AC_##K29, AC_##K2A, AC_##K2B }, \
    { AC_##K30, AC_##K31, AC_##K32, AC_##K33, AC_NO,    AC_NO,    AC_NO,    AC_##K37, AC_##K38, AC_##K39, AC_NO,    AC_##K3B }  \
}

/* TV44 arrow keymap definition macro
 */
#define ACTIONMAP_ARROW( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
    K30, K31, K32, K33,           K37, K38,      K39, K3A, K3B  \
) { \
    { AC_##K00, AC_##K01, AC_##K02, AC_##K03, AC_##K04, AC_##K05, AC_##K06, AC_##K07, AC_##K08, AC_##K09, AC_##K0A, AC_##K0B }, \
    { AC_##K10, AC_##K11, AC_##K12, AC_##K13, AC_##K14, AC_##K15, AC_##K16, AC_##K17, AC_##K18, AC_##K19, AC_##K1A, AC_##K1B }, \
    { AC_##K20, AC_##K21, AC_##K22, AC_##K23, AC_##K24, AC_##K25, AC_##K26, AC_##K27, AC_##K28, AC_##K29, AC_##K2A, AC_##K2B }, \
    { AC_##K30, AC_##K31, AC_##K32, AC_##K33, AC_NO,    AC_NO,    AC_NO,    AC_##K37, AC_##K38, AC_##K39, AC_##K3A, AC_##K3B }  \
}

#endif
