#include "ast.h"
#include <iostream>

using namespace std;

// ------------------ Exp ------------------
Exp::~Exp() {}

string Exp::binopToChar(BinaryOp op) {
    switch (op) {
        case PLUS_OP:  return "+";
        case MINUS_OP: return "-";
        case MUL_OP:   return "*";
        case DIV_OP:   return "/";
        case POW_OP:   return "**";
        default:       return "?";
    }
}

// ------------------ BinaryExp ------------------
BinaryExp::BinaryExp(Exp* l, Exp* r, BinaryOp o)
    : left(l), right(r), op(o) {}

    
BinaryExp::~BinaryExp() {
    delete left;
    delete right;
}



// ------------------ NumberExp ------------------
NumberExp::NumberExp(int v) : value(v) {}

NumberExp::~NumberExp() {}


// ------------------ SqrtExp ------------------
SqrtExp::SqrtExp(Exp* v) : value(v) {}

SqrtExp::~SqrtExp() {}

// ------------------ MinExp ------------------
MinExp::MinExp(list<Exp*> e) : exps(e) {}

MinExp::~MinExp() {
    for (Exp* exp : exps) {
        delete exp;
    }
    exps.clear();
}

//
Programa::Programa() {}
Programa::~Programa(){}

Stmt::~Stmt(){}

PrintStmt::PrintStmt(vector<Exp*> e) {
    exps=e;
}

PrintStmt::~PrintStmt() {

}

AsignStmt::AsignStmt(vector<string> texto, vector<Exp *> e) {
    variables=  texto;
    exps = e;
}

AsignStmt::~AsignStmt() {

}

// ------------------ NumberExp ------------------
IdExp::IdExp(string v) : value(v) {}

IdExp::~IdExp() {}
