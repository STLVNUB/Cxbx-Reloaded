// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;; 
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['  
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P    
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,  
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->Xapi.1.0.3911.cpp
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * CreateThread
// ******************************************************************
SOOVPA<8> CreateThread_1_0_3911 =
{
    0,  // Large == 0
    8,  // Count == 8

    {
        // CreateThread+0x0A : mov eax, ds:10130h
        { 0x0A, 0xA1 }, // (Offset,Value)-Pair #1
        { 0x0B, 0x30 }, // (Offset,Value)-Pair #2
        { 0x0C, 0x01 }, // (Offset,Value)-Pair #3

        // CreateThread+0x1C : and ecx, 0xFFFFFF01
        { 0x1C, 0x81 }, // (Offset,Value)-Pair #4
        { 0x1D, 0xE1 }, // (Offset,Value)-Pair #5
        { 0x1E, 0x01 }, // (Offset,Value)-Pair #6

        // CreateThread+0x51 : retn 0x18
        { 0x51, 0xC2 }, // (Offset,Value)-Pair #7
        { 0x52, 0x18 }  // (Offset,Value)-Pair #8
    }
};

// ******************************************************************
// * XapiInitProcess
// ******************************************************************
SOOVPA<7> XapiInitProcess_1_0_3911 =
{
    0,  // Large == 0
    7,  // Count == 7

    {
        // XapiInitProcess+0x00 : sub esp, 30h
        { 0x05, 0x30 }, // (Offset,Value)-Pair #1

        // XapiInitProcess+0x0F : push 0x0C
        { 0x0F, 0x6A }, // (Offset,Value)-Pair #2
        { 0x10, 0x0C }, // (Offset,Value)-Pair #3

        // XapiInitProcess+0x17 : repe stosd
        { 0x17, 0xF3 }, // (Offset,Value)-Pair #4
        { 0x18, 0xAB }, // (Offset,Value)-Pair #5

        // XapiInitProcess+0x42 : jnz +0x0A
        { 0x42, 0x75 }, // (Offset,Value)-Pair #6
        { 0x43, 0x0A }, // (Offset,Value)-Pair #7
    }
};

// ******************************************************************
// * XapiBootDash
// ******************************************************************
SOOVPA<11> XapiBootDash_1_0_3911 =
{
    0,  // Large == 0
    11, // Count == 11

    {
        // XapiBootDash+0x03 : sub esp, 0x0C00
        { 0x03, 0x81 }, // (Offset,Value)-Pair #1
        { 0x04, 0xEC }, // (Offset,Value)-Pair #2
        { 0x06, 0x0C }, // (Offset,Value)-Pair #3

        // XapiBootDash+0x09 : mov eax, ds:0x10118
        { 0x09, 0xA1 }, // (Offset,Value)-Pair #4
        { 0x0A, 0x18 }, // (Offset,Value)-Pair #5
        { 0x0B, 0x01 }, // (Offset,Value)-Pair #6
        { 0x0C, 0x01 }, // (Offset,Value)-Pair #7

        // XapiBootDash+0x25 : repe stosd
        { 0x25, 0xF3 }, // (Offset,Value)-Pair #8
        { 0x26, 0xAB }, // (Offset,Value)-Pair #9

        // XapiBootDash+0x59 : retn 0x0C
        { 0x59, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x5A, 0x0C }, // (Offset,Value)-Pair #11
    }
};

// ******************************************************************
// * __rtinit
// ******************************************************************
SOOVPA<8> __rtinit_1_0_3911 =
{
    0,  // Large == 0
    8,  // Count == 8

    {
        // __rtinit+0x02 : mov eax, abs
        { 0x02, 0xB8 }, // (Offset,Value)-Pair #1

        // __rtinit+0x07 : mov edi, abs
        { 0x07, 0xBF }, // (Offset,Value)-Pair #2

        // __rtinit+0x18 : cmp eax, -1
        { 0x18, 0x83 }, // (Offset,Value)-Pair #3
        { 0x19, 0xF8 }, // (Offset,Value)-Pair #4
        { 0x1A, 0xFF }, // (Offset,Value)-Pair #5

        // __rtinit+0x22 : cmp esi, edi
        { 0x22, 0x3B }, // (Offset,Value)-Pair #6
        { 0x23, 0xF7 }, // (Offset,Value)-Pair #7

        // __rtinit+0x28 : retn
        { 0x28, 0xC3 }, // (Offset,Value)-Pair #8
    }
};

// ******************************************************************
// * __cinit
// ******************************************************************
SOOVPA<9> __cinit_1_0_3911 =
{
    0,  // Large == 0
    9,  // Count == 9

    {
        // __cinit+0x09 : call eax
        { 0x09, 0xFF }, // (Offset,Value)-Pair #1
        { 0x0A, 0xD0 }, // (Offset,Value)-Pair #2

        // __cinit+0x1B : jnb +0x14
        { 0x1B, 0x73 }, // (Offset,Value)-Pair #3
        { 0x1C, 0x14 }, // (Offset,Value)-Pair #4

        // __cinit+0x4A : jz +0x02
        { 0x4A, 0x74 }, // (Offset,Value)-Pair #5
        { 0x4B, 0x02 }, // (Offset,Value)-Pair #6

        // __cinit+0x4C : call eax
        { 0x4C, 0xFF }, // (Offset,Value)-Pair #7
        { 0x4D, 0xD0 }, // (Offset,Value)-Pair #8

        // __cinit+0x57 : retn
        { 0x57, 0xC3 }, // (Offset,Value)-Pair #9
    }
};

// ******************************************************************
// * XAPI_1_0_3911
// ******************************************************************
OOVPATable XAPI_1_0_3911[] =
{
    /* Too High Level
    // CreateThread
    {
        (OOVPA*)&CreateThread_1_0_3911,

        xapi::EmuCreateThread,

        #ifdef _DEBUG_TRACE
        "EmuCreateThread" 
        #endif
    },
    */
    /* Too High Level
    // XapiInitProcess
    {
        (OOVPA*)&XapiInitProcess_1_0_3911,

        xapi::EmuXapiInitProcess,

        #ifdef _DEBUG_TRACE
        "EmuXapiInitProcess" 
        #endif
    },
    */
    // XapiBootToDash
    {
        (OOVPA*)&XapiBootDash_1_0_3911,

        xapi::EmuXapiBootDash,

        #ifdef _DEBUG_TRACE
        "EmuXapiBootDash"
        #endif
    },
    /* Too High Level
    // __rtinit
    {
        (OOVPA*)&__rtinit_1_0_3911,

        xapi::Emu__rtinit,

        #ifdef _DEBUG_TRACE
        "Emu__rtinit",
        #endif
    },*/
    /* Too High Level
    // __cinit
    {
        (OOVPA*)&__cinit_1_0_3911,

        xapi::Emu__cinit,

        #ifdef _DEBUG_TRACE
        "Emu__cinit",
        #endif
    },*/
};

// ******************************************************************
// * XAPI_1_0_3911_SIZE
// ******************************************************************
uint32 XAPI_1_0_3911_SIZE = sizeof(XAPI_1_0_3911);