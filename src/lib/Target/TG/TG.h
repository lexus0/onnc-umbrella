//===- TG.h -----------------------------------------------------------===//
//
//                             The ONNC Project
//
// See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#ifndef TARGET_TG_TG_H
#define TARGET_TG_TG_H
#include <string>
#include <onnc/Target/Target.h>
#include "TGBackend.h"


namespace onnc {

class ModulePass;
extern onnc::Target TheTGTarget;

unsigned int TGQuadrupleMatchFn(const Quadruple& pQuadruple);
ModulePass *createTGCodeEmitPass(TGBackend *pTarget);
ModulePass *createTGMemAllocInfoPass(TGBackend *pTarget);
ModulePass *createTargetLoweringPass(TGBackend *pTarget);

}  // namespace onnc

#endif  // TARGET_TG_TG_H
