/*
 * Copyright 1999, 2005 Brown University, Providence, RI.
 * 
 *                         All Rights Reserved
 * 
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose other than its incorporation into a
 * commercial product is hereby granted without fee, provided that the
 * above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Brown University not be used in
 * advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.
 * 
 * BROWN UNIVERSITY DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR ANY
 * PARTICULAR PURPOSE.  IN NO EVENT SHALL BROWN UNIVERSITY BE LIABLE FOR
 * ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef FEAT_H
#define FEAT_H

#include "Feature.h"

class FeatureTree;
#define ISCALE 1
#define PARSE 2
#define SELDEBUG 3
#define SEL 4
#define KNCOUNTS 5

class Feat
{
public:
  Feat();
  friend ostream& operator<< ( ostream& os, Feat& t );
  float& g() { return uVals[0]; }
  FeatureTree* toTree() { return ft_; }
  int& ind() { return ind_; }
  int& cnt() { return cnt_; }
  int ind_;
  int cnt_;
  FeatureTree* ft_;
  float* uVals;
  static int Usage;
};

#endif /* ! FEAT_H */
