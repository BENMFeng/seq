#ifndef SEQ_NUMEXPR_H
#define SEQ_NUMEXPR_H

#include "expr.h"

namespace seq {

	class IntExpr : public Expr {
	private:
		seq_int_t n;
	public:
		explicit IntExpr(seq_int_t n);
		llvm::Value *codegen(BaseFunc *base, llvm::BasicBlock*& block) override;
	};

	class FloatExpr : public Expr {
	private:
		double f;
	public:
		explicit FloatExpr(double f);
		llvm::Value *codegen(BaseFunc *base, llvm::BasicBlock*& block) override;
	};

	class BoolExpr : public Expr {
	private:
		bool b;
	public:
		explicit BoolExpr(bool b);
		llvm::Value *codegen(BaseFunc *base, llvm::BasicBlock*& block) override;
	};

}

#endif /* SEQ_NUMEXPR_H */