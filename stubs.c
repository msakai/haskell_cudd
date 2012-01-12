#include <stdio.h>
#include <assert.h>
#include "cudd.h"
#include "dddmp.h"
#include "stubs.h"

DdNode *Cudd_bddVarMap_s(DdManager *m, DdNode *x){
    DdNode *r = Cudd_bddVarMap(m, x);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_ReadOne_s(DdManager *m){
    DdNode *r = Cudd_ReadOne(m);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_ReadLogicZero_s(DdManager *m){
    DdNode *r = Cudd_ReadLogicZero(m);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddIthVar_s(DdManager *m, int i){
    DdNode *r = Cudd_bddIthVar(m, i);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddAnd_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddAnd(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddOr_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddOr(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddNand_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddNand(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddNor_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddNor(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddXor_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddXor(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddXnor_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddXnor(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *wrappedCuddNot_s(DdNode *x){
    DdNode *r = Cudd_Not(x);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddExistAbstract_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddExistAbstract(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddUnivAbstract_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddUnivAbstract(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddIte_s(DdManager *m, DdNode *x, DdNode *y, DdNode *z){
    DdNode *r = Cudd_bddIte(m, x, y, z);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddSwapVariables_s(DdManager *m, DdNode *x, DdNode **y, DdNode **z, int i){
    DdNode *r = Cudd_bddSwapVariables(m, x, y, z, i);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddPermute_s(DdManager *m, DdNode *x, int *p){
    DdNode *r = Cudd_bddPermute(m, x, p);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_Xgty_s(DdManager *m, int i, DdNode **x, DdNode **y, DdNode **z){
    DdNode *r = Cudd_Xgty(m, i, x, y, z);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_Xeqy_s(DdManager *m, int i, DdNode **x, DdNode **y){
    DdNode *r = Cudd_Xeqy(m, i, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_Inequality_s(DdManager *m, int i, int j, DdNode **x, DdNode **y){
    DdNode *r = Cudd_Inequality(m, i, j, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}
    
DdNode *Cudd_Disequality_s(DdManager *m, int i, int j, DdNode **x, DdNode **y){
    DdNode *r = Cudd_Disequality(m, i, j, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddInterval_s(DdManager *m, int i, DdNode **x, int j, int k){
    DdNode *r = Cudd_bddInterval(m, i, x, j, k);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_IndicesToCube_s(DdManager *m, int *i, int j){
    DdNode *r = Cudd_IndicesToCube(m, i, j);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddLICompaction_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddLICompaction(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddMinimize_s(DdManager *m, DdNode *x, DdNode *y){
    DdNode *r = Cudd_bddMinimize(m, x, y);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Dddmp_cuddBddLoad_s(DdManager *m, int i, char **s, int *j, int *k, int l, char *t, FILE *f){
    DdNode *r = Dddmp_cuddBddLoad(m, i, s, j, k, l, t, f);
    assert(r);
    Cudd_Ref(r);
    return r;
}

DdNode *Cudd_bddPickOneMinterm_s(DdManager *m, DdNode *x, DdNode **y, int i){
    DdNode *r = Cudd_bddPickOneMinterm(m, x, y, i);
    assert(r);
    Cudd_Ref(r);
    return r;
}

