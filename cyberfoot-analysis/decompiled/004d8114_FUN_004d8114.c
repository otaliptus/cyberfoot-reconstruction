// Address: 004d8114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004d8114(int param_1,code *param_2,undefined4 param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_11;
  
  local_11 = 0;
  uVar4 = 0;
  iVar5 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar5) {
    do {
      uVar3 = iVar5 + uVar4 >> 1;
      uVar1 = FUN_0041e01c(param_1,uVar3);
      iVar2 = (*param_2)(uVar1,param_3);
      if (iVar2 < 0) {
        uVar4 = uVar3 + 1;
      }
      else {
        iVar5 = uVar3 - 1;
        if (iVar2 == 0) {
          local_11 = 1;
          uVar4 = uVar3;
        }
      }
    } while ((int)uVar4 <= iVar5);
  }
  *param_4 = uVar4;
  return local_11;
}

