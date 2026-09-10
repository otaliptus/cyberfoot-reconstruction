// Address: 00401e98
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00401e98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_1c;
  int local_1b;
  int local_17;
  
  local_1c = 0;
  iVar2 = FUN_00401d44(param_1);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    iVar3 = iVar1 + *(int *)(iVar2 + 0xc);
    if (iVar3 - (param_2 + param_1) < 0xd) {
      param_2 = iVar3 - param_1;
    }
    if (param_1 - iVar1 < 0xc) {
      FUN_00401ab0(iVar1,(param_1 - *(int *)(iVar2 + 8)) + param_2,&local_1b);
    }
    else {
      FUN_00401ab0(param_1 + 4,param_2 + -4,&local_1b);
    }
    if (local_1b != 0) {
      FUN_00401d74(param_1,local_1b - param_1);
      uVar4 = local_1b + local_17;
      if (uVar4 < (uint)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc))) {
        FUN_00401dc8(uVar4,(param_2 + param_1) - uVar4);
      }
      FUN_004015c0(iVar2,&local_1b);
      local_1c = 1;
    }
  }
  return local_1c;
}

