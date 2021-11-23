  /* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "micro_features_yes_micro_features_data.h"

// Golden test values for the expected spectrogram from a "yes" sample file
// speech_commands_test_set_v0.02/yes/f2e59fea_nohash_1.wav.

const int g_yes_micro_f2e59fea_nohash_1_width = 40;
const int g_yes_micro_f2e59fea_nohash_1_height = 49;
const signed char g_yes_micro_f2e59fea_nohash_1_data[] = {
    116,  98,   118,  95,   106,  85,   101,  81,   67,   -18,  -33,  -12,
    -26,  -128, 9,    34,   56,   45,   9,    -12,  5,    30,   23,   28,
    0,    -18,  0,    -128, -60,  -50,  -50,  -37,  -60,  -60,  -50,  -26,
    -33,  -50,  -33,  -50,  83,   61,   81,   55,   76,   61,   73,   64,
    38,   -8,   -37,  -20,  -18,  -20,  48,   29,   52,   41,   55,   18,
    25,   37,   44,   37,   8,    15,   -6,   -60,  -128, -50,  -37,  -37,
    -18,  -37,  -26,  -29,  -37,  -60,  -50,  -60,  95,   59,   52,   -4,
    54,   -18,  68,   43,   31,   -18,  -26,  -33,  -37,  -29,  33,   7,
    -3,   8,    26,   24,   36,   6,    36,   23,   14,   8,    -29,  -37,
    -37,  -37,  -50,  -50,  -26,  -8,   -26,  -37,  -18,  -37,  -60,  -77,
    50,   48,   83,   44,   56,   -128, -33,  -60,  1,    -26,  -60,  -43,
    -14,  -23,  -18,  -43,  -26,  -33,  13,   -77,  -43,  -77,  -33,  -37,
    16,   -12,  -37,  -50,  -50,  -77,  -20,  -43,  -60,  -128, -60,  -77,
    -37,  -77,  -60,  -128, 37,   -10,  65,   -7,   28,   -128, 10,   -77,
    -37,  -128, -77,  -128, -77,  -43,  -128, -128, -77,  -128, -128, -128,
    -128, -128, -14,  -128, -43,  -50,  -37,  -77,  -128, -128, -77,  -43,
    -29,  -43,  -20,  -60,  -37,  -43,  -50,  -128, -77,  -128, -18,  -128,
    -60,  -128, -128, -128, -77,  -128, -77,  -128, -128, -128, -60,  -37,
    -20,  -128, -60,  -128, -128, -128, -60,  -128, -77,  -60,  -128, -50,
    -60,  -128, -77,  -128, -50,  -60,  -37,  -60,  -50,  -77,  -77,  -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -37,  -128,
    -128, -128, -128, -128, -77,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -77,  -60,  -128, -128, -50,  -128, -50,  -128,
    -50,  -128, -77,  -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -77,  -128, -77,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -77,  -128, -77,  -128, -77,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -77,  -128, -128, -128,
    -128, -77,  -50,  -128, -128, -77,  -77,  -128, -128, -128, -50,  -128,
    85,   43,   65,   53,   69,   60,   45,   3,    46,   -12,  9,    -23,
    32,   -1,   -128, -128, -128, -128, -1,   37,   38,   33,   43,   36,
    58,   70,   68,   39,   6,    10,   32,   6,    8,    -23,  -77,  -128,
    -29,  -128, -77,  -128, 101,  87,   102,  91,   110,  88,   101,  83,
    110,  95,   111,  83,   81,   84,   106,  90,   93,   82,   98,   91,
    108,  95,   118,  97,   118,  97,   116,  96,   113,  90,   110,  96,
    107,  85,   94,   66,   69,   36,   29,   0,    100,  60,   105,  68,
    92,   93,   113,  92,   107,  85,   107,  83,   104,  91,   105,  85,
    112,  88,   101,  80,   101,  79,   96,   80,   98,   80,   105,  83,
    98,   81,   103,  71,   100,  79,   83,   78,   91,   47,   50,   13,
    108,  81,   93,   78,   98,   76,   105,  76,   98,   40,   77,   72,
    81,   62,   93,   77,   96,   80,   98,   61,   97,   69,   88,   61,
    71,   56,   98,   68,   97,   72,   89,   51,   81,   61,   88,   75,
    86,   56,   48,   13,   71,   22,   84,   66,   76,   -7,   48,   61,
    77,   62,   91,   65,   95,   74,   88,   59,   75,   58,   83,   55,
    87,   55,   76,   43,   76,   -3,   56,   60,   79,   57,   71,   54,
    82,   33,   74,   71,   91,   45,   18,   -7,   61,   56,   77,   41,
    73,   42,   82,   49,   59,   63,   82,   65,   66,   38,   83,   34,
    48,   -8,   46,   20,   54,   33,   54,   6,    48,   16,   60,   37,
    58,   22,   58,   14,   65,   53,   75,   -4,   42,   16,   16,   -50,
    22,   -128, 80,   54,   43,   -50,  42,   -128, -10,  -77,  28,   -29,
    68,   43,   73,   2,    25,   -60,  47,   14,   45,   7,    66,   4,
    62,   37,   71,   7,    46,   -10,  44,   22,   55,   53,   57,   -29,
    26,   -10,  -3,   -128, 38,   -128, 46,   -10,  16,   -128, -10,  -26,
    60,   -7,   65,   38,   70,   -60,  35,   -8,   42,   -29,  6,    -128,
    34,   -128, 36,   -60,  44,   -12,  -2,   -128, -7,   -60,  -60,  -128,
    -23,  -128, 31,   -33,  22,   -77,  -37,  -43,  -128, -128, 3,    -128,
    -23,  -128, 17,   -77,  43,   -77,  -7,   -128, -20,  -128, 17,   -43,
    32,   -128, -43,  -128, -128, -77,  21,   -128, -50,  -128, -128, -128,
    -128, -128, -128, -128, -37,  -128, -16,  -128, -50,  -26,  -6,   -128,
    -128, -128, -128, -128, -23,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -16,  -128, 36,   -7,   16,   -128, -128, -128, -128, -128,
    -77,  -128, -37,  -128, -50,  -128, -128, -128, -128, -128, -18,  -128,
    11,   -128, -16,  -77,  -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -26,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -20,  -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -50,  -128, -77,  -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -77,  -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -1,   -18,  5,    -128,
    40,   -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, 4,    -128, 63,   66,   75,   -128,
    70,   60,   34,   -128, -128, -128, -128, -128, -128, -128, -128, -128,
    87,   86,   95,   76,   91,   62,   72,   -6,   -50,  -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, 64,   83,   104,  70,
    98,   90,   111,  89,   109,  80,   71,   -128, -128, -128, -128, -128,
    -20,  -6,   27,   33,   86,   88,   108,  75,   108,  76,   98,   64,
    75,   61,   71,   66,   85,   -1,   -77,  -128, 46,   61,   92,   69,
    100,  93,   113,  80,   108,  93,   113,  91,   110,  80,   85,   15,
    -33,  -128, 12,   -50,  34,   50,   70,   55,   84,   72,   108,  81,
    111,  88,   100,  80,   84,   73,   97,   86,   99,   65,   85,   43,
    96,   78,   107,  94,   118,  98,   115,  92,   118,  94,   111,  93,
    111,  86,   99,   52,   32,   -16,  48,   31,   81,   74,   85,   64,
    78,   64,   98,   70,   110,  92,   96,   73,   100,  72,   94,   73,
    98,   76,   85,   67,   101,  83,   101,  83,   112,  89,   98,   85,
    105,  78,   98,   72,   102,  80,   95,   23,   19,   -8,   52,   57,
    103,  91,   95,   65,   74,   8,    77,   49,   96,   76,   100,  87,
    105,  81,   94,   62,   94,   78,   81,   72,   99,   82,   101,  78,
    108,  65,   82,   70,   100,  63,   79,   58,   80,   59,   87,   48,
    50,   57,   93,   67,   86,   80,   103,  56,   77,   31,   81,   57,
    62,   41,   96,   85,   91,   71,   101,  76,   89,   78,   95,   76,
    96,   79,   103,  81,   103,  48,   70,   57,   88,   66,   84,   11,
    85,   67,   104,  37,   38,   67,   90,   54,   81,   62,   90,   52,
    78,   -60,  54,   -8,   68,   40,   55,   8,    77,   52,   66,   31,
    55,   13,   60,   26,   69,   42,   63,   -29,  57,   -128, -3,   -128,
    3,    -128, -29,  -60,  52,   -43,  63,   56,   86,   75,   95,   75,
    85,   63,   82,   10,   50,   -128, 31,   -77,  0,    -77,  -23,  -128,
    12,   -77,  51,   -3,   58,   -14,  44,   0,    48,   4,    53,   47,
    28,   -128, -128, -128, -37,  -128, -3,   -128, 49,   61,   100,  90,
    117,  88,   107,  94,   112,  64,   96,   83,   -128, -128, 7,    -128,
    -77,  -128, -23,  -128, -23,  -128, 16,   -37,  65,   -8,   48,   20,
    14,   -77,  57,   -18,  -43,  -128, -128, -128, -128, -128, -128, -128,
    24,   12,   74,   76,   105,  76,   99,   80,   108,  79,   103,  85,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    42,   -128, -8,   -128, -50,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -60,  -128, -128, 5,    73,   53,   93,   70,   101,  73,
    94,   57,   86,   66,   -18,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -50,  -128, 36,   -128, -128, -128, -128, -128, -20,  -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 23,   37,
    75,   54,   97,   70,   83,   52,   85,   65,   7,    -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -43,  -128, 23,   -128, -43,  -128,
    -33,  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -26,  -37,  65,   33,   76,   37,   73,   50,   77,   47,
    -12,  -128, -128, -128, -128, -128, -128, -128, -128, -128, -7,   -14,
    -4,   -128, -14,  -128, 18,   -60,  -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -26,  -60,  71,   42,   68,   53,
    81,   49,   73,   36,   -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -18,  -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 15,   -26,
    44,   -18,  59,   39,   57,   20,   62,   26,   -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, 49,   -128, 30,   8,    69,   27,   62,   38,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -43,  -128, 28,   -37,  48,   -10,
    48,   11,   74,   37,   -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -77,  -128, 11,   -128, -7,   -60,  -77,  -4,   -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -8,   -128, -50,  -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, -128,
    -128, -128, -128, -128,
};
