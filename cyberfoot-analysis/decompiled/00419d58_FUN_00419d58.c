// Address: 00419d58
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00419d58(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 == '\x01') {
    uVar2 = FUN_00409ff8(param_2);
    return uVar2;
  }
  iVar3 = FUN_00419c28(param_1);
  if (*(int *)(iVar3 + 1) < 0) {
    cVar1 = FUN_004096cc(param_2,PTR_s_False_00662584);
    if (cVar1 == '\0') {
      cVar1 = FUN_004096cc(param_2,PTR_DAT_00662588);
      if (cVar1 == '\0') {
        uVar2 = FUN_00409ff8(param_2);
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = FUN_00419d0c(param_1,param_2);
  }
  return uVar2;
}

