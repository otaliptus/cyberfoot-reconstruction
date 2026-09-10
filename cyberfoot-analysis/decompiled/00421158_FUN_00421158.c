// Address: 00421158
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00421158(int param_1,uint *param_2)

{
  int iVar1;
  int extraout_ECX;
  
  if ((0 < (int)*param_2) && (*param_2 != *(uint *)(param_1 + 8))) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*param_2 != *(uint *)(param_1 + 0x10)) {
    if (*param_2 == 0) {
      FUN_00408074(iVar1);
      iVar1 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0x10) == 0) {
        iVar1 = FUN_00408048(*(undefined2 *)PTR_DAT_0066b538,*param_2);
      }
      else {
        iVar1 = FUN_00408058(iVar1,*param_2,*(undefined2 *)PTR_DAT_0066b538);
      }
      if (iVar1 == 0) {
        FUN_0040e42c(PTR_DAT_0041b1e4,1,PTR_PTR_0066b688);
        FUN_00404250();
        iVar1 = extraout_ECX;
      }
    }
  }
  return iVar1;
}

