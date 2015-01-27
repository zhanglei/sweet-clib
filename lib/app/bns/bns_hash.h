#ifndef BNS_HASH_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "chtbl.h"
#include "list.h"

#define PRIME_TBLSIZ 1024

int hashpjw(const void *key);
int match_sweet_list_kv(const SweetListKv *data1, const SweetListKv *data2);
void print_table(const CHTbl *htbl);
int create_icon_hash(CHTbl *htbl);
void remove_icon_hash(CHTbl * htbl);


#endif