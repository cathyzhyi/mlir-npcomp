//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "npcomp/Dialect/Refbackrt/IR/RefbackrtDialect.h"
#include "mlir/IR/DialectImplementation.h"
#include "npcomp/Dialect/Refbackrt/IR/RefbackrtOps.h"
#include "llvm/ADT/TypeSwitch.h"

using namespace mlir;
using namespace mlir::NPCOMP::refbackrt;

void RefbackrtDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "npcomp/Dialect/Refbackrt/IR/RefbackrtOps.cpp.inc"
      >();
  addTypes<TensorType>();
}
