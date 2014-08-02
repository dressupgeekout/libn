/*
 * nstring.h
 * Christian Koch <cfkoch@sdf.lonestar.org>
 */

#ifndef NSTRING_H
#define NSTRING_H

#include <mruby.h>

/*
 * nstring is an opaque structure.
 */
struct nstring {
  mrb_value _string;
};
typedef struct nstring nstring;

nstring *nstring_new(const char *str);
void nstring_free(nstring *str);
nstring *nstring_cat(nstring *str1, nstring *str2);
nstring *nstring_cat_cstr(nstring *str1, const char *str2);
char *nstring_cstr(const nstring *str);
char *nstring_inspect(const nstring *str);
int nstring_cmp(const nstring *str1, const nstring *str2);

#endif /* NSTRING_H */