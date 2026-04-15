/*
 * This source file is part of the <https://github.com/Pyogenics/piggy> project, a decompile
 * effort for the RAD Game Tools Iggy library <https://www.radgametools.com/iggy.htm>, this
 * project does not contain any original code or assets from Iggy.
 *
 * Copyright (c) 2026 Pyogenics, <https://github.com/Pyogenics>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

// Pyogenics:   I am unsure if we should make this broadly compatible for drop in source replacement, e.g. instead of just dll and lib replacement
//              we could allow developers to just simply drop the source library into the code instead and use our headers. Not sure how much work
//              that would require ontop of just the "good enough" implementation we have now, realistically the amount of effort to use these
//              headers over the original RAD ones is probably minimal.

// We mirror the RAD include defines to avoid collision with the original library in case of a broken drop in replacement
#ifndef __RADRR_COREH__
#define __RADRR_COREH__

#include <stdint.h>

//
// typedefs
//
typedef int8_t      S8;
typedef uint8_t     U8;
typedef int16_t     S16;
typedef uint16_t    U16;
typedef int32_t     S32;
typedef uint32_t    U32;
typedef int64_t     S64;
typedef uint64_t    U64;

typedef float       F32;
typedef double      F64;

typedef S32         RRBOOL;

#endif //__RADRR_COREH__