/*
 * sendMessage.h
 *
 * Code for sending messages arbitrary data types to a named Viola object.
 *
 */
/*
 * Copyright 1993 O'Reilly & Associates. All rights reserved.
 *
 * Permission to use, copy, and/or distribute for any purpose and
 * without fee is hereby granted, provided that both the above copyright
 * notice and this permission notice appear in all copies and derived works.
 * Fees for distribution or use of this software or derived works may only
 * be charged with express written permission of the copyright holder.
 * This software is provided ``as is'' without express or implied warranty.
 */

enum MsgArgType {INT, STR};

typedef struct argStruct {
    int datatype;
    void *data;
} MsgArg;


