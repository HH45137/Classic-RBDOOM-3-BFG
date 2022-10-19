/**
* Copyright (C) 2018 George Kalmpokis
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* this software and associated documentation files (the "Software"), to deal in
* the Software without restriction, including without limitation the rights to
* use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
* of the Software, and to permit persons to whom the Software is furnished to
* do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software. As clarification, there
* is no requirement that the copyright notice and permission be included in
* binary distributions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

#include "precompiled.h"
#include "AL_EAX.h"

#ifdef _MSC_VER
LPALGENEFFECTS			alGenEffects = (LPALGENEFFECTS)alGetProcAddress("alGenEffects");
LPALEFFECTI				alEffecti = (LPALEFFECTI)alGetProcAddress("alEffecti");
LPALEFFECTF				alEffectf = (LPALEFFECTF)alGetProcAddress("alEffectf");
LPALEFFECTFV			alEffectfv = (LPALEFFECTFV)alGetProcAddress("alEffectfv");
LPALISEFFECT			alIsEffect = (LPALISEFFECT)alGetProcAddress("alIsEffect");
LPALISAUXILIARYEFFECTSLOT	alIsAuxiliaryEffectSlot = (LPALISAUXILIARYEFFECTSLOT)alGetProcAddress("alIsAuxiliaryEffectSlot");
LPALDELETEAUXILIARYEFFECTSLOTS	alDeleteAuxiliaryEffectSlots = (LPALDELETEAUXILIARYEFFECTSLOTS)alGetProcAddress("alDeleteAuxiliaryEffectSlots");
LPALDELETEEFFECTS	alDeleteEffects = (LPALDELETEEFFECTS)alGetProcAddress("alDeleteEffects");
LPALAUXILIARYEFFECTSLOTI	alAuxiliaryEffectSloti = (LPALAUXILIARYEFFECTSLOTI)alGetProcAddress("alAuxiliaryEffectSloti");
LPALGENAUXILIARYEFFECTSLOTS	alGenAuxiliaryEffectSlots = (LPALGENAUXILIARYEFFECTSLOTS)alGetProcAddress("alGenAuxiliaryEffectSlots");
LPALGENFILTERS			alGenFilters = (LPALGENFILTERS)alGetProcAddress("alGenFilters");
LPALFILTERF				alFilterf = (LPALFILTERF)alGetProcAddress("alFilterf");
LPALFILTERFV			alFilterfv = (LPALFILTERFV)alGetProcAddress("alFilterfv");
LPALFILTERI				alFilteri = (LPALFILTERI)alGetProcAddress("alFilteri");
LPALDELETEFILTERS		alDeleteFilters = (LPALDELETEFILTERS)alGetProcAddress("alDeleteFilters");
LPALISFILTER			alIsFilter = (LPALISFILTER)alGetProcAddress("alIsFilter");
#endif