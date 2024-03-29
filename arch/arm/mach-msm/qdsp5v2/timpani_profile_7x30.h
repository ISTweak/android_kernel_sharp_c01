/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __MACH_QDSP5_V2_TIMPANI_PROFILE_H__
#define __MACH_QDSP5_V2_MTIMPANI_PROFILE_H__

/*
 * TX Device Profiles
 */

/* Analog MIC */
/* AMIC Primary mono */
#define AMIC_PRI_MONO_8000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x05)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0x30)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0xD0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x65)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xbb8}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x82, 0xFF, 0x1E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x93, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x94, 0xFF, 0x1B)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x99, 0x0F, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x9F, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x04, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8b, 0xff, 0xE6)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8c, 0x03, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xC0)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x64)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xAB, 0x09, 0x09)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

/* Headset MIC */
#define AMIC1_HEADSET_TX_MONO_PRIMARY_OSR256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x05)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0x30)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x82, 0xFF, 0x1E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x93, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x94, 0xFF, 0x1B)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x99, 0x0F, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x9F, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0xC8)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x65)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xbb8 }, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x04, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8b, 0xff, 0xE7)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8c, 0x03, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xC0)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x64)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0x00)} }

/*
 * RX Device Profiles
 */

/* RX EAR */
#define EAR_PRI_MONO_8000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0F)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x97, 0xFF, 0x01)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0xFF, 0x4C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x39, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xbb8}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0E)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x39, 0x01, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

/* RX SPEAKER */
#define SPEAKER_PRI_STEREO_48000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x85, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x6C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB7, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0x08)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0x1388}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0x48)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0x1388}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0xF8)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3A, 0x24, 0x24)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0x05, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3A, 0x24, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF},       \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} };

/*
 * RX HPH PRIMARY
 */

/* RX HPH CLASS AB CAPLESS */

#define HEADSET_AB_CPLS_48000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x85, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x6C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB7, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x55)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x4C, 0xFF, 0x29)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xBB8}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0xF5)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x4C, 0xFE, 0xC8)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0x27, 0x24)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

/* AMIC dual */
#define AMIC_DUAL_8000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x05)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0x30)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x82, 0xFF, 0x1E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x93, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x94, 0xFF, 0x1B)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x99, 0x0F, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x9F, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0xD0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0E, 0xFF, 0xC2)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x65)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xbb8 }, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8b, 0xff, 0xCE)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB4, 0xFF, 0xCE)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8c, 0xFF, 0x5A)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xC0)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0E, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x64)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

/* TTY RX */
#define TTY_HEADSET_MONO_RX_8000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x97, 0xFF, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x06)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x01)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x4C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB7, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x45)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x4C, 0xFF, 0x29)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xBB8}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0xC5)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x4C, 0xFE, 0xC8)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0x27, 0x20)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x08)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

/* TTY TX */
#define TTY_HEADSET_MONO_TX_8000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x05)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0x30)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x82, 0xFF, 0x1E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x93, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x94, 0xFF, 0x1B)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x99, 0x0F, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x9F, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0xA8)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x65)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xBB8}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x04, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xC0)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x0D, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x14, 0xFF, 0x64)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x11, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x12, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

#define HEADSET_RX_CAPLESS_48000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x4e)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x04, 0xff, 0xBC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x64)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x25, 0x0F, 0x0B)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x26, 0xfc, 0xfc)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x38, 0xff, 0xa2)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3A, 0xFF, 0xab)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x33, 0x80, 0x80)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x34, 0xf0, 0xf0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x23, 0xff, 0x20)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3B, 0xFF, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3c, 0xFF, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xff, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x85, 0xff, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0f, 0x0c)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8a, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3b, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3c, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x34, 0xf0, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x33, 0x80, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

#define HEADSET_STEREO_SPEAKER_STEREO_RX_CAPLESS_48000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x85, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x6C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB7, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x55)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0x08)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x4C, 0xFF, 0x29)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0x1388}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0xF5)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0x48)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0x1388}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0xF8)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3A, 0x24, 0x24)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0x27, 0x24)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE0, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE1, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x32, 0xF8, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3A, 0x24, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF},	\
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

#define HS_DMIC2_STEREO_8000_OSR_256 \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0xbb8 }, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x05)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x05, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0x30)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x82, 0x1F, 0x1E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x0C, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x92, 0x3F, 0x19)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x94, 0x3F, 0x24)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x39, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA8, 0x0F, 0x0E)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xAB, 0x3F, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x86, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x87, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xC0)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0xF0, 0xF0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0xC0, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x92, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x94, 0xFF, 0x1B)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }

#define HPH_PRI_AB_LEG_STEREO \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x85, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x6C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB7, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x09)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x59)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 0x186A0}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0xF9)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0x27, 0x27)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFC, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3C, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }
#define HPH_PRI_D_LEG_STEREO \
	{{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_FLASH_IMAGE},  \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x80, 0x02, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xA3, 0x02, 0x02)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x84, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x85, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x0C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x81, 0xFF, 0x0E)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x83, 0x03, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x21, 0xFF, 0x60)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x22, 0xFF, 0xE1)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x24, 0x6F, 0x6C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x26, 0xFF, 0xD0)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x2D, 0xFF, 0x6F)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x2E, 0xFF, 0x55)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xB7, 0x01, 0x01)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3F, 0xFF, 0x0F)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x40, 0xFF, 0x08)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x41, 0x08, 0x08)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x42, 0xFF, 0xBB)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x43, 0xFF, 0xF2)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x44, 0xF7, 0x37)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x45, 0xFF, 0xFF)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x46, 0xFF, 0x77)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x47, 0xFF, 0xF2)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x48, 0xF7, 0x37)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x49, 0xFF, 0xFF)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x4A, 0xFF, 0x77)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x05)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3E, 0xFF, 0x8C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x33, 0x0F, 0x0A)}, \
	{ADIE_CODEC_ACTION_DELAY_WAIT, 300000}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x33, 0x0F, 0x0F)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x04)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_ANALOG_READY}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x8A, 0x0F, 0x03)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x10)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x1C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0x3C)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE2, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0xE3, 0xFE, 0xAC)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x3E, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x33, 0x0F, 0x00)}, \
	{ADIE_CODEC_ACTION_ENTRY, ADIE_CODEC_PACK_ENTRY(0x31, 0xFF, 0x00)}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_ANALOG_OFF}, \
	{ADIE_CODEC_ACTION_STAGE_REACHED, ADIE_CODEC_DIGITAL_OFF} }
#endif
