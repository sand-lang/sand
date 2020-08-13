#include <Sand/Values/Constant.hpp>

using namespace Sand;
using namespace Sand::Values;

Constant *Constant::fold_equal(Constant *lvalue, Constant *rvalue)
{
    auto value = llvm::ConstantExpr::getICmp(llvm::CmpInst::Predicate::ICMP_EQ, lvalue->get_ref(), rvalue->get_ref());
    return new Values::Constant("eq", lvalue->type, value);
}

Constant *Constant::fold_not_equal(Constant *lvalue, Constant *rvalue)
{
    auto value = llvm::ConstantExpr::getICmp(llvm::CmpInst::Predicate::ICMP_NE, lvalue->get_ref(), rvalue->get_ref());
    return new Values::Constant("ne", lvalue->type, value);
}
