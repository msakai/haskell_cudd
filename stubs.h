DdNode *Cudd_bddPickOneMinterm_s(DdManager *m, DdNode *x, DdNode **y, int i);
DdNode *Dddmp_cuddBddLoad_s(DdManager *m, int i, char **s, int *j, int *k, int l, char *t, FILE *f);
DdNode *Cudd_bddMinimize_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddLICompaction_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_IndicesToCube_s(DdManager *m, int *i, int j);
DdNode *Cudd_bddInterval_s(DdManager *m, int i, DdNode **x, int j, int k);
DdNode *Cudd_Disequality_s(DdManager *m, int i, int j, DdNode **x, DdNode **y);
DdNode *Cudd_Inequality_s(DdManager *m, int i, int j, DdNode **x, DdNode **y);
DdNode *Cudd_Xeqy_s(DdManager *m, int i, DdNode **x, DdNode **y);
DdNode *Cudd_Xgty_s(DdManager *m, int i, DdNode **x, DdNode **y, DdNode **z);
DdNode *Cudd_bddPermute_s(DdManager *m, DdNode *x, int *p);
DdNode *Cudd_bddSwapVariables_s(DdManager *m, DdNode *x, DdNode **y, DdNode **z, int i);
DdNode *Cudd_bddIte_s(DdManager *m, DdNode *x, DdNode *y, DdNode *z);
DdNode *Cudd_bddUnivAbstract_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddExistAbstract_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *wrappedCuddNot_s(DdNode *x);
DdNode *Cudd_bddXnor_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddXor_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddNor_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddNand_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddOr_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddAnd_s(DdManager *m, DdNode *x, DdNode *y);
DdNode *Cudd_bddIthVar_s(DdManager *m, int i);
DdNode *Cudd_ReadLogicZero_s(DdManager *m);
DdNode *Cudd_ReadOne_s(DdManager *m);
DdNode *Cudd_bddVarMap_s(DdManager *m, DdNode *x);
