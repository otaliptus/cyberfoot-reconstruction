// Address: 0040ae78
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040ae78(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_100c [8];
  undefined4 *puStack_1004;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_1004 = param_1;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_00404ba4(param_2);
  if (iVar1 < 0xc00) {
    uVar2 = FUN_00404ba4(local_8);
    iVar3 = FUN_0040aa6c(local_100c,0xfff,local_8,param_4,local_c,uVar2);
    iVar1 = 0x1000;
  }
  else {
    iVar3 = FUN_00404ba4(local_8);
    iVar1 = iVar3;
  }
  if (iVar3 < iVar1 + -1) {
    FUN_004049c4(param_1,local_100c,iVar3);
  }
  else {
    while (iVar1 + -1 <= iVar3) {
      iVar1 = iVar1 * 2;
      FUN_004048d4(param_1);
      FUN_00404f30(param_1,iVar1);
      uVar2 = FUN_00404ba4(local_8);
      iVar3 = FUN_0040aa6c(*param_1,iVar1 + -1,local_8,param_4,local_c,uVar2);
    }
    FUN_00404f30(param_1,iVar3);
  }
  return;
}

